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
# ifndef NSL_PREPROCESSOR_ITERATION_ITERATE_H
# define NSL_PREPROCESSOR_ITERATION_ITERATE_H
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/arithmetic/inc.h>
# include <nsl/preprocessor/array/elem.h>
# include <nsl/preprocessor/array/size.h>
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/slot/slot.h>
# include <nsl/preprocessor/tuple/elem.h>
#
# /* NSL_PP_ITERATION_DEPTH */
#
# define NSL_PP_ITERATION_DEPTH() 0
#
# /* NSL_PP_ITERATION */
#
# define NSL_PP_ITERATION() NSL_PP_CAT(NSL_PP_ITERATION_, NSL_PP_ITERATION_DEPTH())
#
# /* NSL_PP_ITERATION_START && NSL_PP_ITERATION_FINISH */
#
# define NSL_PP_ITERATION_START() NSL_PP_CAT(NSL_PP_ITERATION_START_, NSL_PP_ITERATION_DEPTH())
# define NSL_PP_ITERATION_FINISH() NSL_PP_CAT(NSL_PP_ITERATION_FINISH_, NSL_PP_ITERATION_DEPTH())
#
# /* NSL_PP_ITERATION_FLAGS */
#
# define NSL_PP_ITERATION_FLAGS() (NSL_PP_CAT(NSL_PP_ITERATION_FLAGS_, NSL_PP_ITERATION_DEPTH())())
#
# /* NSL_PP_FRAME_ITERATION */
#
# define NSL_PP_FRAME_ITERATION(i) NSL_PP_CAT(NSL_PP_ITERATION_, i)
#
# /* NSL_PP_FRAME_START && NSL_PP_FRAME_FINISH */
#
# define NSL_PP_FRAME_START(i) NSL_PP_CAT(NSL_PP_ITERATION_START_, i)
# define NSL_PP_FRAME_FINISH(i) NSL_PP_CAT(NSL_PP_ITERATION_FINISH_, i)
#
# /* NSL_PP_FRAME_FLAGS */
#
# define NSL_PP_FRAME_FLAGS(i) (NSL_PP_CAT(NSL_PP_ITERATION_FLAGS_, i)())
#
# /* NSL_PP_RELATIVE_ITERATION */
#
# define NSL_PP_RELATIVE_ITERATION(i) NSL_PP_CAT(NSL_PP_RELATIVE_, i)(NSL_PP_ITERATION_)
#
# define NSL_PP_RELATIVE_0(m) NSL_PP_CAT(m, NSL_PP_ITERATION_DEPTH())
# define NSL_PP_RELATIVE_1(m) NSL_PP_CAT(m, NSL_PP_DEC(NSL_PP_ITERATION_DEPTH()))
# define NSL_PP_RELATIVE_2(m) NSL_PP_CAT(m, NSL_PP_DEC(NSL_PP_DEC(NSL_PP_ITERATION_DEPTH())))
# define NSL_PP_RELATIVE_3(m) NSL_PP_CAT(m, NSL_PP_DEC(NSL_PP_DEC(NSL_PP_DEC(NSL_PP_ITERATION_DEPTH()))))
# define NSL_PP_RELATIVE_4(m) NSL_PP_CAT(m, NSL_PP_DEC(NSL_PP_DEC(NSL_PP_DEC(NSL_PP_DEC(NSL_PP_ITERATION_DEPTH())))))
#
# /* NSL_PP_RELATIVE_START && NSL_PP_RELATIVE_FINISH */
#
# define NSL_PP_RELATIVE_START(i) NSL_PP_CAT(NSL_PP_RELATIVE_, i)(NSL_PP_ITERATION_START_)
# define NSL_PP_RELATIVE_FINISH(i) NSL_PP_CAT(NSL_PP_RELATIVE_, i)(NSL_PP_ITERATION_FINISH_)
#
# /* NSL_PP_RELATIVE_FLAGS */
#
# define NSL_PP_RELATIVE_FLAGS(i) (NSL_PP_CAT(NSL_PP_RELATIVE_, i)(NSL_PP_ITERATION_FLAGS_)())
#
# /* NSL_PP_ITERATE */
#
# define NSL_PP_ITERATE() NSL_PP_CAT(NSL_PP_ITERATE_, NSL_PP_INC(NSL_PP_ITERATION_DEPTH()))
#
# define NSL_PP_ITERATE_1 <nsl/preprocessor/iteration/detail/iter/forward1.h>
# define NSL_PP_ITERATE_2 <nsl/preprocessor/iteration/detail/iter/forward2.h>
# define NSL_PP_ITERATE_3 <nsl/preprocessor/iteration/detail/iter/forward3.h>
# define NSL_PP_ITERATE_4 <nsl/preprocessor/iteration/detail/iter/forward4.h>
# define NSL_PP_ITERATE_5 <nsl/preprocessor/iteration/detail/iter/forward5.h>
#
# endif
