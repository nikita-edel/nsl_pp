# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# ifndef NSL_PREPROCESSOR_DETAIL_SPLIT_H
# define NSL_PREPROCESSOR_DETAIL_SPLIT_H
#
# include "nsl/preprocessor/config/config.h"
#
# /* NSL_PP_SPLIT */
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_SPLIT(n, im) NSL_PP_SPLIT_I((n, im))
#    define NSL_PP_SPLIT_I(par) NSL_PP_SPLIT_II ## par
#    define NSL_PP_SPLIT_II(n, a, b) NSL_PP_SPLIT_ ## n(a, b)
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_SPLIT(n, im) NSL_PP_SPLIT_I(n((im)))
#    define NSL_PP_SPLIT_I(n) NSL_PP_SPLIT_ID(NSL_PP_SPLIT_II_ ## n)
#    define NSL_PP_SPLIT_II_0(s) NSL_PP_SPLIT_ID(NSL_PP_SPLIT_0 s)
#    define NSL_PP_SPLIT_II_1(s) NSL_PP_SPLIT_ID(NSL_PP_SPLIT_1 s)
#    define NSL_PP_SPLIT_ID(id) id
# else
#    define NSL_PP_SPLIT(n, im) NSL_PP_SPLIT_I(n)(im)
#    define NSL_PP_SPLIT_I(n) NSL_PP_SPLIT_ ## n
# endif
#
# define NSL_PP_SPLIT_0(a, b) a
# define NSL_PP_SPLIT_1(a, b) b
#
# endif
