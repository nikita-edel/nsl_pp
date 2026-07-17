# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2015.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_SEQ_DETAIL_IS_EMPTY_H
# define NSL_PREPROCESSOR_SEQ_DETAIL_IS_EMPTY_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/logical/bool.h"
# include "nsl/preprocessor/logical/compl.h"
# include "nsl/preprocessor/seq/size.h"
#
/* An empty seq is one that is just NSL_PP_SEQ_NIL */
#
# define NSL_PP_SEQ_DETAIL_IS_EMPTY(seq) \
    NSL_PP_COMPL \
        ( \
        NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq) \
        ) \
/**/
#
# define NSL_PP_SEQ_DETAIL_IS_EMPTY_SIZE(size) \
    NSL_PP_COMPL \
        ( \
        NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size) \
        ) \
/**/
#
# define NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq) \
    NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(NSL_PP_SEQ_DETAIL_EMPTY_SIZE(seq)) \
/**/
#
# define NSL_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size) \
    NSL_PP_BOOL(size) \
/**/
#
# define NSL_PP_SEQ_DETAIL_EMPTY_SIZE(seq) \
    NSL_PP_DEC(NSL_PP_SEQ_SIZE(seq (nil))) \
/**/
#
# endif
