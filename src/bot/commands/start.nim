import telebot, asyncdispatch

proc startHandler*(b: Telebot, c: Command): Future[bool] {.async.} =
  let message = "Start called"
  discard await b.sendMessage(c.message.chat.id, message)
