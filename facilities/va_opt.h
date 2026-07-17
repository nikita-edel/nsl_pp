# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_FACILITIES_VA_OPT_H
# define NSL_PREPROCESSOR_FACILITIES_VA_OPT_H
# include "nsl/preprocessor/variadic/has_opt.h"
# if NSL_PP_VARIADIC_HAS_OPT()
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/facilities/check_empty.h"
# include "nsl/preprocessor/tuple/rem.h"
# define NSL_PP_VA_OPT_IMPL(atuple) \
    NSL_PP_TUPLE_REM() atuple       \
/**/
# define NSL_PP_VA_OPT(rdata,rempty,...)     \
    NSL_PP_VA_OPT_IMPL                       \
        (                                      \
        NSL_PP_IIF                           \
            (                                  \
            NSL_PP_CHECK_EMPTY(__VA_ARGS__), \
            rempty,                            \
            rdata                              \
            )                                  \
        )                                      \
/**/
# endif /* NSL_PP_VARIADIC_HAS_OPT() */
# endif /* NSL_PREPROCESSOR_FACILITIES_VA_OPT_H */
