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
# ifndef NSL_PREPROCESSOR_ARRAY_TO_SEQ_H
# define NSL_PREPROCESSOR_ARRAY_TO_SEQ_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/array/size.h"
# include "nsl/preprocessor/control/if.h"
# include "nsl/preprocessor/tuple/to_seq.h"
#
# /* NSL_PP_ARRAY_TO_SEQ */
#
#    define NSL_PP_ARRAY_TO_SEQ(array) \
        NSL_PP_IF \
            ( \
            NSL_PP_ARRAY_SIZE(array), \
            NSL_PP_ARRAY_TO_SEQ_DO, \
            NSL_PP_ARRAY_TO_SEQ_EMPTY \
            ) \
        (array) \
/**/
#    define NSL_PP_ARRAY_TO_SEQ_EMPTY(array)
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_ARRAY_TO_SEQ_DO(array) NSL_PP_ARRAY_TO_SEQ_I(NSL_PP_TUPLE_TO_SEQ, array)
#    define NSL_PP_ARRAY_TO_SEQ_I(m, args) NSL_PP_ARRAY_TO_SEQ_II(m, args)
#    define NSL_PP_ARRAY_TO_SEQ_II(m, args) NSL_PP_CAT(m ## args,)
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_ARRAY_TO_SEQ_DO(array) NSL_PP_ARRAY_TO_SEQ_I(array)
#    define NSL_PP_ARRAY_TO_SEQ_I(array) NSL_PP_TUPLE_TO_SEQ ## array
# else
#    define NSL_PP_ARRAY_TO_SEQ_DO(array) NSL_PP_TUPLE_TO_SEQ array
# endif
#
# endif
