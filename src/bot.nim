import analytics, telebot, asyncdispatch, os, options, terminal
from strutils import strip

import ./bot/[botargs, models, utils]
import ./bot/commands/[help, start]

var
  gargs*: BotArgs

proc updateHandler(b: TeleBot, u: Update): Future[bool] {.async, gcsafe.} =
  if gargs.ga_id.isSome and ga.isNone:
    # Attempt to fetch GA client id from database
    # If there isn't one, create one
    let me = await b.getMe()
    let cid = genClientID()
    ga = option(newAnalytics(gargs.ga_id.get, cid, me.firstName, "0.1.0"))

  if u.message.isNone: return
  let message = u.message.get

  if message.fromUser.isNone: return
  let fromUser = message.fromUser.get

  # Check if user has been seen before
  withDb:
    try:
      discard models.User.getOne(fromUser.id)
    except:
      # If not, commit to database as new user and set GA new user
      var user = models.User(
        id: fromUser.id,
        firstName: fromUser.firstName,
        lastName: fromUser.lastName.get(""),
        languageCode: fromUser.languageCode.get("en")
      )
      user.insert()
      doUserAnalytics(fromUser, "newUser", "", "")


proc makeBot(): TeleBot =
  gargs = parseArgs()

  if gargs.api_key.isNone:
    stdout.styledWrite(fgRed, "An api_key is required to run your bot. Please supply one via the 'api_key' flag.\n")
    quit(1)

  return newTeleBot(gargs.api_key.get)

when isMainModule:
  var bot = makeBot()

  bot.onCommand("start", startHandler) # /start
  bot.onCommand("help", helpHandler)   # /help

  bot.onUpdate(updateHandler)

  bot.poll(300)
