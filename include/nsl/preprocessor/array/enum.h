# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_ARRAY_ENUM_H
# define NSL_PREPROCESSOR_ARRAY_ENUM_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/array/size.h"
# include "nsl/preprocessor/tuple/rem.h"
# include "nsl/preprocessor/variadic/has_opt.h"
#
# /* NSL_PP_ARRAY_ENUM */
#
# if NSL_PP_VARIADIC_HAS_OPT()
#    if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#        define NSL_PP_ARRAY_ENUM_NOT_EMPTY(array) NSL_PP_ARRAY_ENUM_I(NSL_PP_TUPLE_REM_CTOR, array)
#        define NSL_PP_ARRAY_ENUM_I(m, args) NSL_PP_ARRAY_ENUM_II(m, args)
#        define NSL_PP_ARRAY_ENUM_II(m, args) NSL_PP_CAT(m ## args,)
#    elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#        define NSL_PP_ARRAY_ENUM_NOT_EMPTY(array) NSL_PP_ARRAY_ENUM_I(array)
#        define NSL_PP_ARRAY_ENUM_I(array) NSL_PP_TUPLE_REM_CTOR ## array
#    else
#        define NSL_PP_ARRAY_ENUM_NOT_EMPTY(array) NSL_PP_TUPLE_REM_CTOR array
#    endif
#    define NSL_PP_ARRAY_ENUM_EMPTY(array)
#    define NSL_PP_ARRAY_ENUM(array) NSL_PP_IF(NSL_PP_ARRAY_SIZE(array),NSL_PP_ARRAY_ENUM_NOT_EMPTY,NSL_PP_ARRAY_ENUM_EMPTY)(array)
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_ARRAY_ENUM(array) NSL_PP_ARRAY_ENUM_I(NSL_PP_TUPLE_REM_CTOR, array)
#    define NSL_PP_ARRAY_ENUM_I(m, args) NSL_PP_ARRAY_ENUM_II(m, args)
#    define NSL_PP_ARRAY_ENUM_II(m, args) NSL_PP_CAT(m ## args,)
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_ARRAY_ENUM(array) NSL_PP_ARRAY_ENUM_I(array)
#    define NSL_PP_ARRAY_ENUM_I(array) NSL_PP_TUPLE_REM_CTOR ## array
# else
#    define NSL_PP_ARRAY_ENUM(array) NSL_PP_TUPLE_REM_CTOR array
# endif
#
# endif
