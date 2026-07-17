# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_REPETITION_ENUM_TRAILING_PARAMS_H
# define NSL_PREPROCESSOR_REPETITION_ENUM_TRAILING_PARAMS_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/repetition/repeat.h"
#
# /* NSL_PP_ENUM_TRAILING_PARAMS */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ENUM_TRAILING_PARAMS(count, param) NSL_PP_REPEAT(count, NSL_PP_ENUM_TRAILING_PARAMS_M, param)
# else
#    define NSL_PP_ENUM_TRAILING_PARAMS(count, param) NSL_PP_ENUM_TRAILING_PARAMS_I(count, param)
#    define NSL_PP_ENUM_TRAILING_PARAMS_I(count, param) NSL_PP_REPEAT(count, NSL_PP_ENUM_TRAILING_PARAMS_M, param)
# endif
#
# define NSL_PP_ENUM_TRAILING_PARAMS_M(z, n, param) , param ## n
#
# /* NSL_PP_ENUM_TRAILING_PARAMS_Z */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ENUM_TRAILING_PARAMS_Z(z, count, param) NSL_PP_REPEAT_ ## z(count, NSL_PP_ENUM_TRAILING_PARAMS_M, param)
# else
#    define NSL_PP_ENUM_TRAILING_PARAMS_Z(z, count, param) NSL_PP_ENUM_TRAILING_PARAMS_Z_I(z, count, param)
#    define NSL_PP_ENUM_TRAILING_PARAMS_Z_I(z, count, param) NSL_PP_REPEAT_ ## z(count, NSL_PP_ENUM_TRAILING_PARAMS_M, param)
# endif
#
# endif
