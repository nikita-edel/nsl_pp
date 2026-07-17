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
# ifndef NSL_PREPROCESSOR_LIST_SIZE_H
# define NSL_PREPROCESSOR_LIST_SIZE_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/list/adt.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_LIST_SIZE */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_SIZE(list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_LIST_SIZE_P, NSL_PP_LIST_SIZE_O, (0, list)))
# else
#    define NSL_PP_LIST_SIZE(list) NSL_PP_LIST_SIZE_I(list)
#    define NSL_PP_LIST_SIZE_I(list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_LIST_SIZE_P, NSL_PP_LIST_SIZE_O, (0, list)))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_SIZE_P(d, rl) NSL_PP_LIST_IS_CONS(NSL_PP_TUPLE_ELEM(2, 1, rl))
# else
#    define NSL_PP_LIST_SIZE_P(d, rl) NSL_PP_LIST_SIZE_P_I(NSL_PP_TUPLE_REM_2 rl)
#    define NSL_PP_LIST_SIZE_P_I(im) NSL_PP_LIST_SIZE_P_II(im)
#    define NSL_PP_LIST_SIZE_P_II(r, l) NSL_PP_LIST_IS_CONS(l)
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_SIZE_O(d, rl) (NSL_PP_INC(NSL_PP_TUPLE_ELEM(2, 0, rl)), NSL_PP_LIST_REST(NSL_PP_TUPLE_ELEM(2, 1, rl)))
# else
#    define NSL_PP_LIST_SIZE_O(d, rl) NSL_PP_LIST_SIZE_O_I(NSL_PP_TUPLE_REM_2 rl)
#    define NSL_PP_LIST_SIZE_O_I(im) NSL_PP_LIST_SIZE_O_II(im)
#    define NSL_PP_LIST_SIZE_O_II(r, l) (NSL_PP_INC(r), NSL_PP_LIST_REST(l))
# endif
#
# /* NSL_PP_LIST_SIZE_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_SIZE_D(d, list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_LIST_SIZE_P, NSL_PP_LIST_SIZE_O, (0, list)))
# else
#    define NSL_PP_LIST_SIZE_D(d, list) NSL_PP_LIST_SIZE_D_I(d, list)
#    define NSL_PP_LIST_SIZE_D_I(d, list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_LIST_SIZE_P, NSL_PP_LIST_SIZE_O, (0, list)))
# endif
#
# else
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/facilities/identity.h"
# include "nsl/preprocessor/list/adt.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_LIST_SIZE */
#
#    define NSL_PP_LIST_SIZE(list) NSL_PP_IIF(NSL_PP_LIST_IS_CONS(list),NSL_PP_LIST_SIZE_S,NSL_PP_IDENTITY_N(0,1))(list)
#    define NSL_PP_LIST_SIZE_S(list) NSL_PP_LIST_SIZE_DO(NSL_PP_LIST_REST(list))
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_SIZE_DO(list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_LIST_SIZE_P, NSL_PP_LIST_SIZE_O, (1, list)))
# else
#    define NSL_PP_LIST_SIZE_DO(list) NSL_PP_LIST_SIZE_I(list)
#    define NSL_PP_LIST_SIZE_I(list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_LIST_SIZE_P, NSL_PP_LIST_SIZE_O, (1, list)))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_SIZE_P(d, rl) NSL_PP_LIST_IS_CONS(NSL_PP_TUPLE_ELEM(2, 1, rl))
# else
#    define NSL_PP_LIST_SIZE_P(d, rl) NSL_PP_LIST_SIZE_P_I(NSL_PP_TUPLE_REM_2 rl)
#    define NSL_PP_LIST_SIZE_P_I(im) NSL_PP_LIST_SIZE_P_II(im)
#    define NSL_PP_LIST_SIZE_P_II(r, l) NSL_PP_LIST_IS_CONS(l)
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_SIZE_O(d, rl) (NSL_PP_INC(NSL_PP_TUPLE_ELEM(2, 0, rl)), NSL_PP_LIST_REST(NSL_PP_TUPLE_ELEM(2, 1, rl)))
# else
#    define NSL_PP_LIST_SIZE_O(d, rl) NSL_PP_LIST_SIZE_O_I(NSL_PP_TUPLE_REM_2 rl)
#    define NSL_PP_LIST_SIZE_O_I(im) NSL_PP_LIST_SIZE_O_II(im)
#    define NSL_PP_LIST_SIZE_O_II(r, l) (NSL_PP_INC(r), NSL_PP_LIST_REST(l))
# endif
#
# /* NSL_PP_LIST_SIZE_D */
#
#    define NSL_PP_LIST_SIZE_D(d, list) NSL_PP_IIF(NSL_PP_LIST_IS_CONS(list),NSL_PP_LIST_SIZE_S_D,NSL_PP_IDENTITY_N(0,2))(d,list)
#    define NSL_PP_LIST_SIZE_S_D(d,list) NSL_PP_LIST_SIZE_DO_D(d,NSL_PP_LIST_REST(list))
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_SIZE_DO_D(d, list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_LIST_SIZE_P, NSL_PP_LIST_SIZE_O, (1, list)))
# else
#    define NSL_PP_LIST_SIZE_DO_D(d, list) NSL_PP_LIST_SIZE_D_I(d, list)
#    define NSL_PP_LIST_SIZE_D_I(d, list) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_LIST_SIZE_P, NSL_PP_LIST_SIZE_O, (1, list)))
# endif
#
# endif
#
# endif
