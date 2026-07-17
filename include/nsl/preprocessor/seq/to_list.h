# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_SEQ_TO_LIST_H
# define NSL_PREPROCESSOR_SEQ_TO_LIST_H
#
# include <nsl/preprocessor/punctuation/comma.h>
# include <nsl/preprocessor/punctuation/paren.h>
# include <nsl/preprocessor/seq/detail/binary_transform.h>
#
# /* NSL_PP_SEQ_TO_LIST */
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
# include <nsl/preprocessor/seq/size.h>
# include <nsl/preprocessor/seq/detail/to_list_msvc.h>
# define NSL_PP_SEQ_TO_LIST(seq) \
    NSL_PP_SEQ_DETAIL_TO_LIST_MSVC \
        ( \
        NSL_PP_SEQ_TO_LIST_I(NSL_PP_SEQ_BINARY_TRANSFORM(seq)), \
        NSL_PP_SEQ_SIZE(seq) \
        ) \
/**/
# else
# define NSL_PP_SEQ_TO_LIST(seq) NSL_PP_SEQ_TO_LIST_I(NSL_PP_SEQ_BINARY_TRANSFORM(seq))
# endif
# define NSL_PP_SEQ_TO_LIST_I(bseq) NSL_PP_SEQ_TO_LIST_A bseq NSL_PP_NIL NSL_PP_SEQ_TO_LIST_B bseq
# define NSL_PP_SEQ_TO_LIST_A(m, e) m(NSL_PP_LPAREN() e NSL_PP_COMMA() NSL_PP_SEQ_TO_LIST_A_ID)
# define NSL_PP_SEQ_TO_LIST_A_ID() NSL_PP_SEQ_TO_LIST_A
# define NSL_PP_SEQ_TO_LIST_B(m, e) m(NSL_PP_RPAREN() NSL_PP_SEQ_TO_LIST_B_ID)
# define NSL_PP_SEQ_TO_LIST_B_ID() NSL_PP_SEQ_TO_LIST_B
#
# endif
