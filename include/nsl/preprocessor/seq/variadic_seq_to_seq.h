# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2012.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_SEQ_VARIADIC_SEQ_TO_SEQ_H
# define NSL_PREPROCESSOR_SEQ_VARIADIC_SEQ_TO_SEQ_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
#
# /* NSL_PP_VARIADIC_SEQ_TO_SEQ */
#
#    define NSL_PP_VARIADIC_SEQ_TO_SEQ(vseq) NSL_PP_CAT(NSL_PP_VARIADIC_SEQ_TO_SEQ_A vseq, 0)
#    define NSL_PP_VARIADIC_SEQ_TO_SEQ_A(...) ((__VA_ARGS__)) NSL_PP_VARIADIC_SEQ_TO_SEQ_B
#    define NSL_PP_VARIADIC_SEQ_TO_SEQ_B(...) ((__VA_ARGS__)) NSL_PP_VARIADIC_SEQ_TO_SEQ_A
#    define NSL_PP_VARIADIC_SEQ_TO_SEQ_A0
#    define NSL_PP_VARIADIC_SEQ_TO_SEQ_B0
#
# endif
