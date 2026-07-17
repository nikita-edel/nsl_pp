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
# ifndef NSL_PREPROCESSOR_REPETITION_ENUM_SHIFTED_H
# define NSL_PREPROCESSOR_REPETITION_ENUM_SHIFTED_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/debug/error.h"
# include "nsl/preprocessor/detail/auto_rec.h"
# include "nsl/preprocessor/punctuation/comma_if.h"
# include "nsl/preprocessor/repetition/repeat.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_ENUM_SHIFTED */
#
# if 0
#    define NSL_PP_ENUM_SHIFTED(count, macro, data)
# endif
#
# define NSL_PP_ENUM_SHIFTED NSL_PP_CAT(NSL_PP_ENUM_SHIFTED_, NSL_PP_AUTO_REC(NSL_PP_REPEAT_P, 4))
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ENUM_SHIFTED_1(c, m, d) NSL_PP_REPEAT_1(NSL_PP_DEC(c), NSL_PP_ENUM_SHIFTED_M_1, (m, d))
#    define NSL_PP_ENUM_SHIFTED_2(c, m, d) NSL_PP_REPEAT_2(NSL_PP_DEC(c), NSL_PP_ENUM_SHIFTED_M_2, (m, d))
#    define NSL_PP_ENUM_SHIFTED_3(c, m, d) NSL_PP_REPEAT_3(NSL_PP_DEC(c), NSL_PP_ENUM_SHIFTED_M_3, (m, d))
# else
#    define NSL_PP_ENUM_SHIFTED_1(c, m, d) NSL_PP_ENUM_SHIFTED_1_I(c, m, d)
#    define NSL_PP_ENUM_SHIFTED_2(c, m, d) NSL_PP_ENUM_SHIFTED_1_2(c, m, d)
#    define NSL_PP_ENUM_SHIFTED_3(c, m, d) NSL_PP_ENUM_SHIFTED_1_3(c, m, d)
#    define NSL_PP_ENUM_SHIFTED_1_I(c, m, d) NSL_PP_REPEAT_1(NSL_PP_DEC(c), NSL_PP_ENUM_SHIFTED_M_1, (m, d))
#    define NSL_PP_ENUM_SHIFTED_2_I(c, m, d) NSL_PP_REPEAT_2(NSL_PP_DEC(c), NSL_PP_ENUM_SHIFTED_M_2, (m, d))
#    define NSL_PP_ENUM_SHIFTED_3_I(c, m, d) NSL_PP_REPEAT_3(NSL_PP_DEC(c), NSL_PP_ENUM_SHIFTED_M_3, (m, d))
# endif
#
# define NSL_PP_ENUM_SHIFTED_4(c, m, d) NSL_PP_ERROR(0x0003)
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#    define NSL_PP_ENUM_SHIFTED_M_1(z, n, md) NSL_PP_ENUM_SHIFTED_M_1_IM(z, n, NSL_PP_TUPLE_REM_2 md)
#    define NSL_PP_ENUM_SHIFTED_M_2(z, n, md) NSL_PP_ENUM_SHIFTED_M_2_IM(z, n, NSL_PP_TUPLE_REM_2 md)
#    define NSL_PP_ENUM_SHIFTED_M_3(z, n, md) NSL_PP_ENUM_SHIFTED_M_3_IM(z, n, NSL_PP_TUPLE_REM_2 md)
#    define NSL_PP_ENUM_SHIFTED_M_1_IM(z, n, im) NSL_PP_ENUM_SHIFTED_M_1_I(z, n, im)
#    define NSL_PP_ENUM_SHIFTED_M_2_IM(z, n, im) NSL_PP_ENUM_SHIFTED_M_2_I(z, n, im)
#    define NSL_PP_ENUM_SHIFTED_M_3_IM(z, n, im) NSL_PP_ENUM_SHIFTED_M_3_I(z, n, im)
# else
#    define NSL_PP_ENUM_SHIFTED_M_1(z, n, md) NSL_PP_ENUM_SHIFTED_M_1_I(z, n, NSL_PP_TUPLE_ELEM(2, 0, md), NSL_PP_TUPLE_ELEM(2, 1, md))
#    define NSL_PP_ENUM_SHIFTED_M_2(z, n, md) NSL_PP_ENUM_SHIFTED_M_2_I(z, n, NSL_PP_TUPLE_ELEM(2, 0, md), NSL_PP_TUPLE_ELEM(2, 1, md))
#    define NSL_PP_ENUM_SHIFTED_M_3(z, n, md) NSL_PP_ENUM_SHIFTED_M_3_I(z, n, NSL_PP_TUPLE_ELEM(2, 0, md), NSL_PP_TUPLE_ELEM(2, 1, md))
# endif
#
# define NSL_PP_ENUM_SHIFTED_M_1_I(z, n, m, d) NSL_PP_COMMA_IF(n) m(z, NSL_PP_INC(n), d)
# define NSL_PP_ENUM_SHIFTED_M_2_I(z, n, m, d) NSL_PP_COMMA_IF(n) m(z, NSL_PP_INC(n), d)
# define NSL_PP_ENUM_SHIFTED_M_3_I(z, n, m, d) NSL_PP_COMMA_IF(n) m(z, NSL_PP_INC(n), d)
#
# endif
