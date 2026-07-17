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
# ifndef NSL_PREPROCESSOR_LOGICAL_BITNOR_H
# define NSL_PREPROCESSOR_LOGICAL_BITNOR_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* NSL_PP_BITNOR */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_BITNOR(x, y) NSL_PP_BITNOR_I(x, y)
# else
#    define NSL_PP_BITNOR(x, y) NSL_PP_BITNOR_OO((x, y))
#    define NSL_PP_BITNOR_OO(par) NSL_PP_BITNOR_I ## par
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_BITNOR_I(x, y) NSL_PP_BITNOR_ ## x ## y
# else
#    define NSL_PP_BITNOR_I(x, y) NSL_PP_BITNOR_ID(NSL_PP_BITNOR_ ## x ## y)
#    define NSL_PP_BITNOR_ID(id) id
# endif
#
# define NSL_PP_BITNOR_00 1
# define NSL_PP_BITNOR_01 0
# define NSL_PP_BITNOR_10 0
# define NSL_PP_BITNOR_11 0
#
# endif
