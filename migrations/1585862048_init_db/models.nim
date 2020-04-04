import normanpkg/sugar

importBackend()

models:
    type User* = object
        id* {.pk.}: int
        firstName*: string
        lastName*: string
        username*: string
        languageCode*: string
        