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
# ifndef NSL_PREPROCESSOR_DETAIL_IS_UNARY_H
# define NSL_PREPROCESSOR_DETAIL_IS_UNARY_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/detail/check.h>
#
# /* NSL_PP_IS_UNARY */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_IS_UNARY(x) NSL_PP_CHECK(x, NSL_PP_IS_UNARY_CHECK)
# else
#    define NSL_PP_IS_UNARY(x) NSL_PP_IS_UNARY_I(x)
#    define NSL_PP_IS_UNARY_I(x) NSL_PP_CHECK(x, NSL_PP_IS_UNARY_CHECK)
# endif
#
# define NSL_PP_IS_UNARY_CHECK(a) 1
# define NSL_PP_CHECK_RESULT_NSL_PP_IS_UNARY_CHECK 0, NSL_PP_NIL
#
# endif
