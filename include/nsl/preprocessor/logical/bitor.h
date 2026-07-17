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
# ifndef NSL_PREPROCESSOR_LOGICAL_BITOR_H
# define NSL_PREPROCESSOR_LOGICAL_BITOR_H
#
# include <nsl/preprocessor/config/config.h>
#
# /* NSL_PP_BITOR */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_BITOR(x, y) NSL_PP_BITOR_I(x, y)
# else
#    define NSL_PP_BITOR(x, y) NSL_PP_BITOR_OO((x, y))
#    define NSL_PP_BITOR_OO(par) NSL_PP_BITOR_I ## par
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_BITOR_I(x, y) NSL_PP_BITOR_ ## x ## y
# else
#    define NSL_PP_BITOR_I(x, y) NSL_PP_BITOR_ID(NSL_PP_BITOR_ ## x ## y)
#    define NSL_PP_BITOR_ID(id) id
# endif
#
# define NSL_PP_BITOR_00 0
# define NSL_PP_BITOR_01 1
# define NSL_PP_BITOR_10 1
# define NSL_PP_BITOR_11 1
#
# endif
