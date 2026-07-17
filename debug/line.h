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
# ifndef NSL_PREPROCESSOR_DEBUG_LINE_H
# define NSL_PREPROCESSOR_DEBUG_LINE_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/iteration/iterate.h"
# include "nsl/preprocessor/stringize.h"
#
# /* NSL_PP_LINE */
#
# if NSL_PP_CONFIG_EXTENDED_LINE_INFO
#    define NSL_PP_LINE(line, file) line NSL_PP_CAT(NSL_PP_LINE_, NSL_PP_IS_ITERATING)(file)
#    define NSL_PP_LINE_NSL_PP_IS_ITERATING(file) #file
#    define NSL_PP_LINE_1(file) NSL_PP_STR(file NSL_PP_CAT(NSL_PP_LINE_I_, NSL_PP_ITERATION_DEPTH())())
#    define NSL_PP_LINE_I_1() [NSL_PP_FRAME_ITERATION(1)]
#    define NSL_PP_LINE_I_2() NSL_PP_LINE_I_1()[NSL_PP_FRAME_ITERATION(2)]
#    define NSL_PP_LINE_I_3() NSL_PP_LINE_I_2()[NSL_PP_FRAME_ITERATION(3)]
#    define NSL_PP_LINE_I_4() NSL_PP_LINE_I_3()[NSL_PP_FRAME_ITERATION(4)]
#    define NSL_PP_LINE_I_5() NSL_PP_LINE_I_4()[NSL_PP_FRAME_ITERATION(5)]
# else
#    define NSL_PP_LINE(line, file) line __FILE__
# endif
#
# endif
