#include <sys/types.h>
#include <asm/processor.h>
#include <sys/task.h>

#ifndef _THREAD_H_
#define _THREAD_H_

enum thread_state {
  t_bootstrap = 0,
  t_run = 1,
  t_shutdown = 2,
  t_kill = 3,
  t_term = 4,
  t_zombie = 5,
  t_zombiekill = 6
};

struct thread {
  processor_t runq; // run queue assignment 
  wait_queue_t wait_queue; // wait queue we are currently on
  event64_t wait_event; // wait queue event
  integer_t options; // options set by thread itself
  task_attrib_t attributes;
  
  #define TH_OPT_INTMASK	0x03 //int /abort level
  #define TH_OPT_VMPRIV	0x04 // alloc of reserved memory 
  #define TH_OPT_DTRACE	0x08 // exec under dtrace_probe
  #define TH_OPT_SYSTEM_CRITICAL	0x10 //Thread MUST run
  #define TH_OPT_PROC_CPULIMIT	0x20 // Thread has CPU limit applied
  #define TH_OPT_PRVT_CPULIMIT	0x40 // Thread has thread-private CPU limit applied

  stack_t kernel_stack; //current kernel stack
  stack_t reserved_stack; // reserved kernel stack 
  
  // thread state:
  enum	state;
  
  #define TH_WAIT	0x01 /* queued for waiting */ 
  #define TH_SUSP	0x02 /* stopped or requested to stop */
  #define TH_RUN	0x04 /* running or on runq */
  #define TH_UNINT	0x08 /* waiting uninteruptibly */
  #define	TH_TERMINATE	0x10 /* halted at termination */
  #define	TH_TERMINATE2	0x20 /* added to termination queue */
  #define TH_IDLE	0x80 /* idling processor */
  
  /* Scheduling information */ 
  sched_mode_t sched_mode; /* scheduling mode */
  sched_mode_t saved_mode; /* saved mode during forced mode demotion */
  unsigned int	sched_flags; /* current flag bits */
  integer_t sched_pri; /* scheduled (current) priority */
  integer_t priority; /* base priority */
  integer_t max_priority; /* max base priority */
  integer_t task_priority; /* task base priority */
  integer_t importance; /* task-relative importance */
  
  /* Data used during setrun/dispatch */
  processor_t bound_processor; /* bound to a processor? */
  processor_t last_processor; /* processor last dispatched on */ 
  processor_t chosen_processor; /* Where we want to run this thread */
  
  /* Call out from scheduler */
  void	(*sched_call)( int	type, thread_t thread);
  
  struct {
    int	option; /* switch option */
  } swtch;
  
  /* Ast/Halt data structures */ 
  vm_offset_t recover; /* page fault recover(copyin/out) */
  
  /* Activation */
  struct task *task; 
  vm_map_t map;
  int	suspend_count; /* User level suspensions */
  
  struct ReturnHandler { 
    struct ReturnHandler *next;
    void	(*handler)( struct ReturnHandler *rh, struct thread *thread);
  } *handlers, special_handler;
  /* Ports associated with this thread */
  
  uint64_t thread_id; /*system wide unique thread-id*/ 
};

extern void	thread_bootstrap(void) __attribute__((section("__TEXT, initcode")));
extern void	thread_init(void) __attribute__((section("__TEXT, initcode")));

extern void	thread_terminate_self(void);
extern kern_return_t thread_terminate_internal( thread_t thread);
extern void	thread_hold( thread_t thread);
extern void	thread_release( thread_t thread);

typedef struct ReturnHandler ReturnHandler;

#endif	/* _THREAD_H_ */