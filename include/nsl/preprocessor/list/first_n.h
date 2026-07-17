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
# ifndef NSL_PREPROCESSOR_LIST_FIRST_N_H
# define NSL_PREPROCESSOR_LIST_FIRST_N_H
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/control/while.h>
# include <nsl/preprocessor/list/adt.h>
# include <nsl/preprocessor/list/reverse.h>
# include <nsl/preprocessor/tuple/elem.h>
# include <nsl/preprocessor/tuple/rem.h>
#
# /* NSL_PP_LIST_FIRST_N */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FIRST_N(count, list) NSL_PP_LIST_REVERSE(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_WHILE(NSL_PP_LIST_FIRST_N_P, NSL_PP_LIST_FIRST_N_O, (count, list, NSL_PP_NIL))))
# else
#    define NSL_PP_LIST_FIRST_N(count, list) NSL_PP_LIST_FIRST_N_I(count, list)
#    define NSL_PP_LIST_FIRST_N_I(count, list) NSL_PP_LIST_REVERSE(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_WHILE(NSL_PP_LIST_FIRST_N_P, NSL_PP_LIST_FIRST_N_O, (count, list, NSL_PP_NIL))))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FIRST_N_P(d, data) NSL_PP_TUPLE_ELEM(3, 0, data)
# else
#    define NSL_PP_LIST_FIRST_N_P(d, data) NSL_PP_LIST_FIRST_N_P_I data
#    define NSL_PP_LIST_FIRST_N_P_I(c, l, nl) c
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_LIST_FIRST_N_O(d, data) NSL_PP_LIST_FIRST_N_O_D data
# else
#    define NSL_PP_LIST_FIRST_N_O(d, data) NSL_PP_LIST_FIRST_N_O_D(NSL_PP_TUPLE_ELEM(3, 0, data), NSL_PP_TUPLE_ELEM(3, 1, data), NSL_PP_TUPLE_ELEM(3, 2, data))
# endif
#
# define NSL_PP_LIST_FIRST_N_O_D(c, l, nl) (NSL_PP_DEC(c), NSL_PP_LIST_REST(l), (NSL_PP_LIST_FIRST(l), nl))
#
# /* NSL_PP_LIST_FIRST_N_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FIRST_N_D(d, count, list) NSL_PP_LIST_REVERSE_D(d, NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_WHILE_ ## d(NSL_PP_LIST_FIRST_N_P, NSL_PP_LIST_FIRST_N_O, (count, list, NSL_PP_NIL))))
# else
#    define NSL_PP_LIST_FIRST_N_D(d, count, list) NSL_PP_LIST_FIRST_N_D_I(d, count, list)
#    define NSL_PP_LIST_FIRST_N_D_I(d, count, list) NSL_PP_LIST_REVERSE_D(d, NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_WHILE_ ## d(NSL_PP_LIST_FIRST_N_P, NSL_PP_LIST_FIRST_N_O, (count, list, NSL_PP_NIL))))
# endif
#
# endif
