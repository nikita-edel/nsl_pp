# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_ARRAY_DETAIL_GET_DATA_H
# define NSL_PREPROCESSOR_ARRAY_DETAIL_GET_DATA_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/tuple/rem.h>
# include <nsl/preprocessor/control/if.h>
# include <nsl/preprocessor/control/iif.h>
# include <nsl/preprocessor/facilities/is_1.h>
#
# /* NSL_PP_ARRAY_DETAIL_GET_DATA */
#
# define NSL_PP_ARRAY_DETAIL_GET_DATA_NONE(size, data)

# if !(NSL_PP_VARIADICS_MSVC && _MSC_VER <= 1400)
#    if NSL_PP_VARIADICS_MSVC
#       define NSL_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_DEFAULT(size, data) NSL_PP_TUPLE_REM(size) data
#       define NSL_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_CAT(size, data) NSL_PP_TUPLE_REM_CAT(size) data
#       define NSL_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) \
            NSL_PP_IIF \
                ( \
                NSL_PP_IS_1(size), \
                NSL_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_CAT, \
                NSL_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_DEFAULT \
                ) \
            (size,data) \
/**/
#    else
#       define NSL_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) NSL_PP_TUPLE_REM(size) data
#    endif
# else
#    define NSL_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) NSL_PP_TUPLE_REM(size) data
# endif

# define NSL_PP_ARRAY_DETAIL_GET_DATA(size, data) \
    NSL_PP_IF \
        ( \
        size, \
        NSL_PP_ARRAY_DETAIL_GET_DATA_ANY, \
        NSL_PP_ARRAY_DETAIL_GET_DATA_NONE \
        ) \
    (size,data) \
/**/
#
# endif /* NSL_PREPROCESSOR_ARRAY_DETAIL_GET_DATA_H */
