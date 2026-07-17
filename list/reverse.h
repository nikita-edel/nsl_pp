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
# ifndef NSL_PREPROCESSOR_LIST_REVERSE_H
# define NSL_PREPROCESSOR_LIST_REVERSE_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# include "nsl/preprocessor/list/fold_left.h"
#
# /* NSL_PP_LIST_REVERSE */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_REVERSE(list) NSL_PP_LIST_FOLD_LEFT(NSL_PP_LIST_REVERSE_O, NSL_PP_NIL, list)
# else
#    define NSL_PP_LIST_REVERSE(list) NSL_PP_LIST_REVERSE_I(list)
#    define NSL_PP_LIST_REVERSE_I(list) NSL_PP_LIST_FOLD_LEFT(NSL_PP_LIST_REVERSE_O, NSL_PP_NIL, list)
# endif
#
# define NSL_PP_LIST_REVERSE_O(d, s, x) (x, s)
#
# /* NSL_PP_LIST_REVERSE_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_REVERSE_D(d, list) NSL_PP_LIST_FOLD_LEFT_ ## d(NSL_PP_LIST_REVERSE_O, NSL_PP_NIL, list)
# else
#    define NSL_PP_LIST_REVERSE_D(d, list) NSL_PP_LIST_REVERSE_D_I(d, list)
#    define NSL_PP_LIST_REVERSE_D_I(d, list) NSL_PP_LIST_FOLD_LEFT_ ## d(NSL_PP_LIST_REVERSE_O, NSL_PP_NIL, list)
# endif
#
# else
#
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/facilities/identity.h"
# include "nsl/preprocessor/list/adt.h"
# include "nsl/preprocessor/list/fold_left.h"
#
# /* NSL_PP_LIST_REVERSE */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_REVERSE(list) NSL_PP_IIF(NSL_PP_LIST_IS_CONS(list),NSL_PP_LIST_REVERSE_CONS,NSL_PP_IDENTITY_N(NSL_PP_NIL,1))(list)
# else
#    define NSL_PP_LIST_REVERSE(list) NSL_PP_LIST_REVERSE_I(list)
#    define NSL_PP_LIST_REVERSE_I(list) NSL_PP_IIF(NSL_PP_LIST_IS_CONS(list),NSL_PP_LIST_REVERSE_CONS,NSL_PP_IDENTITY_N(NSL_PP_NIL,1))(list)
# endif
#
# define NSL_PP_LIST_REVERSE_O(d, s, x) (x, s)
#
# /* NSL_PP_LIST_REVERSE_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_REVERSE_D(d, list) NSL_PP_IIF(NSL_PP_LIST_IS_CONS(list),NSL_PP_LIST_REVERSE_CONS_D,NSL_PP_IDENTITY_N(NSL_PP_NIL,2))(d,list)
# else
#    define NSL_PP_LIST_REVERSE_D(d, list) NSL_PP_LIST_REVERSE_D_I(d, list)
#    define NSL_PP_LIST_REVERSE_D_I(d, list) NSL_PP_IIF(NSL_PP_LIST_IS_CONS(list),NSL_PP_LIST_REVERSE_CONS_D,NSL_PP_IDENTITY_N(NSL_PP_NIL,2))(d,list)
# endif
#
# define NSL_PP_LIST_REVERSE_CONS(list) NSL_PP_LIST_FOLD_LEFT(NSL_PP_LIST_REVERSE_O, (NSL_PP_LIST_FIRST(list),NSL_PP_NIL), NSL_PP_LIST_REST(list))
# define NSL_PP_LIST_REVERSE_CONS_D(d, list) NSL_PP_LIST_FOLD_LEFT_ ## d(NSL_PP_LIST_REVERSE_O, (NSL_PP_LIST_FIRST(list),NSL_PP_NIL), NSL_PP_LIST_REST(list))
#
# endif
#
# endif
