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
# ifndef NSL_PREPROCESSOR_ARITHMETIC_MUL_H
# define NSL_PREPROCESSOR_ARITHMETIC_MUL_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# include "nsl/preprocessor/arithmetic/add.h"
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_MUL */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_MUL(x, y) NSL_PP_TUPLE_ELEM(3, 0, NSL_PP_WHILE(NSL_PP_MUL_P, NSL_PP_MUL_O, (0, x, y)))
# else
#    define NSL_PP_MUL(x, y) NSL_PP_MUL_I(x, y)
#    define NSL_PP_MUL_I(x, y) NSL_PP_TUPLE_ELEM(3, 0, NSL_PP_WHILE(NSL_PP_MUL_P, NSL_PP_MUL_O, (0, x, y)))
# endif
#
# define NSL_PP_MUL_P(d, rxy) NSL_PP_TUPLE_ELEM(3, 2, rxy)
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_MUL_O(d, rxy) NSL_PP_MUL_O_IM(d, NSL_PP_TUPLE_REM_3 rxy)
#    define NSL_PP_MUL_O_IM(d, im) NSL_PP_MUL_O_I(d, im)
# else
#    define NSL_PP_MUL_O(d, rxy) NSL_PP_MUL_O_I(d, NSL_PP_TUPLE_ELEM(3, 0, rxy), NSL_PP_TUPLE_ELEM(3, 1, rxy), NSL_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define NSL_PP_MUL_O_I(d, r, x, y) (NSL_PP_ADD_D(d, r, x), x, NSL_PP_DEC(y))
#
# /* NSL_PP_MUL_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_MUL_D(d, x, y) NSL_PP_TUPLE_ELEM(3, 0, NSL_PP_WHILE_ ## d(NSL_PP_MUL_P, NSL_PP_MUL_O, (0, x, y)))
# else
#    define NSL_PP_MUL_D(d, x, y) NSL_PP_MUL_D_I(d, x, y)
#    define NSL_PP_MUL_D_I(d, x, y) NSL_PP_TUPLE_ELEM(3, 0, NSL_PP_WHILE_ ## d(NSL_PP_MUL_P, NSL_PP_MUL_O, (0, x, y)))
# endif
#
# else
#
# include "nsl/preprocessor/arithmetic/add.h"
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/facilities/identity.h"
# include "nsl/preprocessor/logical/bitand.h"
# include "nsl/preprocessor/logical/bool.h"
# include "nsl/preprocessor/logical/compl.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
# include "nsl/preprocessor/arithmetic/detail/is_minimum_number.h"
# include "nsl/preprocessor/arithmetic/detail/is_maximum_number.h"
# include "nsl/preprocessor/arithmetic/detail/is_1_number.h"
#
# /* NSL_PP_MUL */
#
#    define NSL_PP_MUL(x, y) NSL_PP_IIF(NSL_PP_DETAIL_IS_MINIMUM_NUMBER(x),NSL_PP_IDENTITY_N(x,2),NSL_PP_MUL_CHECK_1X)(x,y)
#
#    define NSL_PP_MUL_CHECK_1X(x, y) NSL_PP_IIF(NSL_PP_DETAIL_IS_1_NUMBER(x),NSL_PP_IDENTITY_N(y,2),NSL_PP_MUL_DO)(x,y)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_MUL_DO(x, y) NSL_PP_TUPLE_ELEM(3, 0, NSL_PP_WHILE(NSL_PP_MUL_P, NSL_PP_MUL_O, (0, x, y)))
# else
#    define NSL_PP_MUL_DO(x, y) NSL_PP_MUL_I(x, y)
#    define NSL_PP_MUL_I(x, y) NSL_PP_TUPLE_ELEM(3, 0, NSL_PP_WHILE(NSL_PP_MUL_P, NSL_PP_MUL_O, (0, x, y)))
# endif
#
# define NSL_PP_MUL_P(d, rxy) NSL_PP_BITAND(NSL_PP_BOOL(NSL_PP_TUPLE_ELEM(3, 2, rxy)),NSL_PP_COMPL(NSL_PP_DETAIL_IS_MAXIMUM_NUMBER(NSL_PP_TUPLE_ELEM(3, 0, rxy))))
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_MUL_O(d, rxy) NSL_PP_MUL_O_IM(d, NSL_PP_TUPLE_REM_3 rxy)
#    define NSL_PP_MUL_O_IM(d, im) NSL_PP_MUL_O_I(d, im)
# else
#    define NSL_PP_MUL_O(d, rxy) NSL_PP_MUL_O_I(d, NSL_PP_TUPLE_ELEM(3, 0, rxy), NSL_PP_TUPLE_ELEM(3, 1, rxy), NSL_PP_TUPLE_ELEM(3, 2, rxy))
# endif
#
# define NSL_PP_MUL_O_I(d, r, x, y) (NSL_PP_ADD_D(d, r, x), x, NSL_PP_DEC(y))
#
# /* NSL_PP_MUL_D */
#
#    define NSL_PP_MUL_D(d, x, y) NSL_PP_IIF(NSL_PP_DETAIL_IS_MINIMUM_NUMBER(x),NSL_PP_IDENTITY_N(x,3),NSL_PP_MUL_CHECK_1X_D)(d,x,y)
#
#    define NSL_PP_MUL_CHECK_1X_D(d, x, y) NSL_PP_IIF(NSL_PP_DETAIL_IS_1_NUMBER(x),NSL_PP_IDENTITY_N(y,3),NSL_PP_MUL_DO_D)(d,x,y)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_MUL_DO_D(d, x, y) NSL_PP_TUPLE_ELEM(3, 0, NSL_PP_WHILE_ ## d(NSL_PP_MUL_P, NSL_PP_MUL_O, (0, x, y)))
# else
#    define NSL_PP_MUL_DO_D(d, x, y) NSL_PP_MUL_D_I(d, x, y)
#    define NSL_PP_MUL_D_I(d, x, y) NSL_PP_TUPLE_ELEM(3, 0, NSL_PP_WHILE_ ## d(NSL_PP_MUL_P, NSL_PP_MUL_O, (0, x, y)))
# endif
#
# endif
#
# endif
