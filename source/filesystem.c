#include <string.h>
#include <stdio.h>

#include <3ds.h>

#include "filesystem.h"

FS_Archive saveGameArchive, sdmcArchive;

Result filesystemInit()
{
  Result ret;
  
  saveGameArchive = (FS_Archive){ARCHIVE_SAVEDATA, (FS_Path){PATH_EMPTY, 1, (u8*)""}, 0};
  ret = FSUSER_OpenArchive(&saveGameArchive);

  sdmcArchive = (FS_Archive){ARCHIVE_SDMC, (FS_Path){PATH_EMPTY, 1, (u8*)""}, 0};
  ret = FSUSER_OpenArchive(&sdmcArchive);

  return ret;
}

Result filesystemExit()
{
  Result ret;
  
  ret = FSUSER_CloseArchive(&saveGameArchive);
  ret = FSUSER_CloseArchive(&sdmcArchive);

  return ret;
}
