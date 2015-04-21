#ifndef GEEKOS_BOOTINFO_H
#define GEEKOS_BOOTINFO_H

struct MemRegion {
  unsigned int baseAddr_low, baseAddr_high;
  unsigned int length_low, length_high;
  unsigned int type;
  unsigned int extendedAttributes;
};

struct Boot_Info {
  int bootInfoSize;               /* Size of this struct; for versioning. */
  int memSizeKB;                  /* Number of KB, as reported by int 15h = zero mean user regions. */
  int bootDrive;                  /* 0, 1 floppy 0x80-81 hard disks. */
  int numMemRegions;              /* Number of mem segments. */
  struct MemRegion *memRegions;   /* Array of memory Regions. */
};

#endif  /* GEEKOS_BOOTINFO_H */
