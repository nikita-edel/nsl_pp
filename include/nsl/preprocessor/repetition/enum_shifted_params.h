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
# ifndef NSL_PREPROCESSOR_REPETITION_ENUM_SHIFTED_PARAMS_H
# define NSL_PREPROCESSOR_REPETITION_ENUM_SHIFTED_PARAMS_H
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/arithmetic/inc.h>
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/punctuation/comma_if.h>
# include <nsl/preprocessor/repetition/repeat.h>
#
# /* NSL_PP_ENUM_SHIFTED_PARAMS */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ENUM_SHIFTED_PARAMS(count, param) NSL_PP_REPEAT(NSL_PP_DEC(count), NSL_PP_ENUM_SHIFTED_PARAMS_M, param)
# else
#    define NSL_PP_ENUM_SHIFTED_PARAMS(count, param) NSL_PP_ENUM_SHIFTED_PARAMS_I(count, param)
#    define NSL_PP_ENUM_SHIFTED_PARAMS_I(count, param) NSL_PP_REPEAT(NSL_PP_DEC(count), NSL_PP_ENUM_SHIFTED_PARAMS_M, param)
# endif
#
# define NSL_PP_ENUM_SHIFTED_PARAMS_M(z, n, param) NSL_PP_COMMA_IF(n) NSL_PP_CAT(param, NSL_PP_INC(n))
#
# /* NSL_PP_ENUM_SHIFTED_PARAMS_Z */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ENUM_SHIFTED_PARAMS_Z(z, count, param) NSL_PP_REPEAT_ ## z(NSL_PP_DEC(count), NSL_PP_ENUM_SHIFTED_PARAMS_M, param)
# else
#    define NSL_PP_ENUM_SHIFTED_PARAMS_Z(z, count, param) NSL_PP_ENUM_SHIFTED_PARAMS_Z_I(z, count, param)
#    define NSL_PP_ENUM_SHIFTED_PARAMS_Z_I(z, count, param) NSL_PP_REPEAT_ ## z(NSL_PP_DEC(count), NSL_PP_ENUM_SHIFTED_PARAMS_M, param)
# endif
#
# endif
