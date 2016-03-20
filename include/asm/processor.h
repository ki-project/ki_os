#include <sys/types.h>
#include <asm/lowlevel.h>

#ifndef _asm_processor_h_
#define _asm_processor_h_

_asmstruct_ processor_d {
  processor_t *before_processor;
  char *nr;
  u32 runs_thread;
  u32 *proc_load;
  processor_t *next_processor;
  bool isQuery;
} processor_t;

#endif //_asm_processor_h_