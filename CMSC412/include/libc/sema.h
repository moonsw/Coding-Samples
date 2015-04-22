#ifndef SEMA_H
#define SEMA_H

int Open_Semaphore(const char *name, int ival);
int P(int sem);
int V(int sem);
int Close_Semaphore(int sem);

#endif /* SEMA_H */
