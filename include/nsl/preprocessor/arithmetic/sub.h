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
# ifndef NSL_PREPROCESSOR_ARITHMETIC_SUB_H
# define NSL_PREPROCESSOR_ARITHMETIC_SUB_H
#
# include <nsl/preprocessor/config/config.h>
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/control/while.h>
# include <nsl/preprocessor/tuple/elem.h>
#
# /* NSL_PP_SUB */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SUB(x, y) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_SUB_P, NSL_PP_SUB_O, (x, y)))
# else
#    define NSL_PP_SUB(x, y) NSL_PP_SUB_I(x, y)
#    define NSL_PP_SUB_I(x, y) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_SUB_P, NSL_PP_SUB_O, (x, y)))
# endif
#
# define NSL_PP_SUB_P(d, xy) NSL_PP_TUPLE_ELEM(2, 1, xy)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_SUB_O(d, xy) NSL_PP_SUB_O_I xy
# else
#    define NSL_PP_SUB_O(d, xy) NSL_PP_SUB_O_I(NSL_PP_TUPLE_ELEM(2, 0, xy), NSL_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define NSL_PP_SUB_O_I(x, y) (NSL_PP_DEC(x), NSL_PP_DEC(y))
#
# /* NSL_PP_SUB_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SUB_D(d, x, y) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_SUB_P, NSL_PP_SUB_O, (x, y)))
# else
#    define NSL_PP_SUB_D(d, x, y) NSL_PP_SUB_D_I(d, x, y)
#    define NSL_PP_SUB_D_I(d, x, y) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_SUB_P, NSL_PP_SUB_O, (x, y)))
# endif
#
# else
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/control/while.h>
# include <nsl/preprocessor/facilities/identity.h>
# include <nsl/preprocessor/logical/and.h>
# include <nsl/preprocessor/logical/bitor.h>
# include <nsl/preprocessor/tuple/elem.h>
# include <nsl/preprocessor/arithmetic/detail/is_maximum_number.h>
# include <nsl/preprocessor/arithmetic/detail/is_minimum_number.h>
#
# /* NSL_PP_SUB */
#
#    define NSL_PP_SUB(x, y) NSL_PP_IIF(NSL_PP_BITOR(NSL_PP_DETAIL_IS_MAXIMUM_NUMBER(y),NSL_PP_DETAIL_IS_MINIMUM_NUMBER(x)),NSL_PP_IDENTITY_N(0,2),NSL_PP_SUB_DO)(x,y)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SUB_DO(x, y) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_SUB_P, NSL_PP_SUB_O, (x, y)))
# else
#    define NSL_PP_SUB_DO(x, y) NSL_PP_SUB_I(x, y)
#    define NSL_PP_SUB_I(x, y) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE(NSL_PP_SUB_P, NSL_PP_SUB_O, (x, y)))
# endif
#
# define NSL_PP_SUB_P(d, xy) NSL_PP_AND(NSL_PP_TUPLE_ELEM(2, 1, xy),NSL_PP_TUPLE_ELEM(2, 0, xy))
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_SUB_O(d, xy) NSL_PP_SUB_O_I xy
# else
#    define NSL_PP_SUB_O(d, xy) NSL_PP_SUB_O_I(NSL_PP_TUPLE_ELEM(2, 0, xy), NSL_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define NSL_PP_SUB_O_I(x, y) (NSL_PP_DEC(x), NSL_PP_DEC(y))
#
# /* NSL_PP_SUB_D */
#
#    define NSL_PP_SUB_D(d, x, y) NSL_PP_IIF(NSL_PP_BITOR(NSL_PP_DETAIL_IS_MAXIMUM_NUMBER(y),NSL_PP_DETAIL_IS_MINIMUM_NUMBER(x)),NSL_PP_IDENTITY_N(0,3),NSL_PP_SUB_DO_D)(d,x,y)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SUB_DO_D(d, x, y) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_SUB_P, NSL_PP_SUB_O, (x, y)))
# else
#    define NSL_PP_SUB_DO_D(d, x, y) NSL_PP_SUB_D_I(d, x, y)
#    define NSL_PP_SUB_D_I(d, x, y) NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_WHILE_ ## d(NSL_PP_SUB_P, NSL_PP_SUB_O, (x, y)))
# endif
#
# endif
#
# endif
