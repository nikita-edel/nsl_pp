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
# ifndef NSL_PREPROCESSOR_STR_H
# define NSL_PREPROCESSOR_STR_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* NSL_PP_STR */
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_STR(text) NSL_PP_STR_A((text))
#    define NSL_PP_STR_A(arg) NSL_PP_STR_I arg
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_STR(text) NSL_PP_STR_OO((text))
#    define NSL_PP_STR_OO(par) NSL_PP_STR_I ## par
# else
#    define NSL_PP_STR(text) NSL_PP_STR_I(text)
# endif
#
# define NSL_PP_STR_I(...) #__VA_ARGS__
#
# endif
