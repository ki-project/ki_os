#include <asm/io.h>
#include <sys/error.h>
#include <sys/syscall.h>
#include <sys/assert.h>

void init(struct multiboot *mboot_ptr)
{
  while (true) {