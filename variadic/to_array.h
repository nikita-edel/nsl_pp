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
# ifndef NSL_PREPROCESSOR_VARIADIC_TO_ARRAY_H
# define NSL_PREPROCESSOR_VARIADIC_TO_ARRAY_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/control/if.h>
# include <nsl/preprocessor/tuple/to_array.h>
# include <nsl/preprocessor/variadic/has_opt.h>
# include <nsl/preprocessor/variadic/size.h>
#
# /* NSL_PP_VARIADIC_TO_ARRAY */
#
# if NSL_PP_VARIADIC_HAS_OPT()
#     if NSL_PP_VARIADICS_MSVC
#         define NSL_PP_VARIADIC_TO_ARRAY_NON_EMPTY(...) NSL_PP_TUPLE_TO_ARRAY_2(NSL_PP_VARIADIC_SIZE(__VA_ARGS__),(__VA_ARGS__))
#     else
#         define NSL_PP_VARIADIC_TO_ARRAY_NON_EMPTY(...) NSL_PP_TUPLE_TO_ARRAY((__VA_ARGS__))
#     endif
#     define NSL_PP_VARIADIC_TO_ARRAY_EMPTY(...) (0,())
#     define NSL_PP_VARIADIC_TO_ARRAY(...) NSL_PP_IF(NSL_PP_VARIADIC_SIZE(__VA_ARGS__),NSL_PP_VARIADIC_TO_ARRAY_NON_EMPTY,NSL_PP_VARIADIC_TO_ARRAY_EMPTY)(__VA_ARGS__)
# elif NSL_PP_VARIADICS_MSVC
#     define NSL_PP_VARIADIC_TO_ARRAY(...) NSL_PP_TUPLE_TO_ARRAY_2(NSL_PP_VARIADIC_SIZE(__VA_ARGS__),(__VA_ARGS__))
# else
#     define NSL_PP_VARIADIC_TO_ARRAY(...) NSL_PP_TUPLE_TO_ARRAY((__VA_ARGS__))
# endif
#
# endif
