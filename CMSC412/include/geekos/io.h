#ifndef GEEKOS_IO_H
#define GEEKOS_IO_H

#include <geekos/ktypes.h>

void Out_Byte(ushort_t port, uchar_t value);
uchar_t In_Byte(ushort_t port);

void Out_Word(ushort_t port, ushort_t value);
ushort_t In_Word(ushort_t port);

void IO_Delay(void);

#endif /* GEEKOS_IO_H */
