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
# ifndef NSL_PREPROCESSOR_SEQ_FOR_EACH_I_H
# define NSL_PREPROCESSOR_SEQ_FOR_EACH_I_H
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/repetition/for.h"
# include "nsl/preprocessor/seq/seq.h"
# include "nsl/preprocessor/seq/size.h"
# include "nsl/preprocessor/seq/detail/is_empty.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_SEQ_FOR_EACH_I */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_FOR_EACH_I(macro, data, seq) NSL_PP_SEQ_FOR_EACH_I_DETAIL_CHECK(macro, data, seq)
# else
#    define NSL_PP_SEQ_FOR_EACH_I(macro, data, seq) NSL_PP_SEQ_FOR_EACH_I_I(macro, data, seq)
#    define NSL_PP_SEQ_FOR_EACH_I_I(macro, data, seq) NSL_PP_SEQ_FOR_EACH_I_DETAIL_CHECK(macro, data, seq)
# endif
#
#    define NSL_PP_SEQ_FOR_EACH_I_DETAIL_CHECK_EXEC(macro, data, seq) NSL_PP_FOR((macro, data, seq, 0, NSL_PP_SEQ_SIZE(seq)), NSL_PP_SEQ_FOR_EACH_I_P, NSL_PP_SEQ_FOR_EACH_I_O, NSL_PP_SEQ_FOR_EACH_I_M)
#    define NSL_PP_SEQ_FOR_EACH_I_DETAIL_CHECK_EMPTY(macro, data, seq)
#
#    define NSL_PP_SEQ_FOR_EACH_I_DETAIL_CHECK(macro, data, seq) \
        NSL_PP_IIF \
            ( \
            NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            NSL_PP_SEQ_FOR_EACH_I_DETAIL_CHECK_EXEC, \
            NSL_PP_SEQ_FOR_EACH_I_DETAIL_CHECK_EMPTY \
            ) \
        (macro, data, seq) \
/**/
#
# define NSL_PP_SEQ_FOR_EACH_I_P(r, x) NSL_PP_TUPLE_ELEM(5, 4, x)
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_SEQ_FOR_EACH_I_O(r, x) NSL_PP_SEQ_FOR_EACH_I_O_I x
# else
#    define NSL_PP_SEQ_FOR_EACH_I_O(r, x) NSL_PP_SEQ_FOR_EACH_I_O_I(NSL_PP_TUPLE_ELEM(5, 0, x), NSL_PP_TUPLE_ELEM(5, 1, x), NSL_PP_TUPLE_ELEM(5, 2, x), NSL_PP_TUPLE_ELEM(5, 3, x), NSL_PP_TUPLE_ELEM(5, 4, x))
# endif
#
# define NSL_PP_SEQ_FOR_EACH_I_O_I(macro, data, seq, i, sz) \
    NSL_PP_SEQ_FOR_EACH_I_O_I_DEC(macro, data, seq, i, NSL_PP_DEC(sz)) \
/**/
# define NSL_PP_SEQ_FOR_EACH_I_O_I_DEC(macro, data, seq, i, sz) \
    ( \
    macro, \
    data, \
    NSL_PP_IF \
        ( \
        sz, \
        NSL_PP_SEQ_FOR_EACH_I_O_I_TAIL, \
        NSL_PP_SEQ_FOR_EACH_I_O_I_NIL \
        ) \
    (seq), \
    NSL_PP_INC(i), \
    sz \
    ) \
/**/
# define NSL_PP_SEQ_FOR_EACH_I_O_I_TAIL(seq) NSL_PP_SEQ_TAIL(seq)
# define NSL_PP_SEQ_FOR_EACH_I_O_I_NIL(seq) NSL_PP_NIL
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_SEQ_FOR_EACH_I_M(r, x) NSL_PP_SEQ_FOR_EACH_I_M_IM(r, NSL_PP_TUPLE_REM_5 x)
#    define NSL_PP_SEQ_FOR_EACH_I_M_IM(r, im) NSL_PP_SEQ_FOR_EACH_I_M_I(r, im)
# else
#    define NSL_PP_SEQ_FOR_EACH_I_M(r, x) NSL_PP_SEQ_FOR_EACH_I_M_I(r, NSL_PP_TUPLE_ELEM(5, 0, x), NSL_PP_TUPLE_ELEM(5, 1, x), NSL_PP_TUPLE_ELEM(5, 2, x), NSL_PP_TUPLE_ELEM(5, 3, x), NSL_PP_TUPLE_ELEM(5, 4, x))
# endif
#
# define NSL_PP_SEQ_FOR_EACH_I_M_I(r, macro, data, seq, i, sz) macro(r, data, i, NSL_PP_SEQ_HEAD(seq))
#
# /* NSL_PP_SEQ_FOR_EACH_I_R */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_FOR_EACH_I_R(r, macro, data, seq) NSL_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK(r, macro, data, seq)
# else
#    define NSL_PP_SEQ_FOR_EACH_I_R(r, macro, data, seq) NSL_PP_SEQ_FOR_EACH_I_R_I(r, macro, data, seq)
#    define NSL_PP_SEQ_FOR_EACH_I_R_I(r, macro, data, seq) NSL_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK(r, macro, data, seq)
# endif
#
#    define NSL_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK_EXEC(r, macro, data, seq) NSL_PP_FOR_ ## r((macro, data, seq, 0, NSL_PP_SEQ_SIZE(seq)), NSL_PP_SEQ_FOR_EACH_I_P, NSL_PP_SEQ_FOR_EACH_I_O, NSL_PP_SEQ_FOR_EACH_I_M)
#    define NSL_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK_EMPTY(r, macro, data, seq)
#
#    define NSL_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK(r, macro, data, seq) \
        NSL_PP_IIF \
            ( \
            NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            NSL_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK_EXEC, \
            NSL_PP_SEQ_FOR_EACH_I_R_DETAIL_CHECK_EMPTY \
            ) \
        (r, macro, data, seq) \
/**/
#
# endif
