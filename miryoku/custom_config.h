// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#define MIRYOKU_LAYER_SHOOTER \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             &kp LALT,          \
&kp LCTRL,         &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           &kp TILDE,         \
&kp LSHFT,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         U_NP,              \
U_NP,              U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP,              U_NP              

#define MIRYOKU_LAYER_MOBA \
&kp TAB,           &kp NUMBER_1,      &kp NUMBER_2,      &kp NUMBER_3,      &kp NUMBER_4,      &kp P,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             &kp LALT,          \
&kp LSHFT,         &kp Q,             &kp W,             &kp E,             &kp R,             &kp S,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           &kp TILDE,         \
&kp LCTRL,         &kp T,             &kp V,             &kp D,             &kp F,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         U_NP,              \
U_NP,              U_NP,              U_NP,              &kp LALT,           &kp SPACE,         &kp ESC,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP,              U_NP              

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &u_to_U_MOBA \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &u_to_U_SHOOTER \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(SHOOTER, "Shooter") \
MIRYOKU_X(MOBA,    "MOBA")

#define MIRYOKU_LAYERMAPPING_SHOOTER( \
     K00, K01, K02, K03, K04, K05,      K06, K07, K08, K09, K10, K11, \
     K12, K13, K14, K15, K16, K17,      K18, K19, K20, K21, K22, K23, \
     K24, K25, K26, K27, K28, K29,      K30, K31, K32, K33, K34, N35, \
     N36, N37, N38, K39, K40, K41,      K42, K43, K44, N45, N46, N47 \
) \
K00  K01  K02  K03  K04  K05       K06  K07  K08  K09  K10  K11 \
K12  K13  K14  K15  K16  K17       K18  K19  K20  K21  K22  K23 \
K24  K25  K26  K27  K28  K29       K30  K31  K32  K33  K34  &u_to_U_BASE \
               K39  K40  K41       K42  K43  K44

#define MIRYOKU_LAYERMAPPING_MOBA( \
     K00, K01, K02, K03, K04, K05,      K06, K07, K08, K09, K10, K11, \
     K12, K13, K14, K15, K16, K17,      K18, K19, K20, K21, K22, K23, \
     K24, K25, K26, K27, K28, K29,      K30, K31, K32, K33, K34, N35, \
     N36, N37, N38, K39, K40, K41,      K42, K43, K44, N45, N46, N47 \
) \
K00  K01  K02  K03  K04  K05       K06  K07  K08  K09  K10  K11 \
K12  K13  K14  K15  K16  K17       K18  K19  K20  K21  K22  K23 \
K24  K25  K26  K27  K28  K29       K30  K31  K32  K33  K34  &u_to_U_BASE \
               K39  K40  K41       K42  K43  K44

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_SHOOTER 10
#define U_MOBA    11
