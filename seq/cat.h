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
# ifndef NSL_PREPROCESSOR_SEQ_CAT_H
# define NSL_PREPROCESSOR_SEQ_CAT_H
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/seq/fold_left.h"
# include "nsl/preprocessor/seq/seq.h"
# include "nsl/preprocessor/seq/size.h"
# include "nsl/preprocessor/tuple/eat.h"
#
# /* NSL_PP_SEQ_CAT */
#
# define NSL_PP_SEQ_CAT(seq) \
    NSL_PP_IF( \
        NSL_PP_DEC(NSL_PP_SEQ_SIZE(seq)), \
        NSL_PP_SEQ_CAT_I, \
        NSL_PP_SEQ_HEAD \
    )(seq) \
    /**/
# define NSL_PP_SEQ_CAT_I(seq) NSL_PP_SEQ_FOLD_LEFT(NSL_PP_SEQ_CAT_O, NSL_PP_SEQ_HEAD(seq), NSL_PP_SEQ_TAIL(seq))
#
# define NSL_PP_SEQ_CAT_O(s, st, elem) NSL_PP_SEQ_CAT_O_I(st, elem)
# define NSL_PP_SEQ_CAT_O_I(a, b) a ## b
#
# /* NSL_PP_SEQ_CAT_S */
#
# define NSL_PP_SEQ_CAT_S(s, seq) \
    NSL_PP_IF( \
        NSL_PP_DEC(NSL_PP_SEQ_SIZE(seq)), \
        NSL_PP_SEQ_CAT_S_I_A, \
        NSL_PP_SEQ_CAT_S_I_B \
    )(s, seq) \
    /**/
# define NSL_PP_SEQ_CAT_S_I_A(s, seq) NSL_PP_SEQ_FOLD_LEFT_ ## s(NSL_PP_SEQ_CAT_O, NSL_PP_SEQ_HEAD(seq), NSL_PP_SEQ_TAIL(seq))
# define NSL_PP_SEQ_CAT_S_I_B(s, seq) NSL_PP_SEQ_HEAD(seq)
#
# endif
