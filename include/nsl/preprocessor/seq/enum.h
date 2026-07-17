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
# ifndef NSL_PREPROCESSOR_SEQ_ENUM_H
# define NSL_PREPROCESSOR_SEQ_ENUM_H
#
# include "nsl/preprocessor/cat.h"
# include "nsl/preprocessor/config/config.h"
# include "nsl/preprocessor/seq/size.h"
#
# /* NSL_PP_SEQ_ENUM */
#
# if NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_EDG()
#    define NSL_PP_SEQ_ENUM(seq) NSL_PP_SEQ_ENUM_I(seq)
#    define NSL_PP_SEQ_ENUM_I(seq) NSL_PP_CAT(NSL_PP_SEQ_ENUM_, NSL_PP_SEQ_SIZE(seq)) seq
# elif NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_MWCC()
#    define NSL_PP_SEQ_ENUM(seq) NSL_PP_SEQ_ENUM_I(NSL_PP_SEQ_SIZE(seq), seq)
#    define NSL_PP_SEQ_ENUM_I(size, seq) NSL_PP_CAT(NSL_PP_SEQ_ENUM_, size) seq
# else
#    define NSL_PP_SEQ_ENUM(seq) NSL_PP_CAT(NSL_PP_SEQ_ENUM_, NSL_PP_SEQ_SIZE(seq)) seq
# endif
#
# if ~NSL_PP_CONFIG_FLAGS() & NSL_PP_CONFIG_STRICT()
#
# define NSL_PP_SEQ_ENUM_1(x) x
# define NSL_PP_SEQ_ENUM_2(x) x, NSL_PP_SEQ_ENUM_1
# define NSL_PP_SEQ_ENUM_3(x) x, NSL_PP_SEQ_ENUM_2
# define NSL_PP_SEQ_ENUM_4(x) x, NSL_PP_SEQ_ENUM_3
# define NSL_PP_SEQ_ENUM_5(x) x, NSL_PP_SEQ_ENUM_4
# define NSL_PP_SEQ_ENUM_6(x) x, NSL_PP_SEQ_ENUM_5
# define NSL_PP_SEQ_ENUM_7(x) x, NSL_PP_SEQ_ENUM_6
# define NSL_PP_SEQ_ENUM_8(x) x, NSL_PP_SEQ_ENUM_7
# define NSL_PP_SEQ_ENUM_9(x) x, NSL_PP_SEQ_ENUM_8
# define NSL_PP_SEQ_ENUM_10(x) x, NSL_PP_SEQ_ENUM_9
# define NSL_PP_SEQ_ENUM_11(x) x, NSL_PP_SEQ_ENUM_10
# define NSL_PP_SEQ_ENUM_12(x) x, NSL_PP_SEQ_ENUM_11
# define NSL_PP_SEQ_ENUM_13(x) x, NSL_PP_SEQ_ENUM_12
# define NSL_PP_SEQ_ENUM_14(x) x, NSL_PP_SEQ_ENUM_13
# define NSL_PP_SEQ_ENUM_15(x) x, NSL_PP_SEQ_ENUM_14
# define NSL_PP_SEQ_ENUM_16(x) x, NSL_PP_SEQ_ENUM_15
# define NSL_PP_SEQ_ENUM_17(x) x, NSL_PP_SEQ_ENUM_16
# define NSL_PP_SEQ_ENUM_18(x) x, NSL_PP_SEQ_ENUM_17
# define NSL_PP_SEQ_ENUM_19(x) x, NSL_PP_SEQ_ENUM_18
# define NSL_PP_SEQ_ENUM_20(x) x, NSL_PP_SEQ_ENUM_19
# define NSL_PP_SEQ_ENUM_21(x) x, NSL_PP_SEQ_ENUM_20
# define NSL_PP_SEQ_ENUM_22(x) x, NSL_PP_SEQ_ENUM_21
# define NSL_PP_SEQ_ENUM_23(x) x, NSL_PP_SEQ_ENUM_22
# define NSL_PP_SEQ_ENUM_24(x) x, NSL_PP_SEQ_ENUM_23
# define NSL_PP_SEQ_ENUM_25(x) x, NSL_PP_SEQ_ENUM_24
# define NSL_PP_SEQ_ENUM_26(x) x, NSL_PP_SEQ_ENUM_25
# define NSL_PP_SEQ_ENUM_27(x) x, NSL_PP_SEQ_ENUM_26
# define NSL_PP_SEQ_ENUM_28(x) x, NSL_PP_SEQ_ENUM_27
# define NSL_PP_SEQ_ENUM_29(x) x, NSL_PP_SEQ_ENUM_28
# define NSL_PP_SEQ_ENUM_30(x) x, NSL_PP_SEQ_ENUM_29
# define NSL_PP_SEQ_ENUM_31(x) x, NSL_PP_SEQ_ENUM_30
# define NSL_PP_SEQ_ENUM_32(x) x, NSL_PP_SEQ_ENUM_31
# define NSL_PP_SEQ_ENUM_33(x) x, NSL_PP_SEQ_ENUM_32
# define NSL_PP_SEQ_ENUM_34(x) x, NSL_PP_SEQ_ENUM_33
# define NSL_PP_SEQ_ENUM_35(x) x, NSL_PP_SEQ_ENUM_34
# define NSL_PP_SEQ_ENUM_36(x) x, NSL_PP_SEQ_ENUM_35
# define NSL_PP_SEQ_ENUM_37(x) x, NSL_PP_SEQ_ENUM_36
# define NSL_PP_SEQ_ENUM_38(x) x, NSL_PP_SEQ_ENUM_37
# define NSL_PP_SEQ_ENUM_39(x) x, NSL_PP_SEQ_ENUM_38
# define NSL_PP_SEQ_ENUM_40(x) x, NSL_PP_SEQ_ENUM_39
# define NSL_PP_SEQ_ENUM_41(x) x, NSL_PP_SEQ_ENUM_40
# define NSL_PP_SEQ_ENUM_42(x) x, NSL_PP_SEQ_ENUM_41
# define NSL_PP_SEQ_ENUM_43(x) x, NSL_PP_SEQ_ENUM_42
# define NSL_PP_SEQ_ENUM_44(x) x, NSL_PP_SEQ_ENUM_43
# define NSL_PP_SEQ_ENUM_45(x) x, NSL_PP_SEQ_ENUM_44
# define NSL_PP_SEQ_ENUM_46(x) x, NSL_PP_SEQ_ENUM_45
# define NSL_PP_SEQ_ENUM_47(x) x, NSL_PP_SEQ_ENUM_46
# define NSL_PP_SEQ_ENUM_48(x) x, NSL_PP_SEQ_ENUM_47
# define NSL_PP_SEQ_ENUM_49(x) x, NSL_PP_SEQ_ENUM_48
# define NSL_PP_SEQ_ENUM_50(x) x, NSL_PP_SEQ_ENUM_49
# define NSL_PP_SEQ_ENUM_51(x) x, NSL_PP_SEQ_ENUM_50
# define NSL_PP_SEQ_ENUM_52(x) x, NSL_PP_SEQ_ENUM_51
# define NSL_PP_SEQ_ENUM_53(x) x, NSL_PP_SEQ_ENUM_52
# define NSL_PP_SEQ_ENUM_54(x) x, NSL_PP_SEQ_ENUM_53
# define NSL_PP_SEQ_ENUM_55(x) x, NSL_PP_SEQ_ENUM_54
# define NSL_PP_SEQ_ENUM_56(x) x, NSL_PP_SEQ_ENUM_55
# define NSL_PP_SEQ_ENUM_57(x) x, NSL_PP_SEQ_ENUM_56
# define NSL_PP_SEQ_ENUM_58(x) x, NSL_PP_SEQ_ENUM_57
# define NSL_PP_SEQ_ENUM_59(x) x, NSL_PP_SEQ_ENUM_58
# define NSL_PP_SEQ_ENUM_60(x) x, NSL_PP_SEQ_ENUM_59
# define NSL_PP_SEQ_ENUM_61(x) x, NSL_PP_SEQ_ENUM_60
# define NSL_PP_SEQ_ENUM_62(x) x, NSL_PP_SEQ_ENUM_61
# define NSL_PP_SEQ_ENUM_63(x) x, NSL_PP_SEQ_ENUM_62
# define NSL_PP_SEQ_ENUM_64(x) x, NSL_PP_SEQ_ENUM_63
# define NSL_PP_SEQ_ENUM_65(x) x, NSL_PP_SEQ_ENUM_64
# define NSL_PP_SEQ_ENUM_66(x) x, NSL_PP_SEQ_ENUM_65
# define NSL_PP_SEQ_ENUM_67(x) x, NSL_PP_SEQ_ENUM_66
# define NSL_PP_SEQ_ENUM_68(x) x, NSL_PP_SEQ_ENUM_67
# define NSL_PP_SEQ_ENUM_69(x) x, NSL_PP_SEQ_ENUM_68
# define NSL_PP_SEQ_ENUM_70(x) x, NSL_PP_SEQ_ENUM_69
# define NSL_PP_SEQ_ENUM_71(x) x, NSL_PP_SEQ_ENUM_70
# define NSL_PP_SEQ_ENUM_72(x) x, NSL_PP_SEQ_ENUM_71
# define NSL_PP_SEQ_ENUM_73(x) x, NSL_PP_SEQ_ENUM_72
# define NSL_PP_SEQ_ENUM_74(x) x, NSL_PP_SEQ_ENUM_73
# define NSL_PP_SEQ_ENUM_75(x) x, NSL_PP_SEQ_ENUM_74
# define NSL_PP_SEQ_ENUM_76(x) x, NSL_PP_SEQ_ENUM_75
# define NSL_PP_SEQ_ENUM_77(x) x, NSL_PP_SEQ_ENUM_76
# define NSL_PP_SEQ_ENUM_78(x) x, NSL_PP_SEQ_ENUM_77
# define NSL_PP_SEQ_ENUM_79(x) x, NSL_PP_SEQ_ENUM_78
# define NSL_PP_SEQ_ENUM_80(x) x, NSL_PP_SEQ_ENUM_79
# define NSL_PP_SEQ_ENUM_81(x) x, NSL_PP_SEQ_ENUM_80
# define NSL_PP_SEQ_ENUM_82(x) x, NSL_PP_SEQ_ENUM_81
# define NSL_PP_SEQ_ENUM_83(x) x, NSL_PP_SEQ_ENUM_82
# define NSL_PP_SEQ_ENUM_84(x) x, NSL_PP_SEQ_ENUM_83
# define NSL_PP_SEQ_ENUM_85(x) x, NSL_PP_SEQ_ENUM_84
# define NSL_PP_SEQ_ENUM_86(x) x, NSL_PP_SEQ_ENUM_85
# define NSL_PP_SEQ_ENUM_87(x) x, NSL_PP_SEQ_ENUM_86
# define NSL_PP_SEQ_ENUM_88(x) x, NSL_PP_SEQ_ENUM_87
# define NSL_PP_SEQ_ENUM_89(x) x, NSL_PP_SEQ_ENUM_88
# define NSL_PP_SEQ_ENUM_90(x) x, NSL_PP_SEQ_ENUM_89
# define NSL_PP_SEQ_ENUM_91(x) x, NSL_PP_SEQ_ENUM_90
# define NSL_PP_SEQ_ENUM_92(x) x, NSL_PP_SEQ_ENUM_91
# define NSL_PP_SEQ_ENUM_93(x) x, NSL_PP_SEQ_ENUM_92
# define NSL_PP_SEQ_ENUM_94(x) x, NSL_PP_SEQ_ENUM_93
# define NSL_PP_SEQ_ENUM_95(x) x, NSL_PP_SEQ_ENUM_94
# define NSL_PP_SEQ_ENUM_96(x) x, NSL_PP_SEQ_ENUM_95
# define NSL_PP_SEQ_ENUM_97(x) x, NSL_PP_SEQ_ENUM_96
# define NSL_PP_SEQ_ENUM_98(x) x, NSL_PP_SEQ_ENUM_97
# define NSL_PP_SEQ_ENUM_99(x) x, NSL_PP_SEQ_ENUM_98
# define NSL_PP_SEQ_ENUM_100(x) x, NSL_PP_SEQ_ENUM_99
# define NSL_PP_SEQ_ENUM_101(x) x, NSL_PP_SEQ_ENUM_100
# define NSL_PP_SEQ_ENUM_102(x) x, NSL_PP_SEQ_ENUM_101
# define NSL_PP_SEQ_ENUM_103(x) x, NSL_PP_SEQ_ENUM_102
# define NSL_PP_SEQ_ENUM_104(x) x, NSL_PP_SEQ_ENUM_103
# define NSL_PP_SEQ_ENUM_105(x) x, NSL_PP_SEQ_ENUM_104
# define NSL_PP_SEQ_ENUM_106(x) x, NSL_PP_SEQ_ENUM_105
# define NSL_PP_SEQ_ENUM_107(x) x, NSL_PP_SEQ_ENUM_106
# define NSL_PP_SEQ_ENUM_108(x) x, NSL_PP_SEQ_ENUM_107
# define NSL_PP_SEQ_ENUM_109(x) x, NSL_PP_SEQ_ENUM_108
# define NSL_PP_SEQ_ENUM_110(x) x, NSL_PP_SEQ_ENUM_109
# define NSL_PP_SEQ_ENUM_111(x) x, NSL_PP_SEQ_ENUM_110
# define NSL_PP_SEQ_ENUM_112(x) x, NSL_PP_SEQ_ENUM_111
# define NSL_PP_SEQ_ENUM_113(x) x, NSL_PP_SEQ_ENUM_112
# define NSL_PP_SEQ_ENUM_114(x) x, NSL_PP_SEQ_ENUM_113
# define NSL_PP_SEQ_ENUM_115(x) x, NSL_PP_SEQ_ENUM_114
# define NSL_PP_SEQ_ENUM_116(x) x, NSL_PP_SEQ_ENUM_115
# define NSL_PP_SEQ_ENUM_117(x) x, NSL_PP_SEQ_ENUM_116
# define NSL_PP_SEQ_ENUM_118(x) x, NSL_PP_SEQ_ENUM_117
# define NSL_PP_SEQ_ENUM_119(x) x, NSL_PP_SEQ_ENUM_118
# define NSL_PP_SEQ_ENUM_120(x) x, NSL_PP_SEQ_ENUM_119
# define NSL_PP_SEQ_ENUM_121(x) x, NSL_PP_SEQ_ENUM_120
# define NSL_PP_SEQ_ENUM_122(x) x, NSL_PP_SEQ_ENUM_121
# define NSL_PP_SEQ_ENUM_123(x) x, NSL_PP_SEQ_ENUM_122
# define NSL_PP_SEQ_ENUM_124(x) x, NSL_PP_SEQ_ENUM_123
# define NSL_PP_SEQ_ENUM_125(x) x, NSL_PP_SEQ_ENUM_124
# define NSL_PP_SEQ_ENUM_126(x) x, NSL_PP_SEQ_ENUM_125
# define NSL_PP_SEQ_ENUM_127(x) x, NSL_PP_SEQ_ENUM_126
# define NSL_PP_SEQ_ENUM_128(x) x, NSL_PP_SEQ_ENUM_127
# define NSL_PP_SEQ_ENUM_129(x) x, NSL_PP_SEQ_ENUM_128
# define NSL_PP_SEQ_ENUM_130(x) x, NSL_PP_SEQ_ENUM_129
# define NSL_PP_SEQ_ENUM_131(x) x, NSL_PP_SEQ_ENUM_130
# define NSL_PP_SEQ_ENUM_132(x) x, NSL_PP_SEQ_ENUM_131
# define NSL_PP_SEQ_ENUM_133(x) x, NSL_PP_SEQ_ENUM_132
# define NSL_PP_SEQ_ENUM_134(x) x, NSL_PP_SEQ_ENUM_133
# define NSL_PP_SEQ_ENUM_135(x) x, NSL_PP_SEQ_ENUM_134
# define NSL_PP_SEQ_ENUM_136(x) x, NSL_PP_SEQ_ENUM_135
# define NSL_PP_SEQ_ENUM_137(x) x, NSL_PP_SEQ_ENUM_136
# define NSL_PP_SEQ_ENUM_138(x) x, NSL_PP_SEQ_ENUM_137
# define NSL_PP_SEQ_ENUM_139(x) x, NSL_PP_SEQ_ENUM_138
# define NSL_PP_SEQ_ENUM_140(x) x, NSL_PP_SEQ_ENUM_139
# define NSL_PP_SEQ_ENUM_141(x) x, NSL_PP_SEQ_ENUM_140
# define NSL_PP_SEQ_ENUM_142(x) x, NSL_PP_SEQ_ENUM_141
# define NSL_PP_SEQ_ENUM_143(x) x, NSL_PP_SEQ_ENUM_142
# define NSL_PP_SEQ_ENUM_144(x) x, NSL_PP_SEQ_ENUM_143
# define NSL_PP_SEQ_ENUM_145(x) x, NSL_PP_SEQ_ENUM_144
# define NSL_PP_SEQ_ENUM_146(x) x, NSL_PP_SEQ_ENUM_145
# define NSL_PP_SEQ_ENUM_147(x) x, NSL_PP_SEQ_ENUM_146
# define NSL_PP_SEQ_ENUM_148(x) x, NSL_PP_SEQ_ENUM_147
# define NSL_PP_SEQ_ENUM_149(x) x, NSL_PP_SEQ_ENUM_148
# define NSL_PP_SEQ_ENUM_150(x) x, NSL_PP_SEQ_ENUM_149
# define NSL_PP_SEQ_ENUM_151(x) x, NSL_PP_SEQ_ENUM_150
# define NSL_PP_SEQ_ENUM_152(x) x, NSL_PP_SEQ_ENUM_151
# define NSL_PP_SEQ_ENUM_153(x) x, NSL_PP_SEQ_ENUM_152
# define NSL_PP_SEQ_ENUM_154(x) x, NSL_PP_SEQ_ENUM_153
# define NSL_PP_SEQ_ENUM_155(x) x, NSL_PP_SEQ_ENUM_154
# define NSL_PP_SEQ_ENUM_156(x) x, NSL_PP_SEQ_ENUM_155
# define NSL_PP_SEQ_ENUM_157(x) x, NSL_PP_SEQ_ENUM_156
# define NSL_PP_SEQ_ENUM_158(x) x, NSL_PP_SEQ_ENUM_157
# define NSL_PP_SEQ_ENUM_159(x) x, NSL_PP_SEQ_ENUM_158
# define NSL_PP_SEQ_ENUM_160(x) x, NSL_PP_SEQ_ENUM_159
# define NSL_PP_SEQ_ENUM_161(x) x, NSL_PP_SEQ_ENUM_160
# define NSL_PP_SEQ_ENUM_162(x) x, NSL_PP_SEQ_ENUM_161
# define NSL_PP_SEQ_ENUM_163(x) x, NSL_PP_SEQ_ENUM_162
# define NSL_PP_SEQ_ENUM_164(x) x, NSL_PP_SEQ_ENUM_163
# define NSL_PP_SEQ_ENUM_165(x) x, NSL_PP_SEQ_ENUM_164
# define NSL_PP_SEQ_ENUM_166(x) x, NSL_PP_SEQ_ENUM_165
# define NSL_PP_SEQ_ENUM_167(x) x, NSL_PP_SEQ_ENUM_166
# define NSL_PP_SEQ_ENUM_168(x) x, NSL_PP_SEQ_ENUM_167
# define NSL_PP_SEQ_ENUM_169(x) x, NSL_PP_SEQ_ENUM_168
# define NSL_PP_SEQ_ENUM_170(x) x, NSL_PP_SEQ_ENUM_169
# define NSL_PP_SEQ_ENUM_171(x) x, NSL_PP_SEQ_ENUM_170
# define NSL_PP_SEQ_ENUM_172(x) x, NSL_PP_SEQ_ENUM_171
# define NSL_PP_SEQ_ENUM_173(x) x, NSL_PP_SEQ_ENUM_172
# define NSL_PP_SEQ_ENUM_174(x) x, NSL_PP_SEQ_ENUM_173
# define NSL_PP_SEQ_ENUM_175(x) x, NSL_PP_SEQ_ENUM_174
# define NSL_PP_SEQ_ENUM_176(x) x, NSL_PP_SEQ_ENUM_175
# define NSL_PP_SEQ_ENUM_177(x) x, NSL_PP_SEQ_ENUM_176
# define NSL_PP_SEQ_ENUM_178(x) x, NSL_PP_SEQ_ENUM_177
# define NSL_PP_SEQ_ENUM_179(x) x, NSL_PP_SEQ_ENUM_178
# define NSL_PP_SEQ_ENUM_180(x) x, NSL_PP_SEQ_ENUM_179
# define NSL_PP_SEQ_ENUM_181(x) x, NSL_PP_SEQ_ENUM_180
# define NSL_PP_SEQ_ENUM_182(x) x, NSL_PP_SEQ_ENUM_181
# define NSL_PP_SEQ_ENUM_183(x) x, NSL_PP_SEQ_ENUM_182
# define NSL_PP_SEQ_ENUM_184(x) x, NSL_PP_SEQ_ENUM_183
# define NSL_PP_SEQ_ENUM_185(x) x, NSL_PP_SEQ_ENUM_184
# define NSL_PP_SEQ_ENUM_186(x) x, NSL_PP_SEQ_ENUM_185
# define NSL_PP_SEQ_ENUM_187(x) x, NSL_PP_SEQ_ENUM_186
# define NSL_PP_SEQ_ENUM_188(x) x, NSL_PP_SEQ_ENUM_187
# define NSL_PP_SEQ_ENUM_189(x) x, NSL_PP_SEQ_ENUM_188
# define NSL_PP_SEQ_ENUM_190(x) x, NSL_PP_SEQ_ENUM_189
# define NSL_PP_SEQ_ENUM_191(x) x, NSL_PP_SEQ_ENUM_190
# define NSL_PP_SEQ_ENUM_192(x) x, NSL_PP_SEQ_ENUM_191
# define NSL_PP_SEQ_ENUM_193(x) x, NSL_PP_SEQ_ENUM_192
# define NSL_PP_SEQ_ENUM_194(x) x, NSL_PP_SEQ_ENUM_193
# define NSL_PP_SEQ_ENUM_195(x) x, NSL_PP_SEQ_ENUM_194
# define NSL_PP_SEQ_ENUM_196(x) x, NSL_PP_SEQ_ENUM_195
# define NSL_PP_SEQ_ENUM_197(x) x, NSL_PP_SEQ_ENUM_196
# define NSL_PP_SEQ_ENUM_198(x) x, NSL_PP_SEQ_ENUM_197
# define NSL_PP_SEQ_ENUM_199(x) x, NSL_PP_SEQ_ENUM_198
# define NSL_PP_SEQ_ENUM_200(x) x, NSL_PP_SEQ_ENUM_199
# define NSL_PP_SEQ_ENUM_201(x) x, NSL_PP_SEQ_ENUM_200
# define NSL_PP_SEQ_ENUM_202(x) x, NSL_PP_SEQ_ENUM_201
# define NSL_PP_SEQ_ENUM_203(x) x, NSL_PP_SEQ_ENUM_202
# define NSL_PP_SEQ_ENUM_204(x) x, NSL_PP_SEQ_ENUM_203
# define NSL_PP_SEQ_ENUM_205(x) x, NSL_PP_SEQ_ENUM_204
# define NSL_PP_SEQ_ENUM_206(x) x, NSL_PP_SEQ_ENUM_205
# define NSL_PP_SEQ_ENUM_207(x) x, NSL_PP_SEQ_ENUM_206
# define NSL_PP_SEQ_ENUM_208(x) x, NSL_PP_SEQ_ENUM_207
# define NSL_PP_SEQ_ENUM_209(x) x, NSL_PP_SEQ_ENUM_208
# define NSL_PP_SEQ_ENUM_210(x) x, NSL_PP_SEQ_ENUM_209
# define NSL_PP_SEQ_ENUM_211(x) x, NSL_PP_SEQ_ENUM_210
# define NSL_PP_SEQ_ENUM_212(x) x, NSL_PP_SEQ_ENUM_211
# define NSL_PP_SEQ_ENUM_213(x) x, NSL_PP_SEQ_ENUM_212
# define NSL_PP_SEQ_ENUM_214(x) x, NSL_PP_SEQ_ENUM_213
# define NSL_PP_SEQ_ENUM_215(x) x, NSL_PP_SEQ_ENUM_214
# define NSL_PP_SEQ_ENUM_216(x) x, NSL_PP_SEQ_ENUM_215
# define NSL_PP_SEQ_ENUM_217(x) x, NSL_PP_SEQ_ENUM_216
# define NSL_PP_SEQ_ENUM_218(x) x, NSL_PP_SEQ_ENUM_217
# define NSL_PP_SEQ_ENUM_219(x) x, NSL_PP_SEQ_ENUM_218
# define NSL_PP_SEQ_ENUM_220(x) x, NSL_PP_SEQ_ENUM_219
# define NSL_PP_SEQ_ENUM_221(x) x, NSL_PP_SEQ_ENUM_220
# define NSL_PP_SEQ_ENUM_222(x) x, NSL_PP_SEQ_ENUM_221
# define NSL_PP_SEQ_ENUM_223(x) x, NSL_PP_SEQ_ENUM_222
# define NSL_PP_SEQ_ENUM_224(x) x, NSL_PP_SEQ_ENUM_223
# define NSL_PP_SEQ_ENUM_225(x) x, NSL_PP_SEQ_ENUM_224
# define NSL_PP_SEQ_ENUM_226(x) x, NSL_PP_SEQ_ENUM_225
# define NSL_PP_SEQ_ENUM_227(x) x, NSL_PP_SEQ_ENUM_226
# define NSL_PP_SEQ_ENUM_228(x) x, NSL_PP_SEQ_ENUM_227
# define NSL_PP_SEQ_ENUM_229(x) x, NSL_PP_SEQ_ENUM_228
# define NSL_PP_SEQ_ENUM_230(x) x, NSL_PP_SEQ_ENUM_229
# define NSL_PP_SEQ_ENUM_231(x) x, NSL_PP_SEQ_ENUM_230
# define NSL_PP_SEQ_ENUM_232(x) x, NSL_PP_SEQ_ENUM_231
# define NSL_PP_SEQ_ENUM_233(x) x, NSL_PP_SEQ_ENUM_232
# define NSL_PP_SEQ_ENUM_234(x) x, NSL_PP_SEQ_ENUM_233
# define NSL_PP_SEQ_ENUM_235(x) x, NSL_PP_SEQ_ENUM_234
# define NSL_PP_SEQ_ENUM_236(x) x, NSL_PP_SEQ_ENUM_235
# define NSL_PP_SEQ_ENUM_237(x) x, NSL_PP_SEQ_ENUM_236
# define NSL_PP_SEQ_ENUM_238(x) x, NSL_PP_SEQ_ENUM_237
# define NSL_PP_SEQ_ENUM_239(x) x, NSL_PP_SEQ_ENUM_238
# define NSL_PP_SEQ_ENUM_240(x) x, NSL_PP_SEQ_ENUM_239
# define NSL_PP_SEQ_ENUM_241(x) x, NSL_PP_SEQ_ENUM_240
# define NSL_PP_SEQ_ENUM_242(x) x, NSL_PP_SEQ_ENUM_241
# define NSL_PP_SEQ_ENUM_243(x) x, NSL_PP_SEQ_ENUM_242
# define NSL_PP_SEQ_ENUM_244(x) x, NSL_PP_SEQ_ENUM_243
# define NSL_PP_SEQ_ENUM_245(x) x, NSL_PP_SEQ_ENUM_244
# define NSL_PP_SEQ_ENUM_246(x) x, NSL_PP_SEQ_ENUM_245
# define NSL_PP_SEQ_ENUM_247(x) x, NSL_PP_SEQ_ENUM_246
# define NSL_PP_SEQ_ENUM_248(x) x, NSL_PP_SEQ_ENUM_247
# define NSL_PP_SEQ_ENUM_249(x) x, NSL_PP_SEQ_ENUM_248
# define NSL_PP_SEQ_ENUM_250(x) x, NSL_PP_SEQ_ENUM_249
# define NSL_PP_SEQ_ENUM_251(x) x, NSL_PP_SEQ_ENUM_250
# define NSL_PP_SEQ_ENUM_252(x) x, NSL_PP_SEQ_ENUM_251
# define NSL_PP_SEQ_ENUM_253(x) x, NSL_PP_SEQ_ENUM_252
# define NSL_PP_SEQ_ENUM_254(x) x, NSL_PP_SEQ_ENUM_253
# define NSL_PP_SEQ_ENUM_255(x) x, NSL_PP_SEQ_ENUM_254
# define NSL_PP_SEQ_ENUM_256(x) x, NSL_PP_SEQ_ENUM_255
#
# else
#
# include "nsl/preprocessor/config/limits.h"
#
# if NSL_PP_LIMIT_SEQ == 256
# include "nsl/preprocessor/seq/limits/enum_256.h"
# elif NSL_PP_LIMIT_SEQ == 512
# include "nsl/preprocessor/seq/limits/enum_256.h"
# include "nsl/preprocessor/seq/limits/enum_512.h"
# elif NSL_PP_LIMIT_SEQ == 1024
# include "nsl/preprocessor/seq/limits/enum_256.h"
# include "nsl/preprocessor/seq/limits/enum_512.h"
# include "nsl/preprocessor/seq/limits/enum_1024.h"
# else
# error Incorrect value for the NSL_PP_LIMIT_SEQ limit
# endif
#
# endif
#
# endif
