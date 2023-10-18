/*
 * Localized Keys for Finnish Extended
 *
 * This file was generated from data with the following license:
 *
 * Copyright (c) 2023 The ZMK Contributors
 * 
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define FI_OSX_ESCAPE_CHARACTER (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

#define FI_OSX_FILE_SEPARATOR (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))

#define FI_OSX_GROUP_SEPARATOR (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

#define FI_OSX_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ! */
#define FI_OSX_EXCLAMATION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))
#define FI_OSX_EXCL (FI_OSX_EXCLAMATION)

/* " */
#define FI_OSX_DOUBLE_QUOTES (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define FI_OSX_DQT (FI_OSX_DOUBLE_QUOTES)

/* # */
#define FI_OSX_HASH (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define FI_OSX_POUND (FI_OSX_HASH)

/* $ */
#define FI_OSX_DOLLAR (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define FI_OSX_DLLR (FI_OSX_DOLLAR)

/* % */
#define FI_OSX_PERCENT (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define FI_OSX_PRCNT (FI_OSX_PERCENT)

/* & */
#define FI_OSX_AMPERSAND (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))
#define FI_OSX_AMPS (FI_OSX_AMPERSAND)

/* ' */
#define FI_OSX_SINGLE_QUOTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))
#define FI_OSX_SQT (FI_OSX_SINGLE_QUOTE)
#define FI_OSX_APOSTROPHE (FI_OSX_SINGLE_QUOTE)
#define FI_OSX_APOS (FI_OSX_SINGLE_QUOTE)

/* ( */
#define FI_OSX_LEFT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define FI_OSX_LPAR (FI_OSX_LEFT_PARENTHESIS)

/* ) */
#define FI_OSX_RIGHT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define FI_OSX_RPAR (FI_OSX_RIGHT_PARENTHESIS)

/* * */
#define FI_OSX_ASTERISK (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))
#define FI_OSX_ASTRK (FI_OSX_ASTERISK)
#define FI_OSX_STAR (FI_OSX_ASTERISK)

/* + */
#define FI_OSX_PLUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))

/* , */
#define FI_OSX_COMMA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))

/* - */
#define FI_OSX_MINUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))

/* . */
#define FI_OSX_PERIOD (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))
#define FI_OSX_DOT (FI_OSX_PERIOD)

/* / */
#define FI_OSX_SLASH (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))
#define FI_OSX_FSLH (FI_OSX_SLASH)

/* 0 */
#define FI_OSX_N0 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* 1 */
#define FI_OSX_N1 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))

/* 2 */
#define FI_OSX_N2 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* 3 */
#define FI_OSX_N3 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))

/* 4 */
#define FI_OSX_N4 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))

/* 5 */
#define FI_OSX_N5 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))

/* 6 */
#define FI_OSX_N6 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* 7 */
#define FI_OSX_N7 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* 8 */
#define FI_OSX_N8 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))

/* 9 */
#define FI_OSX_N9 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* : */
#define FI_OSX_COLON (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* ; */
#define FI_OSX_SEMICOLON (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))
#define FI_OSX_SEMI (FI_OSX_SEMICOLON)

/* < */
#define FI_OSX_LESS_THAN (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))
#define FI_OSX_LT (FI_OSX_LESS_THAN)

/* = */
#define FI_OSX_EQUAL (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* > */
#define FI_OSX_GREATER_THAN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))
#define FI_OSX_GT (FI_OSX_GREATER_THAN)

/* ? */
#define FI_OSX_QUESTION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define FI_OSX_QMARK (FI_OSX_QUESTION)

/* @ */
#define FI_OSX_AT_SIGN (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define FI_OSX_AT (FI_OSX_AT_SIGN)

/* [ */
#define FI_OSX_LEFT_BRACKET (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define FI_OSX_LBKT (FI_OSX_LEFT_BRACKET)

/* \ */
#define FI_OSX_BACKSLASH (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))))
#define FI_OSX_BSLH (FI_OSX_BACKSLASH)

/* ] */
#define FI_OSX_RIGHT_BRACKET (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define FI_OSX_RBKT (FI_OSX_RIGHT_BRACKET)

/* _ */
#define FI_OSX_UNDERSCORE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))
#define FI_OSX_UNDER (FI_OSX_UNDERSCORE)

/* ` */
#define FI_OSX_GRAVE (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))

/* a */
#define FI_OSX_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* b */
#define FI_OSX_B (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* c */
#define FI_OSX_C (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* d */
#define FI_OSX_D (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* e */
#define FI_OSX_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* f */
#define FI_OSX_F (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* g */
#define FI_OSX_G (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* h */
#define FI_OSX_H (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* i */
#define FI_OSX_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* j */
#define FI_OSX_J (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* k */
#define FI_OSX_K (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* l */
#define FI_OSX_L (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* m */
#define FI_OSX_M (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* n */
#define FI_OSX_N (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* o */
#define FI_OSX_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* p */
#define FI_OSX_P (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* q */
#define FI_OSX_Q (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* r */
#define FI_OSX_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* s */
#define FI_OSX_S (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* t */
#define FI_OSX_T (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* u */
#define FI_OSX_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* v */
#define FI_OSX_V (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* w */
#define FI_OSX_W (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* x */
#define FI_OSX_X (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* y */
#define FI_OSX_Y (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* z */
#define FI_OSX_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* { */
#define FI_OSX_LEFT_BRACE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))))
#define FI_OSX_LBRC (FI_OSX_LEFT_BRACE)

/* | */
#define FI_OSX_PIPE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))

/* } */
#define FI_OSX_RIGHT_BRACE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))))
#define FI_OSX_RBRC (FI_OSX_RIGHT_BRACE)

#define FI_OSX_NO_BREAK_SPACE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR)))
#define FI_OSX_NBSP (FI_OSX_NO_BREAK_SPACE)

/* ¡ */
#define FI_OSX_INVERTED_EXCLAMATION (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))))
#define FI_OSX_IEXCL (FI_OSX_INVERTED_EXCLAMATION)

/* ¢ */
#define FI_OSX_CENT (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))))

/* £ */
#define FI_OSX_POUND_SIGN (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))

/* ¥ */
#define FI_OSX_YEN (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))))

/* § */
#define FI_OSX_SECTION (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define FI_OSX_SECT (FI_OSX_SECTION)

/* ¨ */
#define FI_OSX_UMLAUT (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))

/* © */
#define FI_OSX_COPYRIGHT (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))

/* ª */
#define FI_OSX_FEMININE_ORDINAL_INDICATOR (LA(LG(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))))
#define FI_OSX_ORDF (FI_OSX_FEMININE_ORDINAL_INDICATOR)

/* « */
#define FI_OSX_LEFT_ANGLE_QUOTE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))))
#define FI_OSX_LAQUO (FI_OSX_LEFT_ANGLE_QUOTE)

/* ® */
#define FI_OSX_REGISTERED (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))))

/* ¯ */
#define FI_OSX_MACRON (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A)))
#define FI_OSX_MACR (FI_OSX_MACRON)

/* ° */
#define FI_OSX_DEGREE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define FI_OSX_DEG (FI_OSX_DEGREE)

/* ± */
#define FI_OSX_PLUS_MINUS (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))

/* ´ */
#define FI_OSX_ACUTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))

/* µ */
#define FI_OSX_MU (LA(LG(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))))
#define FI_OSX_MICRO (FI_OSX_MU)

/* ¶ */
#define FI_OSX_PILCROW (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define FI_OSX_PARA (FI_OSX_PILCROW)

/* · */
#define FI_OSX_MIDDLE_DOT (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))))
#define FI_OSX_MIDDOT (FI_OSX_MIDDLE_DOT)

/* ¸ */
#define FI_OSX_CEDILLA (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C)))

/* » */
#define FI_OSX_RIGHT_ANGLE_QUOTE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))))
#define FI_OSX_RAQUO (FI_OSX_RIGHT_ANGLE_QUOTE)

/* ¿ */
#define FI_OSX_INVERTED_QUESTION (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))))
#define FI_OSX_IQMARK (FI_OSX_INVERTED_QUESTION)

/* ß */
#define FI_OSX_SHARP_S (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S)))
#define FI_OSX_ESZETT (FI_OSX_SHARP_S)
#define FI_OSX_SZ (FI_OSX_SHARP_S)

/* ä */
#define FI_OSX_A_UMLAUT (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* å */
#define FI_OSX_A_RING (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))

/* æ */
#define FI_OSX_AE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))

/* é */
#define FI_OSX_E_ACUTE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E)))

/* ð */
#define FI_OSX_ETH (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D)))

/* ö */
#define FI_OSX_O_UMLAUT (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* ÷ */
#define FI_OSX_DIVIDE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z)))
#define FI_OSX_DIV (FI_OSX_DIVIDE)

/* ø */
#define FI_OSX_O_SLASH (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))

/* ü */
#define FI_OSX_U_UMLAUT (LA(LG(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))))

/* þ */
#define FI_OSX_THORN (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T)))

/* đ */
#define FI_OSX_D_STROKE (LA(LG(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))))

/* ħ */
#define FI_OSX_H_STROKE (LA(LG(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))))

/* ı */
#define FI_OSX_I_DOTLESS (LA(LG(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))))

/* ł */
#define FI_OSX_L_STROKE (LA(LG(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))))

/* ŧ */
#define FI_OSX_T_STROKE (LA(LG(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))))

/* ʼ */
#define FI_OSX_MODIFIER_APOSTROPHE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I)))

/* ˆ */
#define FI_OSX_MODIFIER_CIRCUMFLEX (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

/* ˇ */
#define FI_OSX_CARON (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R)))

/* ˍ */
#define FI_OSX_MODIFIER_LOW_MACRON (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X)))

/* ˘ */
#define FI_OSX_BREVE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y)))

/* ˙ */
#define FI_OSX_DOT_ABOVE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P)))

/* ˛ */
#define FI_OSX_OGONEK (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H)))

/* ˝ */
#define FI_OSX_DOUBLE_ACUTE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))

/* ̀ */
#define FI_OSX_COMBINING_GRAVE_ACCENT (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))))

/* ́ */
#define FI_OSX_COMBINING_ACUTE_ACCENT (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* ̂ */
#define FI_OSX_COMBINING_CIRCUMFLEX_ACCENT (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))))

/* ̃ */
#define FI_OSX_COMBINING_TILDE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))))

/* ̄ */
#define FI_OSX_COMBINING_MACRON (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))))

/* ̆ */
#define FI_OSX_COMBINING_BREVE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))))

/* ̇ */
#define FI_OSX_COMBINING_DOT_ABOVE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))))

/* ̈ */
#define FI_OSX_COMBINING_DIAERESIS (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

/* ̉ */
#define FI_OSX_COMBINING_HOOK_ABOVE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))))

/* ̊ */
#define FI_OSX_COMBINING_RING_ABOVE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))))

/* ̋ */
#define FI_OSX_COMBINING_DOUBLE_ACUTE_ACCENT (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))))

/* ̌ */
#define FI_OSX_COMBINING_CARON (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))))

/* ̛ */
#define FI_OSX_COMBINING_HORN (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))))

/* ̣ */
#define FI_OSX_COMBINING_DOT_BELOW (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))))

/* ̭ */
#define FI_OSX_COMBINING_CIRCUMFLEX_ACCENT_BELOW (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))))

/* ̰ */
#define FI_OSX_COMBINING_TILDE_BELOW (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))))

/* ̱ */
#define FI_OSX_COMBINING_MACRON_BELOW (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))))

/* ̵ */
#define FI_OSX_COMBINING_SHORT_STROKE_OVERLAY (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))))

/* – */
#define FI_OSX_EN_DASH (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))

/* — */
#define FI_OSX_EM_DASH (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))))

/* ‘ */
#define FI_OSX_LEFT_SINGLE_QUOTE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N)))

/* ’ */
#define FI_OSX_RIGHT_SINGLE_QUOTE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M)))

/* ‚ */
#define FI_OSX_SINGLE_LOW_9_QUOTE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))

/* “ */
#define FI_OSX_LEFT_DOUBLE_QUOTE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))))

/* ” */
#define FI_OSX_RIGHT_DOUBLE_QUOTE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))))

/* „ */
#define FI_OSX_DOUBLE_LOW_9_QUOTE (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))))

/* • */
#define FI_OSX_BULLET (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q)))

/* … */
#define FI_OSX_HORIZONTAL_ELLIPSIS (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* ‹ */
#define FI_OSX_SINGLE_LEFT_POINTING_ANGLE_QUOTE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V)))

/* › */
#define FI_OSX_SINGLE_RIGHT_POINTING_ANGLE_QUOTE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B)))

/* € */
#define FI_OSX_EURO (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))

/* № */
#define FI_OSX_NUMERO (LA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))))