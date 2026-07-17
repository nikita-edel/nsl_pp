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
# ifndef NSL_PREPROCESSOR_WSTR_H
# define NSL_PREPROCESSOR_WSTR_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* NSL_PP_WSTR */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_WSTR(text) NSL_PP_WSTR_I(text)
# else
#    define NSL_PP_WSTR(text) NSL_PP_WSTR_OO((text))
#    define NSL_PP_WSTR_OO(par) NSL_PP_WSTR_I ## par
# endif
#
# define NSL_PP_WSTR_I(...) NSL_PP_WSTR_II(#__VA_ARGS__)
# define NSL_PP_WSTR_II(str) L ## str
#
# endif
