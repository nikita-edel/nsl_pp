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
# ifndef NSL_PREPROCESSOR_SEQ_REPLACE_H
# define NSL_PREPROCESSOR_SEQ_REPLACE_H
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/arithmetic/inc.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/comparison/equal.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/seq/first_n.h>
# include <nsl/preprocessor/seq/rest_n.h>
# include <nsl/preprocessor/seq/size.h>
#
# /* NSL_PP_SEQ_REPLACE */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_REPLACE(seq, i, elem) NSL_PP_SEQ_FIRST_N(i, seq) (elem) NSL_PP_SEQ_REPLACE_DETAIL_REST(seq, i)
# else
#    define NSL_PP_SEQ_REPLACE(seq, i, elem) NSL_PP_SEQ_REPLACE_I(seq, i, elem)
#    define NSL_PP_SEQ_REPLACE_I(seq, i, elem) NSL_PP_SEQ_FIRST_N(i, seq) (elem) NSL_PP_SEQ_REPLACE_DETAIL_REST(seq, i)
# endif
#
#    define NSL_PP_SEQ_REPLACE_DETAIL_REST_EMPTY(seq, i)
#    define NSL_PP_SEQ_REPLACE_DETAIL_REST_VALID(seq, i) NSL_PP_SEQ_REST_N(NSL_PP_INC(i), seq)
#    define NSL_PP_SEQ_REPLACE_DETAIL_REST(seq, i) \
        NSL_PP_IIF \
            ( \
            NSL_PP_EQUAL(i,NSL_PP_DEC(NSL_PP_SEQ_SIZE(seq))), \
            NSL_PP_SEQ_REPLACE_DETAIL_REST_EMPTY, \
            NSL_PP_SEQ_REPLACE_DETAIL_REST_VALID \
            ) \
        (seq, i) \
/**/
#
# endif
