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
# ifndef NSL_PREPROCESSOR_STRINGIZE_H
# define NSL_PREPROCESSOR_STRINGIZE_H
#
# include <nsl/preprocessor/config/config.h>
#
# /* NSL_PP_STRINGIZE */
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_STRINGIZE(text) NSL_PP_STRINGIZE_A((text))
#    define NSL_PP_STRINGIZE_A(arg) NSL_PP_STRINGIZE_I arg
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_STRINGIZE(text) NSL_PP_STRINGIZE_OO((text))
#    define NSL_PP_STRINGIZE_OO(par) NSL_PP_STRINGIZE_I ## par
# else
#    define NSL_PP_STRINGIZE(text) NSL_PP_STRINGIZE_I(text)
# endif
#
# define NSL_PP_STRINGIZE_I(...) #__VA_ARGS__
#
# endif
