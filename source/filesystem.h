#ifndef FILESYSTEM_H
#define FILESYSTEM_H

extern FS_Archive saveGameArchive, sdmcArchive;

Result filesystemInit();
Result filesystemExit();

#endif
