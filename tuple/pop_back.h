# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2013.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_TUPLE_POP_BACK_H
# define NSL_PREPROCESSOR_TUPLE_POP_BACK_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/array/pop_back.h>
# include <nsl/preprocessor/array/to_tuple.h>
# include <nsl/preprocessor/comparison/greater.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/tuple/size.h>
# include <nsl/preprocessor/tuple/to_array.h>
#
# /* NSL_PP_TUPLE_POP_BACK */
#
# define NSL_PP_TUPLE_POP_BACK(tuple) \
    NSL_PP_IIF \
        ( \
        NSL_PP_GREATER(NSL_PP_TUPLE_SIZE(tuple),1), \
        NSL_PP_TUPLE_POP_BACK_EXEC, \
        NSL_PP_TUPLE_POP_BACK_RETURN \
        ) \
    (tuple) \
/**/
#
# define NSL_PP_TUPLE_POP_BACK_EXEC(tuple) \
    NSL_PP_ARRAY_TO_TUPLE(NSL_PP_ARRAY_POP_BACK(NSL_PP_TUPLE_TO_ARRAY(tuple))) \
/**/
#
# define NSL_PP_TUPLE_POP_BACK_RETURN(tuple) tuple
#
# /* NSL_PP_TUPLE_POP_BACK_Z */
#
# define NSL_PP_TUPLE_POP_BACK_Z(z, tuple) \
    NSL_PP_IIF \
        ( \
        NSL_PP_GREATER(NSL_PP_TUPLE_SIZE(tuple),1), \
        NSL_PP_TUPLE_POP_BACK_Z_EXEC, \
        NSL_PP_TUPLE_POP_BACK_Z_RETURN \
        ) \
    (z, tuple) \
/**/
#
# define NSL_PP_TUPLE_POP_BACK_Z_EXEC(z, tuple) \
    NSL_PP_ARRAY_TO_TUPLE(NSL_PP_ARRAY_POP_BACK_Z(z, NSL_PP_TUPLE_TO_ARRAY(tuple))) \
/**/
#
# define NSL_PP_TUPLE_POP_BACK_Z_RETURN(z, tuple) tuple
#
# endif // NSL_PREPROCESSOR_TUPLE_POP_BACK_H
