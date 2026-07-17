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
# ifndef NSL_PREPROCESSOR_SEQ_SUBSEQ_H
# define NSL_PREPROCESSOR_SEQ_SUBSEQ_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/seq/first_n.h>
# include <nsl/preprocessor/seq/rest_n.h>
#
# /* NSL_PP_SEQ_SUBSEQ */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_SUBSEQ(seq, i, len) NSL_PP_SEQ_FIRST_N(len, NSL_PP_SEQ_REST_N(i, seq))
# else
#    define NSL_PP_SEQ_SUBSEQ(seq, i, len) NSL_PP_SEQ_SUBSEQ_I(seq, i, len)
#    define NSL_PP_SEQ_SUBSEQ_I(seq, i, len) NSL_PP_SEQ_FIRST_N(len, NSL_PP_SEQ_REST_N(i, seq))
# endif
#
# endif
