#ifndef sys_memory_h_
#define sys_memory_h_

#include "memtools.c"
#include "paging.c"
#include "paging.h"
#include "kheap.c"
#include "kheap.h"

extern heap_t *create_heap(u32int start, u32int end, u32int max, u8int supervisor, u8int readonly);
extern void *alloc(u32int size, u8int page_align, heap_t *heap);
extern void free(void *p, heap_t *heap);
extern u32int kmalloc_int(u32int sz, int align, u32int *phys);
extern u32int kmalloc_a(u32int sz);
extern u32int kmalloc_p(u32int sz, u32int *phys);
extern u32int kmalloc_ap(u32int sz, u32int *phys);
extern u32int kmalloc(u32int sz);
extern void kfree(void *p);
extern void memcpy(u8int *dest, const u8int *src, u32int len);
extern void memset(u8int *dest, u8int val, u32int len);
extern void initialise_paging();
extern void switch_page_directory(page_directory_t *new);
extern page_t *get_page(uint32 address, int make, page_directory_t *dir);
extern void page_fault(registers_t regs);