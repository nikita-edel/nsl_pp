# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_LIST_FOLD_RIGHT_H
# define NSL_PREPROCESSOR_LIST_FOLD_RIGHT_H
#
# include "nsl/preprocessor/config/config.h"
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/debug/error.h"
# include "nsl/preprocessor/detail/auto_rec.h"
#
# if 0
#    define NSL_PP_LIST_FOLD_RIGHT(op, state, list)
# endif
#
# define NSL_PP_LIST_FOLD_RIGHT NSL_PP_CAT(NSL_PP_LIST_FOLD_RIGHT_, NSL_PP_AUTO_REC(NSL_PP_WHILE_P, 256))
#
# define NSL_PP_LIST_FOLD_RIGHT_257(o, s, l) NSL_PP_ERROR(0x0004)
#
# define NSL_PP_LIST_FOLD_RIGHT_D(d, o, s, l) NSL_PP_LIST_FOLD_RIGHT_ ## d(o, s, l)
# define NSL_PP_LIST_FOLD_RIGHT_2ND NSL_PP_LIST_FOLD_RIGHT
# define NSL_PP_LIST_FOLD_RIGHT_2ND_D NSL_PP_LIST_FOLD_RIGHT_D
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    include "nsl/preprocessor/list/detail/edg/fold_right.h"
# else
#    include "nsl/preprocessor/list/detail/fold_right.h"
# endif
#
# else
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/debug/error.h"
# include "nsl/preprocessor/detail/auto_rec.h"
#
# if 0
#    define NSL_PP_LIST_FOLD_RIGHT(op, state, list)
# endif
#
# include "nsl/preprocessor/config/limits.h"
#
# if NSL_PP_LIMIT_WHILE == 256
# define NSL_PP_LIST_FOLD_RIGHT NSL_PP_CAT(NSL_PP_LIST_FOLD_RIGHT_, NSL_PP_DEC(NSL_PP_AUTO_REC(NSL_PP_WHILE_P, 256)))
# define NSL_PP_LIST_FOLD_RIGHT_257(o, s, l) NSL_PP_ERROR(0x0004)
# elif NSL_PP_LIMIT_WHILE == 512
# define NSL_PP_LIST_FOLD_RIGHT NSL_PP_CAT(NSL_PP_LIST_FOLD_RIGHT_, NSL_PP_DEC(NSL_PP_AUTO_REC(NSL_PP_WHILE_P, 512)))
# define NSL_PP_LIST_FOLD_RIGHT_513(o, s, l) NSL_PP_ERROR(0x0004)
# elif NSL_PP_LIMIT_WHILE == 1024
# define NSL_PP_LIST_FOLD_RIGHT NSL_PP_CAT(NSL_PP_LIST_FOLD_RIGHT_, NSL_PP_DEC(NSL_PP_AUTO_REC(NSL_PP_WHILE_P, 1024)))
# define NSL_PP_LIST_FOLD_RIGHT_1025(o, s, l) NSL_PP_ERROR(0x0004)
# else
# error Incorrect value for the NSL_PP_LIMIT_WHILE limit
# endif
#
# define NSL_PP_LIST_FOLD_RIGHT_D(d, o, s, l) NSL_PP_LIST_FOLD_RIGHT_ ## d(o, s, l)
# define NSL_PP_LIST_FOLD_RIGHT_2ND NSL_PP_LIST_FOLD_RIGHT
# define NSL_PP_LIST_FOLD_RIGHT_2ND_D NSL_PP_LIST_FOLD_RIGHT_D
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    include "nsl/preprocessor/list/detail/edg/fold_right.h"
# else
#    include "nsl/preprocessor/list/detail/fold_right.h"
# endif
#
# endif
#
# endif
