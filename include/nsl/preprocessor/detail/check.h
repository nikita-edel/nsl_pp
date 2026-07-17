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
# ifndef NSL_PREPROCESSOR_DETAIL_CHECK_H
# define NSL_PREPROCESSOR_DETAIL_CHECK_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
#
# /* NSL_PP_CHECK */
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_CHECK(x, type) NSL_PP_CHECK_D(x, type)
# else
#    define NSL_PP_CHECK(x, type) NSL_PP_CHECK_OO((x, type))
#    define NSL_PP_CHECK_OO(par) NSL_PP_CHECK_D ## par
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC() && ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_DMC()
#    define NSL_PP_CHECK_D(x, type) NSL_PP_CHECK_1(NSL_PP_CAT(NSL_PP_CHECK_RESULT_, type x))
#    define NSL_PP_CHECK_1(chk) NSL_PP_CHECK_2(chk)
#    define NSL_PP_CHECK_2(res, _) res
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_CHECK_D(x, type) NSL_PP_CHECK_1(type x)
#    define NSL_PP_CHECK_1(chk) NSL_PP_CHECK_2(chk)
#    define NSL_PP_CHECK_2(chk) NSL_PP_CHECK_3((NSL_PP_CHECK_RESULT_ ## chk))
#    define NSL_PP_CHECK_3(im) NSL_PP_CHECK_5(NSL_PP_CHECK_4 im)
#    define NSL_PP_CHECK_4(res, _) res
#    define NSL_PP_CHECK_5(res) res
# else /* DMC */
#    define NSL_PP_CHECK_D(x, type) NSL_PP_CHECK_OO((type x))
#    define NSL_PP_CHECK_OO(par) NSL_PP_CHECK_0 ## par
#    define NSL_PP_CHECK_0(chk) NSL_PP_CHECK_1(NSL_PP_CAT(NSL_PP_CHECK_RESULT_, chk))
#    define NSL_PP_CHECK_1(chk) NSL_PP_CHECK_2(chk)
#    define NSL_PP_CHECK_2(res, _) res
# endif
#
# define NSL_PP_CHECK_RESULT_1 1, NSL_PP_NIL
#
# endif
