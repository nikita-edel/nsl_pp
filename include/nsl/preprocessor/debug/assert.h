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
# ifndef NSL_PREPROCESSOR_DEBUG_ASSERT_H
# define NSL_PREPROCESSOR_DEBUG_ASSERT_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/expr_iif.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/logical/not.h"
# include "nsl/preprocessor/tuple/eat.h"
#
# /* NSL_PP_ASSERT */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ASSERT NSL_PP_ASSERT_D
# else
#    define NSL_PP_ASSERT(cond) NSL_PP_ASSERT_D(cond)
# endif
#
# define NSL_PP_ASSERT_D(cond) NSL_PP_IIF(NSL_PP_NOT(cond), NSL_PP_ASSERT_ERROR, NSL_PP_TUPLE_EAT_1)(...)
# define NSL_PP_ASSERT_ERROR(x, y, z)
#
# /* NSL_PP_ASSERT_MSG */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ASSERT_MSG NSL_PP_ASSERT_MSG_D
# else
#    define NSL_PP_ASSERT_MSG(cond, msg) NSL_PP_ASSERT_MSG_D(cond, msg)
# endif
#
# define NSL_PP_ASSERT_MSG_D(cond, msg) NSL_PP_EXPR_IIF(NSL_PP_NOT(cond), msg)
#
# endif
