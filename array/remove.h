# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_ARRAY_REMOVE_H
# define NSL_PREPROCESSOR_ARRAY_REMOVE_H
#
# include <nsl/preprocessor/config/config.h>
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# include <nsl/preprocessor/arithmetic/inc.h>
# include <nsl/preprocessor/array/elem.h>
# include <nsl/preprocessor/array/push_back.h>
# include <nsl/preprocessor/array/size.h>
# include <nsl/preprocessor/comparison/not_equal.h>
# include <nsl/preprocessor/control/deduce_d.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/control/while.h>
# include <nsl/preprocessor/tuple/eat.h>
# include <nsl/preprocessor/tuple/elem.h>
#
# /* NSL_PP_ARRAY_REMOVE */
#
# define NSL_PP_ARRAY_REMOVE(array, i) NSL_PP_ARRAY_REMOVE_I(NSL_PP_DEDUCE_D(), array, i)
# define NSL_PP_ARRAY_REMOVE_I(d, array, i) NSL_PP_ARRAY_REMOVE_D(d, array, i)
#
# /* NSL_PP_ARRAY_REMOVE_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ARRAY_REMOVE_D(d, array, i) NSL_PP_TUPLE_ELEM(4, 2, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REMOVE_P, NSL_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# else
#    define NSL_PP_ARRAY_REMOVE_D(d, array, i) NSL_PP_ARRAY_REMOVE_D_I(d, array, i)
#    define NSL_PP_ARRAY_REMOVE_D_I(d, array, i) NSL_PP_TUPLE_ELEM(4, 2, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REMOVE_P, NSL_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# endif
#
# define NSL_PP_ARRAY_REMOVE_P(d, st) NSL_PP_NOT_EQUAL(NSL_PP_TUPLE_ELEM(4, 0, st), NSL_PP_ARRAY_SIZE(NSL_PP_TUPLE_ELEM(4, 3, st)))
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_ARRAY_REMOVE_O(d, st) NSL_PP_ARRAY_REMOVE_O_I st
# else
#    define NSL_PP_ARRAY_REMOVE_O(d, st) NSL_PP_ARRAY_REMOVE_O_I(NSL_PP_TUPLE_ELEM(4, 0, st), NSL_PP_TUPLE_ELEM(4, 1, st), NSL_PP_TUPLE_ELEM(4, 2, st), NSL_PP_TUPLE_ELEM(4, 3, st))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_DMC()
#    define NSL_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (NSL_PP_INC(n), i, NSL_PP_IIF(NSL_PP_NOT_EQUAL(n, i), NSL_PP_ARRAY_PUSH_BACK, res NSL_PP_TUPLE_EAT_2)(res, NSL_PP_ARRAY_ELEM(n, arr)), arr)
# else
#    define NSL_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (NSL_PP_INC(n), i, NSL_PP_IIF(NSL_PP_NOT_EQUAL(n, i), NSL_PP_ARRAY_PUSH_BACK, NSL_PP_TUPLE_ELEM_2_0)(res, NSL_PP_ARRAY_ELEM(n, arr)), arr)
# endif
#
# else
#
# include <nsl/preprocessor/arithmetic/inc.h>
# include <nsl/preprocessor/array/elem.h>
# include <nsl/preprocessor/array/push_back.h>
# include <nsl/preprocessor/array/size.h>
# include <nsl/preprocessor/comparison/not_equal.h>
# include <nsl/preprocessor/control/deduce_d.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/control/while.h>
# if NSL_PP_LIMIT_TUPLE == 256
# include <nsl/preprocessor/logical/not.h>
# endif
# include <nsl/preprocessor/tuple/eat.h>
# include <nsl/preprocessor/tuple/elem.h>
#
# /* NSL_PP_ARRAY_REMOVE */
#
# define NSL_PP_ARRAY_REMOVE(array, i) NSL_PP_ARRAY_REMOVE_I(NSL_PP_DEDUCE_D(), array, i)
# define NSL_PP_ARRAY_REMOVE_I(d, array, i) NSL_PP_ARRAY_REMOVE_D(d, array, i)
#
# /* NSL_PP_ARRAY_REMOVE_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
# if NSL_PP_LIMIT_TUPLE == 256
#    define NSL_PP_ARRAY_REMOVE_D(d, array, i) NSL_PP_ARRAY_REMOVE_ZERO_D(d, array, i, NSL_PP_NOT(i))
# else
#    define NSL_PP_ARRAY_REMOVE_D(d, array, i) NSL_PP_TUPLE_ELEM(4, 2, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REMOVE_P, NSL_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# endif
# else
#    define NSL_PP_ARRAY_REMOVE_D(d, array, i) NSL_PP_ARRAY_REMOVE_D_I(d, array, i)
# if NSL_PP_LIMIT_TUPLE == 256
#    define NSL_PP_ARRAY_REMOVE_D_I(d, array, i) NSL_PP_ARRAY_REMOVE_ZERO_D(d, array, i, NSL_PP_NOT(i))
# else
#    define NSL_PP_ARRAY_REMOVE_D_I(d, array, i) NSL_PP_TUPLE_ELEM(4, 2, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REMOVE_P, NSL_PP_ARRAY_REMOVE_O, (0, i, (0, ()), array)))
# endif
# endif
#
# if NSL_PP_LIMIT_TUPLE == 256
# define NSL_PP_ARRAY_REMOVE_ZERO_D(d, array, i, zero) \
         NSL_PP_TUPLE_ELEM(4, 2, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REMOVE_P, NSL_PP_ARRAY_REMOVE_O, \
         (1, i, NSL_PP_IIF(zero,(0, ()),(1, (NSL_PP_ARRAY_ELEM(0,array)))), array)))
# endif
#
# define NSL_PP_ARRAY_REMOVE_P(d, st) NSL_PP_NOT_EQUAL(NSL_PP_TUPLE_ELEM(4, 0, st), NSL_PP_ARRAY_SIZE(NSL_PP_TUPLE_ELEM(4, 3, st)))
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_ARRAY_REMOVE_O(d, st) NSL_PP_ARRAY_REMOVE_O_I st
# else
#    define NSL_PP_ARRAY_REMOVE_O(d, st) NSL_PP_ARRAY_REMOVE_O_I(NSL_PP_TUPLE_ELEM(4, 0, st), NSL_PP_TUPLE_ELEM(4, 1, st), NSL_PP_TUPLE_ELEM(4, 2, st), NSL_PP_TUPLE_ELEM(4, 3, st))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_DMC()
#    define NSL_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (NSL_PP_INC(n), i, NSL_PP_IIF(NSL_PP_NOT_EQUAL(n, i), NSL_PP_ARRAY_PUSH_BACK, res NSL_PP_TUPLE_EAT_2)(res, NSL_PP_ARRAY_ELEM(n, arr)), arr)
# else
#    define NSL_PP_ARRAY_REMOVE_O_I(n, i, res, arr) (NSL_PP_INC(n), i, NSL_PP_IIF(NSL_PP_NOT_EQUAL(n, i), NSL_PP_ARRAY_PUSH_BACK, NSL_PP_TUPLE_ELEM_2_0)(res, NSL_PP_ARRAY_ELEM(n, arr)), arr)
# endif
#
# endif
#
# endif
