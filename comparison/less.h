# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_COMPARISON_LESS_H
# define NSL_PREPROCESSOR_COMPARISON_LESS_H
#
# include "nsl/preprocessor/comparison/less_equal.h"
# include "nsl/preprocessor/comparison/not_equal.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/logical/bitand.h"
# include "nsl/preprocessor/tuple/eat.h"
#
# /* NSL_PP_LESS */
#
# if NSL_PP_CONFIG_FLAGS() & (NSL_PP_CONFIG_MWCC() | NSL_PP_CONFIG_DMC())
#    define NSL_PP_LESS(x, y) NSL_PP_BITAND(NSL_PP_NOT_EQUAL(x, y), NSL_PP_LESS_EQUAL(x, y))
# elif ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LESS(x, y) NSL_PP_IIF(NSL_PP_NOT_EQUAL(x, y), NSL_PP_LESS_EQUAL, 0 NSL_PP_TUPLE_EAT_2)(x, y)
# else
#    define NSL_PP_LESS(x, y) NSL_PP_LESS_I(x, y)
#    define NSL_PP_LESS_I(x, y) NSL_PP_IIF(NSL_PP_NOT_EQUAL(x, y), NSL_PP_LESS_EQUAL, 0 NSL_PP_TUPLE_EAT_2)(x, y)
# endif
#
# /* NSL_PP_LESS_D */
#
# if NSL_PP_CONFIG_FLAGS() & (NSL_PP_CONFIG_MWCC() | NSL_PP_CONFIG_DMC())
#    define NSL_PP_LESS_D(d, x, y) NSL_PP_BITAND(NSL_PP_NOT_EQUAL(x, y), NSL_PP_LESS_EQUAL_D(d, x, y))
# elif ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LESS_D(d, x, y) NSL_PP_IIF(NSL_PP_NOT_EQUAL(x, y), NSL_PP_LESS_EQUAL_D, 0 NSL_PP_TUPLE_EAT_3)(d, x, y)
# else
#    define NSL_PP_LESS_D(d, x, y) NSL_PP_LESS_D_I(d, x, y)
#    define NSL_PP_LESS_D_I(d, x, y) NSL_PP_IIF(NSL_PP_NOT_EQUAL(x, y), NSL_PP_LESS_EQUAL_D, 0 NSL_PP_TUPLE_EAT_3)(d, x, y)
# endif
#
# endif
