#ifndef CFS_H
#define CFS_H

#include <geekos/blockdev.h>
#include <geekos/fileio.h>
#include <geekos/vfs.h>

typedef struct {
  unsigned int size;                                /* Size of the file. */ 
  unsigned int refCount;                            /* Number of files names (hard links) that use this. */
  unsigned int isUsed:1;                            /* Is entry active. */
  unsigned int isDirectory:1;                       /* Is this file a directory. */
  unsigned int isSetUid:1;                          /* Is this file setuid. */
  unsigned int isSymbolicLink:1;                    /* Is this a symbolic link. */
  int blocks[10];                                   /* 8 are for direct blocks, 1 for indirect, and 1 for double indirect. */
  struct VFS_ACL_Entry acls[VFS_MAX_ACL_ENTRIES];   
  char pad[36];                                     /* Pad to 128 bytes to fit into disk blocks. */
} CFSiNode;

#define INODES_PER_BLOCK        (4096 / (sizeof(CFSiNode)))

typedef struct {
  char name[64];              /* Name of file. */
  unsigned int inode;         /* Index of inode. */
  unsigned int isUsed:1;      /* Is this entry used. */
} CFSfileNode;

/* Should fit in one block. */
#define MAX_CFILES_PER_DIR      (4096 / (sizeof(CFSfileNode)))

typedef struct {
  CFSfileNode files[MAX_CFILES_PER_DIR];      /* All of the files. */
} CFSdirectory;

typedef struct {
  // Pointer cached version of file's inode.
  CFSiNode *node;
  unsigned int inodeNum;      /* Inode number of the file. */
  unsigned int offset;        /* Offset of filenode within block. */
} CFSptr;

typedef struct {
  int magic;
  int size;                   /* In 4KB blocks. */
  int numInodes;
  int firstInodeBlock;
  unsigned int firstFreeInode;
} cfsHeader;

int CFS_Format(struct Block_Device *blockDev);
int CFS_Mount(struct Mount_Point *mountPoint);
int CFS_Open(struct Mount_Point *mountPoint, const char *path, int mode, struct File **pFile);
int CFS_Close(struct File *file);
int CFS_Delete(struct Mount_Point *mountPoint, const char *path, bool recursive);
int CFS_Rename(struct Mount_Point *mountPoint, const char *oldpath, const char *newpath);
int CFS_Link(struct Mount_Point *mountPoint, const char *oldpath, const char *newpath);
int CFS_SymLink(struct Mount_Point *mountPoint, const char *oldpath, const char *newpath);
int CFS_SetSetUid(struct Mount_Point *mountPoint, const char *path, int setuid);
int CFS_SetAcl(struct Mount_Point *mountPoint, const char *path, int uid, int permissions);
int CFS_Read(struct File *file, void *buf, ulong_t numBytes);
int CFS_Write(struct File *file, void *buf, ulong_t numBytes);
int CFS_FStat(struct File *file, struct VFS_File_Stat *stat);
int CFS_Seek(struct File *file, ulong_t pos);
int CFS_Create_Directory(struct Mount_Point *mountPoint, const char *path);
int CFS_Read_Entry(struct File *dir, struct VFS_Dir_Entry *entry);
int CFS_Open_Directory(struct Mount_Point *mountPoint, const char *path, struct File **pDir);
int CFS_Stat(struct Mount_Point *mountPoint, const char *path, struct VFS_File_Stat *stat);
int CFS_Sync(struct Mount_Point *mountPoint);
void Init_CFS();

#endif
