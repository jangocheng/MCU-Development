//*****************************************************************************
//
// fontcmtt20.c - Font definition for the 20pt Cmtt font.
//
// Copyright (c) 2011 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 8034 of the Stellaris Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cmtt
//     Size: 20 point
//     Bold: no
//     Italic: no
//     Memory usage: 2404 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 20 point Cmtt font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const unsigned char g_pucCmtt20Data[2201] =
{
      5,  11,   0,  27,  64,  19,  11, 240, 193, 161, 161, 161,
    161, 161, 161, 161, 161, 240, 240,  33, 161,   0,   7,  64,
     18,  11, 240, 177,  33, 113,  33, 113,  33, 113,  33, 113,
     33, 113,  33,   0,  16, 112,  30,  11, 240, 193,  33,  98,
     18,  98,  18,  97,  34,  72,  81,  33, 113,  33, 113,  33,
    113,  33,  88,  66,  33,  98,  18,  97,  34,   0,   7,  32,
     36,  11,  81, 161, 133,  82,  17,  18,  65,  33,  33,  65,
     33,  33,  66,  17, 131, 148, 131, 129,  33,  65,  33,  33,
     65,  33,  33,  66,  17,  18,  85, 129, 161, 240, 240, 128,
     39,  11, 225,  65,  65,  17,  49,  65,  17,  33,  81,  17,
     33,  97,  49, 145, 161, 161, 145, 161, 161,  33,  97,  33,
     17,  81,  33,  17,  81,  33,  17,  65,  49,  17,  65,  65,
    240, 240,  80,  35,  11, 240, 177, 145,  17, 129,  17, 129,
     17, 129,  21,  66,  33,  98,  33,  83,  18,  81,  17,  17,
     97,  17,  17,  97,  33,  49,  49,  34,  33,  66,  19,   0,
      7,  16,  12,  11, 240, 194, 146, 161, 161, 145, 146,   0,
     17,  16,  22,  11, 113, 146, 145, 145, 161, 145, 161, 161,
    161, 161, 161, 161, 177, 161, 177, 162, 161, 240, 240,  96,
     22,  11,  65, 162, 161, 177, 161, 177, 161, 161, 161, 161,
    161, 161, 145, 161, 145, 146, 145, 240, 240, 144,  20,  11,
      0,   6,  17, 161, 114,  17,  18,  85, 129, 133,  82,  17,
     18, 113, 161,   0,  10,  32,  17,  11, 240, 240, 129, 161,
    161, 161, 161, 119, 113, 161, 161, 161,   0,  10,  32,  12,
     11,   0,  17,   2, 147, 131, 146, 145, 145, 240, 208,   8,
     11,   0,  11,  39,   0,  15,  48,  10,  11,   0,  17,  18,
    146, 146,   0,   7,  48,  22,  11, 129, 146, 145, 161, 146,
    145, 161, 146, 145, 146, 145, 161, 146, 145, 161, 146, 145,
    240, 240, 176,  30,  11, 240, 179, 113,  49,  97,  49,  81,
     81,  65,  81,  65,  81,  65,  81,  65,  81,  65,  81,  65,
     81,  81,  49,  97,  49, 115,   0,   7,  48,  19,  11, 240,
    193, 161, 146, 131, 161, 161, 161, 161, 161, 161, 161, 161,
    133,   0,   7,  32,  23,  11, 240, 164, 113,  49,  81,  81,
     65,  81, 161, 161, 145, 146, 130, 145, 145, 145,  65,  71,
      0,   7,  16,  24,  11, 240, 180,  97,  66,  65,  81, 161,
    161, 145, 101, 162, 161,  49,  97,  49,  97,  50,  65, 100,
      0,   7,  32,  24,  11, 240, 210, 131, 129,  17, 114,  17,
    113,  33,  97,  49,  97,  49,  81,  65,  88, 129, 161, 161,
    133,   0,   7,  23,  11, 240, 166,  81, 161, 161, 161, 164,
    114,  33,  97,  65, 161, 161,  65,  81,  65,  66,  84,   0,
      7,  48,  28,  11, 240, 210, 129,  33,  97,  49,  81, 161,
    161,  19,  98,  33,  97,  65,  81,  65,  81,  65,  81,  65,
     97,  33, 131,   0,   7,  32,  20,  11, 240, 151,  65,  66,
    130, 145, 146, 145, 161, 161, 145, 161, 161, 161, 161,   0,
      7,  80,  29,  11, 240, 179, 113,  49,  81,  81,  65,  81,
     65,  81,  81,  49, 115, 113,  49,  81,  81,  65,  81,  65,
     81,  81,  49, 115,   0,   7,  48,  28,  11, 240, 179, 113,
     49,  81,  65,  81,  81,  65,  81,  65,  81,  81,  50,  99,
     17, 161, 145,  81,  65,  81,  49, 115,   0,   7,  64,  15,
     11,   0,   8, 114, 146, 146, 240, 240, 194, 146, 146,   0,
      7,  48,  17,  11,   0,   8, 114, 146, 146, 240, 240, 194,
    146, 146, 161, 146, 145, 240, 192,  18,  11, 240, 240, 177,
    131, 114, 130, 130, 130, 162, 162, 162, 163, 161,   0,   8,
     64,  10,  11,   0,   9, 120, 240, 168,   0,  12,  64,  18,
     11, 240, 240,  81, 163, 162, 162, 162, 162, 130, 130, 130,
    115, 129,   0,   9,  32,  21,  11, 240, 165,  81,  81,  65,
     81, 146, 130, 130, 145, 161, 161, 240, 240,  33, 161,   0,
      7,  64,  36,  11, 240, 194, 129,  33,  97,  50,  81,  20,
     65,  33,  18,  65,  17,  49,  65,  17,  49,  65,  17,  49,
     65,  17,  49,  65,  33,  17,  97,  19,  98,  34, 100,   0,
      7,  32,  25,  11, 240, 194, 146, 146, 146, 132, 113,  33,
    113,  33, 113,  33, 116,  98,  34,  81,  65,  81,  65,  67,
     35,   0,   7,  29,  11, 240, 150,  97,  50,  81,  65,  81,
     65,  81,  65,  81,  49, 100, 113,  49,  97,  65,  81,  65,
     81,  65,  81,  50,  70,   0,   7,  32,  25,  11, 240, 181,
     82,  34,  81,  65,  65,  81,  65, 161, 161, 161, 161, 161,
     81,  81,  65,  82,  33, 115,   0,   7,  48,  30,  11, 240,
    149, 113,  49,  97,  49,  97,  65,  81,  65,  81,  65,  81,
     65,  81,  65,  81,  65,  81,  65,  81,  49,  97,  49,  85,
      0,   7,  48,  24,  11, 240, 152,  65,  81,  65,  81,  65,
    161, 161,  33, 116, 113,  33, 113, 161, 161,  81,  65,  81,
     56,   0,   7,  23,  11, 240, 151,  81,  65,  81,  65,  81,
    161, 161,  33, 116, 113,  33, 113, 161, 161, 161, 147,   0,
      7,  80,  27,  11, 240, 181,  82,  34,  81,  65,  81,  65,
     65,  81,  65, 161, 161, 161,  52,  49,  81,  81,  65,  82,
     34, 101,   0,   7,  16,  30,  11, 240, 147,  35,  65,  65,
     81,  65,  81,  65,  81,  65,  81,  65,  86,  81,  65,  81,
     65,  81,  65,  81,  65,  81,  65,  67,  35,   0,   7,  19,
     11, 240, 151, 113, 161, 161, 161, 161, 161, 161, 161, 161,
    161, 161, 119,   0,   7,  16,  21,  11, 240, 181, 145, 161,
    161, 161, 161, 161, 161, 161, 161,  81,  65,  81,  50, 100,
      0,   7,  48,  30,  11, 240, 147,  35,  65,  50,  81,  49,
     97,  33, 113,  33, 113,  17, 132, 114,  17, 113,  49,  97,
     49,  97,  50,  81,  65,  67,  35,   0,   7,  21,  11, 240,
    148, 129, 161, 161, 161, 161, 161, 161, 161, 161, 161,  65,
     81,  65,  71,   0,   7,  16,  40,  11, 240, 131,  51,  50,
     50,  66,  50,  66,  33,  17,  65,  17,  17,  17,  65,  17,
     17,  17,  65,  17,  17,  17,  65,  18,  33,  65,  33,  33,
     65,  81,  65,  81,  65,  81,  51,  51,   0,   7,  39,  11,
    240, 147,  35,  66,  49,  82,  49,  81,  17,  33,  81,  17,
     33,  81,  17,  33,  81,  17,  33,  81,  33,  17,  81,  33,
     17,  81,  33,  17,  81,  50,  81,  50,  67,  34,   0,   7,
     16,  30,  11, 240, 165,  82,  50,  65,  81,  65,  81,  65,
     81,  65,  81,  65,  81,  65,  81,  65,  81,  65,  81,  65,
     81,  66,  50,  85,   0,   7,  32,  25,  11, 240, 150,  97,
     49,  97,  65,  81,  65,  81,  65,  81,  65,  81,  49, 101,
     97, 161, 161, 161, 147,   0,   7,  80,  34,  11, 240, 165,
     82,  50,  65,  81,  65,  81,  65,  81,  65,  81,  65,  81,
     65,  81,  65,  81,  65,  81,  65,  34,  17,  66,  33,  17,
     85, 161, 162, 161, 240, 144,  31,  11, 240, 149, 113,  34,
     97,  49,  97,  49,  97,  49,  97,  34, 100, 113,  49,  97,
     49,  97,  49,  97,  49,  97,  49,  17,  51,  34,   0,   7,
     16,  26,  11, 240, 164,  17,  66,  50,  65,  66,  65,  66,
     65, 178, 164, 162, 161,  65,  81,  65,  81,  66,  49,  86,
      0,   7,  32,  23,  11, 240, 152,  49,  33,  49,  49,  33,
     49,  97, 161, 161, 161, 161, 161, 161, 161, 161, 148,   0,
      7,  32,  31,  11, 240, 131,  51,  49,  81,  65,  81,  65,
     81,  65,  81,  65,  81,  65,  81,  65,  81,  65,  81,  65,
     81,  65,  81,  81,  49, 115,   0,   7,  48,  30,  11, 240,
    131,  51,  49,  81,  66,  50,  81,  49,  97,  49,  97,  49,
     98,  18,  98,  18, 113,  17, 129,  17, 129,  17, 131, 145,
      0,   7,  64,  34,  11, 240, 131,  51,  49,  81,  65,  81,
     65,  81,  65,  81,  65,  81,  65,  33,  33,  65,  18,  33,
     82,  18,  98,  18,  98,  18,  98,  18,  97,  49,   0,   7,
     32,  25,  11, 240, 147,  19,  82,  33, 113,  18, 115, 146,
    146, 146, 146, 131, 129,  33,  98,  33,  97,  50,  67,  35,
      0,   7,  25,  11, 240, 132,  20,  65,  49,  97,  49,  98,
     18, 113,  17, 129,  17, 131, 145, 161, 161, 161, 161, 147,
      0,   7,  48,  24,  11, 240, 151,  65,  66,  65,  65, 146,
    145, 146, 145, 146, 145, 145,  65,  81,  65,  65,  81,  71,
      0,   7,  16,  21,  11, 244, 113, 161, 161, 161, 161, 161,
    161, 161, 161, 161, 161, 161, 161, 161, 164, 240, 240,  96,
     22,  11,  33, 162, 161, 161, 162, 161, 161, 162, 161, 162,
    161, 161, 162, 161, 161, 162, 161, 240, 240,  80,  21,  11,
    244, 161, 161, 161, 161, 161, 161, 161, 161, 161, 161, 161,
    161, 161, 161, 116, 240, 240,  96,  10,  11, 240, 194, 114,
     18,  97,  49,   0,  21,   8,  11,   0,  22,  39, 240, 240,
     80,  12,  11, 240,  18, 145, 145, 161, 162, 146,   0,  18,
     64,  20,  11,   0,   8,  68, 113,  49, 177, 101,  82,  49,
     66,  65,  66,  65,  66,  50,  88,   0,   7,  26,  11, 240,
    146, 161, 161, 161, 164, 114,  33,  97,  65,  81,  65,  81,
     65,  81,  65,  81,  65,  82,  33, 100,   0,   7,  48,  19,
     11,   0,   8, 116,  97,  49,  81, 161, 161, 161, 162,  49,
     97,  49, 115,   0,   7,  32,  26,  11, 240, 210, 161, 161,
    161, 116,  97,  34,  81,  65,  81,  65,  81,  65,  81,  65,
     81,  65,  97,  34, 117,   0,   7,  16,  21,  11,   0,   8,
     99, 113,  49,  82,  65,  65,  81,  71,  65, 162,  65,  82,
     34, 100,   0,   7,  32,  20,  11, 240, 211, 113,  33, 113,
    161, 134, 113, 161, 161, 161, 161, 161, 161, 134,   0,   7,
     16,  29,  11,   0,   8,  87,  65,  34,  17,  49,  65,  81,
     65,  81,  65,  82,  33, 101,  97, 166,  66,  82,  33, 113,
     33, 113,  49,  81,  85,  48,  27,  11, 240, 146, 161, 161,
    161, 164, 114,  33,  97,  49,  97,  49,  97,  49,  97,  49,
     97,  49,  97,  49,  83,  19,   0,   7,  16,  18,  11, 240,
    193, 161, 240, 244, 161, 161, 161, 161, 161, 161, 161, 118,
      0,   7,  16,  22,  11, 240, 209, 161, 240, 244, 161, 161,
    161, 161, 161, 161, 161, 161, 161, 161, 161,  97,  33, 116,
     64,  26,  11, 240, 131, 161, 161, 161, 161,  21,  65,  34,
     97,  33, 113,  17, 132, 114,  17, 113,  49,  97,  49,  69,
     19,   0,   7,  19,  11, 240, 148, 161, 161, 161, 161, 161,
    161, 161, 161, 161, 161, 161, 119,   0,   7,  16,  29,  11,
      0,   8,  56,  66,  18,  17,  65,  33,  33,  65,  33,  33,
     65,  33,  33,  65,  33,  33,  65,  33,  33,  65,  33,  33,
     57,   0,   7,  24,  11,   0,   8,  69, 114,  33,  97,  49,
     97,  49,  97,  49,  97,  49,  97,  49,  97,  49,  83,  19,
      0,   7,  16,  23,  11,   0,   8,  99, 113,  49,  81,  81,
     65,  81,  65,  81,  65,  81,  65,  81,  81,  49, 115,   0,
      7,  48,  26,  11,   0,   8,  69, 114,  33,  97,  65,  81,
     65,  81,  65,  81,  65,  81,  65,  82,  33, 100, 113, 161,
    161, 161, 147,  96,  27,  11,   0,   8,  83,  17,  81,  50,
     65,  81,  65,  81,  65,  81,  65,  81,  65,  81,  81,  50,
     99,  17, 161, 161, 161, 161, 133,  18,  11,   0,   8,  67,
     19,  98,  33,  98, 145, 161, 161, 161, 161, 134,   0,   7,
     32,  21,  11,   0,   8,  86,  65,  81,  65,  81,  67, 165,
     65,  82,  49,  97,  50,  66,  55,   0,   7,  16,  21,  11,
    240, 240, 113, 161, 161, 135,  97, 161, 161, 161, 161, 161,
     49,  97,  49, 115,   0,   7,  32,  24,  11,   0,   8,  66,
     34,  97,  49,  97,  49,  97,  49,  97,  49,  97,  49,  97,
     49,  97,  34, 117,   0,   7,  16,  22,  11,   0,   8,  67,
     35,  65,  65,  97,  33, 113,  33, 113,  33, 113,  33, 130,
    146, 146,   0,   7,  48,  26,  11,   0,   8,  52,  20,  49,
     81,  65,  81,  65,  81,  65,  33,  33,  82,  18,  98,  18,
     98,  18,  98,  18,   0,   7,  32,  20,  11,   0,   8,  67,
     20,  81,  33, 116, 130, 146, 146, 129,  33, 113,  33,  83,
     35,   0,   7,  26,  11,   0,   8,  66,  35,  65,  65,  81,
     49, 113,  33, 113,  33, 113,  33, 130, 146, 146, 146, 145,
    161, 129,  17, 130, 112,  20,  11,   0,   8,  71,  65,  66,
     65,  50, 130, 145, 145, 146,  49,  66,  65,  71,   0,   7,
     16,  22,  11, 240,  35, 113, 161, 161, 161, 161, 161, 115,
    177, 161, 161, 161, 161, 161, 161, 179, 240, 240,  80,  22,
     11,  81, 161, 161, 161, 161, 161, 161, 161, 161, 161, 161,
    161, 161, 161, 161, 161, 161, 240, 240, 128,  21,  11, 211,
    177, 161, 161, 161, 161, 161, 179, 113, 161, 161, 161, 161,
    161, 161, 115, 240, 240, 144,  11,  11, 240, 178,  33,  82,
     19,  81,  34,   0,  21,
};

//*****************************************************************************
//
// The font definition for the 20 point Cmtt font.
//
//*****************************************************************************
const tFont g_sFontCmtt20 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    8,

    //
    // The height of the font.
    //
    20,

    //
    // The baseline of the font.
    //
    15,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   24,   42,   72,  108,  147,  182,
         194,  216,  238,  258,  275,  287,  295,  305,
         327,  357,  376,  399,  423,  447,  470,  498,
         518,  547,  575,  590,  607,  625,  635,  653,
         674,  710,  735,  764,  789,  819,  843,  866,
         893,  923,  942,  963,  993, 1014, 1054, 1093,
        1123, 1148, 1182, 1213, 1239, 1262, 1293, 1323,
        1357, 1382, 1407, 1431, 1452, 1474, 1495, 1505,
        1513, 1525, 1545, 1571, 1590, 1616, 1637, 1657,
        1686, 1713, 1731, 1753, 1779, 1798, 1827, 1851,
        1874, 1900, 1927, 1945, 1966, 1987, 2011, 2033,
        2059, 2079, 2105, 2125, 2147, 2169, 2190,
    },

    //
    // A pointer to the actual font data
    //
    g_pucCmtt20Data
};
