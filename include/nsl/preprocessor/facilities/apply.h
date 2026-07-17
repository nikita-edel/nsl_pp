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
# ifndef NSL_PREPROCESSOR_FACILITIES_APPLY_H
# define NSL_PREPROCESSOR_FACILITIES_APPLY_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/control/expr_iif.h>
# include <nsl/preprocessor/detail/is_unary.h>
# include <nsl/preprocessor/tuple/rem.h>
#
# /* NSL_PP_APPLY */
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_APPLY(x) NSL_PP_APPLY_I(x)
#    define NSL_PP_APPLY_I(x) NSL_PP_EXPR_IIF(NSL_PP_IS_UNARY(x), NSL_PP_TUPLE_REM_1 x)
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_BCC()
#    define NSL_PP_APPLY(x) NSL_PP_APPLY_I(x)
#    define NSL_PP_APPLY_I(x) NSL_PP_APPLY_ ## x
#    define NSL_PP_APPLY_(x) x
#    define NSL_PP_APPLY_NSL_PP_NIL
# else
#    define NSL_PP_APPLY(x) NSL_PP_EXPR_IIF(NSL_PP_IS_UNARY(x), NSL_PP_TUPLE_REM_1 x)
# endif
#
# endif
