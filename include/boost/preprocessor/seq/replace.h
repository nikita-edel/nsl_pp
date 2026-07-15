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
# ifndef BOOST_PREPROCESSOR_SEQ_REPLACE_H
# define BOOST_PREPROCESSOR_SEQ_REPLACE_H
#
# include <boost/preprocessor/arithmetic/dec.h>
# include <boost/preprocessor/arithmetic/inc.h>
# include <boost/preprocessor/config/config.h>
# include <boost/preprocessor/comparison/equal.h>
# include <boost/preprocessor/control/iif.h>
# include <boost/preprocessor/seq/first_n.h>
# include <boost/preprocessor/seq/rest_n.h>
# include <boost/preprocessor/seq/size.h>
#
# /* BOOST_PP_SEQ_REPLACE */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    define BOOST_PP_SEQ_REPLACE(seq, i, elem) BOOST_PP_SEQ_FIRST_N(i, seq) (elem) BOOST_PP_SEQ_REPLACE_DETAIL_REST(seq, i)
# else
#    define BOOST_PP_SEQ_REPLACE(seq, i, elem) BOOST_PP_SEQ_REPLACE_I(seq, i, elem)
#    define BOOST_PP_SEQ_REPLACE_I(seq, i, elem) BOOST_PP_SEQ_FIRST_N(i, seq) (elem) BOOST_PP_SEQ_REPLACE_DETAIL_REST(seq, i)
# endif
#
#    define BOOST_PP_SEQ_REPLACE_DETAIL_REST_EMPTY(seq, i)
#    define BOOST_PP_SEQ_REPLACE_DETAIL_REST_VALID(seq, i) BOOST_PP_SEQ_REST_N(BOOST_PP_INC(i), seq)
#    define BOOST_PP_SEQ_REPLACE_DETAIL_REST(seq, i) \
        BOOST_PP_IIF \
            ( \
            BOOST_PP_EQUAL(i,BOOST_PP_DEC(BOOST_PP_SEQ_SIZE(seq))), \
            BOOST_PP_SEQ_REPLACE_DETAIL_REST_EMPTY, \
            BOOST_PP_SEQ_REPLACE_DETAIL_REST_VALID \
            ) \
        (seq, i) \
/**/
#
# endif
