#include <sys/types.h>
#include <asm/lowlevel.h>
#include <asm/processor.h>

#ifndef asm_cpu_uptime_h_
#define asm_cpu_uptime_h_

volatile register void getCPUUptime()
{
  typedef unsigned long long out;
  volatile out uptime,tmp;
  out register rax asm("rax");
  asm volatile("rdtsc":"=A"(rax));
  uptime=uptime*tmp+rax;
  return uptime;
}

#endif