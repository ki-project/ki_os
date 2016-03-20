#ifndef types_h_
#define types_h_

#define KERN_INFO "[INFO]"
#define KERN_WARN "[WARN]"
#define KERN_ERROR "[ERROR]"

#define STACKERR -8
#define STACKCONV 1

typedef struct register_d {
  uint16_t ax, bx, cx, dx, si, di, sp, bp, ip, flags, cr2;
  
  uint32_t eax, ebx, ecx, edx, esi, edi, esp, ebp, eip, eflags, cr3;
  
  uint64_t rax, rbx, rcx, rdx, rsi, rdi, rsp, rbp, rip, r8, r9, r10, r11, r12, r13, r14, r15, rflags, cr4;
} register_t;

typedef unsigned long  uint64;
typedef          long  sint64;
typedef unsigned int   uint32;
typedef          int   sint32;
typedef unsigned short uint16;
typedef          short sint16;
typedef unsigned char  uint8;
typedef          char  sint8;
typedef unsigned long  u64int;
typedef          long  s64int;
typedef unsigned int   u32int;
typedef          int   s32int;
typedef unsigned short u16int;
typedef          short s16int;
typedef unsigned char  u8int;
typedef          char  s8int;
typedef          int   integer_t;
typedef uint64         u64;
typedef uint32         u32;
typedef uint16         u16;
typedef uint8          u8;
typedef sint64         s64;
typedef sint32         s32;
typedef sint16         s16;
typedef sint8          s8;
typedef u8             u_int8_t;
typedef	s8             int8_t;
typedef	u16            u_int16_t;
typedef	s16            int16_t;
typedef	u32            u_int32_t;
typedef	s32            int32_t;
typedef	u64            u_int64_t;
typedef	s64            int64_t;
typedef	u8             uint8_t;
typedef	u16            uint16_t;
typedef	u32            uint32_t;
typedef	u64            uint64_t;
typedef u32            __kernel_dev_t;
typedef u32            nlink_t;
typedef unsigned long  uintptr_t;
typedef unsigned char  u_char;
typedef unsigned short u_short;
typedef unsigned int   u_int;
typedef unsigned long  u_long;
typedef unsigned char  unchar;
typedef unsigned short ushort;
typedef unsigned int   uint;
typedef unsigned long  ulong;
typedef unsigned long  pgoff_t;

#ifdef __X86_64__
typedef u64            dma_addr_t;
typedef u64            phys_addr_t;
#else
typedef u32            dma_addr_t;
typedef u32            phys_addr_t;
#endif

typedef phys_addr_t    resource_size_t;
typedef short          asmlinkage;



#endif //types_h_