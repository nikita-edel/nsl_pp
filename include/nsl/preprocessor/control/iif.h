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
# ifndef NSL_PREPROCESSOR_CONTROL_IIF_H
# define NSL_PREPROCESSOR_CONTROL_IIF_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_IIF(bit, t, f) NSL_PP_IIF_I(bit, t, f)
# else
#    define NSL_PP_IIF(bit, t, f) NSL_PP_IIF_OO((bit, t, f))
#    define NSL_PP_IIF_OO(par) NSL_PP_IIF_I ## par
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_IIF_I(bit, t, f) NSL_PP_IIF_ ## bit(t, f)
# else
#    define NSL_PP_IIF_I(bit, t, f) NSL_PP_IIF_II(NSL_PP_IIF_ ## bit(t, f))
#    define NSL_PP_IIF_II(id) id
# endif
#
# define NSL_PP_IIF_0(t, f) f
# define NSL_PP_IIF_1(t, f) t
#
# endif
