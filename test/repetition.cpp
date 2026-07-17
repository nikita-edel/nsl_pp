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
# include "nsl/preprocessor/config/limits.h"
# include "nsl/preprocessor/arithmetic/inc.h"
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/comparison/equal.h"
# include "nsl/preprocessor/comparison/not_equal.h"
# include "nsl/preprocessor/control/iif.h"
# include "nsl/preprocessor/facilities/intercept.h"
# include "nsl/preprocessor/logical/bitor.h"
# include "nsl/preprocessor/repetition.h"
# include "test.h"

# define MAX 10

# define NTH(z, n, data) data ## n

int add(NSL_PP_ENUM_PARAMS(MAX, int x)) {
    return NSL_PP_REPEAT(MAX, NTH, + x);
}

const int r = add(NSL_PP_ENUM_PARAMS(MAX, 1 NSL_PP_INTERCEPT));

# define CONSTANT(z, n, text) NSL_PP_CAT(text, n) = n
const int NSL_PP_ENUM(MAX, CONSTANT, default_param_);

# define TEST(n) \
    void NSL_PP_CAT(test_enum_params, n)(NSL_PP_ENUM_PARAMS(n, int x)); \
    void NSL_PP_CAT(test_enum_params_with_a_default, n)(NSL_PP_ENUM_PARAMS_WITH_A_DEFAULT(n, int x, 0)); \
    void NSL_PP_CAT(test_enum_params_with_defaults, n)(NSL_PP_ENUM_PARAMS_WITH_DEFAULTS(n, int x, default_param_));

TEST(0)
TEST(MAX)

template<NSL_PP_ENUM_PARAMS(MAX, class T)> struct no_rescan;

# define F1(z, n, p) p n
BEGIN 1 + (4+5+6) NSL_PP_REPEAT_FROM_TO(4, 7, F1, -) END

# if NSL_PP_LIMIT_REPEAT == 512

# define RP512M(z,n,data)                      \
    struct NSL_PP_CAT(data,NSL_PP_INC(n)); \
/* */

NSL_PP_REPEAT_FROM_TO(508,512,RP512M,r512_t)

#endif

# if NSL_PP_LIMIT_REPEAT == 1024

# define RP1024M(z,n,data)                      \
    struct NSL_PP_CAT(data,NSL_PP_INC(n)); \
/* */

NSL_PP_REPEAT_FROM_TO(1010,1024,RP1024M,r1024_t)

#endif

# define PRED(r, state) NSL_PP_NOT_EQUAL(state, NSL_PP_INC(MAX))
# define OP(r, state) NSL_PP_INC(state)
# define MACRO(r, state) NSL_PP_COMMA_IF(NSL_PP_NOT_EQUAL(state, 1)) NSL_PP_CAT(class T, state)

template<NSL_PP_FOR(1, PRED, OP, MACRO)> struct for_test;

# if NSL_PP_LIMIT_FOR == 512

# define PRED512(r, state) NSL_PP_NOT_EQUAL(state, 512)

# define MACRO512_NUL(state)

# define MACRO512_OUT(state) struct NSL_PP_CAT(f_512t,state);

# define MACRO512(r, state)                    \
    NSL_PP_IIF                               \
        (                                      \
        NSL_PP_BITOR                         \
            (                                  \
            NSL_PP_BITOR                     \
                (                              \
                NSL_PP_EQUAL(state,100),     \
                NSL_PP_EQUAL(state,200)      \
                ),                             \
            NSL_PP_BITOR                     \
                (                              \
                NSL_PP_BITOR                 \
                    (                          \
                    NSL_PP_EQUAL(state,300), \
                    NSL_PP_EQUAL(state,400)  \
                    ),                         \
                NSL_PP_EQUAL(state,500)      \
                )                              \
            ),                                 \
        MACRO512_OUT,                          \
        MACRO512_NUL                           \
        )                                      \
    (state)                                    \
/* */

NSL_PP_FOR(0, PRED512, OP, MACRO512)

#endif

# if NSL_PP_LIMIT_FOR == 1024

# define PRED1024(r, state) NSL_PP_NOT_EQUAL(state, 1024)

# define MACRO1024_NUL(state)

# define MACRO1024_OUT(state) struct NSL_PP_CAT(f_1024t,state);

# define MACRO1024(r, state)                       \
    NSL_PP_IIF                                   \
        (                                          \
        NSL_PP_BITOR                             \
            (                                      \
            NSL_PP_BITOR                         \
                (                                  \
                NSL_PP_BITOR                     \
                    (                              \
                    NSL_PP_EQUAL(state,100),     \
                    NSL_PP_EQUAL(state,200)      \
                    ),                             \
                NSL_PP_BITOR                     \
                    (                              \
                    NSL_PP_BITOR                 \
                        (                          \
                        NSL_PP_EQUAL(state,300), \
                        NSL_PP_EQUAL(state,400)  \
                        ),                         \
                    NSL_PP_EQUAL(state,500)      \
                    )                              \
                ),                                 \
            NSL_PP_BITOR                         \
                (                                  \
                NSL_PP_BITOR                     \
                    (                              \
                    NSL_PP_EQUAL(state,600),     \
                    NSL_PP_EQUAL(state,700)      \
                    ),                             \
                NSL_PP_BITOR                     \
                    (                              \
                    NSL_PP_BITOR                 \
                        (                          \
                        NSL_PP_EQUAL(state,800), \
                        NSL_PP_EQUAL(state,900)  \
                        ),                         \
                    NSL_PP_EQUAL(state,1000)     \
                    )                              \
                )                                  \
            ),                                     \
        MACRO1024_OUT,                             \
        MACRO1024_NUL                              \
        )                                          \
    (state)                                        \
/* */

NSL_PP_FOR(0, PRED1024, OP, MACRO1024)

#endif
