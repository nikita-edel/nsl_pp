# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_REPETITION_DEDUCE_R_HPP
# define BOOST_PREPROCESSOR_REPETITION_DEDUCE_R_HPP
#
# include <boost/preprocessor/config/config.h>
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()
#
# include <boost/preprocessor/detail/auto_rec.h>
# include <boost/preprocessor/repetition/for.h>
#
# /* BOOST_PP_DEDUCE_R */
#
# define BOOST_PP_DEDUCE_R() BOOST_PP_AUTO_REC(BOOST_PP_FOR_P, 256)
#
# else
#
# /* BOOST_PP_DEDUCE_R */
#
# include <boost/preprocessor/arithmetic/dec.h>
# include <boost/preprocessor/detail/auto_rec.h>
# include <boost/preprocessor/repetition/for.h>
# include <boost/preprocessor/config/limits.h>
#
# if BOOST_PP_LIMIT_FOR == 256
# define BOOST_PP_DEDUCE_R() BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_FOR_P, 256))
# elif BOOST_PP_LIMIT_FOR == 512
# define BOOST_PP_DEDUCE_R() BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_FOR_P, 512))
# elif BOOST_PP_LIMIT_FOR == 1024
# define BOOST_PP_DEDUCE_R() BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_FOR_P, 1024))
# else
# error Incorrect value for the BOOST_PP_LIMIT_FOR limit
# endif
#
# endif
#
# endif
