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
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_ARITHMETIC_MOD_H
# define NSL_PREPROCESSOR_ARITHMETIC_MOD_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# include "nsl/preprocessor/arithmetic/detail/div_base.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* NSL_PP_MOD */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_MOD(x, y) NSL_PP_TUPLE_ELEM(3, 1, NSL_PP_DIV_BASE(x, y))
# else
#    define NSL_PP_MOD(x, y) NSL_PP_MOD_I(x, y)
#    define NSL_PP_MOD_I(x, y) NSL_PP_TUPLE_ELEM(3, 1, NSL_PP_DIV_BASE(x, y))
# endif
#
# /* NSL_PP_MOD_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_MOD_D(d, x, y) NSL_PP_TUPLE_ELEM(3, 1, NSL_PP_DIV_BASE_D(d, x, y))
# else
#    define NSL_PP_MOD_D(d, x, y) NSL_PP_MOD_D_I(d, x, y)
#    define NSL_PP_MOD_D_I(d, x, y) NSL_PP_TUPLE_ELEM(3, 1, NSL_PP_DIV_BASE_D(d, x, y))
# endif
#
# else
#
# include "nsl/preprocessor/arithmetic/detail/div_base.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/facilities/identity.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/arithmetic/detail/is_1_number.h"
#
# /* NSL_PP_MOD */
#
#    define NSL_PP_MOD(x, y) NSL_PP_IIF(NSL_PP_DETAIL_IS_1_NUMBER(y),NSL_PP_IDENTITY_N(0,2),NSL_PP_MOD_DO)(x,y)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_MOD_DO(x, y) NSL_PP_TUPLE_ELEM(3, 1, NSL_PP_DIV_BASE(x, y))
# else
#    define NSL_PP_MOD_DO(x, y) NSL_PP_MOD_I(x, y)
#    define NSL_PP_MOD_I(x, y) NSL_PP_TUPLE_ELEM(3, 1, NSL_PP_DIV_BASE(x, y))
# endif
#
# /* NSL_PP_MOD_D */
#
#    define NSL_PP_MOD_D(d, x, y) NSL_PP_IIF(NSL_PP_DETAIL_IS_1_NUMBER(y),NSL_PP_IDENTITY_N(0,3),NSL_PP_MOD_DO_D)(d,x,y)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_MOD_DO_D(d, x, y) NSL_PP_TUPLE_ELEM(3, 1, NSL_PP_DIV_BASE_D(d, x, y))
# else
#    define NSL_PP_MOD_DO_D(d, x, y) NSL_PP_MOD_D_I(d, x, y)
#    define NSL_PP_MOD_D_I(d, x, y) NSL_PP_TUPLE_ELEM(3, 1, NSL_PP_DIV_BASE_D(d, x, y))
# endif
#
# endif
#
# endif
