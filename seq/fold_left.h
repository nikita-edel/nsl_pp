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
# ifndef NSL_PREPROCESSOR_SEQ_FOLD_LEFT_H
# define NSL_PREPROCESSOR_SEQ_FOLD_LEFT_H
#
# include <nsl/preprocessor/arithmetic/dec.h>
# include <nsl/preprocessor/cat.h>
# include <nsl/preprocessor/control/if.h>
# include <nsl/preprocessor/debug/error.h>
# include <nsl/preprocessor/detail/auto_rec.h>
# include <nsl/preprocessor/seq/seq.h>
# include <nsl/preprocessor/seq/size.h>
#
# /* NSL_PP_SEQ_FOLD_LEFT */
#
# if 0
#    define NSL_PP_SEQ_FOLD_LEFT(op, state, seq) ...
# endif
#
# include <nsl/preprocessor/config/config.h>
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# define NSL_PP_SEQ_FOLD_LEFT NSL_PP_CAT(NSL_PP_SEQ_FOLD_LEFT_, NSL_PP_AUTO_REC(NSL_PP_SEQ_FOLD_LEFT_P, 256))
# define NSL_PP_SEQ_FOLD_LEFT_P(n) NSL_PP_CAT(NSL_PP_SEQ_FOLD_LEFT_CHECK_, NSL_PP_SEQ_FOLD_LEFT_I_ ## n(NSL_PP_SEQ_FOLD_LEFT_O, NSL_PP_NIL, (nil), 1))
# define NSL_PP_SEQ_FOLD_LEFT_O(s, st, _) st
#
# define NSL_PP_SEQ_FOLD_LEFT_257(op, st, ss) NSL_PP_ERROR(0x0005)
# define NSL_PP_SEQ_FOLD_LEFT_I_257(op, st, ss, sz) NSL_PP_ERROR(0x0005)
#
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_NIL 1
#
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_1(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_2(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_3(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_4(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_5(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_6(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_7(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_8(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_9(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_10(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_11(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_12(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_13(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_14(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_15(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_16(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_17(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_18(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_19(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_20(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_21(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_22(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_23(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_24(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_25(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_26(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_27(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_28(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_29(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_30(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_31(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_32(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_33(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_34(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_35(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_36(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_37(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_38(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_39(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_40(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_41(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_42(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_43(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_44(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_45(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_46(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_47(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_48(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_49(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_50(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_51(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_52(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_53(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_54(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_55(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_56(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_57(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_58(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_59(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_60(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_61(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_62(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_63(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_64(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_65(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_66(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_67(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_68(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_69(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_70(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_71(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_72(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_73(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_74(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_75(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_76(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_77(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_78(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_79(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_80(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_81(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_82(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_83(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_84(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_85(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_86(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_87(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_88(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_89(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_90(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_91(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_92(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_93(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_94(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_95(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_96(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_97(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_98(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_99(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_100(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_101(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_102(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_103(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_104(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_105(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_106(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_107(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_108(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_109(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_110(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_111(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_112(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_113(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_114(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_115(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_116(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_117(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_118(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_119(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_120(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_121(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_122(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_123(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_124(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_125(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_126(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_127(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_128(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_129(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_130(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_131(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_132(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_133(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_134(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_135(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_136(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_137(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_138(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_139(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_140(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_141(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_142(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_143(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_144(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_145(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_146(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_147(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_148(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_149(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_150(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_151(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_152(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_153(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_154(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_155(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_156(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_157(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_158(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_159(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_160(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_161(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_162(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_163(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_164(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_165(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_166(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_167(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_168(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_169(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_170(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_171(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_172(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_173(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_174(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_175(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_176(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_177(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_178(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_179(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_180(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_181(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_182(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_183(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_184(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_185(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_186(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_187(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_188(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_189(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_190(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_191(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_192(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_193(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_194(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_195(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_196(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_197(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_198(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_199(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_200(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_201(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_202(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_203(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_204(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_205(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_206(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_207(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_208(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_209(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_210(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_211(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_212(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_213(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_214(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_215(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_216(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_217(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_218(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_219(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_220(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_221(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_222(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_223(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_224(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_225(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_226(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_227(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_228(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_229(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_230(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_231(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_232(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_233(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_234(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_235(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_236(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_237(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_238(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_239(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_240(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_241(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_242(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_243(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_244(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_245(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_246(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_247(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_248(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_249(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_250(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_251(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_252(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_253(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_254(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_255(op, st, ss, sz) 0
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_SEQ_FOLD_LEFT_I_256(op, st, ss, sz) 0
#
# define NSL_PP_SEQ_FOLD_LEFT_F(op, st, ss, sz) st
#
# define NSL_PP_SEQ_FOLD_LEFT_1(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_1(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_2(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_2(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_3(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_3(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_4(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_4(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_5(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_5(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_6(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_6(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_7(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_7(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_8(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_8(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_9(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_9(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_10(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_10(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_11(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_11(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_12(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_12(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_13(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_13(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_14(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_14(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_15(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_15(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_16(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_16(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_17(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_17(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_18(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_18(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_19(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_19(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_20(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_20(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_21(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_21(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_22(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_22(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_23(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_23(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_24(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_24(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_25(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_25(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_26(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_26(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_27(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_27(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_28(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_28(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_29(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_29(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_30(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_30(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_31(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_31(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_32(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_32(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_33(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_33(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_34(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_34(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_35(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_35(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_36(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_36(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_37(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_37(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_38(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_38(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_39(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_39(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_40(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_40(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_41(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_41(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_42(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_42(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_43(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_43(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_44(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_44(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_45(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_45(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_46(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_46(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_47(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_47(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_48(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_48(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_49(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_49(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_50(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_50(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_51(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_51(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_52(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_52(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_53(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_53(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_54(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_54(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_55(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_55(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_56(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_56(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_57(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_57(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_58(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_58(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_59(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_59(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_60(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_60(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_61(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_61(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_62(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_62(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_63(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_63(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_64(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_64(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_65(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_65(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_66(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_66(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_67(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_67(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_68(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_68(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_69(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_69(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_70(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_70(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_71(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_71(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_72(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_72(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_73(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_73(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_74(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_74(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_75(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_75(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_76(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_76(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_77(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_77(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_78(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_78(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_79(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_79(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_80(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_80(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_81(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_81(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_82(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_82(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_83(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_83(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_84(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_84(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_85(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_85(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_86(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_86(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_87(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_87(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_88(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_88(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_89(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_89(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_90(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_90(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_91(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_91(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_92(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_92(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_93(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_93(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_94(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_94(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_95(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_95(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_96(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_96(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_97(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_97(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_98(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_98(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_99(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_99(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_100(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_100(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_101(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_101(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_102(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_102(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_103(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_103(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_104(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_104(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_105(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_105(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_106(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_106(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_107(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_107(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_108(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_108(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_109(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_109(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_110(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_110(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_111(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_111(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_112(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_112(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_113(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_113(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_114(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_114(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_115(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_115(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_116(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_116(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_117(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_117(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_118(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_118(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_119(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_119(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_120(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_120(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_121(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_121(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_122(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_122(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_123(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_123(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_124(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_124(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_125(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_125(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_126(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_126(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_127(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_127(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_128(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_128(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_129(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_129(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_130(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_130(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_131(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_131(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_132(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_132(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_133(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_133(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_134(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_134(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_135(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_135(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_136(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_136(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_137(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_137(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_138(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_138(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_139(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_139(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_140(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_140(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_141(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_141(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_142(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_142(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_143(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_143(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_144(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_144(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_145(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_145(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_146(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_146(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_147(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_147(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_148(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_148(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_149(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_149(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_150(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_150(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_151(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_151(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_152(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_152(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_153(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_153(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_154(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_154(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_155(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_155(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_156(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_156(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_157(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_157(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_158(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_158(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_159(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_159(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_160(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_160(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_161(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_161(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_162(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_162(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_163(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_163(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_164(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_164(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_165(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_165(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_166(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_166(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_167(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_167(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_168(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_168(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_169(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_169(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_170(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_170(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_171(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_171(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_172(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_172(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_173(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_173(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_174(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_174(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_175(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_175(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_176(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_176(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_177(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_177(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_178(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_178(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_179(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_179(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_180(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_180(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_181(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_181(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_182(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_182(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_183(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_183(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_184(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_184(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_185(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_185(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_186(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_186(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_187(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_187(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_188(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_188(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_189(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_189(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_190(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_190(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_191(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_191(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_192(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_192(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_193(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_193(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_194(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_194(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_195(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_195(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_196(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_196(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_197(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_197(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_198(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_198(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_199(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_199(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_200(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_200(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_201(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_201(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_202(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_202(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_203(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_203(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_204(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_204(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_205(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_205(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_206(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_206(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_207(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_207(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_208(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_208(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_209(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_209(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_210(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_210(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_211(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_211(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_212(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_212(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_213(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_213(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_214(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_214(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_215(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_215(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_216(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_216(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_217(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_217(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_218(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_218(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_219(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_219(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_220(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_220(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_221(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_221(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_222(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_222(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_223(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_223(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_224(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_224(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_225(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_225(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_226(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_226(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_227(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_227(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_228(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_228(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_229(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_229(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_230(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_230(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_231(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_231(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_232(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_232(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_233(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_233(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_234(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_234(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_235(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_235(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_236(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_236(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_237(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_237(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_238(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_238(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_239(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_239(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_240(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_240(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_241(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_241(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_242(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_242(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_243(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_243(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_244(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_244(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_245(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_245(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_246(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_246(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_247(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_247(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_248(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_248(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_249(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_249(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_250(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_250(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_251(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_251(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_252(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_252(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_253(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_253(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_254(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_254(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_255(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_255(op, st, ss, NSL_PP_SEQ_SIZE(ss))
# define NSL_PP_SEQ_FOLD_LEFT_256(op, st, ss) NSL_PP_SEQ_FOLD_LEFT_I_256(op, st, ss, NSL_PP_SEQ_SIZE(ss))
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_DMC()
#    define NSL_PP_SEQ_FOLD_LEFT_I_1(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_2, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(2, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_2(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_3, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(3, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_3(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_4, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(4, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_4(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_5, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(5, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_5(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_6, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(6, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_6(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_7, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(7, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_7(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_8, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(8, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_8(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_9, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(9, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_9(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_10, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(10, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_10(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_11, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(11, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_11(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_12, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(12, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_12(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_13, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(13, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_13(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_14, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(14, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_14(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_15, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(15, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_15(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_16, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(16, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_16(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_17, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(17, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_17(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_18, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(18, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_18(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_19, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(19, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_19(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_20, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(20, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_20(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_21, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(21, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_21(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_22, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(22, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_22(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_23, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(23, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_23(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_24, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(24, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_24(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_25, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(25, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_25(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_26, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(26, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_26(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_27, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(27, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_27(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_28, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(28, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_28(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_29, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(29, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_29(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_30, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(30, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_30(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_31, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(31, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_31(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_32, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(32, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_32(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_33, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(33, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_33(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_34, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(34, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_34(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_35, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(35, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_35(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_36, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(36, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_36(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_37, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(37, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_37(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_38, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(38, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_38(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_39, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(39, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_39(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_40, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(40, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_40(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_41, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(41, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_41(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_42, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(42, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_42(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_43, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(43, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_43(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_44, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(44, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_44(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_45, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(45, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_45(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_46, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(46, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_46(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_47, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(47, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_47(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_48, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(48, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_48(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_49, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(49, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_49(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_50, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(50, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_50(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_51, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(51, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_51(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_52, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(52, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_52(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_53, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(53, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_53(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_54, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(54, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_54(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_55, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(55, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_55(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_56, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(56, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_56(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_57, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(57, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_57(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_58, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(58, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_58(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_59, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(59, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_59(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_60, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(60, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_60(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_61, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(61, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_61(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_62, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(62, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_62(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_63, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(63, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_63(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_64, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(64, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_64(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_65, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(65, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_65(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_66, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(66, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_66(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_67, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(67, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_67(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_68, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(68, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_68(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_69, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(69, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_69(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_70, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(70, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_70(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_71, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(71, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_71(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_72, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(72, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_72(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_73, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(73, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_73(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_74, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(74, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_74(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_75, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(75, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_75(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_76, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(76, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_76(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_77, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(77, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_77(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_78, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(78, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_78(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_79, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(79, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_79(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_80, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(80, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_80(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_81, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(81, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_81(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_82, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(82, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_82(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_83, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(83, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_83(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_84, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(84, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_84(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_85, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(85, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_85(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_86, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(86, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_86(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_87, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(87, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_87(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_88, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(88, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_88(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_89, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(89, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_89(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_90, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(90, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_90(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_91, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(91, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_91(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_92, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(92, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_92(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_93, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(93, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_93(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_94, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(94, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_94(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_95, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(95, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_95(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_96, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(96, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_96(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_97, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(97, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_97(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_98, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(98, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_98(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_99, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(99, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_99(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_100, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(100, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_100(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_101, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(101, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_101(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_102, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(102, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_102(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_103, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(103, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_103(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_104, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(104, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_104(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_105, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(105, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_105(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_106, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(106, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_106(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_107, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(107, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_107(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_108, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(108, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_108(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_109, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(109, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_109(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_110, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(110, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_110(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_111, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(111, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_111(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_112, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(112, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_112(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_113, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(113, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_113(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_114, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(114, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_114(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_115, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(115, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_115(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_116, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(116, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_116(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_117, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(117, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_117(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_118, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(118, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_118(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_119, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(119, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_119(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_120, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(120, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_120(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_121, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(121, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_121(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_122, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(122, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_122(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_123, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(123, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_123(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_124, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(124, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_124(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_125, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(125, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_125(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_126, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(126, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_126(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_127, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(127, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_127(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_128, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(128, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_128(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_129, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(129, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_129(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_130, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(130, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_130(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_131, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(131, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_131(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_132, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(132, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_132(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_133, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(133, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_133(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_134, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(134, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_134(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_135, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(135, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_135(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_136, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(136, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_136(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_137, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(137, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_137(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_138, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(138, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_138(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_139, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(139, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_139(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_140, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(140, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_140(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_141, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(141, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_141(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_142, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(142, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_142(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_143, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(143, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_143(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_144, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(144, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_144(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_145, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(145, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_145(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_146, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(146, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_146(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_147, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(147, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_147(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_148, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(148, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_148(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_149, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(149, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_149(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_150, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(150, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_150(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_151, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(151, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_151(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_152, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(152, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_152(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_153, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(153, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_153(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_154, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(154, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_154(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_155, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(155, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_155(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_156, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(156, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_156(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_157, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(157, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_157(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_158, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(158, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_158(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_159, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(159, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_159(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_160, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(160, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_160(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_161, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(161, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_161(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_162, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(162, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_162(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_163, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(163, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_163(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_164, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(164, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_164(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_165, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(165, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_165(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_166, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(166, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_166(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_167, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(167, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_167(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_168, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(168, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_168(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_169, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(169, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_169(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_170, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(170, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_170(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_171, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(171, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_171(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_172, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(172, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_172(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_173, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(173, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_173(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_174, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(174, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_174(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_175, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(175, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_175(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_176, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(176, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_176(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_177, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(177, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_177(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_178, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(178, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_178(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_179, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(179, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_179(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_180, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(180, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_180(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_181, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(181, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_181(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_182, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(182, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_182(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_183, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(183, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_183(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_184, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(184, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_184(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_185, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(185, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_185(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_186, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(186, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_186(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_187, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(187, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_187(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_188, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(188, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_188(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_189, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(189, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_189(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_190, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(190, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_190(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_191, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(191, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_191(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_192, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(192, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_192(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_193, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(193, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_193(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_194, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(194, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_194(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_195, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(195, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_195(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_196, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(196, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_196(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_197, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(197, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_197(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_198, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(198, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_198(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_199, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(199, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_199(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_200, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(200, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_200(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_201, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(201, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_201(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_202, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(202, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_202(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_203, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(203, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_203(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_204, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(204, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_204(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_205, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(205, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_205(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_206, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(206, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_206(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_207, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(207, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_207(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_208, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(208, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_208(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_209, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(209, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_209(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_210, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(210, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_210(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_211, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(211, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_211(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_212, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(212, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_212(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_213, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(213, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_213(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_214, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(214, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_214(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_215, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(215, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_215(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_216, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(216, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_216(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_217, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(217, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_217(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_218, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(218, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_218(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_219, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(219, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_219(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_220, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(220, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_220(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_221, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(221, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_221(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_222, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(222, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_222(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_223, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(223, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_223(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_224, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(224, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_224(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_225, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(225, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_225(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_226, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(226, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_226(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_227, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(227, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_227(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_228, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(228, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_228(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_229, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(229, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_229(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_230, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(230, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_230(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_231, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(231, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_231(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_232, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(232, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_232(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_233, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(233, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_233(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_234, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(234, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_234(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_235, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(235, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_235(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_236, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(236, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_236(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_237, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(237, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_237(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_238, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(238, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_238(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_239, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(239, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_239(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_240, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(240, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_240(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_241, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(241, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_241(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_242, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(242, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_242(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_243, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(243, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_243(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_244, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(244, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_244(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_245, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(245, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_245(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_246, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(246, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_246(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_247, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(247, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_247(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_248, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(248, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_248(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_249, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(249, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_249(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_250, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(250, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_250(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_251, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(251, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_251(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_252, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(252, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_252(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_253, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(253, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_253(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_254, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(254, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_254(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_255, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(255, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_255(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_256, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(256, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_256(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_257, NSL_PP_SEQ_FOLD_LEFT_F)(op, op(257, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
# else
#    define NSL_PP_SEQ_FOLD_LEFT_I_1(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_2, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(2, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_2(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_3, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(3, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_3(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_4, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(4, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_4(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_5, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(5, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_5(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_6, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(6, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_6(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_7, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(7, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_7(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_8, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(8, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_8(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_9, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(9, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_9(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_10, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(10, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_10(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_11, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(11, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_11(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_12, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(12, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_12(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_13, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(13, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_13(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_14, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(14, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_14(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_15, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(15, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_15(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_16, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(16, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_16(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_17, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(17, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_17(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_18, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(18, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_18(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_19, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(19, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_19(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_20, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(20, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_20(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_21, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(21, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_21(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_22, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(22, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_22(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_23, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(23, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_23(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_24, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(24, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_24(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_25, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(25, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_25(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_26, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(26, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_26(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_27, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(27, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_27(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_28, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(28, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_28(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_29, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(29, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_29(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_30, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(30, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_30(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_31, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(31, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_31(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_32, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(32, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_32(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_33, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(33, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_33(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_34, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(34, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_34(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_35, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(35, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_35(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_36, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(36, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_36(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_37, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(37, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_37(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_38, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(38, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_38(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_39, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(39, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_39(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_40, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(40, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_40(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_41, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(41, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_41(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_42, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(42, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_42(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_43, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(43, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_43(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_44, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(44, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_44(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_45, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(45, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_45(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_46, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(46, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_46(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_47, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(47, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_47(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_48, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(48, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_48(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_49, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(49, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_49(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_50, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(50, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_50(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_51, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(51, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_51(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_52, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(52, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_52(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_53, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(53, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_53(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_54, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(54, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_54(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_55, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(55, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_55(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_56, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(56, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_56(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_57, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(57, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_57(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_58, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(58, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_58(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_59, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(59, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_59(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_60, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(60, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_60(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_61, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(61, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_61(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_62, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(62, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_62(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_63, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(63, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_63(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_64, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(64, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_64(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_65, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(65, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_65(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_66, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(66, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_66(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_67, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(67, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_67(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_68, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(68, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_68(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_69, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(69, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_69(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_70, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(70, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_70(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_71, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(71, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_71(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_72, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(72, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_72(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_73, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(73, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_73(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_74, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(74, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_74(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_75, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(75, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_75(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_76, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(76, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_76(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_77, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(77, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_77(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_78, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(78, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_78(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_79, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(79, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_79(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_80, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(80, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_80(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_81, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(81, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_81(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_82, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(82, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_82(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_83, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(83, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_83(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_84, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(84, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_84(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_85, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(85, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_85(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_86, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(86, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_86(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_87, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(87, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_87(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_88, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(88, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_88(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_89, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(89, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_89(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_90, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(90, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_90(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_91, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(91, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_91(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_92, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(92, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_92(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_93, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(93, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_93(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_94, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(94, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_94(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_95, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(95, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_95(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_96, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(96, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_96(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_97, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(97, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_97(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_98, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(98, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_98(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_99, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(99, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_99(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_100, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(100, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_100(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_101, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(101, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_101(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_102, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(102, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_102(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_103, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(103, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_103(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_104, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(104, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_104(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_105, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(105, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_105(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_106, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(106, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_106(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_107, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(107, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_107(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_108, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(108, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_108(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_109, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(109, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_109(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_110, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(110, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_110(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_111, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(111, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_111(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_112, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(112, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_112(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_113, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(113, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_113(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_114, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(114, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_114(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_115, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(115, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_115(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_116, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(116, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_116(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_117, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(117, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_117(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_118, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(118, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_118(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_119, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(119, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_119(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_120, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(120, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_120(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_121, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(121, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_121(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_122, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(122, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_122(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_123, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(123, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_123(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_124, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(124, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_124(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_125, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(125, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_125(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_126, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(126, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_126(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_127, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(127, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_127(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_128, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(128, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_128(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_129, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(129, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_129(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_130, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(130, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_130(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_131, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(131, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_131(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_132, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(132, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_132(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_133, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(133, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_133(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_134, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(134, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_134(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_135, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(135, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_135(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_136, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(136, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_136(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_137, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(137, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_137(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_138, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(138, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_138(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_139, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(139, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_139(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_140, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(140, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_140(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_141, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(141, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_141(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_142, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(142, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_142(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_143, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(143, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_143(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_144, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(144, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_144(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_145, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(145, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_145(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_146, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(146, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_146(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_147, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(147, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_147(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_148, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(148, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_148(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_149, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(149, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_149(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_150, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(150, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_150(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_151, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(151, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_151(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_152, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(152, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_152(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_153, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(153, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_153(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_154, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(154, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_154(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_155, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(155, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_155(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_156, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(156, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_156(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_157, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(157, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_157(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_158, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(158, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_158(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_159, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(159, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_159(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_160, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(160, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_160(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_161, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(161, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_161(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_162, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(162, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_162(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_163, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(163, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_163(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_164, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(164, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_164(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_165, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(165, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_165(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_166, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(166, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_166(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_167, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(167, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_167(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_168, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(168, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_168(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_169, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(169, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_169(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_170, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(170, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_170(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_171, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(171, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_171(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_172, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(172, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_172(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_173, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(173, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_173(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_174, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(174, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_174(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_175, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(175, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_175(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_176, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(176, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_176(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_177, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(177, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_177(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_178, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(178, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_178(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_179, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(179, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_179(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_180, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(180, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_180(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_181, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(181, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_181(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_182, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(182, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_182(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_183, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(183, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_183(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_184, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(184, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_184(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_185, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(185, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_185(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_186, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(186, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_186(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_187, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(187, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_187(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_188, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(188, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_188(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_189, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(189, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_189(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_190, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(190, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_190(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_191, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(191, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_191(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_192, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(192, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_192(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_193, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(193, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_193(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_194, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(194, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_194(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_195, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(195, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_195(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_196, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(196, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_196(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_197, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(197, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_197(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_198, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(198, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_198(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_199, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(199, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_199(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_200, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(200, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_200(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_201, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(201, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_201(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_202, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(202, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_202(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_203, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(203, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_203(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_204, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(204, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_204(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_205, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(205, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_205(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_206, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(206, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_206(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_207, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(207, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_207(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_208, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(208, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_208(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_209, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(209, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_209(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_210, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(210, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_210(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_211, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(211, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_211(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_212, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(212, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_212(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_213, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(213, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_213(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_214, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(214, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_214(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_215, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(215, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_215(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_216, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(216, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_216(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_217, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(217, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_217(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_218, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(218, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_218(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_219, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(219, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_219(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_220, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(220, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_220(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_221, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(221, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_221(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_222, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(222, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_222(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_223, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(223, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_223(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_224, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(224, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_224(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_225, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(225, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_225(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_226, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(226, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_226(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_227, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(227, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_227(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_228, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(228, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_228(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_229, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(229, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_229(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_230, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(230, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_230(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_231, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(231, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_231(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_232, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(232, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_232(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_233, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(233, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_233(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_234, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(234, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_234(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_235, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(235, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_235(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_236, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(236, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_236(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_237, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(237, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_237(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_238, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(238, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_238(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_239, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(239, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_239(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_240, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(240, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_240(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_241, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(241, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_241(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_242, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(242, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_242(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_243, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(243, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_243(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_244, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(244, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_244(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_245, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(245, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_245(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_246, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(246, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_246(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_247, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(247, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_247(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_248, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(248, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_248(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_249, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(249, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_249(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_250, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(250, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_250(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_251, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(251, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_251(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_252, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(252, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_252(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_253, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(253, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_253(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_254, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(254, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_254(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_255, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(255, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_255(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_256, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(256, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
#    define NSL_PP_SEQ_FOLD_LEFT_I_256(op, st, ss, sz) NSL_PP_IF(NSL_PP_DEC(sz), NSL_PP_SEQ_FOLD_LEFT_I_257, NSL_PP_SEQ_FOLD_LEFT_F)(op, op##(257, st, NSL_PP_SEQ_HEAD(ss)), NSL_PP_SEQ_TAIL(ss), NSL_PP_DEC(sz))
# endif
#
# else
#
# include <nsl/preprocessor/config/limits.h>
#
# if NSL_PP_LIMIT_SEQ == 256
# define NSL_PP_SEQ_FOLD_LEFT NSL_PP_CAT(NSL_PP_SEQ_FOLD_LEFT_, NSL_PP_DEC(NSL_PP_AUTO_REC(NSL_PP_SEQ_FOLD_LEFT_P, 256)))
# elif NSL_PP_LIMIT_SEQ == 512
# define NSL_PP_SEQ_FOLD_LEFT NSL_PP_CAT(NSL_PP_SEQ_FOLD_LEFT_, NSL_PP_DEC(NSL_PP_AUTO_REC(NSL_PP_SEQ_FOLD_LEFT_P, 512)))
# elif NSL_PP_LIMIT_SEQ == 1024
# define NSL_PP_SEQ_FOLD_LEFT NSL_PP_CAT(NSL_PP_SEQ_FOLD_LEFT_, NSL_PP_DEC(NSL_PP_AUTO_REC(NSL_PP_SEQ_FOLD_LEFT_P, 1024)))
# else
# error Incorrect value for the NSL_PP_LIMIT_SEQ limit
# endif
#
# define NSL_PP_SEQ_FOLD_LEFT_P(n) NSL_PP_SEQ_FOLD_LEFT_P_DEC(NSL_PP_DEC(n))
# define NSL_PP_SEQ_FOLD_LEFT_P_DEC(n) NSL_PP_CAT(NSL_PP_SEQ_FOLD_LEFT_CHECK_, NSL_PP_CAT(NSL_PP_SEQ_FOLD_LEFT_I_,n)(NSL_PP_SEQ_FOLD_LEFT_O, NSL_PP_NIL, (nil), 1))
# define NSL_PP_SEQ_FOLD_LEFT_O(s, st, _) st
#
# if NSL_PP_LIMIT_SEQ == 256
# define NSL_PP_SEQ_FOLD_LEFT_257(op, st, ss) NSL_PP_ERROR(0x0005)
# define NSL_PP_SEQ_FOLD_LEFT_I_257(op, st, ss, sz) NSL_PP_ERROR(0x0005)
# elif NSL_PP_LIMIT_SEQ == 512
# define NSL_PP_SEQ_FOLD_LEFT_513(op, st, ss) NSL_PP_ERROR(0x0005)
# define NSL_PP_SEQ_FOLD_LEFT_I_513(op, st, ss, sz) NSL_PP_ERROR(0x0005)
# elif NSL_PP_LIMIT_SEQ == 1024
# define NSL_PP_SEQ_FOLD_LEFT_1025(op, st, ss) NSL_PP_ERROR(0x0005)
# define NSL_PP_SEQ_FOLD_LEFT_I_1025(op, st, ss, sz) NSL_PP_ERROR(0x0005)
# endif
#
# define NSL_PP_SEQ_FOLD_LEFT_CHECK_NSL_PP_NIL 1
#
# define NSL_PP_SEQ_FOLD_LEFT_F(op, st, ss, sz) st
#
# if NSL_PP_LIMIT_SEQ == 256
# include <nsl/preprocessor/seq/limits/fold_left_256.h>
# elif NSL_PP_LIMIT_SEQ == 512
# include <nsl/preprocessor/seq/limits/fold_left_256.h>
# include <nsl/preprocessor/seq/limits/fold_left_512.h>
# elif NSL_PP_LIMIT_SEQ == 1024
# include <nsl/preprocessor/seq/limits/fold_left_256.h>
# include <nsl/preprocessor/seq/limits/fold_left_512.h>
# include <nsl/preprocessor/seq/limits/fold_left_1024.h>
# endif
#
# endif
#
# endif
