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
# ifndef NSL_PREPROCESSOR_SEQ_REMOVE_H
# define NSL_PREPROCESSOR_SEQ_REMOVE_H
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/seq/first_n.h"
# include "nsl/preprocessor/seq/rest_n.h"
#
# /* NSL_PP_SEQ_REMOVE */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_REMOVE(seq, i) NSL_PP_SEQ_FIRST_N(i, seq) NSL_PP_SEQ_REST_N(NSL_PP_INC(i), seq)
# else
#    define NSL_PP_SEQ_REMOVE(seq, i) NSL_PP_SEQ_REMOVE_I(seq, i)
#    define NSL_PP_SEQ_REMOVE_I(seq, i) NSL_PP_SEQ_FIRST_N(i, seq) NSL_PP_SEQ_REST_N(NSL_PP_INC(i), seq)
# endif
#
# endif
