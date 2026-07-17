# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014,2019.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_FACILITIES_IS_EMPTY_VARIADIC_H
# define NSL_PREPROCESSOR_FACILITIES_IS_EMPTY_VARIADIC_H
#
# include <nsl/preprocessor/config/config.h>
# include <nsl/preprocessor/punctuation/is_begin_parens.h>
# include <nsl/preprocessor/facilities/detail/is_empty.h>
#
#if NSL_PP_VARIADICS_MSVC && _MSC_VER <= 1400
#
#define NSL_PP_IS_EMPTY(param) \
    NSL_PP_DETAIL_IS_EMPTY_IIF \
      ( \
      NSL_PP_IS_BEGIN_PARENS \
        ( \
        param \
        ) \
      ) \
      ( \
      NSL_PP_IS_EMPTY_ZERO, \
      NSL_PP_DETAIL_IS_EMPTY_PROCESS \
      ) \
    (param) \
/**/
#define NSL_PP_IS_EMPTY_ZERO(param) 0
# else
# if defined(__cplusplus) && __cplusplus > 201703L
# include <nsl/preprocessor/variadic/has_opt.h>
#define NSL_PP_IS_EMPTY(...) \
    NSL_PP_DETAIL_IS_EMPTY_IIF \
      ( \
      NSL_PP_VARIADIC_HAS_OPT() \
      ) \
      ( \
      NSL_PP_IS_EMPTY_OPT, \
      NSL_PP_IS_EMPTY_NO_OPT \
      ) \
    (__VA_ARGS__) \
/**/
#define NSL_PP_IS_EMPTY_FUNCTION2(...) \
    __VA_OPT__(0,) 1 \
/**/
#define NSL_PP_IS_EMPTY_FUNCTION(...) \
    NSL_PP_IS_EMPTY_FUNCTION2(__VA_ARGS__) \
/**/
#define NSL_PP_IS_EMPTY_OPT(...) \
    NSL_PP_VARIADIC_HAS_OPT_ELEM0(NSL_PP_IS_EMPTY_FUNCTION(__VA_ARGS__),) \
/**/
# else
#define NSL_PP_IS_EMPTY(...) \
    NSL_PP_IS_EMPTY_NO_OPT(__VA_ARGS__) \
/**/
# endif /* defined(__cplusplus) && __cplusplus > 201703L */
#define NSL_PP_IS_EMPTY_NO_OPT(...) \
    NSL_PP_DETAIL_IS_EMPTY_IIF \
      ( \
      NSL_PP_IS_BEGIN_PARENS \
        ( \
        __VA_ARGS__ \
        ) \
      ) \
      ( \
      NSL_PP_IS_EMPTY_ZERO, \
      NSL_PP_DETAIL_IS_EMPTY_PROCESS \
      ) \
    (__VA_ARGS__) \
/**/
#define NSL_PP_IS_EMPTY_ZERO(...) 0
# endif /* NSL_PP_VARIADICS_MSVC && _MSC_VER <= 1400 */
# endif /* NSL_PREPROCESSOR_FACILITIES_IS_EMPTY_VARIADIC_H */
