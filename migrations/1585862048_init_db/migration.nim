import normanpkg/sugar

importBackend()


migrate:
  import models

  withDb:
    transaction:
      createTables(force=true)


undo:
  import models

  withDb:
    transaction:
      dropTables()
