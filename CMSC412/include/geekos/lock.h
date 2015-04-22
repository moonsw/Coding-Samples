#ifndef GEEKOS_LOCK_H
#define GEEKOS_LOCK_H

typedef struct {
  int lock;
  struct Kernel_Thread *locker;
  struct Kernel_Thread *lastLocker;
} Spin_Lock_t;

#define SPIN_LOCK_INITIALIZER {0, NULL, NULL}

extern void Spin_Lock_Init(Spin_Lock_t *);
extern int Try_Spin_Lock(Spin_Lock_t *);
extern void Spin_Lock(Spin_Lock_t *);
extern void Spin_Unlock(Spin_Lock_t *);
extern int Is_Locked(Spin_Lock_t *);

#endif // GEEKOS_LOCK_H
