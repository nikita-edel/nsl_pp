# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2005.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_REPETITION_ENUM_SHIFTED_BINARY_PARAMS_H
# define NSL_PREPROCESSOR_REPETITION_ENUM_SHIFTED_BINARY_PARAMS_H
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/arithmetic/inc.h>
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/punctuation/comma_if.h>
# include <nsl/preprocessor/repetition/repeat.h>
# include <nsl/preprocessor/tuple/elem.h>
# include <nsl/preprocessor/tuple/rem.h>
#
# /* NSL_PP_ENUM_SHIFTED_BINARY_PARAMS */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS(count, p1, p2) NSL_PP_REPEAT(NSL_PP_DEC(count), NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# else
#    define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS(count, p1, p2) NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_I(count, p1, p2)
#    define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_I(count, p1, p2) NSL_PP_REPEAT(NSL_PP_DEC(count), NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# endif
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M(z, n, pp) NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M_IM(z, n, NSL_PP_TUPLE_REM_2 pp)
#    define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M_IM(z, n, im) NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M_I(z, n, im)
# else
#    define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M(z, n, pp) NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M_I(z, n, NSL_PP_TUPLE_ELEM(2, 0, pp), NSL_PP_TUPLE_ELEM(2, 1, pp))
# endif
#
# define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M_I(z, n, p1, p2) NSL_PP_COMMA_IF(n) NSL_PP_CAT(p1, NSL_PP_INC(n)) NSL_PP_CAT(p2, NSL_PP_INC(n))
#
# /* NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_Z */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_Z(z, count, p1, p2) NSL_PP_REPEAT_ ## z(NSL_PP_DEC(count), NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# else
#    define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_Z(z, count, p1, p2) NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_Z_I(z, count, p1, p2)
#    define NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_Z_I(z, count, p1, p2) NSL_PP_REPEAT_ ## z(NSL_PP_DEC(count), NSL_PP_ENUM_SHIFTED_BINARY_PARAMS_M, (p1, p2))
# endif
#
# endif
