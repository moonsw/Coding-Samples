#ifndef GEEKOS_MALLOC_H
#define GEEKOS_MALLOC_H

#include <geekos/ktypes.h>

void Init_Heap(ulong_t start, ulong_t size);
void *Malloc(ulong_t size);
void Free(void *buf);

#endif /* GEEKOS_MALLOC_H */
