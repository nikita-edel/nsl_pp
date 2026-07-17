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
# ifndef NSL_PREPROCESSOR_SEQ_FIRST_N_H
# define NSL_PREPROCESSOR_SEQ_FIRST_N_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/seq/detail/split.h"
# include "nsl/preprocessor/tuple/eat.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* NSL_PP_SEQ_FIRST_N */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_FIRST_N(n, seq) NSL_PP_IF(n, NSL_PP_TUPLE_ELEM, NSL_PP_TUPLE_EAT_3)(2, 0, NSL_PP_SEQ_SPLIT(n, seq (nil)))
# else
#    define NSL_PP_SEQ_FIRST_N(n, seq) NSL_PP_SEQ_FIRST_N_I(n, seq)
#    define NSL_PP_SEQ_FIRST_N_I(n, seq) NSL_PP_IF(n, NSL_PP_TUPLE_ELEM, NSL_PP_TUPLE_EAT_3)(2, 0, NSL_PP_SEQ_SPLIT(n, seq (nil)))
# endif
#
# endif
