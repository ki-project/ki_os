#include <asm/lowlevel.h>

#ifndef asm_register_h_
#define asm_register_h_

// Register Modifying Definitions

_asm_struct_ register_x16_d {
  char name;
  u16 number;
  u8 bits;
} reg_x16_template;

_asm_struct_ register_x32_d {
  char name;
  u32 number;
  u8 bits;
} reg_x32_template;

_asm_struct_ register_x64_d {
  char name;
  u64 number;
  u8 bits;
} reg_x64_template;

reg_x16_template di si bp sp bx dx cx ax ip;
reg_x32_template edi esi ebp esp ebx edx ecx eax eip;
reg_x64_template rdi rsi rbp rsp rbx rdx rcx rax rip r8 r9 r10 r11 r12 r13 r14 r15;

di->name = "di";
di->number = asm ("push di","mov %1,di","pop di" : : (1) di->number : memory );
di->bits = "16";

si->name = "si";
si->number = asm ("push si","mov %1,si","pop si" : : (1) si->number : memory );
si->bits = "16";

bp->name = "bp";
bp->number = asm ("push bp","mov %1,bp","pop bp" : : (1) bp->number : memory );
bp->bits = "16";

sp->name = "sp";
sp->number = asm ("push sp","mov %1,sp","pop sp" : : (1) sp->number : memory );
sp->bits = "16";

bx->name = "bx";
bx->number = asm ("push bx","mov %1,bx","pop bx" : : (1) bx->number : memory );
bx->bits = "16";

dx->name = "dx";
dx->number = asm ("push dx","mov %1,dx","pop dx" : : (1) dx->number : memory );
dx->bits = "16";

cx->name = "cx";
cx->number = asm ("push cx","mov %1,cx","pop cx" : : (1) cx->number : memory );
cx->bits = "16";

ax->name = "ax";
ax->number = asm ("push ax","mov %1,ax","pop ax" : : (1) ax->number : memory );
ax->bits = "16";

ip->name = "ip";
ip->number = asm ("push ip","mov %1,ip","pop ip" : : (1) ip->number : memory );
ip->bits = "16";

edi->name = "edi";
edi->number = asm ("push edi","mov %1,edi","pop edi" : : (1) edi->number : memory );
edi->bits = "32";

esi->name = "esi";
esi->number = asm ("push esi","mov %1,esi","pop esi" : : (1) esi->number : memory );
esi->bits = "32";

ebp->name = "ebp";
ebp->number = asm ("push ebp","mov %1,ebp","pop ebp" : : (1) ebp->number : memory );
ebp->bits = "32";

esp->name = "esp";
esp->number = asm ("push esp","mov %1,esp","pop esp" : : (1) esp->number : memory );
esp->bits = "32";

ebx->name = "ebx";
ebx->number = asm ("push ebx","mov %1,ebx","pop ebx" : : (1) ebx->number : memory );
ebx->bits = "32";

ecx->name = "ecx";
ecx->number = asm ("push ecx","mov %1,ecx","pop ecx" : : (1) ecx->number : memory );
ecx->bits = "32";

edx->name = "edx";
edx->number = asm ("push edx","mov %1,edx","pop edx" : : (1) edx->number : memory );
edx->bits = "32";

eax->name = "eax";
eax->number = asm ("push eax","mov %1,eax","pop eax" : : (1) eax->number : memory );
eax->bits = "32";

eip->name = "eip";
eip->number = asm ("push eip","mov %1,eip","pop eip" : : (1) eip->number : memory );
eip->bits = "32";

rdi->name = "rdi";
rdi->number = asm ("push rdi","mov %1,rdi","pop rdi" : : (1) rdi->number : memory );
rdi->bits = "64";

rsi->name = "rsi";
rsi->number = asm ("push rsi","mov %1,rsi","pop rsi" : : (1) rsi->number : memory );
rsi->bits = "64";

rbp->name = "rbp";
rbp->number = asm ("push rbp","mov %1,rbp","pop rbp" : : (1) rbp->number : memory );
rbp->bits = "64";

rsp->name = "rsp";
rsp->number = asm ("push rsp","mov %1,rsp","pop rsp" : : (1) rsp->number : memory );
rsp->bits = "64";

rbx->name = "rbx";
rbx->number = asm ("push rbx","mov %1,rbx","pop rbx" : : (1) rbx->number : memory );
rbx->bits = "64";

rcx->name = "rcx";
rcx->number = asm ("push rcx","mov %1,rcx","pop rcx" : : (1) rcx->number : memory );
rcx->bits = "64";

rdx->name = "rdx";
rdx->number = asm ("push rdx","mov %1,rdx","pop rdx" : : (1) rdx->number : memory );
rdx->bits = "64";

rax->name = "rax";
rax->number = asm ("push rax","mov %1,rax","pop rax" : : (1) rax->number : memory );
rax->bits = "64";

rip->name = "rip";
rip->number = asm ("push rip","mov %1,rip","pop rip" : : (1) rip->number : memory );
rip->bits = "64";

rdi->name = "rdi";
rdi->number = asm ("push rdi","mov %1,rdi","pop rdi" : : (1) rdi->number : memory );
rdi->bits = "64";

rdi->name = "rdi";
rdi->number = asm ("push rdi","mov %1,rdi","pop rdi" : : (1) rdi->number : memory );
rdi->bits = "64";

rdi->name = "rdi";
rdi->number = asm ("push rdi","mov %1,rdi","pop rdi" : : (1) rdi->number : memory );
rdi->bits = "64";

rdi->name = "rdi";
rdi->number = asm ("push rdi","mov %1,rdi","pop rdi" : : (1) rdi->number : memory );
rdi->bits = "64";

rdi->name = "rdi";
rdi->number = asm ("push rdi","mov %1,rdi","pop rdi" : : (1) rdi->number : memory );
rdi->bits = "64";

rdi->name = "rdi";
rdi->number = asm ("push rdi","mov %1,rdi","pop rdi" : : (1) rdi->number : memory );
rdi->bits = "64";

rdi->name = "rdi";
rdi->number = asm ("push rdi","mov %1,rdi","pop rdi" : : (1) rdi->number : memory );
rdi->bits = "64";

rdi->name = "rdi";
rdi->number = asm ("push rdi","mov %1,rdi","pop rdi" : : (1) rdi->number : memory );
rdi->bits = "64";

/*
  u64int r8;
  u64int r9;
  u64int r10;
  u64int r11;
  u64int r12;
  u64int r13;
  u64int r14;
  u64int r15;
} stack_t;

_asm_struct_ stackc_d {
  u16 stack16;
  u16 stack16Content;
  u32 stack32;
  u32 stack32Content;
  u64 stack64;
  u64 stack64Content;
} stackc_t;

_asm_ _u16_stacks_[8];
_u16_stacks_[0] = stack_t->di;
_u16_stacks_[1] = stack_t->si;
_u16_stacks_[2] = stack_t->bp;
_u16_stacks_[3] = stack_t->sp;
_u16_stacks_[4] = stack_t->bx;
_u16_stacks_[5] = stack_t->dx;
_u16_stacks_[6] = stack_t->cx;
_u16_stacks_[7] = stack_t->ax;
_u16_stacks_[8] = stack_t->ip;

_asm_ _u32_stacks_[8];
_u32_stacks_[0] = stack_t->edi;
_u32_stacks_[1] = stack_t->esi;
_u32_stacks_[2] = stack_t->ebp;
_u32_stacks_[3] = stack_t->esp;
_u32_stacks_[4] = stack_t->ebx;
_u32_stacks_[5] = stack_t->edx;
_u32_stacks_[6] = stack_t->ecx;
_u32_stacks_[7] = stack_t->eax;
_u32_stacks_[8] = stack_t->eip;

_lasm_ _u64_stacks_[16];
_u64_stacks_[0] = stack_t->rdi;
_u64_stacks_[1] = stack_t->rsi;
_u64_stacks_[2] = stack_t->rbp;
_u64_stacks_[3] = stack_t->rsp;
_u64_stacks_[4] = stack_t->rbx;
_u64_stacks_[5] = stack_t->rdx;
_u64_stacks_[6] = stack_t->rcx;
_u64_stacks_[7] = stack_t->rax;
_u64_stacks_[8] = stack_t->rip;
_u64_stacks_[9] = stack_t->r8;
_u64_stacks_[10] = stack_t->r9;
_u64_stacks_[11] = stack_t->r10;
_u64_stacks_[12] = stack_t->r11;
_u64_stacks_[13] = stack_t->r12;
_u64_stacks_[14] = stack_t->r13;
_u64_stacks_[15] = stack_t->r14;
_u64_stacks_[16] = stack_t->r15;

//Note: This methods are simply copying the value of the stacks to another
_lasm_ convert_u16_to_u32_stack()
{
  stack_t->edi = stack_t->di;
  stack_t->esi = stack_t->si;
  stack_t->ebp = stack_t->bp;
  stack_t->esp = stack_t->sp;
  stack_t->ebx = stack_t->bx;
  stack_t->edx = stack_t->dx;
  stack_t->ecx = stack_t->cx;
  stack_t->eax = stack_t->ax;
  stack_t->eip = stack_t->ip;
  if (useU16Stack)
    useU16Stack = 0;
  if (useU32Stack)
    useU32Stack = 1;
  else
    _sasm_ useU32Stack = 1;
  return useU32Stack;
}

_lasm_ convert_u32_to_u16_stack()
{
  stack_t->di = stack_t->edi;
  stack_t->si = stack_t->esi;
  stack_t->bp = stack_t->ebp;
  stack_t->sp = stack_t->esp;
  stack_t->bx = stack_t->ebx;
  stack_t->dx = stack_t->edx;
  stack_t->cx = stack_t->ecx;
  stack_t->ax = stack_t->eax;
  stack_t->ip = stack_t->eip;
  if (useU32Stack)
    useU32Stack = 0;
  if (useU16Stack)
    useU16Stack = 1;
  else
    _sasm_ useU16Stack = 1;
  return useU16Stack;
}

_lasm_ convert_u32_to_u64_stack()
{
  stack_t->rdi = stack_t->edi;
  stack_t->rsi = stack_t->esi;
  stack_t->rbp = stack_t->ebp;
  stack_t->rsp = stack_t->esp;
  stack_t->rbx = stack_t->ebx;
  stack_t->rdx = stack_t->edx;
  stack_t->rcx = stack_t->ecx;
  stack_t->rax = stack_t->eax;
  stack_t->rip = stack_t->eip;
  stack_t->r8 = 0;
  stack_t->r9 = 0;
  stack_t->r10 = 0;
  stack_t->r11 = 0;
  stack_t->r12 = 0;
  stack_t->r13 = 0;
  stack_t->r14 = 0;
  stack_t->r15 = 0;
  if (useU32Stack)
    useU32Stack = 0;
  if (useU64Stack)
    useU64Stack = 1;
  else
    _sasm_ useU64Stack = 1;
  return useU64Stack;
}

_lasm_ convert_u64_to_u32_stack()
{
  stack_t->edi = stack_t->rdi;
  stack_t->esi = stack_t->rsi;
  stack_t->ebp = stack_t->rbp;
  stack_t->esp = stack_t->rsp;
  stack_t->ebx = stack_t->rbx;
  stack_t->edx = stack_t->rdx;
  stack_t->ecx = stack_t->rcx;
  stack_t->eax = stack_t->rax;
  stack_t->eip = stack_t->rip;
  stack_t->r8 = 0;
  stack_t->r9 = 0;
  stack_t->r10 = 0;
  stack_t->r11 = 0;
  stack_t->r12 = 0;
  stack_t->r13 = 0;
  stack_t->r14 = 0;
  stack_t->r15 = 0;
  if (useU32Stack)
    useU32Stack = 0;
  if (useU64Stack)
    useU64Stack = 1;
  else
    _sasm_ useU64Stack = 1;
  return useU64Stack;
}

_lasm_ convert_u16_to_u64_stack()
{
  if (convert_u16_to_u32_stack() || convert_u32_to_u64_stack() > 1)
    return STACKERR;
  else
    return STACKCONV;
}

_lasm_ convert_u64_to_u16_stack()
{
  if (convert_u64_to_u32_stack() || convert_u32_to_u16_stack() > 1)
    return STACKERR;
  else
    return STACKCONV;
}

_sasm_ move(reg_t *from_reg, reg_t to_reg)
{
  to_stack->stack16 = from_stack->stack16;
  to_stack->stack32 = from_stack->stack32;
  to_stack->stack64 = from_stack->stack64;
  from_stack->stack16 = 0;
  from_stack->stack32 = 0;
  from_stack->stack64 = 0;
  
  asm ("mov %2,%1" : %(1) from_stack : %(2) to_stack : memory);
  
  modified_stack->stackOne = from_stack;
  modified_stack->stackTwo = to_stack;
  
  return modified_stack;
}

*/