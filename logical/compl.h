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
# ifndef NSL_PREPROCESSOR_LOGICAL_COMPL_H
# define NSL_PREPROCESSOR_LOGICAL_COMPL_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* NSL_PP_COMPL */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_COMPL(x) NSL_PP_COMPL_I(x)
# else
#    define NSL_PP_COMPL(x) NSL_PP_COMPL_OO((x))
#    define NSL_PP_COMPL_OO(par) NSL_PP_COMPL_I ## par
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_COMPL_I(x) NSL_PP_COMPL_ ## x
# else
#    define NSL_PP_COMPL_I(x) NSL_PP_COMPL_ID(NSL_PP_COMPL_ ## x)
#    define NSL_PP_COMPL_ID(id) id
# endif
#
# define NSL_PP_COMPL_0 1
# define NSL_PP_COMPL_1 0
#
# endif
