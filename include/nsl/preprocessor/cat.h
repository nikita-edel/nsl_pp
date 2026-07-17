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
# ifndef NSL_PREPROCESSOR_CAT_H
# define NSL_PREPROCESSOR_CAT_H
#
# include <nsl/preprocessor/config/config.h>
#
# /* NSL_PP_CAT */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_CAT(a, b) NSL_PP_CAT_I(a, b)
# else
#    define NSL_PP_CAT(a, b) NSL_PP_CAT_OO((a, b))
#    define NSL_PP_CAT_OO(par) NSL_PP_CAT_I ## par
# endif
#
# if (~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()) || (defined(__INTEL_COMPILER) && __INTEL_COMPILER >= 1700)
#    define NSL_PP_CAT_I(a, b) a ## b
# else
#    define NSL_PP_CAT_I(a, b) NSL_PP_CAT_II(~, a ## b)
#    define NSL_PP_CAT_II(p, res) res
# endif
#
# endif
