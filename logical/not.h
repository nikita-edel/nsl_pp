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
# ifndef NSL_PREPROCESSOR_LOGICAL_NOT_H
# define NSL_PREPROCESSOR_LOGICAL_NOT_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/logical/bool.h>
# include <nsl/preprocessor/logical/compl.h>
#
# /* NSL_PP_NOT */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_NOT(x) NSL_PP_COMPL(NSL_PP_BOOL(x))
# else
#    define NSL_PP_NOT(x) NSL_PP_NOT_I(x)
#    define NSL_PP_NOT_I(x) NSL_PP_COMPL(NSL_PP_BOOL(x))
# endif
#
# endif
