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
# ifndef NSL_PREPROCESSOR_LIST_TRANSFORM_H
# define NSL_PREPROCESSOR_LIST_TRANSFORM_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/list/fold_right.h>
# include <nsl/preprocessor/tuple/elem.h>
# include <nsl/preprocessor/tuple/rem.h>
#
# /* NSL_PP_LIST_TRANSFORM */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_TRANSFORM(op, data, list) NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_LIST_FOLD_RIGHT(NSL_PP_LIST_TRANSFORM_O, (op, data, NSL_PP_NIL), list))
# else
#    define NSL_PP_LIST_TRANSFORM(op, data, list) NSL_PP_LIST_TRANSFORM_I(op, data, list)
#    define NSL_PP_LIST_TRANSFORM_I(op, data, list) NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_LIST_FOLD_RIGHT(NSL_PP_LIST_TRANSFORM_O, (op, data, NSL_PP_NIL), list))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_TRANSFORM_O(d, odr, elem) NSL_PP_LIST_TRANSFORM_O_D(d, NSL_PP_TUPLE_ELEM(3, 0, odr), NSL_PP_TUPLE_ELEM(3, 1, odr), NSL_PP_TUPLE_ELEM(3, 2, odr), elem)
# else
#    define NSL_PP_LIST_TRANSFORM_O(d, odr, elem) NSL_PP_LIST_TRANSFORM_O_I(d, NSL_PP_TUPLE_REM_3 odr, elem)
#    define NSL_PP_LIST_TRANSFORM_O_I(d, im, elem) NSL_PP_LIST_TRANSFORM_O_D(d, im, elem)
# endif
#
# define NSL_PP_LIST_TRANSFORM_O_D(d, op, data, res, elem) (op, data, (op(d, data, elem), res))
#
# /* NSL_PP_LIST_TRANSFORM_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_TRANSFORM_D(d, op, data, list) NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_LIST_FOLD_RIGHT_ ## d(NSL_PP_LIST_TRANSFORM_O, (op, data, NSL_PP_NIL), list))
# else
#    define NSL_PP_LIST_TRANSFORM_D(d, op, data, list) NSL_PP_LIST_TRANSFORM_D_I(d, op, data, list)
#    define NSL_PP_LIST_TRANSFORM_D_I(d, op, data, list) NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_LIST_FOLD_RIGHT_ ## d(NSL_PP_LIST_TRANSFORM_O, (op, data, NSL_PP_NIL), list))
# endif
#
# endif
