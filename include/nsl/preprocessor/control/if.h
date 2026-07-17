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
# ifndef NSL_PREPROCESSOR_CONTROL_IF_H
# define NSL_PREPROCESSOR_CONTROL_IF_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/logical/bool.h>
#
# /* NSL_PP_IF */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_IF(cond, t, f) NSL_PP_IIF(NSL_PP_BOOL(cond), t, f)
# else
#    define NSL_PP_IF(cond, t, f) NSL_PP_IF_I(cond, t, f)
#    define NSL_PP_IF_I(cond, t, f) NSL_PP_IIF(NSL_PP_BOOL(cond), t, f)
# endif
#
# endif
