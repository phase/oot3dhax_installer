#include <string.h>
#include <stdio.h>
#include <inttypes.h>

#include <3ds.h>

#include "filesystem.h"

FS_Archive saveGameArchive, sdmcArchive;
static Handle fsHandle;

Result filesystemInit()
{
  Result ret;
 
  fsInit(); 
  if (R_FAILED(ret = srvGetServiceHandleDirect(&fsHandle, "fs:USER"))) return ret;
  if (R_FAILED(ret = FSUSER_Initialize(fsHandle))) return ret;
  
  fsUseSession(fsHandle, false);

  sdmcArchive = (FS_Archive){ARCHIVE_SDMC, (FS_Path){PATH_EMPTY, 1, (u8*)""}, 0};
  if (R_FAILED(ret = FSUSER_OpenArchive(&sdmcArchive))) return ret;

  saveGameArchive = (FS_Archive){ARCHIVE_SAVEDATA, (FS_Path){PATH_EMPTY, 1, (u8*)""}, 0};
  if (R_FAILED(ret = FSUSER_OpenArchive(&saveGameArchive))) return ret;

  return ret;
}

Result filesystemExit()
{
  Result ret;
  
  ret = FSUSER_CloseArchive(&saveGameArchive);
  ret |= FSUSER_CloseArchive(&sdmcArchive);

  fsEndUseSession();
  fsExit();

  return ret;
}
