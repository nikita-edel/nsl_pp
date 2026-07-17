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
# ifndef NSL_PREPROCESSOR_TUPLE_REMOVE_H
# define NSL_PREPROCESSOR_TUPLE_REMOVE_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/array/remove.h>
# include <nsl/preprocessor/array/to_tuple.h>
# include <nsl/preprocessor/comparison/greater.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/tuple/size.h>
# include <nsl/preprocessor/tuple/to_array.h>
#
# /* NSL_PP_TUPLE_REMOVE */
#
# define NSL_PP_TUPLE_REMOVE(tuple, i) \
    NSL_PP_IIF \
        ( \
        NSL_PP_GREATER(NSL_PP_TUPLE_SIZE(tuple),1), \
        NSL_PP_TUPLE_REMOVE_EXEC, \
        NSL_PP_TUPLE_REMOVE_RETURN \
        ) \
    (tuple, i) \
/**/
#
# define NSL_PP_TUPLE_REMOVE_EXEC(tuple, i) \
    NSL_PP_ARRAY_TO_TUPLE(NSL_PP_ARRAY_REMOVE(NSL_PP_TUPLE_TO_ARRAY(tuple), i)) \
/**/
#
# define NSL_PP_TUPLE_REMOVE_RETURN(tuple, i) tuple
#
# /* NSL_PP_TUPLE_REMOVE_D */
#
# define NSL_PP_TUPLE_REMOVE_D(d, tuple, i) \
    NSL_PP_IIF \
        ( \
        NSL_PP_GREATER_D(d, NSL_PP_TUPLE_SIZE(tuple), 1), \
        NSL_PP_TUPLE_REMOVE_D_EXEC, \
        NSL_PP_TUPLE_REMOVE_D_RETURN \
        ) \
    (d, tuple, i) \
/**/
#
# define NSL_PP_TUPLE_REMOVE_D_EXEC(d, tuple, i) \
    NSL_PP_ARRAY_TO_TUPLE(NSL_PP_ARRAY_REMOVE_D(d, NSL_PP_TUPLE_TO_ARRAY(tuple), i)) \
/**/
#
# define NSL_PP_TUPLE_REMOVE_D_RETURN(d, tuple, i) tuple
#
# endif // NSL_PREPROCESSOR_TUPLE_REMOVE_H
