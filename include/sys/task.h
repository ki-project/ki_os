#include <sys/types.h>

#ifndef task_h_
#define task_h_

enum task_state {
  tsk_bootstrap = 0,  //Task Start
  tsk_run = 1,        //Normal (intended) program run
  tsk_shutdown = 2,   //Normal Program End
  tsk_kill = 3,       //Normal, when system goes into shutdown mode and attempts to soft-kill the task
  tsk_term = 4,       //Normal, when system goes into shutdown mode and forces the task to close
  tsk_zombie = 5,     //Used, when a task catches every term/kill signal
  tsk_zombiekill = 6  //Used, when the system injects code to force crash the task
};

typedef struct Task {
  number_t nr; //Which Task?
  path_t path; //Memory Path
  register_t regs; //Register Values
  task_attribs_t attributes; //Executionflags
  struct task_t *next; //Next task in tasklist
} task_t;

typedef struct task_queue_d {
  task_t *actual_task;
  task_t *next_task;
} task_queue_t;

typedef struct task_attribs_d {
  bool isNeverEnding;
  bool onEndPanic;
  bool isKernelTask;
  bool isUserTask;
  bool isDriver;
  bool isInterface;
  bool isKilled;
  bool hasError;
  bool hasProtectionError;
  bool hasStackError;
  bool hasHigherMemoryThanAllowed;
  bool hasHigherLoadThenAllowed;
} task_attribs_t;

#endif task_h_