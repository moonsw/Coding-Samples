#ifndef USER_IP_H
#define USER_IP_H

#include <geekos/net/ipdefs.h>

int Route_Add(uchar_t *, uchar_t *, uchar_t *, char *, ulong_t);
int Route_Delete(uchar_t *, uchar_t *);
int IP_Configure(char *, ulong_t, uchar_t *, uchar_t *);
int Get_Routes(struct IP_Route *buffer, ulong_t numRoutes);
int Get_IP_Info(struct IP_Device_Info *buffer, ulong_t count, char *interface, ulong_t ifaceNameLength);
bool Parse_IP(const char *ip, uchar_t * ipBuffer);
int IP_Send(uchar_t * ipAddress, char *message, ulong_t messageLength);

#endif
