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
# if !defined(NSL_PP_LOCAL_LIMITS)
#    error NSL_PP_ERROR:  local iteration boundaries are not defined
# elif !defined(NSL_PP_LOCAL_MACRO)
#    error NSL_PP_ERROR:  local iteration target macro is not defined
# else
#    if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#        define NSL_PP_LOCAL_S NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_LOCAL_LIMITS)
#        define NSL_PP_LOCAL_F NSL_PP_TUPLE_ELEM(2, 1, NSL_PP_LOCAL_LIMITS)
#    else
#        define NSL_PP_VALUE NSL_PP_TUPLE_ELEM(2, 0, NSL_PP_LOCAL_LIMITS)
#        include "nsl/preprocessor/iteration/detail/start.h"
#        define NSL_PP_VALUE NSL_PP_TUPLE_ELEM(2, 1, NSL_PP_LOCAL_LIMITS)
#        include "nsl/preprocessor/iteration/detail/finish.h"
#        define NSL_PP_LOCAL_S NSL_PP_LOCAL_SE()
#        define NSL_PP_LOCAL_F NSL_PP_LOCAL_FE()
#    endif
# endif
#
# if (NSL_PP_LOCAL_S) > (NSL_PP_LOCAL_F)
#    include "nsl/preprocessor/iteration/detail/rlocal.h"
# else
#
# include "nsl/preprocessor/config/config.h"
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
#    if NSL_PP_LOCAL_C(0)
        NSL_PP_LOCAL_MACRO(0)
#    endif
#    if NSL_PP_LOCAL_C(1)
        NSL_PP_LOCAL_MACRO(1)
#    endif
#    if NSL_PP_LOCAL_C(2)
        NSL_PP_LOCAL_MACRO(2)
#    endif
#    if NSL_PP_LOCAL_C(3)
        NSL_PP_LOCAL_MACRO(3)
#    endif
#    if NSL_PP_LOCAL_C(4)
        NSL_PP_LOCAL_MACRO(4)
#    endif
#    if NSL_PP_LOCAL_C(5)
        NSL_PP_LOCAL_MACRO(5)
#    endif
#    if NSL_PP_LOCAL_C(6)
        NSL_PP_LOCAL_MACRO(6)
#    endif
#    if NSL_PP_LOCAL_C(7)
        NSL_PP_LOCAL_MACRO(7)
#    endif
#    if NSL_PP_LOCAL_C(8)
        NSL_PP_LOCAL_MACRO(8)
#    endif
#    if NSL_PP_LOCAL_C(9)
        NSL_PP_LOCAL_MACRO(9)
#    endif
#    if NSL_PP_LOCAL_C(10)
        NSL_PP_LOCAL_MACRO(10)
#    endif
#    if NSL_PP_LOCAL_C(11)
        NSL_PP_LOCAL_MACRO(11)
#    endif
#    if NSL_PP_LOCAL_C(12)
        NSL_PP_LOCAL_MACRO(12)
#    endif
#    if NSL_PP_LOCAL_C(13)
        NSL_PP_LOCAL_MACRO(13)
#    endif
#    if NSL_PP_LOCAL_C(14)
        NSL_PP_LOCAL_MACRO(14)
#    endif
#    if NSL_PP_LOCAL_C(15)
        NSL_PP_LOCAL_MACRO(15)
#    endif
#    if NSL_PP_LOCAL_C(16)
        NSL_PP_LOCAL_MACRO(16)
#    endif
#    if NSL_PP_LOCAL_C(17)
        NSL_PP_LOCAL_MACRO(17)
#    endif
#    if NSL_PP_LOCAL_C(18)
        NSL_PP_LOCAL_MACRO(18)
#    endif
#    if NSL_PP_LOCAL_C(19)
        NSL_PP_LOCAL_MACRO(19)
#    endif
#    if NSL_PP_LOCAL_C(20)
        NSL_PP_LOCAL_MACRO(20)
#    endif
#    if NSL_PP_LOCAL_C(21)
        NSL_PP_LOCAL_MACRO(21)
#    endif
#    if NSL_PP_LOCAL_C(22)
        NSL_PP_LOCAL_MACRO(22)
#    endif
#    if NSL_PP_LOCAL_C(23)
        NSL_PP_LOCAL_MACRO(23)
#    endif
#    if NSL_PP_LOCAL_C(24)
        NSL_PP_LOCAL_MACRO(24)
#    endif
#    if NSL_PP_LOCAL_C(25)
        NSL_PP_LOCAL_MACRO(25)
#    endif
#    if NSL_PP_LOCAL_C(26)
        NSL_PP_LOCAL_MACRO(26)
#    endif
#    if NSL_PP_LOCAL_C(27)
        NSL_PP_LOCAL_MACRO(27)
#    endif
#    if NSL_PP_LOCAL_C(28)
        NSL_PP_LOCAL_MACRO(28)
#    endif
#    if NSL_PP_LOCAL_C(29)
        NSL_PP_LOCAL_MACRO(29)
#    endif
#    if NSL_PP_LOCAL_C(30)
        NSL_PP_LOCAL_MACRO(30)
#    endif
#    if NSL_PP_LOCAL_C(31)
        NSL_PP_LOCAL_MACRO(31)
#    endif
#    if NSL_PP_LOCAL_C(32)
        NSL_PP_LOCAL_MACRO(32)
#    endif
#    if NSL_PP_LOCAL_C(33)
        NSL_PP_LOCAL_MACRO(33)
#    endif
#    if NSL_PP_LOCAL_C(34)
        NSL_PP_LOCAL_MACRO(34)
#    endif
#    if NSL_PP_LOCAL_C(35)
        NSL_PP_LOCAL_MACRO(35)
#    endif
#    if NSL_PP_LOCAL_C(36)
        NSL_PP_LOCAL_MACRO(36)
#    endif
#    if NSL_PP_LOCAL_C(37)
        NSL_PP_LOCAL_MACRO(37)
#    endif
#    if NSL_PP_LOCAL_C(38)
        NSL_PP_LOCAL_MACRO(38)
#    endif
#    if NSL_PP_LOCAL_C(39)
        NSL_PP_LOCAL_MACRO(39)
#    endif
#    if NSL_PP_LOCAL_C(40)
        NSL_PP_LOCAL_MACRO(40)
#    endif
#    if NSL_PP_LOCAL_C(41)
        NSL_PP_LOCAL_MACRO(41)
#    endif
#    if NSL_PP_LOCAL_C(42)
        NSL_PP_LOCAL_MACRO(42)
#    endif
#    if NSL_PP_LOCAL_C(43)
        NSL_PP_LOCAL_MACRO(43)
#    endif
#    if NSL_PP_LOCAL_C(44)
        NSL_PP_LOCAL_MACRO(44)
#    endif
#    if NSL_PP_LOCAL_C(45)
        NSL_PP_LOCAL_MACRO(45)
#    endif
#    if NSL_PP_LOCAL_C(46)
        NSL_PP_LOCAL_MACRO(46)
#    endif
#    if NSL_PP_LOCAL_C(47)
        NSL_PP_LOCAL_MACRO(47)
#    endif
#    if NSL_PP_LOCAL_C(48)
        NSL_PP_LOCAL_MACRO(48)
#    endif
#    if NSL_PP_LOCAL_C(49)
        NSL_PP_LOCAL_MACRO(49)
#    endif
#    if NSL_PP_LOCAL_C(50)
        NSL_PP_LOCAL_MACRO(50)
#    endif
#    if NSL_PP_LOCAL_C(51)
        NSL_PP_LOCAL_MACRO(51)
#    endif
#    if NSL_PP_LOCAL_C(52)
        NSL_PP_LOCAL_MACRO(52)
#    endif
#    if NSL_PP_LOCAL_C(53)
        NSL_PP_LOCAL_MACRO(53)
#    endif
#    if NSL_PP_LOCAL_C(54)
        NSL_PP_LOCAL_MACRO(54)
#    endif
#    if NSL_PP_LOCAL_C(55)
        NSL_PP_LOCAL_MACRO(55)
#    endif
#    if NSL_PP_LOCAL_C(56)
        NSL_PP_LOCAL_MACRO(56)
#    endif
#    if NSL_PP_LOCAL_C(57)
        NSL_PP_LOCAL_MACRO(57)
#    endif
#    if NSL_PP_LOCAL_C(58)
        NSL_PP_LOCAL_MACRO(58)
#    endif
#    if NSL_PP_LOCAL_C(59)
        NSL_PP_LOCAL_MACRO(59)
#    endif
#    if NSL_PP_LOCAL_C(60)
        NSL_PP_LOCAL_MACRO(60)
#    endif
#    if NSL_PP_LOCAL_C(61)
        NSL_PP_LOCAL_MACRO(61)
#    endif
#    if NSL_PP_LOCAL_C(62)
        NSL_PP_LOCAL_MACRO(62)
#    endif
#    if NSL_PP_LOCAL_C(63)
        NSL_PP_LOCAL_MACRO(63)
#    endif
#    if NSL_PP_LOCAL_C(64)
        NSL_PP_LOCAL_MACRO(64)
#    endif
#    if NSL_PP_LOCAL_C(65)
        NSL_PP_LOCAL_MACRO(65)
#    endif
#    if NSL_PP_LOCAL_C(66)
        NSL_PP_LOCAL_MACRO(66)
#    endif
#    if NSL_PP_LOCAL_C(67)
        NSL_PP_LOCAL_MACRO(67)
#    endif
#    if NSL_PP_LOCAL_C(68)
        NSL_PP_LOCAL_MACRO(68)
#    endif
#    if NSL_PP_LOCAL_C(69)
        NSL_PP_LOCAL_MACRO(69)
#    endif
#    if NSL_PP_LOCAL_C(70)
        NSL_PP_LOCAL_MACRO(70)
#    endif
#    if NSL_PP_LOCAL_C(71)
        NSL_PP_LOCAL_MACRO(71)
#    endif
#    if NSL_PP_LOCAL_C(72)
        NSL_PP_LOCAL_MACRO(72)
#    endif
#    if NSL_PP_LOCAL_C(73)
        NSL_PP_LOCAL_MACRO(73)
#    endif
#    if NSL_PP_LOCAL_C(74)
        NSL_PP_LOCAL_MACRO(74)
#    endif
#    if NSL_PP_LOCAL_C(75)
        NSL_PP_LOCAL_MACRO(75)
#    endif
#    if NSL_PP_LOCAL_C(76)
        NSL_PP_LOCAL_MACRO(76)
#    endif
#    if NSL_PP_LOCAL_C(77)
        NSL_PP_LOCAL_MACRO(77)
#    endif
#    if NSL_PP_LOCAL_C(78)
        NSL_PP_LOCAL_MACRO(78)
#    endif
#    if NSL_PP_LOCAL_C(79)
        NSL_PP_LOCAL_MACRO(79)
#    endif
#    if NSL_PP_LOCAL_C(80)
        NSL_PP_LOCAL_MACRO(80)
#    endif
#    if NSL_PP_LOCAL_C(81)
        NSL_PP_LOCAL_MACRO(81)
#    endif
#    if NSL_PP_LOCAL_C(82)
        NSL_PP_LOCAL_MACRO(82)
#    endif
#    if NSL_PP_LOCAL_C(83)
        NSL_PP_LOCAL_MACRO(83)
#    endif
#    if NSL_PP_LOCAL_C(84)
        NSL_PP_LOCAL_MACRO(84)
#    endif
#    if NSL_PP_LOCAL_C(85)
        NSL_PP_LOCAL_MACRO(85)
#    endif
#    if NSL_PP_LOCAL_C(86)
        NSL_PP_LOCAL_MACRO(86)
#    endif
#    if NSL_PP_LOCAL_C(87)
        NSL_PP_LOCAL_MACRO(87)
#    endif
#    if NSL_PP_LOCAL_C(88)
        NSL_PP_LOCAL_MACRO(88)
#    endif
#    if NSL_PP_LOCAL_C(89)
        NSL_PP_LOCAL_MACRO(89)
#    endif
#    if NSL_PP_LOCAL_C(90)
        NSL_PP_LOCAL_MACRO(90)
#    endif
#    if NSL_PP_LOCAL_C(91)
        NSL_PP_LOCAL_MACRO(91)
#    endif
#    if NSL_PP_LOCAL_C(92)
        NSL_PP_LOCAL_MACRO(92)
#    endif
#    if NSL_PP_LOCAL_C(93)
        NSL_PP_LOCAL_MACRO(93)
#    endif
#    if NSL_PP_LOCAL_C(94)
        NSL_PP_LOCAL_MACRO(94)
#    endif
#    if NSL_PP_LOCAL_C(95)
        NSL_PP_LOCAL_MACRO(95)
#    endif
#    if NSL_PP_LOCAL_C(96)
        NSL_PP_LOCAL_MACRO(96)
#    endif
#    if NSL_PP_LOCAL_C(97)
        NSL_PP_LOCAL_MACRO(97)
#    endif
#    if NSL_PP_LOCAL_C(98)
        NSL_PP_LOCAL_MACRO(98)
#    endif
#    if NSL_PP_LOCAL_C(99)
        NSL_PP_LOCAL_MACRO(99)
#    endif
#    if NSL_PP_LOCAL_C(100)
        NSL_PP_LOCAL_MACRO(100)
#    endif
#    if NSL_PP_LOCAL_C(101)
        NSL_PP_LOCAL_MACRO(101)
#    endif
#    if NSL_PP_LOCAL_C(102)
        NSL_PP_LOCAL_MACRO(102)
#    endif
#    if NSL_PP_LOCAL_C(103)
        NSL_PP_LOCAL_MACRO(103)
#    endif
#    if NSL_PP_LOCAL_C(104)
        NSL_PP_LOCAL_MACRO(104)
#    endif
#    if NSL_PP_LOCAL_C(105)
        NSL_PP_LOCAL_MACRO(105)
#    endif
#    if NSL_PP_LOCAL_C(106)
        NSL_PP_LOCAL_MACRO(106)
#    endif
#    if NSL_PP_LOCAL_C(107)
        NSL_PP_LOCAL_MACRO(107)
#    endif
#    if NSL_PP_LOCAL_C(108)
        NSL_PP_LOCAL_MACRO(108)
#    endif
#    if NSL_PP_LOCAL_C(109)
        NSL_PP_LOCAL_MACRO(109)
#    endif
#    if NSL_PP_LOCAL_C(110)
        NSL_PP_LOCAL_MACRO(110)
#    endif
#    if NSL_PP_LOCAL_C(111)
        NSL_PP_LOCAL_MACRO(111)
#    endif
#    if NSL_PP_LOCAL_C(112)
        NSL_PP_LOCAL_MACRO(112)
#    endif
#    if NSL_PP_LOCAL_C(113)
        NSL_PP_LOCAL_MACRO(113)
#    endif
#    if NSL_PP_LOCAL_C(114)
        NSL_PP_LOCAL_MACRO(114)
#    endif
#    if NSL_PP_LOCAL_C(115)
        NSL_PP_LOCAL_MACRO(115)
#    endif
#    if NSL_PP_LOCAL_C(116)
        NSL_PP_LOCAL_MACRO(116)
#    endif
#    if NSL_PP_LOCAL_C(117)
        NSL_PP_LOCAL_MACRO(117)
#    endif
#    if NSL_PP_LOCAL_C(118)
        NSL_PP_LOCAL_MACRO(118)
#    endif
#    if NSL_PP_LOCAL_C(119)
        NSL_PP_LOCAL_MACRO(119)
#    endif
#    if NSL_PP_LOCAL_C(120)
        NSL_PP_LOCAL_MACRO(120)
#    endif
#    if NSL_PP_LOCAL_C(121)
        NSL_PP_LOCAL_MACRO(121)
#    endif
#    if NSL_PP_LOCAL_C(122)
        NSL_PP_LOCAL_MACRO(122)
#    endif
#    if NSL_PP_LOCAL_C(123)
        NSL_PP_LOCAL_MACRO(123)
#    endif
#    if NSL_PP_LOCAL_C(124)
        NSL_PP_LOCAL_MACRO(124)
#    endif
#    if NSL_PP_LOCAL_C(125)
        NSL_PP_LOCAL_MACRO(125)
#    endif
#    if NSL_PP_LOCAL_C(126)
        NSL_PP_LOCAL_MACRO(126)
#    endif
#    if NSL_PP_LOCAL_C(127)
        NSL_PP_LOCAL_MACRO(127)
#    endif
#    if NSL_PP_LOCAL_C(128)
        NSL_PP_LOCAL_MACRO(128)
#    endif
#    if NSL_PP_LOCAL_C(129)
        NSL_PP_LOCAL_MACRO(129)
#    endif
#    if NSL_PP_LOCAL_C(130)
        NSL_PP_LOCAL_MACRO(130)
#    endif
#    if NSL_PP_LOCAL_C(131)
        NSL_PP_LOCAL_MACRO(131)
#    endif
#    if NSL_PP_LOCAL_C(132)
        NSL_PP_LOCAL_MACRO(132)
#    endif
#    if NSL_PP_LOCAL_C(133)
        NSL_PP_LOCAL_MACRO(133)
#    endif
#    if NSL_PP_LOCAL_C(134)
        NSL_PP_LOCAL_MACRO(134)
#    endif
#    if NSL_PP_LOCAL_C(135)
        NSL_PP_LOCAL_MACRO(135)
#    endif
#    if NSL_PP_LOCAL_C(136)
        NSL_PP_LOCAL_MACRO(136)
#    endif
#    if NSL_PP_LOCAL_C(137)
        NSL_PP_LOCAL_MACRO(137)
#    endif
#    if NSL_PP_LOCAL_C(138)
        NSL_PP_LOCAL_MACRO(138)
#    endif
#    if NSL_PP_LOCAL_C(139)
        NSL_PP_LOCAL_MACRO(139)
#    endif
#    if NSL_PP_LOCAL_C(140)
        NSL_PP_LOCAL_MACRO(140)
#    endif
#    if NSL_PP_LOCAL_C(141)
        NSL_PP_LOCAL_MACRO(141)
#    endif
#    if NSL_PP_LOCAL_C(142)
        NSL_PP_LOCAL_MACRO(142)
#    endif
#    if NSL_PP_LOCAL_C(143)
        NSL_PP_LOCAL_MACRO(143)
#    endif
#    if NSL_PP_LOCAL_C(144)
        NSL_PP_LOCAL_MACRO(144)
#    endif
#    if NSL_PP_LOCAL_C(145)
        NSL_PP_LOCAL_MACRO(145)
#    endif
#    if NSL_PP_LOCAL_C(146)
        NSL_PP_LOCAL_MACRO(146)
#    endif
#    if NSL_PP_LOCAL_C(147)
        NSL_PP_LOCAL_MACRO(147)
#    endif
#    if NSL_PP_LOCAL_C(148)
        NSL_PP_LOCAL_MACRO(148)
#    endif
#    if NSL_PP_LOCAL_C(149)
        NSL_PP_LOCAL_MACRO(149)
#    endif
#    if NSL_PP_LOCAL_C(150)
        NSL_PP_LOCAL_MACRO(150)
#    endif
#    if NSL_PP_LOCAL_C(151)
        NSL_PP_LOCAL_MACRO(151)
#    endif
#    if NSL_PP_LOCAL_C(152)
        NSL_PP_LOCAL_MACRO(152)
#    endif
#    if NSL_PP_LOCAL_C(153)
        NSL_PP_LOCAL_MACRO(153)
#    endif
#    if NSL_PP_LOCAL_C(154)
        NSL_PP_LOCAL_MACRO(154)
#    endif
#    if NSL_PP_LOCAL_C(155)
        NSL_PP_LOCAL_MACRO(155)
#    endif
#    if NSL_PP_LOCAL_C(156)
        NSL_PP_LOCAL_MACRO(156)
#    endif
#    if NSL_PP_LOCAL_C(157)
        NSL_PP_LOCAL_MACRO(157)
#    endif
#    if NSL_PP_LOCAL_C(158)
        NSL_PP_LOCAL_MACRO(158)
#    endif
#    if NSL_PP_LOCAL_C(159)
        NSL_PP_LOCAL_MACRO(159)
#    endif
#    if NSL_PP_LOCAL_C(160)
        NSL_PP_LOCAL_MACRO(160)
#    endif
#    if NSL_PP_LOCAL_C(161)
        NSL_PP_LOCAL_MACRO(161)
#    endif
#    if NSL_PP_LOCAL_C(162)
        NSL_PP_LOCAL_MACRO(162)
#    endif
#    if NSL_PP_LOCAL_C(163)
        NSL_PP_LOCAL_MACRO(163)
#    endif
#    if NSL_PP_LOCAL_C(164)
        NSL_PP_LOCAL_MACRO(164)
#    endif
#    if NSL_PP_LOCAL_C(165)
        NSL_PP_LOCAL_MACRO(165)
#    endif
#    if NSL_PP_LOCAL_C(166)
        NSL_PP_LOCAL_MACRO(166)
#    endif
#    if NSL_PP_LOCAL_C(167)
        NSL_PP_LOCAL_MACRO(167)
#    endif
#    if NSL_PP_LOCAL_C(168)
        NSL_PP_LOCAL_MACRO(168)
#    endif
#    if NSL_PP_LOCAL_C(169)
        NSL_PP_LOCAL_MACRO(169)
#    endif
#    if NSL_PP_LOCAL_C(170)
        NSL_PP_LOCAL_MACRO(170)
#    endif
#    if NSL_PP_LOCAL_C(171)
        NSL_PP_LOCAL_MACRO(171)
#    endif
#    if NSL_PP_LOCAL_C(172)
        NSL_PP_LOCAL_MACRO(172)
#    endif
#    if NSL_PP_LOCAL_C(173)
        NSL_PP_LOCAL_MACRO(173)
#    endif
#    if NSL_PP_LOCAL_C(174)
        NSL_PP_LOCAL_MACRO(174)
#    endif
#    if NSL_PP_LOCAL_C(175)
        NSL_PP_LOCAL_MACRO(175)
#    endif
#    if NSL_PP_LOCAL_C(176)
        NSL_PP_LOCAL_MACRO(176)
#    endif
#    if NSL_PP_LOCAL_C(177)
        NSL_PP_LOCAL_MACRO(177)
#    endif
#    if NSL_PP_LOCAL_C(178)
        NSL_PP_LOCAL_MACRO(178)
#    endif
#    if NSL_PP_LOCAL_C(179)
        NSL_PP_LOCAL_MACRO(179)
#    endif
#    if NSL_PP_LOCAL_C(180)
        NSL_PP_LOCAL_MACRO(180)
#    endif
#    if NSL_PP_LOCAL_C(181)
        NSL_PP_LOCAL_MACRO(181)
#    endif
#    if NSL_PP_LOCAL_C(182)
        NSL_PP_LOCAL_MACRO(182)
#    endif
#    if NSL_PP_LOCAL_C(183)
        NSL_PP_LOCAL_MACRO(183)
#    endif
#    if NSL_PP_LOCAL_C(184)
        NSL_PP_LOCAL_MACRO(184)
#    endif
#    if NSL_PP_LOCAL_C(185)
        NSL_PP_LOCAL_MACRO(185)
#    endif
#    if NSL_PP_LOCAL_C(186)
        NSL_PP_LOCAL_MACRO(186)
#    endif
#    if NSL_PP_LOCAL_C(187)
        NSL_PP_LOCAL_MACRO(187)
#    endif
#    if NSL_PP_LOCAL_C(188)
        NSL_PP_LOCAL_MACRO(188)
#    endif
#    if NSL_PP_LOCAL_C(189)
        NSL_PP_LOCAL_MACRO(189)
#    endif
#    if NSL_PP_LOCAL_C(190)
        NSL_PP_LOCAL_MACRO(190)
#    endif
#    if NSL_PP_LOCAL_C(191)
        NSL_PP_LOCAL_MACRO(191)
#    endif
#    if NSL_PP_LOCAL_C(192)
        NSL_PP_LOCAL_MACRO(192)
#    endif
#    if NSL_PP_LOCAL_C(193)
        NSL_PP_LOCAL_MACRO(193)
#    endif
#    if NSL_PP_LOCAL_C(194)
        NSL_PP_LOCAL_MACRO(194)
#    endif
#    if NSL_PP_LOCAL_C(195)
        NSL_PP_LOCAL_MACRO(195)
#    endif
#    if NSL_PP_LOCAL_C(196)
        NSL_PP_LOCAL_MACRO(196)
#    endif
#    if NSL_PP_LOCAL_C(197)
        NSL_PP_LOCAL_MACRO(197)
#    endif
#    if NSL_PP_LOCAL_C(198)
        NSL_PP_LOCAL_MACRO(198)
#    endif
#    if NSL_PP_LOCAL_C(199)
        NSL_PP_LOCAL_MACRO(199)
#    endif
#    if NSL_PP_LOCAL_C(200)
        NSL_PP_LOCAL_MACRO(200)
#    endif
#    if NSL_PP_LOCAL_C(201)
        NSL_PP_LOCAL_MACRO(201)
#    endif
#    if NSL_PP_LOCAL_C(202)
        NSL_PP_LOCAL_MACRO(202)
#    endif
#    if NSL_PP_LOCAL_C(203)
        NSL_PP_LOCAL_MACRO(203)
#    endif
#    if NSL_PP_LOCAL_C(204)
        NSL_PP_LOCAL_MACRO(204)
#    endif
#    if NSL_PP_LOCAL_C(205)
        NSL_PP_LOCAL_MACRO(205)
#    endif
#    if NSL_PP_LOCAL_C(206)
        NSL_PP_LOCAL_MACRO(206)
#    endif
#    if NSL_PP_LOCAL_C(207)
        NSL_PP_LOCAL_MACRO(207)
#    endif
#    if NSL_PP_LOCAL_C(208)
        NSL_PP_LOCAL_MACRO(208)
#    endif
#    if NSL_PP_LOCAL_C(209)
        NSL_PP_LOCAL_MACRO(209)
#    endif
#    if NSL_PP_LOCAL_C(210)
        NSL_PP_LOCAL_MACRO(210)
#    endif
#    if NSL_PP_LOCAL_C(211)
        NSL_PP_LOCAL_MACRO(211)
#    endif
#    if NSL_PP_LOCAL_C(212)
        NSL_PP_LOCAL_MACRO(212)
#    endif
#    if NSL_PP_LOCAL_C(213)
        NSL_PP_LOCAL_MACRO(213)
#    endif
#    if NSL_PP_LOCAL_C(214)
        NSL_PP_LOCAL_MACRO(214)
#    endif
#    if NSL_PP_LOCAL_C(215)
        NSL_PP_LOCAL_MACRO(215)
#    endif
#    if NSL_PP_LOCAL_C(216)
        NSL_PP_LOCAL_MACRO(216)
#    endif
#    if NSL_PP_LOCAL_C(217)
        NSL_PP_LOCAL_MACRO(217)
#    endif
#    if NSL_PP_LOCAL_C(218)
        NSL_PP_LOCAL_MACRO(218)
#    endif
#    if NSL_PP_LOCAL_C(219)
        NSL_PP_LOCAL_MACRO(219)
#    endif
#    if NSL_PP_LOCAL_C(220)
        NSL_PP_LOCAL_MACRO(220)
#    endif
#    if NSL_PP_LOCAL_C(221)
        NSL_PP_LOCAL_MACRO(221)
#    endif
#    if NSL_PP_LOCAL_C(222)
        NSL_PP_LOCAL_MACRO(222)
#    endif
#    if NSL_PP_LOCAL_C(223)
        NSL_PP_LOCAL_MACRO(223)
#    endif
#    if NSL_PP_LOCAL_C(224)
        NSL_PP_LOCAL_MACRO(224)
#    endif
#    if NSL_PP_LOCAL_C(225)
        NSL_PP_LOCAL_MACRO(225)
#    endif
#    if NSL_PP_LOCAL_C(226)
        NSL_PP_LOCAL_MACRO(226)
#    endif
#    if NSL_PP_LOCAL_C(227)
        NSL_PP_LOCAL_MACRO(227)
#    endif
#    if NSL_PP_LOCAL_C(228)
        NSL_PP_LOCAL_MACRO(228)
#    endif
#    if NSL_PP_LOCAL_C(229)
        NSL_PP_LOCAL_MACRO(229)
#    endif
#    if NSL_PP_LOCAL_C(230)
        NSL_PP_LOCAL_MACRO(230)
#    endif
#    if NSL_PP_LOCAL_C(231)
        NSL_PP_LOCAL_MACRO(231)
#    endif
#    if NSL_PP_LOCAL_C(232)
        NSL_PP_LOCAL_MACRO(232)
#    endif
#    if NSL_PP_LOCAL_C(233)
        NSL_PP_LOCAL_MACRO(233)
#    endif
#    if NSL_PP_LOCAL_C(234)
        NSL_PP_LOCAL_MACRO(234)
#    endif
#    if NSL_PP_LOCAL_C(235)
        NSL_PP_LOCAL_MACRO(235)
#    endif
#    if NSL_PP_LOCAL_C(236)
        NSL_PP_LOCAL_MACRO(236)
#    endif

#    if NSL_PP_LOCAL_C(237)
        NSL_PP_LOCAL_MACRO(237)
#    endif
#    if NSL_PP_LOCAL_C(238)
        NSL_PP_LOCAL_MACRO(238)
#    endif
#    if NSL_PP_LOCAL_C(239)
        NSL_PP_LOCAL_MACRO(239)
#    endif
#    if NSL_PP_LOCAL_C(240)
        NSL_PP_LOCAL_MACRO(240)
#    endif
#    if NSL_PP_LOCAL_C(241)
        NSL_PP_LOCAL_MACRO(241)
#    endif
#    if NSL_PP_LOCAL_C(242)
        NSL_PP_LOCAL_MACRO(242)
#    endif
#    if NSL_PP_LOCAL_C(243)
        NSL_PP_LOCAL_MACRO(243)
#    endif
#    if NSL_PP_LOCAL_C(244)
        NSL_PP_LOCAL_MACRO(244)
#    endif
#    if NSL_PP_LOCAL_C(245)
        NSL_PP_LOCAL_MACRO(245)
#    endif
#    if NSL_PP_LOCAL_C(246)
        NSL_PP_LOCAL_MACRO(246)
#    endif
#    if NSL_PP_LOCAL_C(247)
        NSL_PP_LOCAL_MACRO(247)
#    endif
#    if NSL_PP_LOCAL_C(248)
        NSL_PP_LOCAL_MACRO(248)
#    endif
#    if NSL_PP_LOCAL_C(249)
        NSL_PP_LOCAL_MACRO(249)
#    endif
#    if NSL_PP_LOCAL_C(250)
        NSL_PP_LOCAL_MACRO(250)
#    endif
#    if NSL_PP_LOCAL_C(251)
        NSL_PP_LOCAL_MACRO(251)
#    endif
#    if NSL_PP_LOCAL_C(252)
        NSL_PP_LOCAL_MACRO(252)
#    endif
#    if NSL_PP_LOCAL_C(253)
        NSL_PP_LOCAL_MACRO(253)
#    endif
#    if NSL_PP_LOCAL_C(254)
        NSL_PP_LOCAL_MACRO(254)
#    endif
#    if NSL_PP_LOCAL_C(255)
        NSL_PP_LOCAL_MACRO(255)
#    endif
#    if NSL_PP_LOCAL_C(256)
        NSL_PP_LOCAL_MACRO(256)
#    endif
#
# else
#
#    include "nsl/preprocessor/config/limits.h"
#    
#    if NSL_PP_LIMIT_ITERATION == 256
#    include "nsl/preprocessor/iteration/detail/limits/local_256.h"
#    elif NSL_PP_LIMIT_ITERATION == 512
#    include "nsl/preprocessor/iteration/detail/limits/local_256.h"
#    include "nsl/preprocessor/iteration/detail/limits/local_512.h"
#    elif NSL_PP_LIMIT_ITERATION == 1024
#    include "nsl/preprocessor/iteration/detail/limits/local_256.h"
#    include "nsl/preprocessor/iteration/detail/limits/local_512.h"
#    include "nsl/preprocessor/iteration/detail/limits/local_1024.h"
#    else
#    error Incorrect value for the NSL_PP_LIMIT_ITERATION limit
#    endif
#
# endif
#
# endif
#
# undef NSL_PP_LOCAL_LIMITS
#
# undef NSL_PP_LOCAL_S
# undef NSL_PP_LOCAL_F
#
# undef NSL_PP_LOCAL_MACRO
