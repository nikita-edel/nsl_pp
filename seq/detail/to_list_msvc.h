# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2016.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_SEQ_DETAIL_TO_LIST_MSVC_H
# define NSL_PREPROCESSOR_SEQ_DETAIL_TO_LIST_MSVC_H
#
# include <nsl/preprocessor/config/config.h>
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/control/while.h>
# include <nsl/preprocessor/tuple/elem.h>
#
# define NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_RESULT(state) \
    NSL_PP_TUPLE_ELEM(2, 0, state) \
/**/
# define NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_SIZE(state) \
    NSL_PP_TUPLE_ELEM(2, 1, state) \
/**/
# define NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_PRED(d,state) \
    NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_SIZE(state) \
/**/
# define NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_OP(d,state) \
    ( \
    NSL_PP_CAT(NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_RESULT(state),), \
    NSL_PP_DEC(NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_SIZE(state)) \
    ) \
/**/
#
# /* NSL_PP_SEQ_DETAIL_TO_LIST_MSVC */
#
# define NSL_PP_SEQ_DETAIL_TO_LIST_MSVC(result,seqsize) \
    NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_STATE_RESULT \
        ( \
        NSL_PP_WHILE \
            ( \
            NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_PRED, \
            NSL_PP_SEQ_DETAIL_TO_LIST_MSVC_OP, \
            (result,seqsize) \
            ) \
        ) \
/**/
# endif // NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#
# endif // NSL_PREPROCESSOR_SEQ_DETAIL_TO_LIST_MSVC_H
