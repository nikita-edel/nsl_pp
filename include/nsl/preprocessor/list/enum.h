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
# ifndef NSL_PREPROCESSOR_LIST_ENUM_H
# define NSL_PREPROCESSOR_LIST_ENUM_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/list/adt.h>
# include <nsl/preprocessor/list/for_each_i.h>
# include <nsl/preprocessor/punctuation/comma_if.h>
# include <nsl/preprocessor/variadic/has_opt.h>
#
# /* NSL_PP_LIST_ENUM */
#
# if NSL_PP_VARIADIC_HAS_OPT()
#    if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#        define NSL_PP_LIST_ENUM_NOT_EMPTY(list) NSL_PP_LIST_FOR_EACH_I(NSL_PP_LIST_ENUM_O, NSL_PP_NIL, list)
#    else
#        define NSL_PP_LIST_ENUM_NOT_EMPTY(list) NSL_PP_LIST_ENUM_I(list)
#        define NSL_PP_LIST_ENUM_I(list) NSL_PP_LIST_FOR_EACH_I(NSL_PP_LIST_ENUM_O, NSL_PP_NIL, list)
#    endif
#    define NSL_PP_LIST_ENUM_EMPTY(list)
#    define NSL_PP_LIST_ENUM(list) NSL_PP_IIF(NSL_PP_LIST_IS_NIL(list),NSL_PP_LIST_ENUM_EMPTY,NSL_PP_LIST_ENUM_NOT_EMPTY)(list)
# elif ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_ENUM(list) NSL_PP_LIST_FOR_EACH_I(NSL_PP_LIST_ENUM_O, NSL_PP_NIL, list)
# else
#    define NSL_PP_LIST_ENUM(list) NSL_PP_LIST_ENUM_I(list)
#    define NSL_PP_LIST_ENUM_I(list) NSL_PP_LIST_FOR_EACH_I(NSL_PP_LIST_ENUM_O, NSL_PP_NIL, list)
# endif
#
# define NSL_PP_LIST_ENUM_O(r, _, i, elem) NSL_PP_COMMA_IF(i) elem
#
# /* NSL_PP_LIST_ENUM_R */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_ENUM_R(r, list) NSL_PP_LIST_FOR_EACH_I_R(r, NSL_PP_LIST_ENUM_O, NSL_PP_NIL, list)
# else
#    define NSL_PP_LIST_ENUM_R(r, list) NSL_PP_LIST_ENUM_R_I(r, list)
#    define NSL_PP_LIST_ENUM_R_I(r, list) NSL_PP_LIST_FOR_EACH_I_R(r, NSL_PP_LIST_ENUM_O, NSL_PP_NIL, list)
# endif
#
# endif
