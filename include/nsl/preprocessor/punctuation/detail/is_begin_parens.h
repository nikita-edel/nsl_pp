# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
#ifndef NSL_PREPROCESSOR_DETAIL_IS_BEGIN_PARENS_H
#define NSL_PREPROCESSOR_DETAIL_IS_BEGIN_PARENS_H

#if NSL_PP_VARIADICS_MSVC

#include <nsl/preprocessor/facilities/empty.h>

#define NSL_PP_DETAIL_VD_IBP_CAT(a, b) NSL_PP_DETAIL_VD_IBP_CAT_I(a, b)
#define NSL_PP_DETAIL_VD_IBP_CAT_I(a, b) NSL_PP_DETAIL_VD_IBP_CAT_II(a ## b)
#define NSL_PP_DETAIL_VD_IBP_CAT_II(res) res

#define NSL_PP_DETAIL_IBP_SPLIT(i, ...) \
    NSL_PP_DETAIL_VD_IBP_CAT(NSL_PP_DETAIL_IBP_PRIMITIVE_CAT(NSL_PP_DETAIL_IBP_SPLIT_,i)(__VA_ARGS__),NSL_PP_EMPTY()) \
/**/

#define NSL_PP_DETAIL_IBP_IS_VARIADIC_C(...) 1 1

#else

#define NSL_PP_DETAIL_IBP_SPLIT(i, ...) \
    NSL_PP_DETAIL_IBP_PRIMITIVE_CAT(NSL_PP_DETAIL_IBP_SPLIT_,i)(__VA_ARGS__) \
/**/

#define NSL_PP_DETAIL_IBP_IS_VARIADIC_C(...) 1

#endif /* NSL_PP_VARIADICS_MSVC */

#define NSL_PP_DETAIL_IBP_SPLIT_0(a, ...) a
#define NSL_PP_DETAIL_IBP_SPLIT_1(a, ...) __VA_ARGS__

#define NSL_PP_DETAIL_IBP_CAT(a, ...) NSL_PP_DETAIL_IBP_PRIMITIVE_CAT(a,__VA_ARGS__)
#define NSL_PP_DETAIL_IBP_PRIMITIVE_CAT(a, ...) a ## __VA_ARGS__

#define NSL_PP_DETAIL_IBP_IS_VARIADIC_R_1 1,
#define NSL_PP_DETAIL_IBP_IS_VARIADIC_R_NSL_PP_DETAIL_IBP_IS_VARIADIC_C 0,

#endif /* NSL_PREPROCESSOR_DETAIL_IS_BEGIN_PARENS_H */
