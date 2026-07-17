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
# ifndef NSL_PREPROCESSOR_SEQ_FILTER_H
# define NSL_PREPROCESSOR_SEQ_FILTER_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/expr_if.h"
# include "nsl/preprocessor/facilities/empty.h"
# include "nsl/preprocessor/seq/fold_left.h"
# include "nsl/preprocessor/seq/seq.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_SEQ_FILTER */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_FILTER(pred, data, seq) NSL_PP_SEQ_TAIL(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_SEQ_FOLD_LEFT(NSL_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# else
#    define NSL_PP_SEQ_FILTER(pred, data, seq) NSL_PP_SEQ_FILTER_I(pred, data, seq)
#    define NSL_PP_SEQ_FILTER_I(pred, data, seq) NSL_PP_SEQ_TAIL(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_SEQ_FOLD_LEFT(NSL_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# endif
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_SEQ_FILTER_O(s, st, elem) NSL_PP_SEQ_FILTER_O_IM(s, NSL_PP_TUPLE_REM_3 st, elem)
#    define NSL_PP_SEQ_FILTER_O_IM(s, im, elem) NSL_PP_SEQ_FILTER_O_I(s, im, elem)
# else
#    define NSL_PP_SEQ_FILTER_O(s, st, elem) NSL_PP_SEQ_FILTER_O_I(s, NSL_PP_TUPLE_ELEM(3, 0, st), NSL_PP_TUPLE_ELEM(3, 1, st), NSL_PP_TUPLE_ELEM(3, 2, st), elem)
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_DMC()
#   define NSL_PP_SEQ_FILTER_O_I(s, pred, data, res, elem) (pred, data, res NSL_PP_EXPR_IF(pred(s, data, elem), (elem)))
# else
#   define NSL_PP_SEQ_FILTER_O_I(s, pred, data, res, elem) (pred, data, res NSL_PP_EXPR_IF(pred##(s, data, elem), (elem)))
# endif
#
# /* NSL_PP_SEQ_FILTER_S */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_FILTER_S(s, pred, data, seq) NSL_PP_SEQ_TAIL(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_SEQ_FOLD_LEFT_ ## s(NSL_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# else
#    define NSL_PP_SEQ_FILTER_S(s, pred, data, seq) NSL_PP_SEQ_FILTER_S_I(s, pred, data, seq)
#    define NSL_PP_SEQ_FILTER_S_I(s, pred, data, seq) NSL_PP_SEQ_TAIL(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_SEQ_FOLD_LEFT_ ## s(NSL_PP_SEQ_FILTER_O, (pred, data, (nil)), seq)))
# endif
#
# endif
