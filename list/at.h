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
# ifndef NSL_PREPROCESSOR_LIST_AT_H
# define NSL_PREPROCESSOR_LIST_AT_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/list/adt.h>
# include <nsl/preprocessor/list/rest_n.h>
#
# /* NSL_PP_LIST_AT */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_AT(list, index) NSL_PP_LIST_FIRST(NSL_PP_LIST_REST_N(index, list))
# else
#    define NSL_PP_LIST_AT(list, index) NSL_PP_LIST_AT_I(list, index)
#    define NSL_PP_LIST_AT_I(list, index) NSL_PP_LIST_FIRST(NSL_PP_LIST_REST_N(index, list))
# endif
#
# /* NSL_PP_LIST_AT_D */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_AT_D(d, list, index) NSL_PP_LIST_FIRST(NSL_PP_LIST_REST_N_D(d, index, list))
# else
#    define NSL_PP_LIST_AT_D(d, list, index) NSL_PP_LIST_AT_D_I(d, list, index)
#    define NSL_PP_LIST_AT_D_I(d, list, index) NSL_PP_LIST_FIRST(NSL_PP_LIST_REST_N_D(d, index, list))
# endif
#
# endif
