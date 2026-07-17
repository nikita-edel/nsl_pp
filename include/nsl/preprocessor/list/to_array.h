# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2011.
#  *     (C) Copyright Edward Diener 2011,2014.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_LIST_TO_ARRAY_H
# define NSL_PREPROCESSOR_LIST_TO_ARRAY_H
#
# include "nsl/preprocessor/arithmetic/dec.h"
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/control/while.h"
# include "nsl/preprocessor/list/adt.h"
# include "nsl/preprocessor/tuple/elem.h"
# include "nsl/preprocessor/tuple/rem.h"
# if NSL_PP_VARIADICS_MSVC && (_MSC_VER <= 1400)
# include "nsl/preprocessor/control/iif.h"
# endif
#
# /* NSL_PP_LIST_TO_ARRAY */
#
# if NSL_PP_VARIADICS_MSVC && (_MSC_VER <= 1400)
# define NSL_PP_LIST_TO_ARRAY(list) \
    NSL_PP_IIF \
        ( \
        NSL_PP_LIST_IS_NIL(list), \
        NSL_PP_LIST_TO_ARRAY_VC8ORLESS_EMPTY, \
        NSL_PP_LIST_TO_ARRAY_VC8ORLESS_DO \
        ) \
    (list) \
/**/
# define NSL_PP_LIST_TO_ARRAY_VC8ORLESS_EMPTY(list) (0,())
# define NSL_PP_LIST_TO_ARRAY_VC8ORLESS_DO(list) NSL_PP_LIST_TO_ARRAY_I(NSL_PP_WHILE, list)
# else
# define NSL_PP_LIST_TO_ARRAY(list) NSL_PP_LIST_TO_ARRAY_I(NSL_PP_WHILE, list)
# endif

# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MSVC()
#    define NSL_PP_LIST_TO_ARRAY_I(w, list) \
        NSL_PP_LIST_TO_ARRAY_II(((NSL_PP_TUPLE_REM_CTOR( \
            3, \
            w(NSL_PP_LIST_TO_ARRAY_P, NSL_PP_LIST_TO_ARRAY_O, (list, 1, (~))) \
        )))) \
        /**/
#    define NSL_PP_LIST_TO_ARRAY_II(p) NSL_PP_LIST_TO_ARRAY_II_B(p)
#    define NSL_PP_LIST_TO_ARRAY_II_B(p) NSL_PP_LIST_TO_ARRAY_II_C ## p
#    define NSL_PP_LIST_TO_ARRAY_II_C(p) NSL_PP_LIST_TO_ARRAY_III p
# else
#    define NSL_PP_LIST_TO_ARRAY_I(w, list) \
        NSL_PP_LIST_TO_ARRAY_II(NSL_PP_TUPLE_REM_CTOR( \
            3, \
            w(NSL_PP_LIST_TO_ARRAY_P, NSL_PP_LIST_TO_ARRAY_O, (list, 1, (~))) \
        )) \
        /**/
#    define NSL_PP_LIST_TO_ARRAY_II(im) NSL_PP_LIST_TO_ARRAY_III(im)
# endif
# define NSL_PP_LIST_TO_ARRAY_III(list, size, tuple) (NSL_PP_DEC(size), NSL_PP_LIST_TO_ARRAY_IV tuple)
# define NSL_PP_LIST_TO_ARRAY_IV(_, ...) (__VA_ARGS__)
# define NSL_PP_LIST_TO_ARRAY_P(d, state) NSL_PP_LIST_IS_CONS(NSL_PP_TUPLE_ELEM(3, 0, state))
# define NSL_PP_LIST_TO_ARRAY_O(d, state) NSL_PP_LIST_TO_ARRAY_O_I state
# define NSL_PP_LIST_TO_ARRAY_O_I(list, size, tuple) (NSL_PP_LIST_REST(list), NSL_PP_INC(size), (NSL_PP_TUPLE_REM(size) tuple, NSL_PP_LIST_FIRST(list)))
#
# /* NSL_PP_LIST_TO_ARRAY_D */
#
# if NSL_PP_VARIADICS_MSVC && (_MSC_VER <= 1400)
# define NSL_PP_LIST_TO_ARRAY_D(d, list) \
    NSL_PP_IIF \
        ( \
        NSL_PP_LIST_IS_NIL(list), \
        NSL_PP_LIST_TO_ARRAY_D_VC8ORLESS_EMPTY, \
        NSL_PP_LIST_TO_ARRAY_D_VC8ORLESS_DO \
        ) \
    (d, list) \
/**/
# define NSL_PP_LIST_TO_ARRAY_D_VC8ORLESS_EMPTY(d, list) (0,())
# define NSL_PP_LIST_TO_ARRAY_D_VC8ORLESS_DO(d, list) NSL_PP_LIST_TO_ARRAY_I(NSL_PP_WHILE_ ## d, list)
# else
# define NSL_PP_LIST_TO_ARRAY_D(d, list) NSL_PP_LIST_TO_ARRAY_I(NSL_PP_WHILE_ ## d, list)
# endif
#
# endif /* NSL_PREPROCESSOR_LIST_TO_ARRAY_H */
