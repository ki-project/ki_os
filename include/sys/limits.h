#include <sys/types.h>

#ifndef limits_h_
#define limits_h_

//max. signed types
#define int8_max 127
#define int16_max 32767
#define int32_max 2147483647L
#define int64_max 9223372036854775807LL

//min. signed types
#define int8_min -128
#define int16_min -32768
#define int32_min -2147483648L
#define int64_min -9223372036854775808LL

//max. unsigned types
#define uint8_max 255U
#define uint16_max 65535U
#define uint32_max 4294967295UL
#define uint64_max 18446744073709551615ULL

//"void *" types
#define intptr_min int16_min
#define intptr_max int16_max
#define uintptr_max uint16_max

#define intmax_min int64_min
#define intmax_max int64_max
#define uintmax_min uint64_min
#define uintmax_max uint64_max

//ptrdiff_t
#define ptrdiff_max int16_max
#define ptrdiff_min int16_min

#define size_max uint16_max //size_t

#endif //limits_h_