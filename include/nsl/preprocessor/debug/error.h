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
# ifndef NSL_PREPROCESSOR_DEBUG_ERROR_H
# define NSL_PREPROCESSOR_DEBUG_ERROR_H
#
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/config/config.h>
#
# /* NSL_PP_ERROR */
#
# if NSL_PP_CONFIG_ERRORS
#    define NSL_PP_ERROR(code) NSL_PP_CAT(NSL_PP_ERROR_, code)
# endif
#
# define NSL_PP_ERROR_0x0000 NSL_PP_ERROR(0x0000, NSL_PP_INDEX_OUT_OF_BOUNDS)
# define NSL_PP_ERROR_0x0001 NSL_PP_ERROR(0x0001, NSL_PP_WHILE_OVERFLOW)
# define NSL_PP_ERROR_0x0002 NSL_PP_ERROR(0x0002, NSL_PP_FOR_OVERFLOW)
# define NSL_PP_ERROR_0x0003 NSL_PP_ERROR(0x0003, NSL_PP_REPEAT_OVERFLOW)
# define NSL_PP_ERROR_0x0004 NSL_PP_ERROR(0x0004, NSL_PP_LIST_FOLD_OVERFLOW)
# define NSL_PP_ERROR_0x0005 NSL_PP_ERROR(0x0005, NSL_PP_SEQ_FOLD_OVERFLOW)
# define NSL_PP_ERROR_0x0006 NSL_PP_ERROR(0x0006, NSL_PP_ARITHMETIC_OVERFLOW)
# define NSL_PP_ERROR_0x0007 NSL_PP_ERROR(0x0007, NSL_PP_DIVISION_BY_ZERO)
#
# endif
