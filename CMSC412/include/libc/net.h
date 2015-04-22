#ifndef _LIBC_NET_H_
#define _LIBC_NET_H_

#include <geekos/defs.h>
#include <geekos/ktypes.h>

#define ETH_MAX_DATA 1500
#define ETH_MIN_DATA 46

int EthPacketSend(const void *buffer, ulong_t length, const uchar_t dest[], const char *device);
int EthPacketReceive(void *buffer, ulong_t length);
int Arp(uchar_t *, uchar_t *);

#endif
