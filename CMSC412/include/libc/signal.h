#ifndef SIGNAL_H
#define SIGNAL_H

#include <stddef.h>
#include <geekos/signal.h>

int Kill(int pid, int sig);
int Signal(signal_handler h, int sig);

/* For initialization of the signal subsystem */
void Def_Child_Handler(void);
int Sig_Init(void);

#endif /* SIGNAL_H */
