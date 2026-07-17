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
# ifndef NSL_PREPROCESSOR_LIST_FOR_EACH_H
# define NSL_PREPROCESSOR_LIST_FOR_EACH_H
#
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/list/for_each_i.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
#
# /* NSL_PP_LIST_FOR_EACH */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FOR_EACH(macro, data, list) NSL_PP_LIST_FOR_EACH_I(NSL_PP_LIST_FOR_EACH_O, (macro, data), list)
# else
#    define NSL_PP_LIST_FOR_EACH(macro, data, list) NSL_PP_LIST_FOR_EACH_X(macro, data, list)
#    define NSL_PP_LIST_FOR_EACH_X(macro, data, list) NSL_PP_LIST_FOR_EACH_I(NSL_PP_LIST_FOR_EACH_O, (macro, data), list)
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FOR_EACH_O(r, md, i, elem) NSL_PP_LIST_FOR_EACH_O_D(r, NSL_PP_TUPLE_ELEM(2, 0, md), NSL_PP_TUPLE_ELEM(2, 1, md), elem)
# else
#    define NSL_PP_LIST_FOR_EACH_O(r, md, i, elem) NSL_PP_LIST_FOR_EACH_O_I(r, NSL_PP_TUPLE_REM_2 md, elem)
#    define NSL_PP_LIST_FOR_EACH_O_I(r, im, elem) NSL_PP_LIST_FOR_EACH_O_D(r, im, elem)
# endif
#
# define NSL_PP_LIST_FOR_EACH_O_D(r, m, d, elem) m(r, d, elem)
#
# /* NSL_PP_LIST_FOR_EACH_R */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_LIST_FOR_EACH_R(r, macro, data, list) NSL_PP_LIST_FOR_EACH_I_R(r, NSL_PP_LIST_FOR_EACH_O, (macro, data), list)
# else
#    define NSL_PP_LIST_FOR_EACH_R(r, macro, data, list) NSL_PP_LIST_FOR_EACH_R_X(r, macro, data, list)
#    define NSL_PP_LIST_FOR_EACH_R_X(r, macro, data, list) NSL_PP_LIST_FOR_EACH_I_R(r, NSL_PP_LIST_FOR_EACH_O, (macro, data), list)
# endif
#
# endif
