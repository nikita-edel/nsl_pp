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
# ifndef NSL_PREPROCESSOR_LIST_LIST_FOR_EACH_I_H
# define NSL_PREPROCESSOR_LIST_LIST_FOR_EACH_I_H
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/list/adt.h"
# include "nsl/preprocessor/repetition/for.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_LIST_FOR_EACH_I */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG() && ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_LIST_FOR_EACH_I(macro, data, list) NSL_PP_FOR((macro, data, list, 0), NSL_PP_LIST_FOR_EACH_I_P, NSL_PP_LIST_FOR_EACH_I_O, NSL_PP_LIST_FOR_EACH_I_M)
# else
#    define NSL_PP_LIST_FOR_EACH_I(macro, data, list) NSL_PP_LIST_FOR_EACH_I_I(macro, data, list)
#    define NSL_PP_LIST_FOR_EACH_I_I(macro, data, list) NSL_PP_FOR((macro, data, list, 0), NSL_PP_LIST_FOR_EACH_I_P, NSL_PP_LIST_FOR_EACH_I_O, NSL_PP_LIST_FOR_EACH_I_M)
# endif
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_LIST_FOR_EACH_I_P(r, x) NSL_PP_LIST_FOR_EACH_I_P_D x
#    define NSL_PP_LIST_FOR_EACH_I_P_D(m, d, l, i) NSL_PP_LIST_IS_CONS(l)
# else
#    define NSL_PP_LIST_FOR_EACH_I_P(r, x) NSL_PP_LIST_IS_CONS(NSL_PP_TUPLE_ELEM(4, 2, x))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_LIST_FOR_EACH_I_O(r, x) NSL_PP_LIST_FOR_EACH_I_O_D x
#    define NSL_PP_LIST_FOR_EACH_I_O_D(m, d, l, i) (m, d, NSL_PP_LIST_REST(l), NSL_PP_INC(i))
# else
#    define NSL_PP_LIST_FOR_EACH_I_O(r, x) (NSL_PP_TUPLE_ELEM(4, 0, x), NSL_PP_TUPLE_ELEM(4, 1, x), NSL_PP_LIST_REST(NSL_PP_TUPLE_ELEM(4, 2, x)), NSL_PP_INC(NSL_PP_TUPLE_ELEM(4, 3, x)))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FOR_EACH_I_M(r, x) NSL_PP_LIST_FOR_EACH_I_M_D(r, NSL_PP_TUPLE_ELEM(4, 0, x), NSL_PP_TUPLE_ELEM(4, 1, x), NSL_PP_TUPLE_ELEM(4, 2, x), NSL_PP_TUPLE_ELEM(4, 3, x))
# else
#    define NSL_PP_LIST_FOR_EACH_I_M(r, x) NSL_PP_LIST_FOR_EACH_I_M_I(r, NSL_PP_TUPLE_REM_4 x)
#    define NSL_PP_LIST_FOR_EACH_I_M_I(r, x_e) NSL_PP_LIST_FOR_EACH_I_M_D(r, x_e)
# endif
#
# define NSL_PP_LIST_FOR_EACH_I_M_D(r, m, d, l, i) m(r, d, i, NSL_PP_LIST_FIRST(l))
#
# /* NSL_PP_LIST_FOR_EACH_I_R */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FOR_EACH_I_R(r, macro, data, list) NSL_PP_FOR_ ## r((macro, data, list, 0), NSL_PP_LIST_FOR_EACH_I_P, NSL_PP_LIST_FOR_EACH_I_O, NSL_PP_LIST_FOR_EACH_I_M)
# else
#    define NSL_PP_LIST_FOR_EACH_I_R(r, macro, data, list) NSL_PP_LIST_FOR_EACH_I_R_I(r, macro, data, list)
#    define NSL_PP_LIST_FOR_EACH_I_R_I(r, macro, data, list) NSL_PP_FOR_ ## r((macro, data, list, 0), NSL_PP_LIST_FOR_EACH_I_P, NSL_PP_LIST_FOR_EACH_I_O, NSL_PP_LIST_FOR_EACH_I_M)
# endif
#
# endif
