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
# ifndef NSL_PREPROCESSOR_LIST_REST_N_H
# define NSL_PREPROCESSOR_LIST_REST_N_H
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/list/adt.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* NSL_PP_LIST_REST_N */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_REST_N(count, list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_LIST_REST_N_P, NSL_PP_LIST_REST_N_O, (list, count)))
# else
#    define NSL_PP_LIST_REST_N(count, list) NSL_PP_LIST_REST_N_I(count, list)
#    define NSL_PP_LIST_REST_N_I(count, list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_LIST_REST_N_P, NSL_PP_LIST_REST_N_O, (list, count)))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_REST_N_P(d, lc) NSL_PP_TUPLE_ELEM(2, 1, lc)
# else
#    define NSL_PP_LIST_REST_N_P(d, lc) NSL_PP_LIST_REST_N_P_I lc
#    define NSL_PP_LIST_REST_N_P_I(list, count) count
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_REST_N_O(d, lc) (NSL_PP_LIST_REST(NSL_PP_TUPLE_ELEM(2, 0, lc)), NSL_PP_DEC(NSL_PP_TUPLE_ELEM(2, 1, lc)))
# else
#    define NSL_PP_LIST_REST_N_O(d, lc) NSL_PP_LIST_REST_N_O_I lc
#    define NSL_PP_LIST_REST_N_O_I(list, count) (NSL_PP_LIST_REST(list), NSL_PP_DEC(count))
# endif
#
# /* NSL_PP_LIST_REST_N_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_REST_N_D(d, count, list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_LIST_REST_N_P, NSL_PP_LIST_REST_N_O, (list, count)))
# else
#    define NSL_PP_LIST_REST_N_D(d, count, list) NSL_PP_LIST_REST_N_D_I(d, count, list)
#    define NSL_PP_LIST_REST_N_D_I(d, count, list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_LIST_REST_N_P, NSL_PP_LIST_REST_N_O, (list, count)))
# endif
#
# endif
