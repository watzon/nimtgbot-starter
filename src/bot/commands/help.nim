import telebot, asyncdispatch

proc helpHandler*(b: Telebot, c: Command): Future[bool] {.async.} =
  let message = "Help called"
  discard await b.sendMessage(c.message.chat.id, message)
