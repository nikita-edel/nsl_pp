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
# ifndef NSL_PREPROCESSOR_SEQ_FOR_EACH_H
# define NSL_PREPROCESSOR_SEQ_FOR_EACH_H
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/control/if.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/repetition/for.h>
# include <nsl/preprocessor/seq/seq.h>
# include <nsl/preprocessor/seq/size.h>
# include <nsl/preprocessor/seq/detail/is_empty.h>
# include <nsl/preprocessor/tuple/elem.h>
# include <nsl/preprocessor/tuple/rem.h>
#
# /* NSL_PP_SEQ_FOR_EACH */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_FOR_EACH(macro, data, seq) NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK(macro, data, seq)
# else
#    define NSL_PP_SEQ_FOR_EACH(macro, data, seq) NSL_PP_SEQ_FOR_EACH_D(macro, data, seq)
#    define NSL_PP_SEQ_FOR_EACH_D(macro, data, seq) NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK(macro, data, seq)
# endif
#
#    define NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC(macro, data, seq) NSL_PP_FOR((macro, data, seq, NSL_PP_SEQ_SIZE(seq)), NSL_PP_SEQ_FOR_EACH_P, NSL_PP_SEQ_FOR_EACH_O, NSL_PP_SEQ_FOR_EACH_M)
#    define NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY(macro, data, seq)
#
#    define NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK(macro, data, seq) \
        NSL_PP_IIF \
            ( \
            NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC, \
            NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY \
            ) \
        (macro, data, seq) \
/**/
#
# define NSL_PP_SEQ_FOR_EACH_P(r, x) NSL_PP_TUPLE_ELEM(4, 3, x)
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_SEQ_FOR_EACH_O(r, x) NSL_PP_SEQ_FOR_EACH_O_I x
# else
#    define NSL_PP_SEQ_FOR_EACH_O(r, x) NSL_PP_SEQ_FOR_EACH_O_I(NSL_PP_TUPLE_ELEM(4, 0, x), NSL_PP_TUPLE_ELEM(4, 1, x), NSL_PP_TUPLE_ELEM(4, 2, x), NSL_PP_TUPLE_ELEM(4, 3, x))
# endif
#
# define NSL_PP_SEQ_FOR_EACH_O_I(macro, data, seq, sz) \
    NSL_PP_SEQ_FOR_EACH_O_I_DEC(macro, data, seq, NSL_PP_DEC(sz)) \
/**/
# define NSL_PP_SEQ_FOR_EACH_O_I_DEC(macro, data, seq, sz) \
    ( \
    macro, \
    data, \
    NSL_PP_IF \
        ( \
        sz, \
        NSL_PP_SEQ_FOR_EACH_O_I_TAIL, \
        NSL_PP_SEQ_FOR_EACH_O_I_NIL \
        ) \
    (seq), \
    sz \
    ) \
/**/
# define NSL_PP_SEQ_FOR_EACH_O_I_TAIL(seq) NSL_PP_SEQ_TAIL(seq)
# define NSL_PP_SEQ_FOR_EACH_O_I_NIL(seq) NSL_PP_NIL
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_SEQ_FOR_EACH_M(r, x) NSL_PP_SEQ_FOR_EACH_M_IM(r, NSL_PP_TUPLE_REM_4 x)
#    define NSL_PP_SEQ_FOR_EACH_M_IM(r, im) NSL_PP_SEQ_FOR_EACH_M_I(r, im)
# else
#    define NSL_PP_SEQ_FOR_EACH_M(r, x) NSL_PP_SEQ_FOR_EACH_M_I(r, NSL_PP_TUPLE_ELEM(4, 0, x), NSL_PP_TUPLE_ELEM(4, 1, x), NSL_PP_TUPLE_ELEM(4, 2, x), NSL_PP_TUPLE_ELEM(4, 3, x))
# endif
#
# define NSL_PP_SEQ_FOR_EACH_M_I(r, macro, data, seq, sz) macro(r, data, NSL_PP_SEQ_HEAD(seq))
#
# /* NSL_PP_SEQ_FOR_EACH_R */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_FOR_EACH_R(r, macro, data, seq) NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_R(r, macro, data, seq)
# else
#    define NSL_PP_SEQ_FOR_EACH_R(r, macro, data, seq) NSL_PP_SEQ_FOR_EACH_R_I(r, macro, data, seq)
#    define NSL_PP_SEQ_FOR_EACH_R_I(r, macro, data, seq) NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_R(r, macro, data, seq)
# endif
#
#    define NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC_R(r, macro, data, seq) NSL_PP_FOR_ ## r((macro, data, seq, NSL_PP_SEQ_SIZE(seq)), NSL_PP_SEQ_FOR_EACH_P, NSL_PP_SEQ_FOR_EACH_O, NSL_PP_SEQ_FOR_EACH_M)
#    define NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY_R(r, macro, data, seq)
#
#    define NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_R(r, macro, data, seq) \
        NSL_PP_IIF \
            ( \
            NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq), \
            NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_EXEC_R, \
            NSL_PP_SEQ_FOR_EACH_DETAIL_CHECK_EMPTY_R \
            ) \
        (r, macro, data, seq) \
/**/
#
# endif
