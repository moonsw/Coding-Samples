#ifndef GEEKOS_SYNCH_H
#define GEEKOS_SYNCH_H

#include <geekos/kthread.h>
#include <geekos/smp.h>

/*
 * mutex states
 */
enum { MUTEX_UNLOCKED, MUTEX_LOCKED };

struct Mutex {
  int state;
  struct Kernel_Thread *owner;
  struct Thread_Queue waitQueue;
};

#define MUTEX_INITIALIZER { MUTEX_UNLOCKED, 0, THREAD_QUEUE_INITIALIZER }

struct Condition {
  struct Thread_Queue waitQueue;
};

void Mutex_Init(struct Mutex *mutex);
void Mutex_Lock(struct Mutex *mutex);
void Mutex_Unlock(struct Mutex *mutex);

void Cond_Init(struct Condition *cond);
void Cond_Wait(struct Condition *cond, struct Mutex *mutex);
void Cond_Signal(struct Condition *cond);
void Cond_Broadcast(struct Condition *cond);

#ifndef IS_HELD
#define IS_HELD(mutex) \
  ((mutex)->state == MUTEX_LOCKED && (mutex)->owner == CURRENT_THREAD)
#endif

#endif /* GEEKOS_SYNCH_H */
