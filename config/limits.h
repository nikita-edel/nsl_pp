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
# /* Revised by Edward Diener (2011,2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NSL_PREPROCESSOR_CONFIG_LIMITS_H
# define NSL_PREPROCESSOR_CONFIG_LIMITS_H
#
# include <nsl/preprocessor/config/config.h>
#
# if defined(NSL_PP_LIMIT_DIM)
# undef NSL_PP_LIMIT_DIM
# endif
# if defined(NSL_PP_LIMIT_ITERATION_DIM)
# undef NSL_PP_LIMIT_ITERATION_DIM
# endif
# if defined(NSL_PP_LIMIT_SLOT_SIG)
# undef NSL_PP_LIMIT_SLOT_SIG
# endif
# if defined(NSL_PP_LIMIT_SLOT_COUNT)
# undef NSL_PP_LIMIT_SLOT_COUNT
# endif
# if defined(NSL_PP_LIMIT_WHILE)
# undef NSL_PP_LIMIT_WHILE
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# if defined(NSL_PP_LIMIT_MAG)
# undef NSL_PP_LIMIT_MAG
# endif
# if defined(NSL_PP_LIMIT_VARIADIC)
# undef NSL_PP_LIMIT_VARIADIC
# endif
# if defined(NSL_PP_LIMIT_TUPLE)
# undef NSL_PP_LIMIT_TUPLE
# endif
# if defined(NSL_PP_LIMIT_FOR)
# undef NSL_PP_LIMIT_FOR
# endif
# if defined(NSL_PP_LIMIT_REPEAT)
# undef NSL_PP_LIMIT_REPEAT
# endif
# if defined(NSL_PP_LIMIT_SEQ)
# undef NSL_PP_LIMIT_SEQ
# endif
# if defined(NSL_PP_LIMIT_ITERATION)
# undef NSL_PP_LIMIT_ITERATION
# endif
#
# define NSL_PP_LIMIT_MAG 256
# define NSL_PP_LIMIT_WHILE 256
# define NSL_PP_LIMIT_VARIADIC 64
# define NSL_PP_LIMIT_TUPLE 64
# define NSL_PP_LIMIT_FOR 256
# define NSL_PP_LIMIT_SEQ 256
# define NSL_PP_LIMIT_REPEAT 256
# define NSL_PP_LIMIT_ITERATION 256
#
#else
#
# if defined(NSL_PP_LIMIT_MAG)
# if !(NSL_PP_LIMIT_MAG == 256 || NSL_PP_LIMIT_MAG == 512 || NSL_PP_LIMIT_MAG == 1024)
# undef NSL_PP_LIMIT_MAG
# define NSL_PP_LIMIT_MAG 256
# define NSL_PP_LIMIT_WHILE 256
# else
# define NSL_PP_LIMIT_WHILE NSL_PP_LIMIT_MAG
# if !defined(NSL_PP_LIMIT_SEQ)
# define NSL_PP_LIMIT_SEQ NSL_PP_LIMIT_MAG
# endif
# endif
# else
# define NSL_PP_LIMIT_MAG 256
# define NSL_PP_LIMIT_WHILE 256
# endif
#
# if defined(NSL_PP_LIMIT_VARIADIC)
# if !(NSL_PP_LIMIT_VARIADIC == 64 || NSL_PP_LIMIT_VARIADIC == 128 || NSL_PP_LIMIT_VARIADIC == 256)
# undef NSL_PP_LIMIT_VARIADIC
# define NSL_PP_LIMIT_VARIADIC 64
# endif
# else
# define NSL_PP_LIMIT_VARIADIC 64
# endif
#
# if defined(NSL_PP_LIMIT_TUPLE)
# if !(NSL_PP_LIMIT_TUPLE == 64 || NSL_PP_LIMIT_TUPLE == 128 || NSL_PP_LIMIT_TUPLE == 256)
# undef NSL_PP_LIMIT_TUPLE
# define NSL_PP_LIMIT_TUPLE 64
# elif NSL_PP_LIMIT_TUPLE > NSL_PP_LIMIT_VARIADIC
# undef NSL_PP_LIMIT_VARIADIC
# define NSL_PP_LIMIT_VARIADIC NSL_PP_LIMIT_TUPLE
# endif
# else
# define NSL_PP_LIMIT_TUPLE 64
# endif
#
# if defined(NSL_PP_LIMIT_FOR)
# if !(NSL_PP_LIMIT_FOR == 256 || NSL_PP_LIMIT_FOR == 512 || NSL_PP_LIMIT_FOR == 1024)
# undef NSL_PP_LIMIT_FOR
# define NSL_PP_LIMIT_FOR 256
# elif NSL_PP_LIMIT_FOR > NSL_PP_LIMIT_MAG
# undef NSL_PP_LIMIT_FOR
# define NSL_PP_LIMIT_FOR NSL_PP_LIMIT_MAG
# endif
# else
# define NSL_PP_LIMIT_FOR 256
# endif
#
# if defined(NSL_PP_LIMIT_REPEAT)
# if !(NSL_PP_LIMIT_REPEAT == 256 || NSL_PP_LIMIT_REPEAT == 512 || NSL_PP_LIMIT_REPEAT == 1024)
# undef NSL_PP_LIMIT_REPEAT
# define NSL_PP_LIMIT_REPEAT 256
# elif NSL_PP_LIMIT_REPEAT > NSL_PP_LIMIT_MAG
# undef NSL_PP_LIMIT_REPEAT
# define NSL_PP_LIMIT_REPEAT NSL_PP_LIMIT_MAG
# endif
# else
# define NSL_PP_LIMIT_REPEAT 256
# endif
#
# if defined(NSL_PP_LIMIT_SEQ)
# if !(NSL_PP_LIMIT_SEQ == 256 || NSL_PP_LIMIT_SEQ == 512 || NSL_PP_LIMIT_SEQ == 1024)
# undef NSL_PP_LIMIT_SEQ
# define NSL_PP_LIMIT_SEQ 256
# elif NSL_PP_LIMIT_SEQ > NSL_PP_LIMIT_MAG
# undef NSL_PP_LIMIT_SEQ
# define NSL_PP_LIMIT_SEQ NSL_PP_LIMIT_MAG
# endif
# else
# define NSL_PP_LIMIT_SEQ 256
# endif
#
# if defined(NSL_PP_LIMIT_ITERATION)
# if !(NSL_PP_LIMIT_ITERATION == 256 || NSL_PP_LIMIT_ITERATION == 512 || NSL_PP_LIMIT_ITERATION == 1024)
# undef NSL_PP_LIMIT_ITERATION
# define NSL_PP_LIMIT_ITERATION 256
# elif NSL_PP_LIMIT_ITERATION > NSL_PP_LIMIT_MAG
# undef NSL_PP_LIMIT_ITERATION
# define NSL_PP_LIMIT_ITERATION NSL_PP_LIMIT_MAG
# endif
# else
# define NSL_PP_LIMIT_ITERATION 256
# endif
#
# endif
#
# define NSL_PP_LIMIT_DIM 3
# define NSL_PP_LIMIT_ITERATION_DIM 3
# define NSL_PP_LIMIT_SLOT_SIG 10
# define NSL_PP_LIMIT_SLOT_COUNT 5
#
# endif
