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
# ifndef NSL_PREPROCESSOR_TUPLE_SIZE_H
# define NSL_PREPROCESSOR_TUPLE_SIZE_H
#
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/control/if.h>
# include <nsl/preprocessor/variadic/has_opt.h>
# include <nsl/preprocessor/variadic/size.h>
#
# if NSL_PP_VARIADIC_HAS_OPT()
#     if NSL_PP_VARIADICS_MSVC
#         define NSL_PP_TUPLE_SIZE(tuple) NSL_PP_TUPLE_SIZE_CHECK(NSL_PP_CAT(NSL_PP_VARIADIC_SIZE tuple,))
#     else
#         define NSL_PP_TUPLE_SIZE(tuple) NSL_PP_TUPLE_SIZE_CHECK(NSL_PP_VARIADIC_SIZE tuple)
#     endif
#     define NSL_PP_TUPLE_SIZE_CHECK(size) NSL_PP_IF(size,size,1)
# elif NSL_PP_VARIADICS_MSVC
#     define NSL_PP_TUPLE_SIZE(tuple) NSL_PP_CAT(NSL_PP_VARIADIC_SIZE tuple,)
# else
#     define NSL_PP_TUPLE_SIZE(tuple) NSL_PP_VARIADIC_SIZE tuple
# endif
#
# endif
