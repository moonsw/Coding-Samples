#ifndef GEEKOS_TIMER_H
#define GEEKOS_TIMER_H

#include <geekos/defs.h>
#include <geekos/ktypes.h>

#define TIMER_IRQ 0
#define MAX_TIMER_EVENTS 100
#define TICKS_PER_SEC 1000      /* nspring noticed APIC code in smp.c uses 100 Hz, but seems like 1000 works. */
#define MS_PER_TICK (1000.0f / (float)TICKS_PER_SEC)
#define TICKS_PER_MS ((float)TICKS_PER_SEC / 1000.0f)

extern volatile ulong_t g_numTicks;

typedef void (*timerCallback) (int);

void Init_Timer(void);
void Init_Timer_Interrupt(void);

void Micro_Delay(int us);

typedef struct {
  int ticks;                  /* timer code decrements this */
  int id;                     /* unqiue id for this timer even */
  timerCallback callBack;     /* Queue to wakeup on timer expire */
  int origTicks;
} timerEvent;

int Start_Timer(int ticks, timerCallback);
int Get_Remaing_Timer_Ticks(int id);
int Cancel_Timer(int id);

void Micro_Delay(int us);

#endif /* GEEKOS_TIMER_H */
