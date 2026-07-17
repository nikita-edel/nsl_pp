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
# ifndef NSL_PREPROCESSOR_LIST_TO_TUPLE_H
# define NSL_PREPROCESSOR_LIST_TO_TUPLE_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/list/enum.h>
# include <nsl/preprocessor/control/iif.h>
#
# /* NSL_PP_LIST_TO_TUPLE */
#
# define NSL_PP_LIST_TO_TUPLE(list) \
    NSL_PP_IIF \
        ( \
        NSL_PP_LIST_IS_NIL(list), \
        NSL_PP_LIST_TO_TUPLE_EMPTY, \
        NSL_PP_LIST_TO_TUPLE_DO \
        ) \
    (list) \
/**/
# define NSL_PP_LIST_TO_TUPLE_EMPTY(list)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_TO_TUPLE_DO(list) (NSL_PP_LIST_ENUM(list))
# else
#    define NSL_PP_LIST_TO_TUPLE_DO(list) NSL_PP_LIST_TO_TUPLE_I(list)
#    define NSL_PP_LIST_TO_TUPLE_I(list) (NSL_PP_LIST_ENUM(list))
# endif
#
# /* NSL_PP_LIST_TO_TUPLE_R */
#
# define NSL_PP_LIST_TO_TUPLE_R(r, list) \
    NSL_PP_IIF \
        ( \
        NSL_PP_LIST_IS_NIL(list), \
        NSL_PP_LIST_TO_TUPLE_R_EMPTY, \
        NSL_PP_LIST_TO_TUPLE_R_DO \
        ) \
    (r, list) \
/**/
# define NSL_PP_LIST_TO_TUPLE_R_EMPTY(r,list)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_TO_TUPLE_R_DO(r, list) (NSL_PP_LIST_ENUM_R(r, list))
# else
#    define NSL_PP_LIST_TO_TUPLE_R_DO(r, list) NSL_PP_LIST_TO_TUPLE_R_I(r, list)
#    define NSL_PP_LIST_TO_TUPLE_R_I(r, list) (NSL_PP_LIST_ENUM_R(r, list))
# endif
#
# endif
