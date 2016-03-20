//#ifndef _ASSERT_H
#define _ASSERT_H

#ifdef debug_end
#define assert(type)
#else
# define assert(type) (void)((type) || (__assert (#type, __FILE__, __LINE__),0))
#endif

#define abort() PANIC("Assertion failed! Fatal Code Error.");

#define __assert(e, file, line) \ ((void)printf ("%s:%u: assertion failed `%s'\n", file, line, e), abort())

//#endif