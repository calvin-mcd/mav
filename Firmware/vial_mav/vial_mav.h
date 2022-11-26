/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define LAYOUT( \
	K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K010, K011, \
	K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K110, K111,  \
	K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K210, K211, \
	K30, K31, K32, K33, K34, K35, K36, K37, K38, K39 \
) { \
	{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K010, K011 }, \
	{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K110, K111 }, \
	{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K210, K211 }, \
    { K30, K31, K32, K33, KC_NO, K34, K35, KC_NO, K36, K37,K38, K39  } \
}
