# Package

version       = "0.2.0"
author        = "Chris Watson"
description   = "Boilerplate telegram bot written in Nim"
license       = "MIT"
srcDir        = "src"
bin           = @["bot"]



# Dependencies

requires "nim >= 1.1.1"
requires "telebot#master"
requires "analytics >= 0.2.0"
requires "norm >= 1.1.2"
requires "norman >= 1.0.2"