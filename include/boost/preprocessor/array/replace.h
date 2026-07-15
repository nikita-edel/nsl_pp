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
# ifndef BOOST_PREPROCESSOR_ARRAY_REPLACE_H
# define BOOST_PREPROCESSOR_ARRAY_REPLACE_H
#
# include <boost/preprocessor/config/config.h>
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()
#
# include <boost/preprocessor/arithmetic/inc.h>
# include <boost/preprocessor/array/elem.h>
# include <boost/preprocessor/array/push_back.h>
# include <boost/preprocessor/comparison/not_equal.h>
# include <boost/preprocessor/config/config.h>
# include <boost/preprocessor/control/deduce_d.h>
# include <boost/preprocessor/control/iif.h>
# include <boost/preprocessor/control/while.h>
# include <boost/preprocessor/tuple/elem.h>
#
# /* BOOST_PP_ARRAY_REPLACE */
#
# define BOOST_PP_ARRAY_REPLACE(array, i, elem) BOOST_PP_ARRAY_REPLACE_I(BOOST_PP_DEDUCE_D(), array, i, elem)
# define BOOST_PP_ARRAY_REPLACE_I(d, array, i, elem) BOOST_PP_ARRAY_REPLACE_D(d, array, i, elem)
#
# /* BOOST_PP_ARRAY_REPLACE_D */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    define BOOST_PP_ARRAY_REPLACE_D(d, array, i, elem) BOOST_PP_TUPLE_ELEM(5, 3, BOOST_PP_WHILE_ ## d(BOOST_PP_ARRAY_REPLACE_P, BOOST_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# else
#    define BOOST_PP_ARRAY_REPLACE_D(d, array, i, elem) BOOST_PP_ARRAY_REPLACE_D_I(d, array, i, elem)
#    define BOOST_PP_ARRAY_REPLACE_D_I(d, array, i, elem) BOOST_PP_TUPLE_ELEM(5, 3, BOOST_PP_WHILE_ ## d(BOOST_PP_ARRAY_REPLACE_P, BOOST_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
#
# define BOOST_PP_ARRAY_REPLACE_P(d, state) BOOST_PP_NOT_EQUAL(BOOST_PP_TUPLE_ELEM(5, 0, state), BOOST_PP_ARRAY_SIZE(BOOST_PP_TUPLE_ELEM(5, 4, state)))
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()
#    define BOOST_PP_ARRAY_REPLACE_O(d, state) BOOST_PP_ARRAY_REPLACE_O_I state
# else
#    define BOOST_PP_ARRAY_REPLACE_O(d, state) BOOST_PP_ARRAY_REPLACE_O_I(BOOST_PP_TUPLE_ELEM(5, 0, state), BOOST_PP_TUPLE_ELEM(5, 1, state), BOOST_PP_TUPLE_ELEM(5, 2, state), BOOST_PP_TUPLE_ELEM(5, 3, state), BOOST_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define BOOST_PP_ARRAY_REPLACE_O_I(n, i, elem, res, arr) (BOOST_PP_INC(n), i, elem, BOOST_PP_ARRAY_PUSH_BACK(res, BOOST_PP_IIF(BOOST_PP_NOT_EQUAL(n, i), BOOST_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# else
#
# include <boost/preprocessor/arithmetic/inc.h>
# include <boost/preprocessor/array/elem.h>
# include <boost/preprocessor/array/push_back.h>
# include <boost/preprocessor/comparison/not_equal.h>
# include <boost/preprocessor/control/deduce_d.h>
# include <boost/preprocessor/control/iif.h>
# include <boost/preprocessor/control/while.h>
# if BOOST_PP_LIMIT_TUPLE == 256
# include <boost/preprocessor/logical/not.h>
# endif
# include <boost/preprocessor/tuple/elem.h>
#
# /* BOOST_PP_ARRAY_REPLACE */
#
# define BOOST_PP_ARRAY_REPLACE(array, i, elem) BOOST_PP_ARRAY_REPLACE_I(BOOST_PP_DEDUCE_D(), array, i, elem)
# define BOOST_PP_ARRAY_REPLACE_I(d, array, i, elem) BOOST_PP_ARRAY_REPLACE_D(d, array, i, elem)
#
# /* BOOST_PP_ARRAY_REPLACE_D */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
# if BOOST_PP_LIMIT_TUPLE == 256
#    define BOOST_PP_ARRAY_REPLACE_D(d, array, i, elem) BOOST_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, BOOST_PP_NOT(i))
# else
#    define BOOST_PP_ARRAY_REPLACE_D(d, array, i, elem) BOOST_PP_TUPLE_ELEM(5, 3, BOOST_PP_WHILE_ ## d(BOOST_PP_ARRAY_REPLACE_P, BOOST_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
# else
#    define BOOST_PP_ARRAY_REPLACE_D(d, array, i, elem) BOOST_PP_ARRAY_REPLACE_D_I(d, array, i, elem)
# if BOOST_PP_LIMIT_TUPLE == 256
#    define BOOST_PP_ARRAY_REPLACE_D_I(d, array, i, elem) BOOST_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, BOOST_PP_NOT(i))
# else
#    define BOOST_PP_ARRAY_REPLACE_D_I(d, array, i, elem) BOOST_PP_TUPLE_ELEM(5, 3, BOOST_PP_WHILE_ ## d(BOOST_PP_ARRAY_REPLACE_P, BOOST_PP_ARRAY_REPLACE_O, (0, i, elem, (0, ()), array)))
# endif
# endif
#
# if BOOST_PP_LIMIT_TUPLE == 256
# define BOOST_PP_ARRAY_REPLACE_ZERO_D(d, array, i, elem, zero) \
         BOOST_PP_TUPLE_ELEM(5, 3, BOOST_PP_WHILE_ ## d(BOOST_PP_ARRAY_REPLACE_P, BOOST_PP_ARRAY_REPLACE_O, \
         (1, i, elem, BOOST_PP_IIF(zero,(1, (elem)),(1, (BOOST_PP_ARRAY_ELEM(0,array)))), array)))
# endif
#
# define BOOST_PP_ARRAY_REPLACE_P(d, state) BOOST_PP_NOT_EQUAL(BOOST_PP_TUPLE_ELEM(5, 0, state), BOOST_PP_ARRAY_SIZE(BOOST_PP_TUPLE_ELEM(5, 4, state)))
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()
#    define BOOST_PP_ARRAY_REPLACE_O(d, state) BOOST_PP_ARRAY_REPLACE_O_I state
# else
#    define BOOST_PP_ARRAY_REPLACE_O(d, state) BOOST_PP_ARRAY_REPLACE_O_I(BOOST_PP_TUPLE_ELEM(5, 0, state), BOOST_PP_TUPLE_ELEM(5, 1, state), BOOST_PP_TUPLE_ELEM(5, 2, state), BOOST_PP_TUPLE_ELEM(5, 3, state), BOOST_PP_TUPLE_ELEM(5, 4, state))
# endif
#
# define BOOST_PP_ARRAY_REPLACE_O_I(n, i, elem, res, arr) (BOOST_PP_INC(n), i, elem, BOOST_PP_ARRAY_PUSH_BACK(res, BOOST_PP_IIF(BOOST_PP_NOT_EQUAL(n, i), BOOST_PP_ARRAY_ELEM(n, arr), elem)), arr)
#
# endif
#
# endif
