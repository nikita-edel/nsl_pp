# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_SEQ_DETAIL_BINARY_TRANSFORM_H
# define NSL_PREPROCESSOR_SEQ_DETAIL_BINARY_TRANSFORM_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/tuple/eat.h"
# include "nsl/preprocessor/tuple/rem.h"
# include "nsl/preprocessor/variadic/detail/is_single_return.h"
#
# /* NSL_PP_SEQ_BINARY_TRANSFORM */
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_SEQ_BINARY_TRANSFORM(seq) NSL_PP_SEQ_BINARY_TRANSFORM_I(, seq)
#    define NSL_PP_SEQ_BINARY_TRANSFORM_I(p, seq) NSL_PP_SEQ_BINARY_TRANSFORM_II(p ## seq)
#    define NSL_PP_SEQ_BINARY_TRANSFORM_II(seq) NSL_PP_SEQ_BINARY_TRANSFORM_III(seq)
#    define NSL_PP_SEQ_BINARY_TRANSFORM_III(seq) NSL_PP_CAT(NSL_PP_SEQ_BINARY_TRANSFORM_A seq, 0)
# else
#    define NSL_PP_SEQ_BINARY_TRANSFORM(seq) NSL_PP_CAT(NSL_PP_SEQ_BINARY_TRANSFORM_A seq, 0)
# endif
# if NSL_PP_VARIADICS_MSVC
#    define NSL_PP_SEQ_BINARY_TRANSFORM_REM(data) data
#    define NSL_PP_SEQ_BINARY_TRANSFORM_A(...) (NSL_PP_SEQ_BINARY_TRANSFORM_REM, __VA_ARGS__)() NSL_PP_SEQ_BINARY_TRANSFORM_B
#    define NSL_PP_SEQ_BINARY_TRANSFORM_B(...) (NSL_PP_SEQ_BINARY_TRANSFORM_REM, __VA_ARGS__)() NSL_PP_SEQ_BINARY_TRANSFORM_A
# else
#    define NSL_PP_SEQ_BINARY_TRANSFORM_A(...) (NSL_PP_REM, __VA_ARGS__)() NSL_PP_SEQ_BINARY_TRANSFORM_B
#    define NSL_PP_SEQ_BINARY_TRANSFORM_B(...) (NSL_PP_REM, __VA_ARGS__)() NSL_PP_SEQ_BINARY_TRANSFORM_A
# endif
# define NSL_PP_SEQ_BINARY_TRANSFORM_A0 (NSL_PP_EAT, ?)
# define NSL_PP_SEQ_BINARY_TRANSFORM_B0 (NSL_PP_EAT, ?)
#
# endif
