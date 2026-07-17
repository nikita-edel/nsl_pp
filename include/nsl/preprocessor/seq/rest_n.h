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
# ifndef NSL_PREPROCESSOR_SEQ_REST_N_H
# define NSL_PREPROCESSOR_SEQ_REST_N_H
#
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/comparison/not_equal.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/facilities/identity.h"
# include "nsl/preprocessor/logical/bitand.h"
# include "nsl/preprocessor/seq/detail/is_empty.h"
# include "nsl/preprocessor/seq/detail/split.h"
# include "nsl/preprocessor/tuple/elem.h"
#
# /* NSL_PP_SEQ_REST_N */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_REST_N(n, seq) NSL_PP_SEQ_REST_N_DETAIL_EXEC(n, seq, NSL_PP_SEQ_DETAIL_EMPTY_SIZE(seq))
# else
#    define NSL_PP_SEQ_REST_N(n, seq) NSL_PP_SEQ_REST_N_I(n, seq)
#    define NSL_PP_SEQ_REST_N_I(n, seq) NSL_PP_SEQ_REST_N_DETAIL_EXEC(n, seq, NSL_PP_SEQ_DETAIL_EMPTY_SIZE(seq))
# endif
#
#    define NSL_PP_SEQ_REST_N_DETAIL_EXEC_NO_MATCH(n, seq)
#    define NSL_PP_SEQ_REST_N_DETAIL_EXEC_MATCH(n, seq) \
            NSL_PP_TUPLE_ELEM(2, 1, NSL_PP_SEQ_SPLIT(NSL_PP_INC(n), NSL_PP_IDENTITY( (nil) seq )))() \
/**/
#    define NSL_PP_SEQ_REST_N_DETAIL_EXEC(n, seq, size) \
        NSL_PP_IIF \
            ( \
            NSL_PP_BITAND \
                ( \
                NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size), \
                NSL_PP_NOT_EQUAL(n,size) \
                ), \
            NSL_PP_SEQ_REST_N_DETAIL_EXEC_MATCH, \
            NSL_PP_SEQ_REST_N_DETAIL_EXEC_NO_MATCH \
            ) \
        (n, seq)  \
/**/
#
# endif
