/* Copyright 2017 Baris Tosun
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

#define XXX KC_NO

/* LAYOUT_2_a
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0A │0B │0C │0D │0E │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │10   │11 │12 │13 │14 │15 │16 │18 │19 │1A │1B │1C │1D │1E   │
 * ├────┬┴──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤
 * │20  │21 │22 │23 │24 │25 │26 │ │28 │29 │2A │2B │2C │2D │2E  │
 * ├───┬┴──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴─┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
 * │30 │31 │32 │33 │34 │35 │36 │37 │38 │39 │3A │3B │3C │3D │3E │
 * ├───┴─┬─┴──┬┴───┴┬──┴───┴───┼───┼───┴───┼───┼───┼───┼───┼───┤
 * │41   │42  │43   │    44    │47 │  49   │4A │4B │4C │4D │4E │
 * └─────┴────┴─────┴──────────┴───┴───────┴───┴───┴───┴───┴───┘
 */
/*#define LAYOUT_2_a( \
    Q41,   Q42,  Q43,         Q44,     Q47,   Q49,    Q4A, Q4B, Q4C, Q4D, Q4E, \
    Q30, Q31, Q32, Q33, Q34, Q35, Q36, Q37, Q38, Q39, Q3A, Q3B, Q3C, Q3D, Q3E, \
    Q20,  Q21, Q22, Q23, Q24, Q25, Q26,    Q28, Q29, Q2A, Q2B, Q2C, Q2D,  Q2E, \
    Q10,   Q11, Q12, Q13, Q14, Q15, Q16,  Q18, Q19, Q1A, Q1B, Q1C, Q1D,   Q1E, \
    Q00, Q01, Q02, Q03, Q04, Q05, Q06, Q07, Q08, Q09, Q0A, Q0B, Q0C, Q0D, Q0E  \
) { \
    { Q00, Q01, Q02, Q03, Q04, Q05, Q06, Q07, Q08, Q09, Q0A, Q0B, Q0C, Q0D, Q0E }, \
    { Q10, Q11, Q12, Q13, Q14, Q15, Q16, XXX, Q18, Q19, Q1A, Q1B, Q1C, Q1D, Q1E }, \
    { Q20, Q21, Q22, Q23, Q24, Q25, Q26, XXX, Q28, Q29, Q2A, Q2B, Q2C, Q2D, Q2E }, \
    { Q30, Q31, Q32, Q33, Q34, Q35, Q36, Q37, Q38, Q39, Q3A, Q3B, Q3C, Q3D, Q3E }, \
    { XXX, Q41, Q42, Q43, Q44, XXX, XXX, Q47, XXX, Q49, Q4A, Q4B, Q4C, Q4D, Q4E }  \
}*/
#define LAYOUT_2_a( \
    Q40,   Q41,  Q43,         Q44,     Q45,   Q46,    Q49, Q4A, Q4B, Q4C, Q4D, \
    Q30, Q31, Q32, Q33, Q34, Q35, Q36, Q37, Q38, Q39, Q3A, Q3B, Q3C, Q3D, Q3E, \
    Q20,  Q21, Q22, Q23, Q24, Q25, Q26,    Q27, Q28, Q29, Q2A, Q2B, Q2C,  Q2D, \
    Q10,   Q11, Q12, Q13, Q14, Q15, Q16,  Q17, Q18, Q19, Q1A, Q1B, Q1C,   Q1D, \
    Q00, Q01, Q02, Q03, Q04, Q05, Q06, Q07, Q08, Q09, Q0A, Q0B, Q0C, Q0D, Q0E  \
) { \
    { Q00, Q01, Q02, Q03, Q04, Q05, Q06, Q07, Q08, Q09, Q0A, Q0B, Q0C, Q0D, Q0E }, \
    { Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q1A, Q1B, Q1C, Q1D, XXX }, \
    { Q20, Q21, Q22, Q23, Q24, Q25, Q26, Q27, Q28, Q29, Q2A, Q2B, Q2C, Q2D, XXX }, \
    { Q30, Q31, Q32, Q33, Q34, Q35, Q36, Q37, Q38, Q39, Q3A, Q3B, Q3C, Q3D, Q3E }, \
    { Q40, Q41, XXX, Q43, Q44, Q45, Q46, XXX, XXX, Q49, Q4A, Q4B, Q4C, Q4D, XXX }  \
}

