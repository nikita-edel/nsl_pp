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
# ifndef NSL_PREPROCESSOR_LOGICAL_NOR_H
# define NSL_PREPROCESSOR_LOGICAL_NOR_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/logical/bool.h"
# include "nsl/preprocessor/logical/bitnor.h"
#
# /* NSL_PP_NOR */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_NOR(p, q) NSL_PP_BITNOR(NSL_PP_BOOL(p), NSL_PP_BOOL(q))
# else
#    define NSL_PP_NOR(p, q) NSL_PP_NOR_I(p, q)
#    define NSL_PP_NOR_I(p, q) NSL_PP_BITNOR(NSL_PP_BOOL(p), NSL_PP_BOOL(q))
# endif
#
# endif
