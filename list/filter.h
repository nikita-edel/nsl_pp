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
# ifndef NSL_PREPROCESSOR_LIST_FILTER_H
# define NSL_PREPROCESSOR_LIST_FILTER_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/list/fold_right.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_LIST_FILTER */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FILTER(pred, data, list) NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_LIST_FOLD_RIGHT(NSL_PP_LIST_FILTER_O, (pred, data, NSL_PP_NIL), list))
# else
#    define NSL_PP_LIST_FILTER(pred, data, list) NSL_PP_LIST_FILTER_I(pred, data, list)
#    define NSL_PP_LIST_FILTER_I(pred, data, list) NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_LIST_FOLD_RIGHT(NSL_PP_LIST_FILTER_O, (pred, data, NSL_PP_NIL), list))
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FILTER_O(d, pdr, elem) NSL_PP_LIST_FILTER_O_D(d, NSL_PP_TUPLE_ELEM(3, 0, pdr), NSL_PP_TUPLE_ELEM(3, 1, pdr), NSL_PP_TUPLE_ELEM(3, 2, pdr), elem)
# else
#    define NSL_PP_LIST_FILTER_O(d, pdr, elem) NSL_PP_LIST_FILTER_O_I(d, NSL_PP_TUPLE_REM_3 pdr, elem)
#    define NSL_PP_LIST_FILTER_O_I(d, im, elem) NSL_PP_LIST_FILTER_O_D(d, im, elem)
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_DMC()
#    define NSL_PP_LIST_FILTER_O_D(d, pred, data, res, elem) (pred, data, NSL_PP_IF(pred(d, data, elem), (elem, res), res))
# else
#    define NSL_PP_LIST_FILTER_O_D(d, pred, data, res, elem) (pred, data, NSL_PP_IF(pred##(d, data, elem), (elem, res), res))
# endif
#
# /* NSL_PP_LIST_FILTER_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FILTER_D(d, pred, data, list) NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_LIST_FOLD_RIGHT_ ## d(NSL_PP_LIST_FILTER_O, (pred, data, NSL_PP_NIL), list))
# else
#    define NSL_PP_LIST_FILTER_D(d, pred, data, list) NSL_PP_LIST_FILTER_D_I(d, pred, data, list)
#    define NSL_PP_LIST_FILTER_D_I(d, pred, data, list) NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_LIST_FOLD_RIGHT_ ## d(NSL_PP_LIST_FILTER_O, (pred, data, NSL_PP_NIL), list))
# endif
#
# endif
