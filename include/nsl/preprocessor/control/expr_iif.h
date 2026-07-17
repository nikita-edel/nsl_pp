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
# ifndef NSL_PREPROCESSOR_CONTROL_EXPR_IIF_H
# define NSL_PREPROCESSOR_CONTROL_EXPR_IIF_H
#
# include <nsl/preprocessor/config/config.h>
#
# /* NSL_PP_EXPR_IIF */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_EXPR_IIF(bit, expr) NSL_PP_EXPR_IIF_I(bit, expr)
# else
#    define NSL_PP_EXPR_IIF(bit, expr) NSL_PP_EXPR_IIF_OO((bit, expr))
#    define NSL_PP_EXPR_IIF_OO(par) NSL_PP_EXPR_IIF_I ## par
# endif
#
# define NSL_PP_EXPR_IIF_I(bit, expr) NSL_PP_EXPR_IIF_ ## bit(expr)
#
# define NSL_PP_EXPR_IIF_0(expr)
# define NSL_PP_EXPR_IIF_1(expr) expr
#
# endif
