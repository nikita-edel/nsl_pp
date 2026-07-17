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
# ifndef NSL_PREPROCESSOR_LOGICAL_BITAND_H
# define NSL_PREPROCESSOR_LOGICAL_BITAND_H
#
# include <nsl/preprocessor/config/config.h>
#
# /* NSL_PP_BITAND */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_BITAND(x, y) NSL_PP_BITAND_I(x, y)
# else
#    define NSL_PP_BITAND(x, y) NSL_PP_BITAND_OO((x, y))
#    define NSL_PP_BITAND_OO(par) NSL_PP_BITAND_I ## par
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_BITAND_I(x, y) NSL_PP_BITAND_ ## x ## y
# else
#    define NSL_PP_BITAND_I(x, y) NSL_PP_BITAND_ID(NSL_PP_BITAND_ ## x ## y)
#    define NSL_PP_BITAND_ID(res) res
# endif
#
# define NSL_PP_BITAND_00 0
# define NSL_PP_BITAND_01 0
# define NSL_PP_BITAND_10 0
# define NSL_PP_BITAND_11 1
#
# endif
