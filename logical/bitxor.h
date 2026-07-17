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
# ifndef NSL_PREPROCESSOR_LOGICAL_BITXOR_H
# define NSL_PREPROCESSOR_LOGICAL_BITXOR_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* NSL_PP_BITXOR */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_BITXOR(x, y) NSL_PP_BITXOR_I(x, y)
# else
#    define NSL_PP_BITXOR(x, y) NSL_PP_BITXOR_OO((x, y))
#    define NSL_PP_BITXOR_OO(par) NSL_PP_BITXOR_I ## par
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_BITXOR_I(x, y) NSL_PP_BITXOR_ ## x ## y
# else
#    define NSL_PP_BITXOR_I(x, y) NSL_PP_BITXOR_ID(NSL_PP_BITXOR_ ## x ## y)
#    define NSL_PP_BITXOR_ID(id) id
# endif
#
# define NSL_PP_BITXOR_00 0
# define NSL_PP_BITXOR_01 1
# define NSL_PP_BITXOR_10 1
# define NSL_PP_BITXOR_11 0
#
# endif
