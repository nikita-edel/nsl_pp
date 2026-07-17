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
# ifndef NSL_PREPROCESSOR_SEQ_TRANSFORM_H
# define NSL_PREPROCESSOR_SEQ_TRANSFORM_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/seq/fold_left.h"
# include "nsl/preprocessor/seq/seq.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_SEQ_TRANSFORM */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_TRANSFORM(op, data, seq) NSL_PP_SEQ_TAIL(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_SEQ_FOLD_LEFT(NSL_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# else
#    define NSL_PP_SEQ_TRANSFORM(op, data, seq) NSL_PP_SEQ_TRANSFORM_I(op, data, seq)
#    define NSL_PP_SEQ_TRANSFORM_I(op, data, seq) NSL_PP_SEQ_TAIL(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_SEQ_FOLD_LEFT(NSL_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# endif
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_SEQ_TRANSFORM_O(s, state, elem) NSL_PP_SEQ_TRANSFORM_O_IM(s, NSL_PP_TUPLE_REM_3 state, elem)
#    define NSL_PP_SEQ_TRANSFORM_O_IM(s, im, elem) NSL_PP_SEQ_TRANSFORM_O_I(s, im, elem)
# else
#    define NSL_PP_SEQ_TRANSFORM_O(s, state, elem) NSL_PP_SEQ_TRANSFORM_O_I(s, NSL_PP_TUPLE_ELEM(3, 0, state), NSL_PP_TUPLE_ELEM(3, 1, state), NSL_PP_TUPLE_ELEM(3, 2, state), elem)
# endif
#
# define NSL_PP_SEQ_TRANSFORM_O_I(s, op, data, res, elem) (op, data, res (op(s, data, elem)))
#
# /* NSL_PP_SEQ_TRANSFORM_S */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_TRANSFORM_S(s, op, data, seq) NSL_PP_SEQ_TAIL(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_SEQ_FOLD_LEFT_ ## s(NSL_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# else
#    define NSL_PP_SEQ_TRANSFORM_S(s, op, data, seq) NSL_PP_SEQ_TRANSFORM_S_I(s, op, data, seq)
#    define NSL_PP_SEQ_TRANSFORM_S_I(s, op, data, seq) NSL_PP_SEQ_TAIL(NSL_PP_TUPLE_ELEM(3, 2, NSL_PP_SEQ_FOLD_LEFT_ ## s(NSL_PP_SEQ_TRANSFORM_O, (op, data, (nil)), seq)))
# endif
#
# endif
