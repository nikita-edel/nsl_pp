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
# if !NSL_PP_IS_ITERATING
#
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/comparison/equal.h>
# include <nsl/preprocessor/control/expr_iif.h>
# include <nsl/preprocessor/iteration.h>
# include <nsl/preprocessor/logical/bitor.h>
# include "test.h"
#
# define NO_FLAGS
#
# define NSL_PP_ITERATION_PARAMS_1 (3, (1, 10, "iteration.h"))
# include NSL_PP_ITERATE()
#
# undef NO_FLAGS
#
# define NSL_PP_ITERATION_PARAMS_1 (4, (1, 5, "iteration.h", 0x0001))
# include NSL_PP_ITERATE()
#
# define NSL_PP_ITERATION_PARAMS_1 (4, (1, 5, "iteration.h", 0x0002))
# include NSL_PP_ITERATE()
#
# if NSL_PP_LIMIT_ITERATION == 512
#
# define ITER100S(n)                       \
         NSL_PP_BITOR                    \
            (                              \
            NSL_PP_BITOR                 \
                (                          \
                NSL_PP_EQUAL(n,100),     \
                NSL_PP_EQUAL(n,200)      \
                ),                         \
            NSL_PP_BITOR                 \
                (                          \
                NSL_PP_BITOR             \
                    (                      \
                    NSL_PP_EQUAL(n,300), \
                    NSL_PP_EQUAL(n,400)  \
                    ),                     \
                NSL_PP_EQUAL(n,500)      \
                )                          \
            )                              \
/* */
#
# define NSL_PP_ITERATION_PARAMS_1 (4, (0, 512, "iteration.h", 0x0003))
# include NSL_PP_ITERATE()
#
# undef ITER100S
#
# define ITER50S(n)                        \
         NSL_PP_BITOR                    \
            (                              \
            NSL_PP_BITOR                 \
                (                          \
                NSL_PP_EQUAL(n,450),     \
                NSL_PP_EQUAL(n,350)      \
                ),                         \
            NSL_PP_BITOR                 \
                (                          \
                NSL_PP_BITOR             \
                    (                      \
                    NSL_PP_EQUAL(n,250), \
                    NSL_PP_EQUAL(n,150)  \
                    ),                     \
                NSL_PP_EQUAL(n,50)       \
                )                          \
            )                              \
/* */
#
# define NSL_PP_ITERATION_PARAMS_1 (4, (512, 0, "iteration.h", 0x0004))
# include NSL_PP_ITERATE()
#
# undef ITER50S
#
# endif
#
# if NSL_PP_LIMIT_ITERATION == 1024
#
# define ITER100SA(n)                          \
         NSL_PP_BITOR                        \
             (                                 \
             NSL_PP_BITOR                    \
                (                              \
                NSL_PP_BITOR                 \
                    (                          \
                    NSL_PP_EQUAL(n,100),     \
                    NSL_PP_EQUAL(n,200)      \
                    ),                         \
                NSL_PP_BITOR                 \
                    (                          \
                    NSL_PP_BITOR             \
                        (                      \
                        NSL_PP_EQUAL(n,300), \
                        NSL_PP_EQUAL(n,400)  \
                        ),                     \
                    NSL_PP_EQUAL(n,500)      \
                    )                          \
                ),                             \
             NSL_PP_BITOR                    \
                (                              \
                NSL_PP_BITOR                 \
                    (                          \
                    NSL_PP_EQUAL(n,600),     \
                    NSL_PP_EQUAL(n,700)      \
                    ),                         \
                NSL_PP_BITOR                 \
                    (                          \
                    NSL_PP_BITOR             \
                        (                      \
                        NSL_PP_EQUAL(n,800), \
                        NSL_PP_EQUAL(n,900)  \
                        ),                     \
                    NSL_PP_EQUAL(n,1000)     \
                    )                          \
                )                              \
             )                                 \
/* */
#
# define NSL_PP_ITERATION_PARAMS_1 (4, (0, 1024, "iteration.h", 0x0005))
# include NSL_PP_ITERATE()
#
# undef ITER100SA
#
# define ITER50SA(n)                           \
         NSL_PP_BITOR                        \
             (                                 \
             NSL_PP_BITOR                    \
                (                              \
                NSL_PP_BITOR                 \
                    (                          \
                    NSL_PP_EQUAL(n,950),     \
                    NSL_PP_EQUAL(n,850)      \
                    ),                         \
                NSL_PP_BITOR                 \
                    (                          \
                    NSL_PP_BITOR             \
                        (                      \
                        NSL_PP_EQUAL(n,750), \
                        NSL_PP_EQUAL(n,650)  \
                        ),                     \
                    NSL_PP_EQUAL(n,550)       \
                    )                          \
                ),                             \
             NSL_PP_BITOR                    \
                (                              \
                NSL_PP_BITOR                 \
                    (                          \
                    NSL_PP_EQUAL(n,450),     \
                    NSL_PP_EQUAL(n,350)      \
                    ),                         \
                NSL_PP_BITOR                 \
                    (                          \
                    NSL_PP_BITOR             \
                        (                      \
                        NSL_PP_EQUAL(n,250), \
                        NSL_PP_EQUAL(n,150)  \
                        ),                     \
                    NSL_PP_EQUAL(n,50)       \
                    )                          \
                )                              \
             )                                 \
/* */
#
# define NSL_PP_ITERATION_PARAMS_1 (4, (1024, 0, "iteration.h", 0x0006))
# include NSL_PP_ITERATE()
#
# undef ITER50SA
#
# endif
#
# else
# if defined NO_FLAGS

struct NSL_PP_CAT(X, NSL_PP_ITERATION()) {
    BEGIN
        NSL_PP_ITERATION() >= NSL_PP_ITERATION_START() &&
        NSL_PP_ITERATION() <= NSL_PP_ITERATION_FINISH()
    END
};

# elif NSL_PP_ITERATION_DEPTH() == 1 \
    && NSL_PP_ITERATION_FLAGS() == 0x0001

struct NSL_PP_CAT(Y, NSL_PP_ITERATION()) { };

# elif NSL_PP_ITERATION_DEPTH() == 1 \
    && NSL_PP_ITERATION_FLAGS() == 0x0002

# define NSL_PP_ITERATION_PARAMS_2 (3, (1, NSL_PP_ITERATION(), "iteration.h"))
# include NSL_PP_ITERATE()

# elif NSL_PP_ITERATION_DEPTH() == 1 \
    && NSL_PP_ITERATION_FLAGS() == 0x0003
    
#define TEST_ITER_F(n)                         \
    NSL_PP_EXPR_IIF                          \
        (                                      \
        ITER100S(n),                           \
        struct NSL_PP_CAT(iter_512_f,n) { }; \
        )                                      \
/* */

TEST_ITER_F(NSL_PP_ITERATION())

# undef TEST_ITER_F

# elif NSL_PP_ITERATION_DEPTH() == 1 \
    && NSL_PP_ITERATION_FLAGS() == 0x0004

#define TEST_ITER_B(n)                         \
    NSL_PP_EXPR_IIF                          \
        (                                      \
        ITER50S(n),                            \
        struct NSL_PP_CAT(iter_512_b,n) { }; \
        )                                      \
/* */

TEST_ITER_B(NSL_PP_ITERATION())

# undef TEST_ITER_B

# elif NSL_PP_ITERATION_DEPTH() == 1 \
    && NSL_PP_ITERATION_FLAGS() == 0x0005
    
#define TEST_ITER_FA(n)                        \
    NSL_PP_EXPR_IIF                          \
        (                                      \
        ITER100SA(n),                          \
        struct NSL_PP_CAT(iter_1024_f,n) {}; \
        )                                      \
/* */

TEST_ITER_FA(NSL_PP_ITERATION())

# undef TEST_ITER_FA

# elif NSL_PP_ITERATION_DEPTH() == 1 \
    && NSL_PP_ITERATION_FLAGS() == 0x0006

#define TEST_ITER_BA(n)                        \
    NSL_PP_EXPR_IIF                          \
        (                                      \
        ITER50SA(n),                           \
        struct NSL_PP_CAT(iter_1024_b,n) {}; \
        )                                      \
/* */

TEST_ITER_BA(NSL_PP_ITERATION())

# undef TEST_ITER_BA

# elif NSL_PP_ITERATION_DEPTH() == 2 \
    && NSL_PP_FRAME_FLAGS(1) == 0x0002

struct NSL_PP_CAT(Z, NSL_PP_CAT(NSL_PP_ITERATION(), NSL_PP_RELATIVE_ITERATION(1))) { };

# else
#
# error should not get here!
#
# endif
# endif
