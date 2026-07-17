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
# ifndef NSL_PREPROCESSOR_SEQ_SEQ_H
# define NSL_PREPROCESSOR_SEQ_SEQ_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/seq/elem.h"
#
# /* NSL_PP_SEQ_HEAD */
#
# define NSL_PP_SEQ_HEAD(seq) NSL_PP_SEQ_ELEM(0, seq)
#
# /* NSL_PP_SEQ_TAIL */
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_SEQ_TAIL(seq) NSL_PP_SEQ_TAIL_1((seq))
#    define NSL_PP_SEQ_TAIL_1(par) NSL_PP_SEQ_TAIL_2 ## par
#    define NSL_PP_SEQ_TAIL_2(seq) NSL_PP_SEQ_TAIL_I ## seq
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_SEQ_TAIL(seq) NSL_PP_SEQ_TAIL_ID(NSL_PP_SEQ_TAIL_I seq)
#    define NSL_PP_SEQ_TAIL_ID(id) id
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_TAIL(seq) NSL_PP_SEQ_TAIL_D(seq)
#    define NSL_PP_SEQ_TAIL_D(seq) NSL_PP_SEQ_TAIL_I seq
# else
#    define NSL_PP_SEQ_TAIL(seq) NSL_PP_SEQ_TAIL_I seq
# endif
#
# define NSL_PP_SEQ_TAIL_I(x)
#
# /* NSL_PP_SEQ_NIL */
#
# define NSL_PP_SEQ_NIL(x) (x)
#
# endif
