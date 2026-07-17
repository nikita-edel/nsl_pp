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
# ifndef NSL_PREPROCESSOR_SEQ_POP_BACK_H
# define NSL_PREPROCESSOR_SEQ_POP_BACK_H
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/seq/first_n.h"
# include "nsl/preprocessor/seq/size.h"
#
# /* NSL_PP_SEQ_POP_BACK */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_POP_BACK(seq) NSL_PP_SEQ_FIRST_N(NSL_PP_DEC(NSL_PP_SEQ_SIZE(seq)), seq)
# else
#    define NSL_PP_SEQ_POP_BACK(seq) NSL_PP_SEQ_POP_BACK_I(seq)
#    define NSL_PP_SEQ_POP_BACK_I(seq) NSL_PP_SEQ_FIRST_N(NSL_PP_DEC(NSL_PP_SEQ_SIZE(seq)), seq)
# endif
#
# endif
