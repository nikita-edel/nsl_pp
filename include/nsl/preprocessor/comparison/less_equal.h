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
# ifndef NSL_PREPROCESSOR_COMPARISON_LESS_EQUAL_H
# define NSL_PREPROCESSOR_COMPARISON_LESS_EQUAL_H
#
# include "nsl/preprocessor/arithmetic/sub.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/logical/not.h"
#
# /* NSL_PP_LESS_EQUAL */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LESS_EQUAL(x, y) NSL_PP_NOT(NSL_PP_SUB(x, y))
# else
#    define NSL_PP_LESS_EQUAL(x, y) NSL_PP_LESS_EQUAL_I(x, y)
#    define NSL_PP_LESS_EQUAL_I(x, y) NSL_PP_NOT(NSL_PP_SUB(x, y))
# endif
#
# /* NSL_PP_LESS_EQUAL_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LESS_EQUAL_D(d, x, y) NSL_PP_NOT(NSL_PP_SUB_D(d, x, y))
# else
#    define NSL_PP_LESS_EQUAL_D(d, x, y) NSL_PP_LESS_EQUAL_D_I(d, x, y)
#    define NSL_PP_LESS_EQUAL_D_I(d, x, y) NSL_PP_NOT(NSL_PP_SUB_D(d, x, y))
# endif
#
# endif
