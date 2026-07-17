# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_FACILITIES_EXPAND_H
# define NSL_PREPROCESSOR_FACILITIES_EXPAND_H
#
# include <nsl/preprocessor/config/config.h>
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC() && ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_DMC()
#    define NSL_PP_EXPAND(x) NSL_PP_EXPAND_I(x)
# else
#    define NSL_PP_EXPAND(x) NSL_PP_EXPAND_OO((x))
#    define NSL_PP_EXPAND_OO(par) NSL_PP_EXPAND_I ## par
# endif
#
# define NSL_PP_EXPAND_I(x) x
#
# endif
