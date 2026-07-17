# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# include "nsl/preprocessor/config/limits.h"
# include "nsl/preprocessor/selection.h"
# include "test.h"

BEGIN NSL_PP_MAX(2, 2) == 2 END
BEGIN NSL_PP_MAX(2, 1) == 2 END
BEGIN NSL_PP_MAX(1, 2) == 2 END

BEGIN NSL_PP_MIN(2, 2) == 2 END
BEGIN NSL_PP_MIN(2, 1) == 1 END
BEGIN NSL_PP_MIN(1, 2) == 1 END

# if NSL_PP_LIMIT_MAG == 512

BEGIN NSL_PP_MAX(438, 438) == 438 END
BEGIN NSL_PP_MAX(371, 289) == 371 END
BEGIN NSL_PP_MAX(390, 468) == 468 END

BEGIN NSL_PP_MIN(391, 391) == 391 END
BEGIN NSL_PP_MIN(425, 274) == 274 END
BEGIN NSL_PP_MIN(410, 503) == 410 END

# endif

# if NSL_PP_LIMIT_MAG == 1024

BEGIN NSL_PP_MAX(892, 892) == 892 END
BEGIN NSL_PP_MAX(967, 640) == 967 END
BEGIN NSL_PP_MAX(583, 745) == 745 END

BEGIN NSL_PP_MIN(837, 837) == 837 END
BEGIN NSL_PP_MIN(646, 583) == 583 END
BEGIN NSL_PP_MIN(782, 826) == 782 END

# endif
