#ifndef GEEKOS_ARGBLOCK_H
#define GEEKOS_ARGBLOCK_H

/**
 * Header struct for accessing argument block from user mode.
 * Just cast the address of the argumebt block passed by
 * the kernel to a pointer to this struct.
 */
struct Argument_Block {
  int argc;
  char **argv;
};

#ifdef GEEKOS

/*
 * Functions used by the kernel to create the argument block.
 */
void Get_Argument_Block_Size(const char *command, unsigned *numArgs, ulong_t *argBlockSize);
void Format_Argument_Block(char *argBlock, unsigned numArgs, ulong_t userAddress, const char *command);

#endif

#endif  /* GEEKOS_ARGBLOCK_H */
