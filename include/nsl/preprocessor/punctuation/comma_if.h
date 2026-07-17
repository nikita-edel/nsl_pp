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
# ifndef NSL_PREPROCESSOR_PUNCTUATION_COMMA_IF_H
# define NSL_PREPROCESSOR_PUNCTUATION_COMMA_IF_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/control/if.h>
# include <nsl/preprocessor/facilities/empty.h>
# include <nsl/preprocessor/punctuation/comma.h>
#
# /* NSL_PP_COMMA_IF */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_COMMA_IF(cond) NSL_PP_IF(cond, NSL_PP_COMMA, NSL_PP_EMPTY)()
# else
#    define NSL_PP_COMMA_IF(cond) NSL_PP_COMMA_IF_I(cond)
#    define NSL_PP_COMMA_IF_I(cond) NSL_PP_IF(cond, NSL_PP_COMMA, NSL_PP_EMPTY)()
# endif
#
# endif
