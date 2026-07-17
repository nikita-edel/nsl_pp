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
# ifndef NSL_PREPROCESSOR_LIST_APPEND_H
# define NSL_PREPROCESSOR_LIST_APPEND_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/list/fold_right.h>
#
# /* NSL_PP_LIST_APPEND */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_APPEND(a, b) NSL_PP_LIST_FOLD_RIGHT(NSL_PP_LIST_APPEND_O, b, a)
# else
#    define NSL_PP_LIST_APPEND(a, b) NSL_PP_LIST_APPEND_I(a, b)
#    define NSL_PP_LIST_APPEND_I(a, b) NSL_PP_LIST_FOLD_RIGHT(NSL_PP_LIST_APPEND_O, b, a)
# endif
#
# define NSL_PP_LIST_APPEND_O(d, s, x) (x, s)
#
# /* NSL_PP_LIST_APPEND_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_APPEND_D(d, a, b) NSL_PP_LIST_FOLD_RIGHT_ ## d(NSL_PP_LIST_APPEND_O, b, a)
# else
#    define NSL_PP_LIST_APPEND_D(d, a, b) NSL_PP_LIST_APPEND_D_I(d, a, b)
#    define NSL_PP_LIST_APPEND_D_I(d, a, b) NSL_PP_LIST_FOLD_RIGHT_ ## d(NSL_PP_LIST_APPEND_O, b, a)
# endif
#
# endif
