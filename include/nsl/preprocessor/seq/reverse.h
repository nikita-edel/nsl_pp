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
# ifndef NSL_PREPROCESSOR_SEQ_REVERSE_H
# define NSL_PREPROCESSOR_SEQ_REVERSE_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/facilities/empty.h"
# include "nsl/preprocessor/seq/fold_left.h"
#
# /* NSL_PP_SEQ_REVERSE */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_REVERSE(seq) NSL_PP_SEQ_FOLD_LEFT(NSL_PP_SEQ_REVERSE_O, NSL_PP_EMPTY, seq)()
# else
#    define NSL_PP_SEQ_REVERSE(seq) NSL_PP_SEQ_REVERSE_I(seq)
#    define NSL_PP_SEQ_REVERSE_I(seq) NSL_PP_SEQ_FOLD_LEFT(NSL_PP_SEQ_REVERSE_O, NSL_PP_EMPTY, seq)()
# endif
#
# define NSL_PP_SEQ_REVERSE_O(s, state, elem) (elem) state
#
# /* NSL_PP_SEQ_REVERSE_S */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_REVERSE_S(s, seq) NSL_PP_SEQ_FOLD_LEFT_ ## s(NSL_PP_SEQ_REVERSE_O, NSL_PP_EMPTY, seq)()
# else
#    define NSL_PP_SEQ_REVERSE_S(s, seq) NSL_PP_SEQ_REVERSE_S_I(s, seq)
#    define NSL_PP_SEQ_REVERSE_S_I(s, seq) NSL_PP_SEQ_FOLD_LEFT_ ## s(NSL_PP_SEQ_REVERSE_O, NSL_PP_EMPTY, seq)()
# endif
#
# endif
