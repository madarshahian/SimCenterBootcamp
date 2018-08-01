#ifndef _TASK
#define _TASK

class Task {
 virtual Task();
 virtual ~Task();
 addTask(Task &Task);
 virtual int runTask(void);
 int getIntResults(void);
 double getDoubleResults(void);
 void Print(ostream &s) = 0;
public:
 queue
