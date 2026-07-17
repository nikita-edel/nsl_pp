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
# ifndef NSL_PREPROCESSOR_TUPLE_TO_ARRAY_H
# define NSL_PREPROCESSOR_TUPLE_TO_ARRAY_H
#
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/control/if.h>
# include <nsl/preprocessor/facilities/overload.h>
# include <nsl/preprocessor/tuple/size.h>
# include <nsl/preprocessor/variadic/size.h>
# include <nsl/preprocessor/variadic/has_opt.h>
#
# /* NSL_PP_TUPLE_TO_ARRAY */
#
# if NSL_PP_VARIADICS_MSVC
#     define NSL_PP_TUPLE_TO_ARRAY(...) NSL_PP_TUPLE_TO_ARRAY_I(NSL_PP_OVERLOAD(NSL_PP_TUPLE_TO_ARRAY_, __VA_ARGS__), (__VA_ARGS__))
#     define NSL_PP_TUPLE_TO_ARRAY_I(m, args) NSL_PP_TUPLE_TO_ARRAY_II(m, args)
#     define NSL_PP_TUPLE_TO_ARRAY_II(m, args) NSL_PP_CAT(m ## args,)
#     define NSL_PP_TUPLE_TO_ARRAY_1(tuple) (NSL_PP_TUPLE_SIZE(tuple), tuple)
# else
#     define NSL_PP_TUPLE_TO_ARRAY(...) NSL_PP_OVERLOAD(NSL_PP_TUPLE_TO_ARRAY_, __VA_ARGS__)(__VA_ARGS__)
#     if NSL_PP_VARIADIC_HAS_OPT()
#         define NSL_PP_TUPLE_TO_ARRAY_1(tuple) NSL_PP_TUPLE_TO_ARRAY_1_SIZE(NSL_PP_VARIADIC_SIZE tuple, tuple)
#         define NSL_PP_TUPLE_TO_ARRAY_1_SIZE(size,tuple) (NSL_PP_IF(size,size,1), tuple)
#     else
#         define NSL_PP_TUPLE_TO_ARRAY_1(tuple) (NSL_PP_VARIADIC_SIZE tuple, tuple)
#     endif
# endif
# define NSL_PP_TUPLE_TO_ARRAY_2(size, tuple) (size, tuple)
#
# endif
