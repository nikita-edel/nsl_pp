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
# include <nsl/preprocessor/slot.h>
# include "test.h"
# include <nsl/preprocessor/slot/counter.h>

# define X() 4

# define NSL_PP_VALUE 1 + 2 + 3 + X()
# include NSL_PP_ASSIGN_SLOT(1)

# undef X

BEGIN NSL_PP_SLOT(1) == 10 END

# define NSL_PP_VALUE NSL_PP_SLOT(1) * NSL_PP_SLOT(1)
# include NSL_PP_ASSIGN_SLOT(1)

BEGIN NSL_PP_SLOT(1) == 100 END

BEGIN NSL_PP_COUNTER == 0 END

#include NSL_PP_UPDATE_COUNTER()

BEGIN NSL_PP_COUNTER == 1 END

#include NSL_PP_UPDATE_COUNTER()
#include NSL_PP_UPDATE_COUNTER()

BEGIN NSL_PP_COUNTER == 3 END

#include NSL_PP_UPDATE_COUNTER()
#include NSL_PP_UPDATE_COUNTER()
#include NSL_PP_UPDATE_COUNTER()

BEGIN NSL_PP_COUNTER == 6 END

#include NSL_PP_UPDATE_COUNTER()
#include NSL_PP_UPDATE_COUNTER()
#include NSL_PP_UPDATE_COUNTER()
#include NSL_PP_UPDATE_COUNTER()
#include NSL_PP_UPDATE_COUNTER()

BEGIN NSL_PP_COUNTER == 11 END
