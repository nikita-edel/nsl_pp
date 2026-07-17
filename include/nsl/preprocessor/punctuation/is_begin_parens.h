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
# ifndef NSL_PREPROCESSOR_IS_BEGIN_PARENS_H
# define NSL_PREPROCESSOR_IS_BEGIN_PARENS_H

#include "nsl/preprocessor/config/config.h"
#include "nsl/preprocessor/punctuation/detail/is_begin_parens.h"

#if NSL_PP_VARIADICS_MSVC && _MSC_VER <= 1400

#define NSL_PP_IS_BEGIN_PARENS(param) \
    NSL_PP_DETAIL_IBP_SPLIT \
      ( \
      0, \
      NSL_PP_DETAIL_IBP_CAT \
        ( \
        NSL_PP_DETAIL_IBP_IS_VARIADIC_R_, \
        NSL_PP_DETAIL_IBP_IS_VARIADIC_C param \
        ) \
      ) \
/**/

#else

#define NSL_PP_IS_BEGIN_PARENS(...) \
    NSL_PP_DETAIL_IBP_SPLIT \
      ( \
      0, \
      NSL_PP_DETAIL_IBP_CAT \
        ( \
        NSL_PP_DETAIL_IBP_IS_VARIADIC_R_, \
        NSL_PP_DETAIL_IBP_IS_VARIADIC_C __VA_ARGS__ \
        ) \
      ) \
/**/

#endif /* NSL_PP_VARIADICS_MSVC && _MSC_VER <= 1400 */
#endif /* NSL_PREPROCESSOR_IS_BEGIN_PARENS_H */
