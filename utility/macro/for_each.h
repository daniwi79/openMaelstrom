#pragma once
#include <utility/macro.h>
#if defined(_MSC_VER) || !defined(__CUDA_ARCH__)
#define FE_1(WHAT,data,  X)       WHAT(0, data, REMOVE_PARENS X)
#define FE_2(WHAT,data,  X, ...)  WHAT( 1, data, REMOVE_PARENS X)  EXPAND( FE_1(WHAT, data, __VA_ARGS__))
#define FE_3(WHAT,data,  X, ...)  WHAT( 2, data, REMOVE_PARENS X)  EXPAND( FE_2(WHAT, data, __VA_ARGS__))
#define FE_4(WHAT,data,  X, ...)  WHAT( 3, data, REMOVE_PARENS X)  EXPAND( FE_3(WHAT, data, __VA_ARGS__))
#define FE_5(WHAT,data,  X, ...)  WHAT( 4, data, REMOVE_PARENS X)  EXPAND( FE_4(WHAT, data, __VA_ARGS__))
#define FE_6(WHAT,data,  X, ...)  WHAT( 5, data, REMOVE_PARENS X)  EXPAND( FE_5(WHAT, data, __VA_ARGS__))
#define FE_7(WHAT,data,  X, ...)  WHAT( 6, data, REMOVE_PARENS X)  EXPAND( FE_6(WHAT, data, __VA_ARGS__))
#define FE_8(WHAT,data,  X, ...)  WHAT( 7, data, REMOVE_PARENS X)  EXPAND( FE_7(WHAT, data, __VA_ARGS__))
#define FE_9(WHAT,data,  X, ...)  WHAT( 8, data, REMOVE_PARENS X)  EXPAND( FE_8(WHAT, data, __VA_ARGS__)) 

#define FE_10(WHAT,data,  X, ...) WHAT( 9, data, REMOVE_PARENS X)  EXPAND( FE_9(WHAT, data, __VA_ARGS__))
#define FE_11(WHAT,data,  X, ...) WHAT(10, data, REMOVE_PARENS X)  EXPAND(FE_10(WHAT, data, __VA_ARGS__))
#define FE_12(WHAT,data,  X, ...) WHAT(11, data, REMOVE_PARENS X)  EXPAND(FE_11(WHAT, data, __VA_ARGS__))
#define FE_13(WHAT,data,  X, ...) WHAT(12, data, REMOVE_PARENS X)  EXPAND(FE_12(WHAT, data, __VA_ARGS__))
#define FE_14(WHAT,data,  X, ...) WHAT(13, data, REMOVE_PARENS X)  EXPAND(FE_13(WHAT, data, __VA_ARGS__))
#define FE_15(WHAT,data,  X, ...) WHAT(14, data, REMOVE_PARENS X)  EXPAND(FE_14(WHAT, data, __VA_ARGS__))
#define FE_16(WHAT,data,  X, ...) WHAT(15, data, REMOVE_PARENS X)  EXPAND(FE_15(WHAT, data, __VA_ARGS__))
#define FE_17(WHAT,data,  X, ...) WHAT(16, data, REMOVE_PARENS X)  EXPAND(FE_16(WHAT, data, __VA_ARGS__))
#define FE_18(WHAT,data,  X, ...) WHAT(17, data, REMOVE_PARENS X)  EXPAND(FE_17(WHAT, data, __VA_ARGS__))
#define FE_19(WHAT,data,  X, ...) WHAT(18, data, REMOVE_PARENS X)  EXPAND(FE_18(WHAT, data, __VA_ARGS__))

#define FE_20(WHAT,data,  X, ...) WHAT(19, data, REMOVE_PARENS X)  EXPAND(FE_19(WHAT, data, __VA_ARGS__))
#define FE_21(WHAT,data,  X, ...) WHAT(20, data, REMOVE_PARENS X)  EXPAND(FE_20(WHAT, data, __VA_ARGS__))
#define FE_22(WHAT,data,  X, ...) WHAT(21, data, REMOVE_PARENS X)  EXPAND(FE_21(WHAT, data, __VA_ARGS__))
#define FE_23(WHAT,data,  X, ...) WHAT(22, data, REMOVE_PARENS X)  EXPAND(FE_22(WHAT, data, __VA_ARGS__))
#define FE_24(WHAT,data,  X, ...) WHAT(23, data, REMOVE_PARENS X)  EXPAND(FE_23(WHAT, data, __VA_ARGS__))
#define FE_25(WHAT,data,  X, ...) WHAT(24, data, REMOVE_PARENS X)  EXPAND(FE_24(WHAT, data, __VA_ARGS__))
#define FE_26(WHAT,data,  X, ...) WHAT(25, data, REMOVE_PARENS X)  EXPAND(FE_25(WHAT, data, __VA_ARGS__))
#define FE_27(WHAT,data,  X, ...) WHAT(26, data, REMOVE_PARENS X)  EXPAND(FE_26(WHAT, data, __VA_ARGS__))
#define FE_28(WHAT,data,  X, ...) WHAT(27, data, REMOVE_PARENS X)  EXPAND(FE_27(WHAT, data, __VA_ARGS__))
#define FE_29(WHAT,data,  X, ...) WHAT(28, data, REMOVE_PARENS X)  EXPAND(FE_28(WHAT, data, __VA_ARGS__))

#define FE_30(WHAT,data,  X, ...) WHAT(29, data, REMOVE_PARENS X)  EXPAND(FE_29(WHAT, data, __VA_ARGS__))
#define FE_31(WHAT,data,  X, ...) WHAT(30, data, REMOVE_PARENS X)  EXPAND(FE_30(WHAT, data, __VA_ARGS__))
#define FE_32(WHAT,data,  X, ...) WHAT(31, data, REMOVE_PARENS X)  EXPAND(FE_31(WHAT, data, __VA_ARGS__))
#define FE_33(WHAT,data,  X, ...) WHAT(32, data, REMOVE_PARENS X)  EXPAND(FE_32(WHAT, data, __VA_ARGS__))
#define FE_34(WHAT,data,  X, ...) WHAT(33, data, REMOVE_PARENS X)  EXPAND(FE_33(WHAT, data, __VA_ARGS__))
#define FE_35(WHAT,data,  X, ...) WHAT(34, data, REMOVE_PARENS X)  EXPAND(FE_34(WHAT, data, __VA_ARGS__))
#define FE_36(WHAT,data,  X, ...) WHAT(35, data, REMOVE_PARENS X)  EXPAND(FE_35(WHAT, data, __VA_ARGS__))
#define FE_37(WHAT,data,  X, ...) WHAT(36, data, REMOVE_PARENS X)  EXPAND(FE_36(WHAT, data, __VA_ARGS__))
#define FE_38(WHAT,data,  X, ...) WHAT(37, data, REMOVE_PARENS X)  EXPAND(FE_37(WHAT, data, __VA_ARGS__))
#define FE_39(WHAT,data,  X, ...) WHAT(38, data, REMOVE_PARENS X)  EXPAND(FE_38(WHAT, data, __VA_ARGS__))

#define FE_40(WHAT,data,  X, ...) WHAT(39, data, REMOVE_PARENS X)  EXPAND(FE_39(WHAT, data, __VA_ARGS__))
#define FE_41(WHAT,data,  X, ...) WHAT(40, data, REMOVE_PARENS X)  EXPAND(FE_40(WHAT, data, __VA_ARGS__))
#define FE_42(WHAT,data,  X, ...) WHAT(41, data, REMOVE_PARENS X)  EXPAND(FE_41(WHAT, data, __VA_ARGS__))
#define FE_43(WHAT,data,  X, ...) WHAT(42, data, REMOVE_PARENS X)  EXPAND(FE_42(WHAT, data, __VA_ARGS__))
#define FE_44(WHAT,data,  X, ...) WHAT(43, data, REMOVE_PARENS X)  EXPAND(FE_43(WHAT, data, __VA_ARGS__))
#define FE_45(WHAT,data,  X, ...) WHAT(44, data, REMOVE_PARENS X)  EXPAND(FE_44(WHAT, data, __VA_ARGS__))
#define FE_46(WHAT,data,  X, ...) WHAT(45, data, REMOVE_PARENS X)  EXPAND(FE_45(WHAT, data, __VA_ARGS__))
#define FE_47(WHAT,data,  X, ...) WHAT(46, data, REMOVE_PARENS X)  EXPAND(FE_46(WHAT, data, __VA_ARGS__))
#define FE_48(WHAT,data,  X, ...) WHAT(47, data, REMOVE_PARENS X)  EXPAND(FE_47(WHAT, data, __VA_ARGS__))
#define FE_49(WHAT,data,  X, ...) WHAT(48, data, REMOVE_PARENS X)  EXPAND(FE_48(WHAT, data, __VA_ARGS__))

#define FE_50(WHAT,data,  X, ...) WHAT(49, data, REMOVE_PARENS X)  EXPAND(FE_49(WHAT, data, __VA_ARGS__))
#define FE_51(WHAT,data,  X, ...) WHAT(50, data, REMOVE_PARENS X)  EXPAND(FE_50(WHAT, data, __VA_ARGS__))
#define FE_52(WHAT,data,  X, ...) WHAT(51, data, REMOVE_PARENS X)  EXPAND(FE_51(WHAT, data, __VA_ARGS__))
#define FE_53(WHAT,data,  X, ...) WHAT(52, data, REMOVE_PARENS X)  EXPAND(FE_52(WHAT, data, __VA_ARGS__))
#define FE_54(WHAT,data,  X, ...) WHAT(53, data, REMOVE_PARENS X)  EXPAND(FE_53(WHAT, data, __VA_ARGS__))
#define FE_55(WHAT,data,  X, ...) WHAT(54, data, REMOVE_PARENS X)  EXPAND(FE_54(WHAT, data, __VA_ARGS__))
#define FE_56(WHAT,data,  X, ...) WHAT(55, data, REMOVE_PARENS X)  EXPAND(FE_55(WHAT, data, __VA_ARGS__))
#define FE_57(WHAT,data,  X, ...) WHAT(56, data, REMOVE_PARENS X)  EXPAND(FE_56(WHAT, data, __VA_ARGS__))
#define FE_58(WHAT,data,  X, ...) WHAT(57, data, REMOVE_PARENS X)  EXPAND(FE_57(WHAT, data, __VA_ARGS__))
#define FE_59(WHAT,data,  X, ...) WHAT(58, data, REMOVE_PARENS X)  EXPAND(FE_58(WHAT, data, __VA_ARGS__))

#define FE_60(WHAT,data,  X, ...) WHAT(59, data, REMOVE_PARENS X)  EXPAND(FE_59(WHAT, data, __VA_ARGS__))
#define FE_61(WHAT,data,  X, ...) WHAT(60, data, REMOVE_PARENS X)  EXPAND(FE_60(WHAT, data, __VA_ARGS__))
#define FE_62(WHAT,data,  X, ...) WHAT(61, data, REMOVE_PARENS X)  EXPAND(FE_61(WHAT, data, __VA_ARGS__))
#define FE_63(WHAT,data,  X, ...) WHAT(62, data, REMOVE_PARENS X)  EXPAND(FE_62(WHAT, data, __VA_ARGS__))
#define FE_64(WHAT,data,  X, ...) WHAT(63, data, REMOVE_PARENS X)  EXPAND(FE_63(WHAT, data, __VA_ARGS__))
#define FE_65(WHAT,data,  X, ...) WHAT(64, data, REMOVE_PARENS X)  EXPAND(FE_64(WHAT, data, __VA_ARGS__))
#define FE_66(WHAT,data,  X, ...) WHAT(65, data, REMOVE_PARENS X)  EXPAND(FE_65(WHAT, data, __VA_ARGS__))
#define FE_67(WHAT,data,  X, ...) WHAT(66, data, REMOVE_PARENS X)  EXPAND(FE_66(WHAT, data, __VA_ARGS__))
#define FE_68(WHAT,data,  X, ...) WHAT(67, data, REMOVE_PARENS X)  EXPAND(FE_67(WHAT, data, __VA_ARGS__))
#define FE_69(WHAT,data,  X, ...) WHAT(68, data, REMOVE_PARENS X)  EXPAND(FE_68(WHAT, data, __VA_ARGS__))

#define FE_70(WHAT,data,  X, ...) WHAT(69, data, REMOVE_PARENS X)  EXPAND(FE_69(WHAT, data, __VA_ARGS__))
#else
#define FE_1(WHAT,data,  X)       WHAT(0, data, REMOVE_PARENS X)
#define FE_2(WHAT,data,  X, ...)  WHAT( 1, data, REMOVE_PARENS X)   FE_1(WHAT, data, __VA_ARGS__)
#define FE_3(WHAT,data,  X, ...)  WHAT( 2, data, REMOVE_PARENS X)   FE_2(WHAT, data, __VA_ARGS__)
#define FE_4(WHAT,data,  X, ...)  WHAT( 3, data, REMOVE_PARENS X)   FE_3(WHAT, data, __VA_ARGS__)
#define FE_5(WHAT,data,  X, ...)  WHAT( 4, data, REMOVE_PARENS X)   FE_4(WHAT, data, __VA_ARGS__)
#define FE_6(WHAT,data,  X, ...)  WHAT( 5, data, REMOVE_PARENS X)   FE_5(WHAT, data, __VA_ARGS__)
#define FE_7(WHAT,data,  X, ...)  WHAT( 6, data, REMOVE_PARENS X)   FE_6(WHAT, data, __VA_ARGS__)
#define FE_8(WHAT,data,  X, ...)  WHAT( 7, data, REMOVE_PARENS X)   FE_7(WHAT, data, __VA_ARGS__)
#define FE_9(WHAT,data,  X, ...)  WHAT( 8, data, REMOVE_PARENS X)   FE_8(WHAT, data, __VA_ARGS__) 

#define FE_10(WHAT,data,  X, ...) WHAT( 9, data, REMOVE_PARENS X)   FE_9(WHAT, data, __VA_ARGS__)
#define FE_11(WHAT,data,  X, ...) WHAT(10, data, REMOVE_PARENS X)  FE_10(WHAT, data, __VA_ARGS__)
#define FE_12(WHAT,data,  X, ...) WHAT(11, data, REMOVE_PARENS X)  FE_11(WHAT, data, __VA_ARGS__)
#define FE_13(WHAT,data,  X, ...) WHAT(12, data, REMOVE_PARENS X)  FE_12(WHAT, data, __VA_ARGS__)
#define FE_14(WHAT,data,  X, ...) WHAT(13, data, REMOVE_PARENS X)  FE_13(WHAT, data, __VA_ARGS__)
#define FE_15(WHAT,data,  X, ...) WHAT(14, data, REMOVE_PARENS X)  FE_14(WHAT, data, __VA_ARGS__)
#define FE_16(WHAT,data,  X, ...) WHAT(15, data, REMOVE_PARENS X)  FE_15(WHAT, data, __VA_ARGS__)
#define FE_17(WHAT,data,  X, ...) WHAT(16, data, REMOVE_PARENS X)  FE_16(WHAT, data, __VA_ARGS__)
#define FE_18(WHAT,data,  X, ...) WHAT(17, data, REMOVE_PARENS X)  FE_17(WHAT, data, __VA_ARGS__)
#define FE_19(WHAT,data,  X, ...) WHAT(18, data, REMOVE_PARENS X)  FE_18(WHAT, data, __VA_ARGS__)

#define FE_20(WHAT,data,  X, ...) WHAT(19, data, REMOVE_PARENS X)  FE_19(WHAT, data, __VA_ARGS__)
#define FE_21(WHAT,data,  X, ...) WHAT(20, data, REMOVE_PARENS X)  FE_20(WHAT, data, __VA_ARGS__)
#define FE_22(WHAT,data,  X, ...) WHAT(21, data, REMOVE_PARENS X)  FE_21(WHAT, data, __VA_ARGS__)
#define FE_23(WHAT,data,  X, ...) WHAT(22, data, REMOVE_PARENS X)  FE_22(WHAT, data, __VA_ARGS__)
#define FE_24(WHAT,data,  X, ...) WHAT(23, data, REMOVE_PARENS X)  FE_23(WHAT, data, __VA_ARGS__)
#define FE_25(WHAT,data,  X, ...) WHAT(24, data, REMOVE_PARENS X)  FE_24(WHAT, data, __VA_ARGS__)
#define FE_26(WHAT,data,  X, ...) WHAT(25, data, REMOVE_PARENS X)  FE_25(WHAT, data, __VA_ARGS__)
#define FE_27(WHAT,data,  X, ...) WHAT(26, data, REMOVE_PARENS X)  FE_26(WHAT, data, __VA_ARGS__)
#define FE_28(WHAT,data,  X, ...) WHAT(27, data, REMOVE_PARENS X)  FE_27(WHAT, data, __VA_ARGS__)
#define FE_29(WHAT,data,  X, ...) WHAT(28, data, REMOVE_PARENS X)  FE_28(WHAT, data, __VA_ARGS__)

#define FE_30(WHAT,data,  X, ...) WHAT(29, data, REMOVE_PARENS X)  FE_29(WHAT, data, __VA_ARGS__)
#define FE_31(WHAT,data,  X, ...) WHAT(30, data, REMOVE_PARENS X)  FE_30(WHAT, data, __VA_ARGS__)
#define FE_32(WHAT,data,  X, ...) WHAT(31, data, REMOVE_PARENS X)  FE_31(WHAT, data, __VA_ARGS__)
#define FE_33(WHAT,data,  X, ...) WHAT(32, data, REMOVE_PARENS X)  FE_32(WHAT, data, __VA_ARGS__)
#define FE_34(WHAT,data,  X, ...) WHAT(33, data, REMOVE_PARENS X)  FE_33(WHAT, data, __VA_ARGS__)
#define FE_35(WHAT,data,  X, ...) WHAT(34, data, REMOVE_PARENS X)  FE_34(WHAT, data, __VA_ARGS__)
#define FE_36(WHAT,data,  X, ...) WHAT(35, data, REMOVE_PARENS X)  FE_35(WHAT, data, __VA_ARGS__)
#define FE_37(WHAT,data,  X, ...) WHAT(36, data, REMOVE_PARENS X)  FE_36(WHAT, data, __VA_ARGS__)
#define FE_38(WHAT,data,  X, ...) WHAT(37, data, REMOVE_PARENS X)  FE_37(WHAT, data, __VA_ARGS__)
#define FE_39(WHAT,data,  X, ...) WHAT(38, data, REMOVE_PARENS X)  FE_38(WHAT, data, __VA_ARGS__)

#define FE_40(WHAT,data,  X, ...) WHAT(39, data, REMOVE_PARENS X)  FE_39(WHAT, data, __VA_ARGS__)
#define FE_41(WHAT,data,  X, ...) WHAT(40, data, REMOVE_PARENS X)  FE_40(WHAT, data, __VA_ARGS__)
#define FE_42(WHAT,data,  X, ...) WHAT(41, data, REMOVE_PARENS X)  FE_41(WHAT, data, __VA_ARGS__)
#define FE_43(WHAT,data,  X, ...) WHAT(42, data, REMOVE_PARENS X)  FE_42(WHAT, data, __VA_ARGS__)
#define FE_44(WHAT,data,  X, ...) WHAT(43, data, REMOVE_PARENS X)  FE_43(WHAT, data, __VA_ARGS__)
#define FE_45(WHAT,data,  X, ...) WHAT(44, data, REMOVE_PARENS X)  FE_44(WHAT, data, __VA_ARGS__)
#define FE_46(WHAT,data,  X, ...) WHAT(45, data, REMOVE_PARENS X)  FE_45(WHAT, data, __VA_ARGS__)
#define FE_47(WHAT,data,  X, ...) WHAT(46, data, REMOVE_PARENS X)  FE_46(WHAT, data, __VA_ARGS__)
#define FE_48(WHAT,data,  X, ...) WHAT(47, data, REMOVE_PARENS X)  FE_47(WHAT, data, __VA_ARGS__)
#define FE_49(WHAT,data,  X, ...) WHAT(48, data, REMOVE_PARENS X)  FE_48(WHAT, data, __VA_ARGS__)

#define FE_50(WHAT,data,  X, ...) WHAT(49, data, REMOVE_PARENS X)  FE_49(WHAT, data, __VA_ARGS__)
#define FE_51(WHAT,data,  X, ...) WHAT(50, data, REMOVE_PARENS X)  FE_50(WHAT, data, __VA_ARGS__)
#define FE_52(WHAT,data,  X, ...) WHAT(51, data, REMOVE_PARENS X)  FE_51(WHAT, data, __VA_ARGS__)
#define FE_53(WHAT,data,  X, ...) WHAT(52, data, REMOVE_PARENS X)  FE_52(WHAT, data, __VA_ARGS__)
#define FE_54(WHAT,data,  X, ...) WHAT(53, data, REMOVE_PARENS X)  FE_53(WHAT, data, __VA_ARGS__)
#define FE_55(WHAT,data,  X, ...) WHAT(54, data, REMOVE_PARENS X)  FE_54(WHAT, data, __VA_ARGS__)
#define FE_56(WHAT,data,  X, ...) WHAT(55, data, REMOVE_PARENS X)  FE_55(WHAT, data, __VA_ARGS__)
#define FE_57(WHAT,data,  X, ...) WHAT(56, data, REMOVE_PARENS X)  FE_56(WHAT, data, __VA_ARGS__)
#define FE_58(WHAT,data,  X, ...) WHAT(57, data, REMOVE_PARENS X)  FE_57(WHAT, data, __VA_ARGS__)
#define FE_59(WHAT,data,  X, ...) WHAT(58, data, REMOVE_PARENS X)  FE_58(WHAT, data, __VA_ARGS__)

#define FE_60(WHAT,data,  X, ...) WHAT(59, data, REMOVE_PARENS X)  FE_59(WHAT, data, __VA_ARGS__)
#define FE_61(WHAT,data,  X, ...) WHAT(60, data, REMOVE_PARENS X)  FE_60(WHAT, data, __VA_ARGS__)
#define FE_62(WHAT,data,  X, ...) WHAT(61, data, REMOVE_PARENS X)  FE_61(WHAT, data, __VA_ARGS__)
#define FE_63(WHAT,data,  X, ...) WHAT(62, data, REMOVE_PARENS X)  FE_62(WHAT, data, __VA_ARGS__)
#define FE_64(WHAT,data,  X, ...) WHAT(63, data, REMOVE_PARENS X)  FE_63(WHAT, data, __VA_ARGS__)
#define FE_65(WHAT,data,  X, ...) WHAT(64, data, REMOVE_PARENS X)  FE_64(WHAT, data, __VA_ARGS__)
#define FE_66(WHAT,data,  X, ...) WHAT(65, data, REMOVE_PARENS X)  FE_65(WHAT, data, __VA_ARGS__)
#define FE_67(WHAT,data,  X, ...) WHAT(66, data, REMOVE_PARENS X)  FE_66(WHAT, data, __VA_ARGS__)
#define FE_68(WHAT,data,  X, ...) WHAT(67, data, REMOVE_PARENS X)  FE_67(WHAT, data, __VA_ARGS__)
#define FE_69(WHAT,data,  X, ...) WHAT(68, data, REMOVE_PARENS X)  FE_68(WHAT, data, __VA_ARGS__)

#define FE_70(WHAT,data,  X, ...) WHAT(69, data, REMOVE_PARENS X)  FE_69(WHAT, data, __VA_ARGS__)
#endif
#if !defined(__CUDA_ARCH__)
#define SPECIAL_EXPAND(x) x
#define SPECIAL_1(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT1(__VA_ARGS__))
#define SPECIAL_2(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_3(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_4(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_5(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_6(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_7(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_8(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_9(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_10(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_11(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_12(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_13(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_14(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_15(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_16(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_17(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_18(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_19(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#define SPECIAL_20(WHAT1, WHAT2, ...)  SPECIAL_EXPAND(WHAT2(__VA_ARGS__))
#else
#define SPECIAL_1(WHAT1, WHAT2, ...)  WHAT1(__VA_ARGS__)
#define SPECIAL_2(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_3(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_4(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_5(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_6(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_7(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_8(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_9(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_10(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_11(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_12(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_13(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_14(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_15(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_16(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_17(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_18(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_19(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)
#define SPECIAL_20(WHAT1, WHAT2, ...)  WHAT2(__VA_ARGS__)

#endif