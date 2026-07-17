# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_ARRAY_REPLACE_H
# define NSL_PREPROCESSOR_ARRAY_REPLACE_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/array/elem.h"
# include "nsl/preprocessor/array/push_back.h"
# include "nsl/preprocessor/comparison/not_equal.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/deduce_d.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* NSL_PP_ARRAY_REPLACE */
#
# define NSL_PP_ARRAY_REPLACE(array, i, elem) NSL_PP_ARRAY_REPLACE_I(NSL_PP_DEDUCE_D(), array, i, elem)
# define NSL_PP_ARRAY_REPLACE_I(d, array, i, elem) NSL_PP_ARRAY_REPLACE_D(d, array, i, elem)
#
# /* NSL_PP_ARRAY_REPLACE_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ARRAY_REPLACE_D(d, array, i, elem) NSL_PP_TUPLE_ELEM(5, 3, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REPLACE_P, NSL_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# else
#    define NSL_PP_ARRAY_REPLACE_D(d, array, i, elem) NSL_PP_ARRAY_REPLACE_D_I(d, array, i, elem)
#    define NSL_PP_ARRAY_REPLACE_D_I(d, array, i, elem) NSL_PP_TUPLE_ELEM(5, 3, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REPLACE_P, NSL_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
#
# define NSL_PP_ARRAY_REPLACE_P(d, state) NSL_PP_NOT_EQUAL(NSL_PP_TUPLE_ELEM(5, 0, state), NSL_PP_ARRAY_SIZE(NSL_PP_TUPLE_ELEM(5, 4, state)))
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_ARRAY_REPLACE_O(d, state) NSL_PP_ARRAY_REPLACE_O_I state
# else
#    define NSL_PP_ARRAY_REPLACE_O(d, state) NSL_PP_ARRAY_REPLACE_O_I(NSL_PP_TUPLE_ELEM(5, 0, state), NSL_PP_TUPLE_ELEM(5, 1, state), NSL_PP_TUPLE_ELEM(5, 2, state), NSL_PP_TUPLE_ELEM(5, 3, state), NSL_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define NSL_PP_ARRAY_REPLACE_O_I(n, i, elem, res, arr) (NSL_PP_INC(n), i, elem, NSL_PP_ARRAY_PUSH_BACK(res, NSL_PP_IIF(NSL_PP_NOT_EQUAL(n, i), NSL_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# else
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/array/elem.h"
# include "nsl/preprocessor/array/push_back.h"
# include "nsl/preprocessor/comparison/not_equal.h"
# include "nsl/preprocessor/control/deduce_d.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/control/while.h"
# if NSL_PP_LIMIT_TUPLE == 256
# include "nsl/preprocessor/logical/not.h"
# endif
# include "nsl/preprocessor/tuple/elem.h"
#
# /* NSL_PP_ARRAY_REPLACE */
#
# define NSL_PP_ARRAY_REPLACE(array, i, elem) NSL_PP_ARRAY_REPLACE_I(NSL_PP_DEDUCE_D(), array, i, elem)
# define NSL_PP_ARRAY_REPLACE_I(d, array, i, elem) NSL_PP_ARRAY_REPLACE_D(d, array, i, elem)
#
# /* NSL_PP_ARRAY_REPLACE_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
# if NSL_PP_LIMIT_TUPLE == 256
#    define NSL_PP_ARRAY_REPLACE_D(d, array, i, elem) NSL_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, NSL_PP_NOT(i))
# else
#    define NSL_PP_ARRAY_REPLACE_D(d, array, i, elem) NSL_PP_TUPLE_ELEM(5, 3, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REPLACE_P, NSL_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
# else
#    define NSL_PP_ARRAY_REPLACE_D(d, array, i, elem) NSL_PP_ARRAY_REPLACE_D_I(d, array, i, elem)
# if NSL_PP_LIMIT_TUPLE == 256
#    define NSL_PP_ARRAY_REPLACE_D_I(d, array, i, elem) NSL_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, NSL_PP_NOT(i))
# else
#    define NSL_PP_ARRAY_REPLACE_D_I(d, array, i, elem) NSL_PP_TUPLE_ELEM(5, 3, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REPLACE_P, NSL_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
# endif
#
# if NSL_PP_LIMIT_TUPLE == 256
# define NSL_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, zero) \
         NSL_PP_TUPLE_ELEM(5, 3, NSL_PP_WHILE_ ## d(NSL_PP_ARRAY_REPLACE_P, NSL_PP_ARRAY_REPLACE_O, \
         (1, i, elem, NSL_PP_IIF(zero,(1, (elem)),(1, (NSL_PP_ARRAY_ELEM(0,array)))), array)))
# endif
#
# define NSL_PP_ARRAY_REPLACE_P(d, state) NSL_PP_NOT_EQUAL(NSL_PP_TUPLE_ELEM(5, 0, state), NSL_PP_ARRAY_SIZE(NSL_PP_TUPLE_ELEM(5, 4, state)))
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_ARRAY_REPLACE_O(d, state) NSL_PP_ARRAY_REPLACE_O_I state
# else
#    define NSL_PP_ARRAY_REPLACE_O(d, state) NSL_PP_ARRAY_REPLACE_O_I(NSL_PP_TUPLE_ELEM(5, 0, state), NSL_PP_TUPLE_ELEM(5, 1, state), NSL_PP_TUPLE_ELEM(5, 2, state), NSL_PP_TUPLE_ELEM(5, 3, state), NSL_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define NSL_PP_ARRAY_REPLACE_O_I(n, i, elem, res, arr) (NSL_PP_INC(n), i, elem, NSL_PP_ARRAY_PUSH_BACK(res, NSL_PP_IIF(NSL_PP_NOT_EQUAL(n, i), NSL_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# endif
#
# endif
