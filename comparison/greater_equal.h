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
# ifndef NSL_PREPROCESSOR_COMPARISON_GREATER_EQUAL_H
# define NSL_PREPROCESSOR_COMPARISON_GREATER_EQUAL_H
#
# include <nsl/preprocessor/comparison/less_equal.h>
# include <nsl/preprocessor/config/config.h>
#
# /* NSL_PP_GREATER_EQUAL */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_GREATER_EQUAL(x, y) NSL_PP_LESS_EQUAL(y, x)
# else
#    define NSL_PP_GREATER_EQUAL(x, y) NSL_PP_GREATER_EQUAL_I(x, y)
#    define NSL_PP_GREATER_EQUAL_I(x, y) NSL_PP_LESS_EQUAL(y, x)
# endif
#
# /* NSL_PP_GREATER_EQUAL_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_GREATER_EQUAL_D(d, x, y) NSL_PP_LESS_EQUAL_D(d, y, x)
# else
#    define NSL_PP_GREATER_EQUAL_D(d, x, y) NSL_PP_GREATER_EQUAL_D_I(d, x, y)
#    define NSL_PP_GREATER_EQUAL_D_I(d, x, y) NSL_PP_LESS_EQUAL_D(d, y, x)
# endif
#
# endif
