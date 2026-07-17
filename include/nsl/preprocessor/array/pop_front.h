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
# ifndef NSL_PREPROCESSOR_ARRAY_POP_FRONT_H
# define NSL_PREPROCESSOR_ARRAY_POP_FRONT_H
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/arithmetic/inc.h>
# include <nsl/preprocessor/array/elem.h>
# include <nsl/preprocessor/array/size.h>
# include <nsl/preprocessor/repetition/enum.h>
# include <nsl/preprocessor/repetition/deduce_z.h>
#
# /* NSL_PP_ARRAY_POP_FRONT */
#
# define NSL_PP_ARRAY_POP_FRONT(array) NSL_PP_ARRAY_POP_FRONT_Z(NSL_PP_DEDUCE_Z(), array)
#
# /* NSL_PP_ARRAY_POP_FRONT_Z */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_ARRAY_POP_FRONT_Z(z, array) NSL_PP_ARRAY_POP_FRONT_I(z, NSL_PP_ARRAY_SIZE(array), array)
# else
#    define NSL_PP_ARRAY_POP_FRONT_Z(z, array) NSL_PP_ARRAY_POP_FRONT_Z_D(z, array)
#    define NSL_PP_ARRAY_POP_FRONT_Z_D(z, array) NSL_PP_ARRAY_POP_FRONT_I(z, NSL_PP_ARRAY_SIZE(array), array)
# endif
#
# define NSL_PP_ARRAY_POP_FRONT_I(z, size, array) (NSL_PP_DEC(size), (NSL_PP_ENUM_ ## z(NSL_PP_DEC(size), NSL_PP_ARRAY_POP_FRONT_M, array)))
# define NSL_PP_ARRAY_POP_FRONT_M(z, n, data) NSL_PP_ARRAY_ELEM(NSL_PP_INC(n), data)
#
# endif
