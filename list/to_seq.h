# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Paul Mensonides (2011) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_LIST_TO_SEQ_H
# define NSL_PREPROCESSOR_LIST_TO_SEQ_H
#
# include "nsl/preprocessor/list/for_each.h"
#
# /* NSL_PP_LIST_TO_SEQ */
#
# define NSL_PP_LIST_TO_SEQ(list) \
    NSL_PP_LIST_FOR_EACH(NSL_PP_LIST_TO_SEQ_MACRO, ~, list) \
    /**/
# define NSL_PP_LIST_TO_SEQ_MACRO(r, data, elem) (elem)
#
# /* NSL_PP_LIST_TO_SEQ_R */
#
# define NSL_PP_LIST_TO_SEQ_R(r, list) \
    NSL_PP_LIST_FOR_EACH_R(r, NSL_PP_LIST_TO_SEQ_MACRO, ~, list) \
    /**/
#
# endif /* NSL_PREPROCESSOR_LIST_TO_SEQ_H */
