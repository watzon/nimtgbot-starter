import parseopt, os, strformat, options

type BotArgs* = object
    api_key*: Option[string]
    ga_id*: Option[string]

const
  HelpMessage = """
  Options:
    --help,    -h  -  show this message.
    --api_key, -k  -  your bot API key; you can get this from @BotFather on Telegram.
    --ga_id,   -G  -  your Google Analytics app id. This is optional.
"""

proc writeHelp() =
    let programName = getAppFilename()
    let cmd = splitPath(programName).tail
    echo(&"  {cmd} [args]\n\n{HelpMessage}")
    quit(0)

proc writeVersion() =
    echo("0.1.0")
    quit(0)

# proc loadConfigYAML(filename: string): BotArgs =
#     let stream = newFileStream(filename)
#     var config: BotArgs
#     load(stream, config)
#     return config

proc parseArgs*(): BotArgs =
    result = BotArgs()
    let cmdLineArgs = commandLineParams()
    var p = initOptParser(cmdLineArgs)

    for kind, key, val in p.getopt():
        case kind
        of cmdArgument: discard
        of cmdEnd: discard
        of cmdLongOption, cmdShortOption:
            case key
            of "help", "h": writeHelp()
            of "version", "v": writeVersion()
            of "config", "c":
                # result = loadConfigYAML(val)
                echo("Config files are not yet supported. Ignoring.")
            of "api_key", "k": result.api_key = option(val)
            of "ga_id", "G": result.ga_id = option(val)
