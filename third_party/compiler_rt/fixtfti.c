/* clang-format off */
/* ===-- fixtfti.c - Implement __fixtfti -----------------------------------===
 *
 *                     The LLVM Compiler Infrastructure
 *
 * This file is dual licensed under the MIT and the University of Illinois Open
 * Source Licenses. See LICENSE.TXT for details.
 *
 * ===----------------------------------------------------------------------===
 */

__static_yoink("huge_compiler_rt_license");

#define QUAD_PRECISION
#include "third_party/compiler_rt/fp_lib.inc"

#if defined(CRT_HAS_128BIT) && defined(CRT_LDBL_128BIT)
typedef ti_int fixint_t;
typedef tu_int fixuint_t;
#include "third_party/compiler_rt/fp_fixint_impl.inc"

COMPILER_RT_ABI ti_int
__fixtfti(fp_t a) {
    return __fixint(a);
}
#endif
