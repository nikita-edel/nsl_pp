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
# ifndef NSL_PREPROCESSOR_DETAIL_IS_BINARY_H
# define NSL_PREPROCESSOR_DETAIL_IS_BINARY_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/detail/check.h"
#
# /* NSL_PP_IS_BINARY */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_IS_BINARY(x) NSL_PP_CHECK(x, NSL_PP_IS_BINARY_CHECK)
# else
#    define NSL_PP_IS_BINARY(x) NSL_PP_IS_BINARY_I(x)
#    define NSL_PP_IS_BINARY_I(x) NSL_PP_CHECK(x, NSL_PP_IS_BINARY_CHECK)
# endif
#
# define NSL_PP_IS_BINARY_CHECK(a, b) 1
# define NSL_PP_CHECK_RESULT_NSL_PP_IS_BINARY_CHECK 0, NSL_PP_NIL
#
# endif
