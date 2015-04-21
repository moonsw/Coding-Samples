#ifndef GEEKOS_DMA_H
#define GEEKOS_DMA_H

#include <geekos/ktypes.h>

enum DMA_Direction {
  DMA_READ,
  DMA_WRITE
};

void Init_DMA(void);
bool Reverse_DMA(int chan);
void Setup_DMA(enum DMA_Direction direction, int chan, void *addr, ulong_t size);
void Mask_DMA(int chan);
void Unmask_DMA(int chan);

#endif  /* GEEKOS_DMA_H */
