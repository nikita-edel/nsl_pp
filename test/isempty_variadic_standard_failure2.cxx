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
# include "nsl/preprocessor/facilities/is_empty.h"
# include "test.h"

#if (NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()) && !NSL_PP_VARIADICS_MSVC

#define FUNC_GEN9(x,y,z) anything
  
#if defined(__cplusplus) && __cplusplus > 201703L
  
# include "nsl/preprocessor/variadic/has_opt.h"

BEGIN NSL_PP_IS_EMPTY(FUNC_GEN9) == NSL_PP_VARIADIC_HAS_OPT() END

#else

BEGIN NSL_PP_IS_EMPTY(FUNC_GEN9) == 0 END

#endif

#else
  
BEGIN 1 == 0 END

#endif
