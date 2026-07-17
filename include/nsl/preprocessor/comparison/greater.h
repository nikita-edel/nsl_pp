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
# ifndef NSL_PREPROCESSOR_COMPARISON_GREATER_H
# define NSL_PREPROCESSOR_COMPARISON_GREATER_H
#
# include <nsl/preprocessor/comparison/less.h>
# include <nsl/preprocessor/config/config.h>
#
# /* NSL_PP_GREATER */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_GREATER(x, y) NSL_PP_LESS(y, x)
# else
#    define NSL_PP_GREATER(x, y) NSL_PP_GREATER_I(x, y)
#    define NSL_PP_GREATER_I(x, y) NSL_PP_LESS(y, x)
# endif
#
# /* NSL_PP_GREATER_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_GREATER_D(d, x, y) NSL_PP_LESS_D(d, y, x)
# else
#    define NSL_PP_GREATER_D(d, x, y) NSL_PP_GREATER_D_I(d, x, y)
#    define NSL_PP_GREATER_D_I(d, x, y) NSL_PP_LESS_D(d, y, x)
# endif
#
# endif
