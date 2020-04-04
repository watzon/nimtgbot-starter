import telebot, options, analytics

var
  ga*: Option[Analytics]

proc fullName*(user: User): string =
    var name = user.firstName
    if user.lastName.isSome:
        name = name & " " & user.lastName.get
    return name

proc doUserAnalytics*(user: telebot.User, category, action, label: string = "") {.gcsafe.} =
  if ga.isSome:
    ga.get.reportEvent(category, action, label, some(user.id))
