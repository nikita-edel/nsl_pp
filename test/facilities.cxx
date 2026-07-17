# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/facilities.h"
# include "nsl/preprocessor/arithmetic/add.h"
# include "nsl/preprocessor/arithmetic/mul.h"
# include "test.h"

BEGIN NSL_PP_APPLY(NSL_PP_NIL) 0 == 0 END
BEGIN NSL_PP_APPLY((0)) == 0 END

BEGIN NSL_PP_APPLY((NSL_PP_EMPTY))() 0 == 0 END

# define MACRO(x, y, z) 1
# define ARGS (1, 2, 3)

BEGIN NSL_PP_EXPAND(MACRO ARGS) == 1 END

BEGIN NSL_PP_IDENTITY(1)() == 1 END
BEGIN NSL_PP_IDENTITY_N(36,10)(0,1,2,3,4,5,6,7,8,9) == 36 END

BEGIN NSL_PP_CAT(NSL_PP_INTERCEPT, 2) 1 == 1 END

#define OVMAC_1(x) NSL_PP_ADD(x,5)
#define OVMAC_2(x,y) NSL_PP_ADD(x,y)
#define OVMAC_3(x,y,z) NSL_PP_ADD(NSL_PP_MUL(x,y),z)
#define OVMAC_4(x,y,z,a) NSL_PP_ADD(NSL_PP_MUL(x,y),NSL_PP_MUL(a,z))

#if NSL_PP_VARIADICS_MSVC

#define OVTEST(...) NSL_PP_CAT(NSL_PP_OVERLOAD(OVMAC_,__VA_ARGS__)(__VA_ARGS__),NSL_PP_EMPTY())

#else

#define OVTEST(...) NSL_PP_OVERLOAD(OVMAC_,__VA_ARGS__)(__VA_ARGS__)

#endif

BEGIN OVTEST(3,4,5) == 17 END
BEGIN OVTEST(9,3,2,7) == 41 END
BEGIN OVTEST(8) == 13 END
BEGIN OVTEST(24,61) == 85 END
