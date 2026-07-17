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
# ifndef NSL_PREPROCESSOR_LIST_CAT_H
# define NSL_PREPROCESSOR_LIST_CAT_H
#
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/list/adt.h>
# include <nsl/preprocessor/list/fold_left.h>
#
# /* NSL_PP_LIST_CAT */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_CAT(list) NSL_PP_LIST_FOLD_LEFT(NSL_PP_LIST_CAT_O, NSL_PP_LIST_FIRST(list), NSL_PP_LIST_REST(list))
# else
#    define NSL_PP_LIST_CAT(list) NSL_PP_LIST_CAT_I(list)
#    define NSL_PP_LIST_CAT_I(list) NSL_PP_LIST_FOLD_LEFT(NSL_PP_LIST_CAT_O, NSL_PP_LIST_FIRST(list), NSL_PP_LIST_REST(list))
# endif
#
# define NSL_PP_LIST_CAT_O(d, s, x) NSL_PP_CAT(s, x)
#
# /* NSL_PP_LIST_CAT_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_CAT_D(d, list) NSL_PP_LIST_FOLD_LEFT_ ## d(NSL_PP_LIST_CAT_O, NSL_PP_LIST_FIRST(list), NSL_PP_LIST_REST(list))
# else
#    define NSL_PP_LIST_CAT_D(d, list) NSL_PP_LIST_CAT_D_I(d, list)
#    define NSL_PP_LIST_CAT_D_I(d, list) NSL_PP_LIST_FOLD_LEFT_ ## d(NSL_PP_LIST_CAT_O, NSL_PP_LIST_FIRST(list), NSL_PP_LIST_REST(list))
# endif
#
# endif
