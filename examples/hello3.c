#if 0
/*─────────────────────────────────────────────────────────────────╗
│ To the extent possible under law, Justine Tunney has waived      │
│ all copyright and related or neighboring rights to this file,    │
│ as it is written in the following disclaimers:                   │
│   • http://unlicense.org/                                        │
│   • http://creativecommons.org/publicdomain/zero/1.0/            │
╚─────────────────────────────────────────────────────────────────*/
#endif
#include "libc/errno.h"
#include "libc/math.h"
#include "libc/stdio/stdio.h"

int main() {
  printf("%g %`'s\n", M_PI, "hello\1\2world→→");
  return errno;
}
