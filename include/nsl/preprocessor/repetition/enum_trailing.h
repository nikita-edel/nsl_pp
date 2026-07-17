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
# ifndef NSL_PREPROCESSOR_REPETITION_ENUM_TRAILING_H
# define NSL_PREPROCESSOR_REPETITION_ENUM_TRAILING_H
#
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/debug/error.h>
# include <nsl/preprocessor/detail/auto_rec.h>
# include <nsl/preprocessor/repetition/repeat.h>
# include <nsl/preprocessor/tuple/elem.h>
# include <nsl/preprocessor/tuple/rem.h>
#
# /* NSL_PP_ENUM_TRAILING */
#
# if 0
#    define NSL_PP_ENUM_TRAILING(count, macro, data)
# endif
#
# define NSL_PP_ENUM_TRAILING NSL_PP_CAT(NSL_PP_ENUM_TRAILING_, NSL_PP_AUTO_REC(NSL_PP_REPEAT_P, 4))
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ENUM_TRAILING_1(c, m, d) NSL_PP_REPEAT_1(c, NSL_PP_ENUM_TRAILING_M_1, (m, d))
#    define NSL_PP_ENUM_TRAILING_2(c, m, d) NSL_PP_REPEAT_2(c, NSL_PP_ENUM_TRAILING_M_2, (m, d))
#    define NSL_PP_ENUM_TRAILING_3(c, m, d) NSL_PP_REPEAT_3(c, NSL_PP_ENUM_TRAILING_M_3, (m, d))
# else
#    define NSL_PP_ENUM_TRAILING_1(c, m, d) NSL_PP_ENUM_TRAILING_1_I(c, m, d)
#    define NSL_PP_ENUM_TRAILING_2(c, m, d) NSL_PP_ENUM_TRAILING_2_I(c, m, d)
#    define NSL_PP_ENUM_TRAILING_3(c, m, d) NSL_PP_ENUM_TRAILING_3_I(c, m, d)
#    define NSL_PP_ENUM_TRAILING_1_I(c, m, d) NSL_PP_REPEAT_1(c, NSL_PP_ENUM_TRAILING_M_1, (m, d))
#    define NSL_PP_ENUM_TRAILING_2_I(c, m, d) NSL_PP_REPEAT_2(c, NSL_PP_ENUM_TRAILING_M_2, (m, d))
#    define NSL_PP_ENUM_TRAILING_3_I(c, m, d) NSL_PP_REPEAT_3(c, NSL_PP_ENUM_TRAILING_M_3, (m, d))
# endif
#
# define NSL_PP_ENUM_TRAILING_4(c, m, d) NSL_PP_ERROR(0x0003)
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_ENUM_TRAILING_M_1(z, n, md) NSL_PP_ENUM_TRAILING_M_1_IM(z, n, NSL_PP_TUPLE_REM_2 md)
#    define NSL_PP_ENUM_TRAILING_M_2(z, n, md) NSL_PP_ENUM_TRAILING_M_2_IM(z, n, NSL_PP_TUPLE_REM_2 md)
#    define NSL_PP_ENUM_TRAILING_M_3(z, n, md) NSL_PP_ENUM_TRAILING_M_3_IM(z, n, NSL_PP_TUPLE_REM_2 md)
#    define NSL_PP_ENUM_TRAILING_M_1_IM(z, n, im) NSL_PP_ENUM_TRAILING_M_1_I(z, n, im)
#    define NSL_PP_ENUM_TRAILING_M_2_IM(z, n, im) NSL_PP_ENUM_TRAILING_M_2_I(z, n, im)
#    define NSL_PP_ENUM_TRAILING_M_3_IM(z, n, im) NSL_PP_ENUM_TRAILING_M_3_I(z, n, im)
# else
#    define NSL_PP_ENUM_TRAILING_M_1(z, n, md) NSL_PP_ENUM_TRAILING_M_1_I(z, n, NSL_PP_TUPLE_ELEM(2, 0, md), NSL_PP_TUPLE_ELEM(2, 1, md))
#    define NSL_PP_ENUM_TRAILING_M_2(z, n, md) NSL_PP_ENUM_TRAILING_M_2_I(z, n, NSL_PP_TUPLE_ELEM(2, 0, md), NSL_PP_TUPLE_ELEM(2, 1, md))
#    define NSL_PP_ENUM_TRAILING_M_3(z, n, md) NSL_PP_ENUM_TRAILING_M_3_I(z, n, NSL_PP_TUPLE_ELEM(2, 0, md), NSL_PP_TUPLE_ELEM(2, 1, md))
# endif
#
# define NSL_PP_ENUM_TRAILING_M_1_I(z, n, m, d) , m(z, n, d)
# define NSL_PP_ENUM_TRAILING_M_2_I(z, n, m, d) , m(z, n, d)
# define NSL_PP_ENUM_TRAILING_M_3_I(z, n, m, d) , m(z, n, d)
#
# endif
