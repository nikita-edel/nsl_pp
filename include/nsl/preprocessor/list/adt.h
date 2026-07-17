# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  *
#  * See http://www.boost.org for most recent version.
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# ifndef NSL_PREPROCESSOR_LIST_ADT_H
# define NSL_PREPROCESSOR_LIST_ADT_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/detail/is_binary.h>
# include <nsl/preprocessor/logical/compl.h>
# include <nsl/preprocessor/tuple/eat.h>
#
# /* NSL_PP_LIST_CONS */
#
# define NSL_PP_LIST_CONS(head, tail) (head, tail)
#
# /* NSL_PP_LIST_NIL */
#
# define NSL_PP_LIST_NIL NSL_PP_NIL
#
# /* NSL_PP_LIST_FIRST */
#
# define NSL_PP_LIST_FIRST(list) NSL_PP_LIST_FIRST_D(list)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_LIST_FIRST_D(list) NSL_PP_LIST_FIRST_I list
# else
#    define NSL_PP_LIST_FIRST_D(list) NSL_PP_LIST_FIRST_I ## list
# endif
#
# define NSL_PP_LIST_FIRST_I(head, tail) head
#
# /* NSL_PP_LIST_REST */
#
# define NSL_PP_LIST_REST(list) NSL_PP_LIST_REST_D(list)
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_LIST_REST_D(list) NSL_PP_LIST_REST_I list
# else
#    define NSL_PP_LIST_REST_D(list) NSL_PP_LIST_REST_I ## list
# endif
#
# define NSL_PP_LIST_REST_I(head, tail) tail
#
# /* NSL_PP_LIST_IS_CONS */
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_BCC()
#    define NSL_PP_LIST_IS_CONS(list) NSL_PP_LIST_IS_CONS_D(list)
#    define NSL_PP_LIST_IS_CONS_D(list) NSL_PP_LIST_IS_CONS_ ## list
#    define NSL_PP_LIST_IS_CONS_(head, tail) 1
#    define NSL_PP_LIST_IS_CONS_NSL_PP_NIL 0
# else
#    define NSL_PP_LIST_IS_CONS(list) NSL_PP_IS_BINARY(list)
# endif
#
# /* NSL_PP_LIST_IS_NIL */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_BCC()
#    define NSL_PP_LIST_IS_NIL(list) NSL_PP_COMPL(NSL_PP_IS_BINARY(list))
# else
#    define NSL_PP_LIST_IS_NIL(list) NSL_PP_COMPL(NSL_PP_LIST_IS_CONS(list))
# endif
#
# endif
