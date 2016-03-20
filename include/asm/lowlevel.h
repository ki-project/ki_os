#include <sys/types.h>
#include <asm/stack.h>

#ifndef _ASM_LOWLEVEL_H_
#define _ASM_LOWLEVEL_H_

#define clint() asm volatile ("cli")
#ifndef cli()
#define cli() clint()
#endif

#define stint() asm volatile ("sti")
#ifndef sti()
#define sti() stint()
#endif

#define _assembly_ protected long int
#define _asm_ _assembly_
#define _assembly_long_ protected long long int
#define _asm_long_ _assembly_long_
#define _lasm_ _asm_long_
#define _assembly_short_ protected int
#define _asm_short_ _assembly_short_
#define _sasm_ _asm_short_

#define _assembly_struct_ protected typedef long long struct
#define _asm_struct_ _assembly_struct_
#define _asmstruct_ _assembly_struct_

// Bitmode Modifying Definitions

#endif //_ASM_LOWLEVEL_H_