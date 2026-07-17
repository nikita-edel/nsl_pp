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
# ifndef NSL_PREPROCESSOR_ARRAY_TO_LIST_H
# define NSL_PREPROCESSOR_ARRAY_TO_LIST_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/array/size.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/tuple/to_list.h"
#
# /* NSL_PP_ARRAY_TO_LIST */
#
#    define NSL_PP_ARRAY_TO_LIST(array) \
        NSL_PP_IF \
            ( \
            NSL_PP_ARRAY_SIZE(array), \
            NSL_PP_ARRAY_TO_LIST_DO, \
            NSL_PP_ARRAY_TO_LIST_EMPTY \
            ) \
        (array) \
/**/
#
#    define NSL_PP_ARRAY_TO_LIST_EMPTY(array) NSL_PP_NIL
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_ARRAY_TO_LIST_DO(array) NSL_PP_ARRAY_TO_LIST_I(NSL_PP_TUPLE_TO_LIST, array)
#    define NSL_PP_ARRAY_TO_LIST_I(m, args) NSL_PP_ARRAY_TO_LIST_II(m, args)
#    define NSL_PP_ARRAY_TO_LIST_II(m, args) NSL_PP_CAT(m ## args,)
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_ARRAY_TO_LIST_DO(array) NSL_PP_ARRAY_TO_LIST_I(array)
#    define NSL_PP_ARRAY_TO_LIST_I(array) NSL_PP_TUPLE_TO_LIST ## array
# else
#    define NSL_PP_ARRAY_TO_LIST_DO(array) NSL_PP_TUPLE_TO_LIST array
# endif
#
# endif
