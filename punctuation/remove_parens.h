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
#ifndef NSL_PREPROCESSOR_REMOVE_PARENS_H
#define NSL_PREPROCESSOR_REMOVE_PARENS_H

#include "nsl/preprocessor/config/config.h"
#include "nsl/preprocessor/control/iif.h"
#include "nsl/preprocessor/facilities/identity.h"
#include "nsl/preprocessor/punctuation/is_begin_parens.h"
#include "nsl/preprocessor/tuple/enum.h"

#define NSL_PP_REMOVE_PARENS(param) \
    NSL_PP_IIF \
      ( \
      NSL_PP_IS_BEGIN_PARENS(param), \
      NSL_PP_REMOVE_PARENS_DO, \
      NSL_PP_IDENTITY \
      ) \
    (param)() \
/**/

#define NSL_PP_REMOVE_PARENS_DO(param) \
  NSL_PP_IDENTITY(NSL_PP_TUPLE_ENUM(param)) \
/**/

#endif /* NSL_PREPROCESSOR_REMOVE_PARENS_H */
