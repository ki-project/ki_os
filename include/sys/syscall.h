#include <sys/types.h>

#ifndef SYSCALL_H
#define SYSCALL_H

void initialise_syscalls();

#define DECL_SYSCALL0(fn) int syscall_##fn()
#define DECL_SYSCALL1(fn,p1) int syscall_##fn(p1)
#define DECL_SYSCALL2(fn,p1,p2) int syscall_##fn(p1,p2)
#define DECL_SYSCALL3(fn,p1,p2,p3) int syscall_##fn(p1,p2,p3)
#define DECL_SYSCALL4(fn,p1,p2,p3,p4) int syscall_##fn(p1,p2,p3,p4)
#define DECL_SYSCALL5(fn,p1,p2,p3,p4,p5) int syscall_##fn(p1,p2,p3,p4,p5)

#define DEFN_SYSCALL0(fn, num) \
int syscall_##fn() \
{ \
  int a; \
  asm volatile("int $0x80" : "=a" (a) : "0" (num)); \
  return a; \
}

#define DEFN_SYSCALL1(fn, num, P1) \
int syscall_##fn(P1 p1) \
{ \
  int a; \
  asm volatile("int $0x80" : "=a" (a) : "0" (num), "b" ((int)p1)); \
  return a; \
}

#define DEFN_SYSCALL2(fn, num, P1, P2) \
int syscall_##fn(P1 p1, P2 p2) \
{ \
  int a; \
  asm volatile("int $0x80" : "=a" (a) : "0" (num), "b" ((int)p1), "c" ((int)p2)); \
  return a; \
}

#define DEFN_SYSCALL3(fn, num, P1, P2, P3) \
int syscall_##fn(P1 p1, P2 p2, P3 p3) \
{ \
  int a; \
  asm volatile("int $0x80" : "=a" (a) : "0" (num), "b" ((int)p1), "c" ((int)p2), "d"((int)p3)); \
  return a; \
}

#define DEFN_SYSCALL4(fn, num, P1, P2, P3, P4) \
int syscall_##fn(P1 p1, P2 p2, P3 p3, P4 p4) \
{ \
  int a; \
  asm volatile("int $0x80" : "=a" (a) : "0" (num), "b" ((int)p1), "c" ((int)p2), "d" ((int)p3), "S" ((int)p4)); \
  return a; \
}

#define DEFN_SYSCALL5(fn, num) \
int syscall_##fn(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) \
{ \
  int a; \
  asm volatile("int $0x80" : "=a" (a) : "0" (num), "b" ((int)p1), "c" ((int)p2), "d" ((int)p3), "S" ((int)p4), "D" ((int)p5)); \
  return a; \
}

enum syscall_settings {
  sc_null = 0, //Syscall affecting nothing
  sc_kern = 1, //Syscall affecting kernelspace
  sc_user = 2, //Syscall affecting userspace
  sc_thread = 4, //Syscall affecting threads
  sc_file = 8, //Syscall affecting files
  sc_memory = 16, //Syscall affecting memory
  sc_task = 32 //Syscall affecting tasks
};

DECL_SYSCALL1(monitor_write, const char*);
DECL_SYSCALL2(kmalloc, size_t, thread_t);
DECL_SYSCALL1(malloc, size_t);
DECL_SYSCALL2(tmalloc, size_t, thread_t);
DECL_SYSCALL1(free, heap_t);
DECL_SYSCALL3(kfree, size_t, memloc_t, thread_t);
DECL_SYSCALL3(tfree, size_t, memloc_t, task_t);

#endif