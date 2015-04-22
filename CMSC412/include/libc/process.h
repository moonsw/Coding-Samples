#ifndef PROCESS_H
#define PROCESS_H

#include <geekos/user.h>

int Null(void);
int Exit(int exitCode);
int Spawn_Program(const char *program, const char *command, int background);
int Spawn_With_Path(const char *program, const char *command, const char *path, int background);
int Wait(int pid);
int Get_PID(void);
int PS(struct Process_Info *ptable, int len);
int WaitNoPID(int *status);

int Fork(void);
int Clone(void (*func) (void), void *stack);
int Execl(const char *program, const char *command);
int GetUid();

int ShutDown(void);
#endif /* PROCESS_H */
