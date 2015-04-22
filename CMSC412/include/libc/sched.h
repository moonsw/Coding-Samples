#ifndef SCHED_H
#define SCHED_H

int Set_Scheduling_Policy(int policy, int quantum);
int Get_Time_Of_Day(void);

int Set_Affinity(int pid, int core);
int Get_Affinity(int pid);

int Alarm(unsigned int microSeconds);

#endif /* SCHED_H */
