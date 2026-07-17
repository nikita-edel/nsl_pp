# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     (C) Copyright Edward Diener 2014.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_ARRAY_PUSH_FRONT_H
# define NSL_PREPROCESSOR_ARRAY_PUSH_FRONT_H
#
# include <nsl/preprocessor/arithmetic/inc.h>
# include <nsl/preprocessor/array/data.h>
# include <nsl/preprocessor/array/size.h>
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/punctuation/comma_if.h>
# include <nsl/preprocessor/tuple/rem.h>
# include <nsl/preprocessor/array/detail/get_data.h>
#
# /* NSL_PP_ARRAY_PUSH_FRONT */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ARRAY_PUSH_FRONT(array, elem) NSL_PP_ARRAY_PUSH_FRONT_I(NSL_PP_ARRAY_SIZE(array), NSL_PP_ARRAY_DATA(array), elem)
# else
#    define NSL_PP_ARRAY_PUSH_FRONT(array, elem) NSL_PP_ARRAY_PUSH_FRONT_D(array, elem)
#    define NSL_PP_ARRAY_PUSH_FRONT_D(array, elem) NSL_PP_ARRAY_PUSH_FRONT_I(NSL_PP_ARRAY_SIZE(array), NSL_PP_ARRAY_DATA(array), elem)
# endif
#
# define NSL_PP_ARRAY_PUSH_FRONT_I(size, data, elem) (NSL_PP_INC(size), (elem NSL_PP_COMMA_IF(size) NSL_PP_ARRAY_DETAIL_GET_DATA(size,data)))
#
# endif
