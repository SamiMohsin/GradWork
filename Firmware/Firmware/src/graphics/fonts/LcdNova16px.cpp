#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 16 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifndef LCDNOVA16PX
#define LCDNOVA16PX 1
#endif

#if LCDNOVA16PX

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0x3, 0x52, 0x13, 0xac, 0x1f, 0xfd, 0x37, 0x58,
    0x3f, 0xf8, 0x2e, 0xb0, 0x7f, 0xf0, 0x5a, 0x32,
    0x1a, 0x8c, 0x86, 0xd6, 0x8,

    /* U+22 "\"" */
    0x3, 0x52, 0x13, 0x50, 0x73, 0xac, 0x13, 0xae,
    0xf, 0xfe, 0x53, 0xac, 0x13, 0xae, 0x8,

    /* U+23 "#" */
    0xf, 0xfe, 0x12, 0x83, 0xca, 0xf, 0xfe, 0x63,
    0x59, 0x3, 0x59, 0xf, 0xfe, 0x9a, 0x1f, 0xfd,
    0x74, 0x3f, 0xf8, 0xad, 0xff, 0x4b, 0xaf, 0x4b,
    0xaf, 0xfa, 0x43, 0x37, 0x5f, 0x2e, 0xa9, 0x7a,
    0xbe, 0xe4, 0x3e, 0x5f, 0x7, 0x95, 0xa1, 0x97,
    0xc1, 0xff, 0xcd, 0x43, 0xff, 0x8a, 0xdf, 0xf4,
    0xba, 0xf4, 0xba, 0xff, 0xa4, 0x33, 0x75, 0xf2,
    0xea, 0x97, 0xab, 0xee, 0x43, 0xe5, 0xf0, 0x79,
    0x5a, 0x19, 0x7c, 0x1f, 0xfe, 0x87, 0xa6, 0x81,
    0xac, 0x87, 0xf8,

    /* U+24 "$" */
    0xf, 0xf9, 0xa2, 0x1f, 0xfc, 0xaa, 0x2b, 0xf,
    0xfe, 0x2b, 0xf9, 0x7b, 0xf4, 0x87, 0xe7, 0xd3,
    0x5f, 0x75, 0x2a, 0xe0, 0xe7, 0xb, 0x5c, 0x19,
    0x6d, 0x9, 0xf, 0xfe, 0x4b, 0x7a, 0x43, 0xfb,
    0xf, 0xfe, 0x4b, 0x72, 0xbf, 0xff, 0x81, 0x21,
    0xfe, 0x6e, 0xbf, 0xe4, 0xb9, 0xf, 0xf2, 0xff,
    0xda, 0x1f, 0xe5, 0x7, 0xff, 0x2d, 0xab, 0x43,
    0xff, 0x92, 0xe1, 0x6b, 0x83, 0x2d, 0xa1, 0x21,
    0xcf, 0xa6, 0xbe, 0xea, 0x4b, 0x83, 0xf9, 0xfc,
    0xbd, 0xfa, 0x43, 0xff, 0x89, 0x45, 0x61, 0xff,
    0xc0,

    /* U+25 "%" */
    0xe, 0x7f, 0xfa, 0x43, 0xff, 0x9e, 0xfa, 0x6b,
    0xe4, 0xb9, 0xf, 0xf2, 0xe0, 0xfe, 0x70, 0xb5,
    0xfb, 0x9, 0xf, 0xcd, 0xd5, 0x87, 0xff, 0x51,
    0xb9, 0x1b, 0x83, 0xff, 0x85, 0x87, 0xff, 0x5,
    0x57, 0x20, 0x68, 0x87, 0xfc, 0xdc, 0xaf, 0xfa,
    0x54, 0xf4, 0x43, 0x9b, 0xfa, 0x43, 0xf9, 0xba,
    0xfe, 0x25, 0x7, 0x9a, 0xfc, 0x5c, 0x87, 0xf2,
    0xf1, 0xd1, 0x1b, 0x90, 0xb5, 0xf8, 0x32, 0x1f,
    0xfc, 0x6, 0xe4, 0x6e, 0x43, 0xff, 0xa2, 0xf2,
    0x37, 0x21, 0xff, 0xd4, 0x6a, 0xe4, 0x3e, 0x70,
    0xb5, 0xfb, 0x9, 0xf, 0xf9, 0x60, 0xff, 0x9f,
    0x2a, 0xbe, 0x4b, 0x90, 0x0,

    /* U+26 "&" */
    0xe, 0x7f, 0xfd, 0x21, 0xff, 0xc2, 0x7d, 0x35,
    0xfe, 0x43, 0xff, 0x82, 0xe1, 0x6b, 0xfc, 0x1f,
    0xfd, 0x46, 0xf4, 0x1f, 0xfc, 0x1c, 0x3f, 0xf8,
    0x8, 0x48, 0x7c, 0xd4, 0xaf, 0xff, 0xa1, 0x6b,
    0xe8, 0x35, 0x4a, 0xaf, 0xf9, 0x7a, 0xae, 0x9,
    0xd, 0xaf, 0xfd, 0xa1, 0x94, 0x1f, 0xff, 0x57,
    0xb, 0x5f, 0xfb, 0x42, 0x43, 0xf3, 0xe9, 0xaf,
    0xf9, 0x2e, 0xf, 0x80,

    /* U+27 "'" */
    0x3, 0x52, 0x13, 0xac, 0x1f, 0xfc, 0x17, 0x58,
    0x20,

    /* U+28 "(" */
    0xe, 0x7f, 0x90, 0xe7, 0xd3, 0x59, 0xc, 0xe1,
    0x6b, 0x83, 0xff, 0xae, 0xeb, 0x7, 0xff, 0x35,
    0xd6, 0xf, 0xfe, 0xe3, 0x85, 0xae, 0xf, 0x3e,
    0x9a, 0xc8, 0x40,

    /* U+29 ")" */
    0x3, 0x7e, 0x90, 0xf9, 0xac, 0x97, 0x21, 0xe5,
    0xb0, 0x90, 0xff, 0xee, 0x3a, 0xa4, 0x3f, 0xf9,
    0x8e, 0xa9, 0xf, 0xfe, 0xc2, 0xd8, 0x48, 0x73,
    0x59, 0x2e, 0x40,

    /* U+2A "*" */
    0xf, 0xfe, 0xa3, 0x52, 0x6, 0x88, 0x1a, 0x90,
    0xff, 0x95, 0x71, 0x42, 0xe5, 0x8, 0x7e, 0x4b,
    0x91, 0xbd, 0x23, 0x79, 0x41, 0xe7, 0xc8, 0xe8,
    0xb0, 0x1d, 0x6, 0x1f, 0x34, 0x2e, 0x41, 0xe4,
    0x6e, 0x24, 0x3e, 0x68, 0x8d, 0xe0, 0x5c, 0x8c,
    0x87, 0xe6, 0xfa, 0x43, 0xcd, 0xf2, 0x18,

    /* U+2B "+" */
    0xf, 0xfe, 0xf3, 0x7c, 0x87, 0xff, 0xfd, 0xbf,
    0xe9, 0x75, 0xff, 0xa0, 0xf3, 0x75, 0xf2, 0xf5,
    0x7d, 0xc1, 0xfc, 0xbe, 0xe, 0xd7, 0xe0, 0xff,
    0xf1, 0xb5, 0x90, 0xff, 0xe0, 0x0,

    /* U+2C "," */
    0xf, 0xfa, 0xf9, 0x9, 0x9, 0xc, 0xf7, 0x20,

    /* U+2D "-" */
    0xf, 0xfe, 0x6d, 0xff, 0xfc, 0x18, 0x3d, 0x75,
    0xff, 0x70, 0x0,

    /* U+2E "." */
    0x9, 0x90, 0xcd, 0x19, 0x9, 0xac, 0x80,

    /* U+2F "/" */
    0xf, 0xfe, 0x25, 0xe8, 0x3f, 0xf8, 0xcc, 0x8e,
    0x1f, 0xfc, 0x57, 0x47, 0x43, 0xff, 0x88, 0xc8,
    0xe8, 0x7f, 0xf1, 0x18, 0xc, 0x87, 0xff, 0x12,
    0x80, 0x60, 0xff, 0xe2, 0x32, 0xa, 0x7, 0xff,
    0x11, 0xd0, 0x48, 0x7f, 0xf1, 0x1d, 0x19, 0xf,
    0xfe, 0x23, 0x23, 0xa1, 0xff, 0xc4, 0xa0, 0x19,
    0xf, 0xfe, 0x22, 0x6, 0x81, 0xff, 0xc3,

    /* U+30 "0" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xca, 0x16, 0xb8, 0x39, 0xc2, 0xd7, 0xc0, 0x45,
    0x6, 0x43, 0xff, 0x86, 0xe8, 0x14, 0x1f, 0xfc,
    0x77, 0x41, 0x4c, 0x3f, 0x9d, 0x60, 0xce, 0x82,
    0x45, 0xda, 0x1f, 0xfc, 0x7, 0x46, 0x43, 0xff,
    0x80, 0xeb, 0x1, 0xd1, 0xd0, 0x97, 0x68, 0x7f,
    0x76, 0x8e, 0x87, 0xff, 0x1d, 0x61, 0xd0, 0xff,
    0xe1, 0xb8, 0x4a, 0x10, 0x2f, 0xb0, 0xc8, 0x73,
    0xe9, 0x42, 0xab, 0xe5, 0x5c, 0x18,

    /* U+31 "1" */
    0xf, 0xcf, 0xfd, 0x21, 0xff, 0xc8, 0x6b, 0x20,
    0x74, 0x3f, 0xf9, 0xb, 0xb0, 0xff, 0xff, 0x87,
    0xff, 0xd, 0x6d, 0xf, 0xff, 0x5a, 0xda, 0x1f,
    0xff, 0xf1, 0x7f, 0x61, 0xb5, 0xf8, 0x3f, 0x35,
    0xf9, 0x54, 0x1a, 0xfc, 0x80,

    /* U+32 "2" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xff, 0x35, 0xff,
    0xc0, 0x55, 0xc1, 0xfe, 0x5f, 0xfe, 0x6, 0x19,
    0xf, 0xff, 0x8b, 0x7f, 0xff, 0x2, 0x6e, 0x43,
    0xae, 0x55, 0x7f, 0xdc, 0x87, 0xc8, 0x6d, 0x7f,
    0xe0, 0xff, 0xfc, 0xeb, 0xff, 0xc2, 0xf, 0x9d,
    0x3, 0x5f, 0xfc, 0x34, 0x30,

    /* U+33 "3" */
    0xa, 0xff, 0xfe, 0x2c, 0x87, 0xd5, 0xfe, 0x50,
    0x66, 0x88, 0x7e, 0x5f, 0x8d, 0x43, 0x72, 0x1f,
    0xfc, 0x16, 0xf4, 0xab, 0x90, 0xff, 0xe1, 0xba,
    0x37, 0x21, 0xff, 0xc5, 0x64, 0xd, 0xff, 0x48,
    0x7f, 0xcf, 0x5f, 0xf2, 0x5c, 0x87, 0xf9, 0x7f,
    0xed, 0xf, 0xff, 0xa2, 0xff, 0xf0, 0xf4, 0x24,
    0x39, 0xaf, 0xfe, 0x1a, 0x5c, 0x18,

    /* U+34 "4" */
    0xf, 0xfe, 0x1b, 0x7e, 0xa7, 0xa0, 0xff, 0xe2,
    0x37, 0x25, 0xf0, 0x4a, 0xf, 0xfe, 0x5, 0xe9,
    0x57, 0x90, 0xff, 0xe2, 0x37, 0x91, 0xb9, 0xf,
    0xfe, 0x3e, 0x8d, 0xc8, 0x7f, 0xf0, 0x10, 0xf9,
    0x90, 0x37, 0xff, 0xd2, 0xa8, 0x87, 0x9b, 0xaf,
    0xfe, 0x22, 0xa8, 0x87, 0xf2, 0xff, 0xf0, 0xc3,
    0x21, 0xff, 0xff, 0xf, 0xfe, 0xe3, 0x56, 0x84,

    /* U+35 "5" */
    0x3, 0x7f, 0xff, 0x16, 0xf, 0x3a, 0x6, 0xbf,
    0xf8, 0x1e, 0x83, 0xfe, 0xd7, 0xff, 0x80, 0x1f,
    0xfd, 0xdc, 0x3f, 0xf9, 0x2d, 0xca, 0xff, 0xfe,
    0x4, 0x87, 0xf9, 0xba, 0xff, 0x92, 0xe4, 0x3f,
    0xcb, 0xff, 0x68, 0x7f, 0xfd, 0x57, 0xff, 0x85,
    0xa1, 0x21, 0xcd, 0x7f, 0xf0, 0xd2, 0xe0, 0xc0,

    /* U+36 "6" */
    0xe, 0x7f, 0xff, 0x83, 0x7, 0xf3, 0xe9, 0xaf,
    0xfe, 0x8, 0x7e, 0x70, 0xb5, 0xff, 0xe0, 0x7,
    0xff, 0x77, 0xf, 0xfe, 0x4b, 0x52, 0xbf, 0xff,
    0x81, 0x21, 0xfa, 0xa5, 0x57, 0xfc, 0x97, 0x21,
    0x90, 0xda, 0xff, 0xda, 0x1f, 0xff, 0x27, 0xb,
    0x5f, 0xfb, 0x42, 0x43, 0x9f, 0x4d, 0x7f, 0xc9,
    0x70, 0x60,

    /* U+37 "7" */
    0x3, 0x7f, 0xff, 0x16, 0x42, 0x6b, 0xff, 0x86,
    0x81, 0xd0, 0xcb, 0xff, 0xc2, 0xf, 0xff, 0x4a,
    0x1f, 0xfc, 0x6, 0xfc, 0xab, 0x83, 0xfe, 0xb9,
    0x55, 0x72, 0x1f, 0xfc, 0x4, 0x36, 0xb0, 0x7f,
    0xff, 0xc3, 0xff, 0x80, 0xd5, 0xa1, 0xfc,

    /* U+38 "8" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xec, 0x32,
    0x1f, 0xfd, 0x8c, 0x3f, 0xf9, 0x2d, 0x4a, 0xff,
    0xfa, 0x1a, 0x21, 0xd5, 0x2a, 0xbf, 0xe5, 0xa8,
    0x86, 0x43, 0x6b, 0xff, 0x68, 0x7f, 0xfc, 0x9c,
    0x2d, 0x7f, 0xed, 0x9, 0xe, 0x7d, 0x35, 0xff,
    0x25, 0xc1, 0x80,

    /* U+39 "9" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xec, 0x32,
    0x1f, 0xfd, 0x8c, 0x3f, 0xf9, 0x2d, 0xca, 0xff,
    0xfa, 0x1a, 0x21, 0xf3, 0x75, 0xff, 0x2d, 0x44,
    0x3f, 0xcb, 0xff, 0x68, 0x7f, 0xfd, 0xd7, 0xff,
    0x81, 0xa1, 0x21, 0xf9, 0xaf, 0xfe, 0x2, 0x5c,
    0x18,

    /* U+3A ":" */
    0xf, 0xf9, 0xf4, 0x87, 0xff, 0x5, 0xf4, 0x87,
    0xff, 0x2a, 0xf9, 0xd, 0xac, 0x10,

    /* U+3B ";" */
    0xf, 0xf9, 0xf4, 0x87, 0xff, 0x5, 0xf4, 0x87,
    0xff, 0x2a, 0xf9, 0x9, 0x9, 0xc, 0xf7, 0x20,

    /* U+3C "<" */
    0xf, 0xfe, 0x73, 0x7d, 0x21, 0xf9, 0xb9, 0x1a,
    0x21, 0xe6, 0x88, 0xdc, 0x87, 0xff, 0x5, 0xd0,
    0xff, 0x37, 0x23, 0x72, 0x1f, 0xe6, 0xe4, 0x64,
    0x20,

    /* U+3D "=" */
    0xf, 0xfe, 0x5b, 0x7f, 0xff, 0x2, 0x43, 0x9b,
    0xaf, 0xf7, 0x21, 0xf9, 0x7f, 0xc1, 0xf9, 0xbf,
    0xff, 0x81, 0x21, 0xcd, 0xd7, 0xfb, 0x90, 0x80,

    /* U+3E ">" */
    0xf, 0xfe, 0x3b, 0x7d, 0x21, 0xff, 0x34, 0x46,
    0xe4, 0x3f, 0xcd, 0xcb, 0x5c, 0x87, 0xfc, 0xa0,
    0xff, 0xe0, 0x3e, 0x80, 0xdc, 0x87, 0x34, 0x3,
    0x72, 0x1f, 0x0,

    /* U+3F "?" */
    0x9, 0xbf, 0xff, 0x85, 0x21, 0xfc, 0xd7, 0xff,
    0x9, 0x2e, 0x43, 0xf2, 0xff, 0xf0, 0x60, 0x9c,
    0x3f, 0xfc, 0x88, 0x7f, 0xf2, 0x5b, 0xe9, 0x57,
    0x7, 0xff, 0x5, 0xb8, 0x69, 0xe9, 0xf, 0xfe,
    0x3b, 0xa8, 0x3f, 0xf8, 0xe8, 0x48, 0x7f, 0xf2,
    0xf5, 0x68, 0x7f, 0xf2, 0x5d, 0x5a, 0x1f, 0xfc,
    0x96, 0xb2, 0x1f, 0xf0,

    /* U+40 "@" */
    0xe, 0x7f, 0xff, 0x83, 0x37, 0xff, 0xf0, 0x50,
    0xfc, 0xfa, 0x6b, 0xff, 0x82, 0xd7, 0xff, 0x5,
    0xbc, 0x86, 0x70, 0xb5, 0xff, 0xe0, 0x4, 0xbf,
    0xfc, 0x0, 0xda, 0x1f, 0xfc, 0x56, 0xff, 0xa4,
    0x3f, 0xfa, 0xd, 0xc3, 0x5c, 0xab, 0x83, 0xff,
    0x86, 0xd1, 0x90, 0xff, 0x6b, 0xd8, 0x64, 0x3f,
    0xf8, 0x74, 0x64, 0x3f, 0xfa, 0x88, 0x48, 0x7f,
    0x9b, 0x8b, 0xfa, 0x5d, 0x7f, 0x2a, 0xe0, 0xff,
    0xe3, 0x37, 0x5d, 0xd5, 0xea, 0xee, 0x43, 0xff,
    0x96, 0xbc, 0x1e, 0x5e, 0xf, 0xe7, 0xb, 0x5f,
    0xfe, 0x0, 0x7f, 0xf3, 0x5f, 0x4d, 0x7f, 0xf0,
    0x43, 0xff, 0x94,

    /* U+41 "A" */
    0xe, 0x7f, 0xff, 0x89, 0x21, 0xcf, 0xa6, 0xbf,
    0xe4, 0x3f, 0x9c, 0x2d, 0x7f, 0xec, 0x3f, 0xfb,
    0xb8, 0x7f, 0xf2, 0x5a, 0x95, 0xff, 0xf4, 0x34,
    0x43, 0xaa, 0x55, 0x7f, 0xc8, 0xd1, 0xc, 0x86,
    0xd7, 0xfe, 0xc3, 0xff, 0xfe, 0x1f, 0xfc, 0x36,
    0xad, 0xf, 0xf9, 0xea, 0x42,

    /* U+42 "B" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0xe7, 0x40, 0xd7,
    0xfc, 0xab, 0x83, 0xfd, 0xaf, 0xfd, 0x86, 0x43,
    0xff, 0xb1, 0x87, 0xff, 0x25, 0xa9, 0x5f, 0xff,
    0x43, 0x44, 0x3a, 0xa5, 0x57, 0xfc, 0xb5, 0x10,
    0xc8, 0x6d, 0x7f, 0xed, 0xf, 0xff, 0xbe, 0xbf,
    0xf6, 0x84, 0x86, 0x74, 0xd, 0x7f, 0xc9, 0x70,
    0x60,

    /* U+43 "C" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xec, 0x32,
    0x1f, 0xfc, 0x96, 0xb2, 0x1f, 0xfc, 0xa5, 0x83,
    0xce, 0xb0, 0x7f, 0xf9, 0x5d, 0x60, 0xff, 0xee,
    0x2c, 0x1f, 0xfc, 0xb6, 0xb2, 0x19, 0xc2, 0xd7,
    0xfe, 0xc3, 0x21, 0xcf, 0xa6, 0xbf, 0xe5, 0x5c,
    0x18,

    /* U+44 "D" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0xe7, 0x40, 0xd7,
    0xfc, 0xab, 0x83, 0xfd, 0xaf, 0xfd, 0x86, 0x43,
    0xff, 0xdc, 0xeb, 0x7, 0xff, 0x1, 0x76, 0x87,
    0xff, 0x4d, 0xd6, 0xf, 0xfe, 0x2, 0xed, 0xf,
    0xff, 0x9e, 0xbf, 0xf6, 0x19, 0xc, 0xe8, 0x1a,
    0xff, 0x95, 0x70, 0x60,

    /* U+45 "E" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0x3a, 0x6, 0xbf,
    0xf8, 0x28, 0x7f, 0x6b, 0xff, 0xc0, 0xf, 0xfe,
    0xbe, 0x1f, 0xfc, 0x66, 0xa5, 0x7f, 0xff, 0x2,
    0x43, 0xaa, 0x55, 0x7f, 0xdc, 0x86, 0x43, 0x6b,
    0xff, 0x7, 0xff, 0xc3, 0x5f, 0xfe, 0x0, 0x79,
    0xd0, 0x35, 0xff, 0xc1, 0x42,

    /* U+46 "F" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0x3a, 0x6, 0xbf,
    0xf8, 0x28, 0x7f, 0x6b, 0xff, 0xc0, 0xf, 0xfe,
    0xbe, 0x1f, 0xfc, 0x66, 0xa5, 0x7f, 0xff, 0x2,
    0x43, 0xaa, 0x55, 0x7f, 0xdc, 0x86, 0x43, 0x6b,
    0xff, 0x7, 0xff, 0xfc, 0x33, 0x56, 0x87, 0xff,
    0x14,

    /* U+47 "G" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xed, 0x9,
    0xf, 0xfe, 0x4b, 0x7a, 0x43, 0xff, 0xa6, 0xd1,
    0x90, 0xcd, 0xff, 0xd2, 0x1d, 0x46, 0x43, 0x37,
    0x59, 0x41, 0xf9, 0xf, 0xfe, 0x2, 0xed, 0xf,
    0xff, 0x93, 0x85, 0xaf, 0xfd, 0xa1, 0x21, 0xcf,
    0xa6, 0xbf, 0xe4, 0xb8, 0x30,

    /* U+48 "H" */
    0xf, 0xfe, 0x8d, 0xf2, 0x1f, 0xf3, 0x7a, 0x43,
    0x21, 0xff, 0xc5, 0x43, 0xff, 0xef, 0x87, 0xff,
    0x25, 0xa9, 0x5f, 0xff, 0x43, 0x44, 0x3a, 0xa5,
    0x57, 0xfc, 0x8d, 0x10, 0xc8, 0x6d, 0x7f, 0xec,
    0x3f, 0xff, 0xe1, 0xff, 0xc3, 0x6a, 0xd0, 0xff,
    0x9e, 0xa4, 0x20,

    /* U+49 "I" */
    0x3, 0x7f, 0xcb, 0x5f, 0xe9, 0x9, 0xaf, 0x9a,
    0x86, 0xbc, 0x87, 0x2f, 0x83, 0xa5, 0xe0, 0xff,
    0xf8, 0xeb, 0x61, 0xff, 0xdf, 0xd6, 0xc3, 0xff,
    0xe2, 0xbe, 0xe, 0x5f, 0x7, 0x35, 0xf3, 0x51,
    0x5f, 0x20,

    /* U+4A "J" */
    0xf, 0xfe, 0x3d, 0x48, 0x7f, 0xf2, 0x97, 0x68,
    0x7f, 0xff, 0xc3, 0xff, 0x9e, 0xca, 0xd0, 0xe6,
    0x88, 0x7f, 0xf2, 0x9d, 0x52, 0x1f, 0xf3, 0x2b,
    0x43, 0xff, 0xdc, 0xe1, 0x6b, 0xff, 0x61, 0x90,
    0xe7, 0xd3, 0x5f, 0xf2, 0xae, 0xc,

    /* U+4B "K" */
    0x3, 0x72, 0x1f, 0xcf, 0xd2, 0x1e, 0x74, 0x43,
    0xe6, 0xe1, 0xa2, 0x1f, 0xfc, 0x36, 0xe5, 0x5c,
    0x87, 0xff, 0x7, 0x6e, 0x4b, 0x90, 0xff, 0xe2,
    0xe8, 0xda, 0x1f, 0xfc, 0x26, 0xa5, 0x80, 0xdf,
    0xf4, 0x87, 0xea, 0x95, 0x5f, 0xf2, 0xae, 0x43,
    0x21, 0xb5, 0xff, 0xb0, 0xff, 0xff, 0x87, 0xff,
    0xd, 0xab, 0x43, 0xfe, 0x7a, 0x90, 0x80,

    /* U+4C "L" */
    0x3, 0x52, 0x1f, 0xfc, 0x67, 0x58, 0x3f, 0xff,
    0xe1, 0xff, 0xc4, 0x75, 0x83, 0xff, 0xbe, 0xeb,
    0x7, 0xff, 0xf3, 0x5f, 0xfe, 0x0, 0x79, 0xd0,
    0x35, 0xff, 0xc1, 0x42,

    /* U+4D "M" */
    0x9, 0x60, 0xff, 0xe5, 0x2c, 0x13, 0x5b, 0xf4,
    0x87, 0xf9, 0xfe, 0xa9, 0xf, 0x99, 0x1a, 0x21,
    0xeb, 0x81, 0x44, 0x3f, 0xed, 0xb4, 0x68, 0x82,
    0xd1, 0xb4, 0x3f, 0xf8, 0xb7, 0xd, 0xe4, 0x68,
    0x87, 0xf9, 0x9, 0xf, 0x3c, 0xba, 0x88, 0x64,
    0x24, 0x35, 0x1d, 0xf, 0x9a, 0xc8, 0x7d, 0x47,
    0x40, 0xd1, 0x90, 0xff, 0xe3, 0xb4, 0x64, 0x3f,
    0xff, 0xe1, 0xff, 0xce, 0x42, 0x43, 0xff, 0x90,
    0x84, 0x86, 0xbd, 0x21, 0xff, 0xc8, 0xbd, 0x20,

    /* U+4E "N" */
    0xf, 0xfe, 0x8b, 0xea, 0x2e, 0xf, 0x9b, 0xd0,
    0x73, 0x81, 0x3a, 0xc8, 0x79, 0x9, 0xf, 0xee,
    0xd1, 0xb8, 0x3f, 0xf9, 0x37, 0x23, 0xce, 0x1f,
    0xfc, 0x76, 0x88, 0xc8, 0x7f, 0x34, 0x64, 0x3c,
    0xdf, 0xa5, 0x68, 0x75, 0x1d, 0xf, 0xf9, 0xd5,
    0xa1, 0x90, 0x90, 0xff, 0xe0, 0xa1, 0xff, 0xff,
    0xf, 0xfe, 0x13, 0x59, 0xf, 0xf9, 0xac, 0x84,

    /* U+4F "O" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xec, 0x32,
    0x1f, 0xfe, 0xe7, 0x58, 0x3f, 0xf8, 0xb, 0xb4,
    0x3f, 0xfa, 0x6e, 0xb0, 0x7f, 0xf0, 0x17, 0x68,
    0x7f, 0xfb, 0x9c, 0x2d, 0x7f, 0xec, 0x32, 0x1c,
    0xfa, 0x6b, 0xfe, 0x55, 0xc1, 0x80,

    /* U+50 "P" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0xe7, 0x40, 0xd7,
    0xfc, 0x97, 0x21, 0xfd, 0xaf, 0xfd, 0x84, 0x87,
    0xff, 0x67, 0xf, 0xfe, 0x4b, 0x52, 0xbf, 0xfe,
    0x95, 0x68, 0x75, 0x4a, 0xaf, 0xfb, 0xd2, 0x1e,
    0x43, 0x6b, 0xff, 0x7, 0xff, 0xfc, 0x3f, 0xf8,
    0x8d, 0x5a, 0x1f, 0xfc, 0x80,

    /* U+51 "Q" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xec, 0x32,
    0x1f, 0xfe, 0xe7, 0x58, 0x3f, 0xf8, 0xb, 0xb4,
    0x3f, 0xfa, 0x6e, 0xb0, 0x7f, 0xf0, 0x17, 0x68,
    0x7f, 0xf7, 0x1f, 0xa0, 0xff, 0xe0, 0xb8, 0x5a,
    0xd8, 0x69, 0x58, 0x64, 0x39, 0xf4, 0xd4, 0xbe,
    0xa2, 0xae, 0xf, 0xe7, 0xf2, 0xf7, 0xe9, 0xf,
    0xfe, 0x26, 0x19, 0xf, 0xfe, 0x4b, 0xca, 0xbe,
    0x83, 0xff, 0x8e, 0xde, 0xa7, 0x7, 0xc0,

    /* U+52 "R" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0xe7, 0x40, 0xd7,
    0xfc, 0xab, 0x83, 0xfd, 0xaf, 0xfd, 0x86, 0x43,
    0xff, 0xb1, 0x87, 0xff, 0x25, 0xa9, 0x5f, 0xff,
    0x4d, 0xc8, 0x75, 0x4b, 0xa, 0xaf, 0xb9, 0xf,
    0x90, 0xf9, 0x56, 0x2e, 0xf, 0xfe, 0x1f, 0x72,
    0x36, 0x87, 0xff, 0x21, 0xb4, 0x17, 0x21, 0xff,
    0xc8, 0xb9, 0x1b, 0x90, 0xf3, 0xae, 0xf, 0x9b,
    0x91, 0x90, 0xc0,

    /* U+53 "S" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xed, 0x9,
    0xf, 0xfe, 0x4b, 0x7a, 0x43, 0xfb, 0xf, 0xfe,
    0x4b, 0x72, 0xbf, 0xff, 0x81, 0x21, 0xfe, 0x6e,
    0xbf, 0xe4, 0xb9, 0xf, 0xf2, 0xff, 0xda, 0x1f,
    0xe5, 0x7, 0xff, 0x2d, 0xab, 0x43, 0xff, 0x92,
    0xe1, 0x6b, 0xff, 0x68, 0x48, 0x73, 0xe9, 0xaf,
    0xf9, 0x2e, 0xc,

    /* U+54 "T" */
    0x9, 0xbf, 0xfa, 0x5b, 0xff, 0xd2, 0x1e, 0x6b,
    0xf9, 0x2a, 0x6b, 0xfc, 0x87, 0xe5, 0xfd, 0x87,
    0x2f, 0xf0, 0x7f, 0xff, 0xc3, 0xf9, 0xd6, 0xc3,
    0xff, 0xe0, 0xeb, 0x61, 0xff, 0xff, 0xf, 0xff,
    0x3b, 0xad, 0x87, 0xff, 0x8,

    /* U+55 "U" */
    0x3, 0x52, 0x1f, 0xfc, 0xa, 0x90, 0xe7, 0x58,
    0x3f, 0xf8, 0xb, 0xb4, 0x3f, 0xff, 0xe1, 0xfe,
    0x75, 0x83, 0xff, 0x80, 0xbb, 0x43, 0xff, 0xa6,
    0xeb, 0x7, 0xff, 0x1, 0x76, 0x87, 0xff, 0xb9,
    0xc2, 0xd7, 0xfe, 0xc3, 0x21, 0xcf, 0xa6, 0xbf,
    0xe5, 0x5c, 0x18,

    /* U+56 "V" */
    0x3, 0x52, 0x1f, 0xe6, 0xa4, 0x27, 0x58, 0x3f,
    0xf8, 0xb, 0x68, 0x7f, 0xff, 0x9d, 0x60, 0xff,
    0xe0, 0x23, 0xa1, 0xff, 0xc3, 0x6e, 0x68, 0x84,
    0xeb, 0x7, 0x37, 0x23, 0x21, 0xfe, 0xd5, 0x72,
    0x37, 0x21, 0xff, 0x34, 0x46, 0xe4, 0x3f, 0xf8,
    0x6a, 0xb9, 0xf, 0xfe, 0x3, 0xad, 0x52, 0x1f,
    0xfc, 0x20,

    /* U+57 "W" */
    0xf, 0xfe, 0xbd, 0xe9, 0xf, 0xfe, 0x45, 0xe9,
    0x2, 0x12, 0x1f, 0xfc, 0x84, 0x24, 0x3f, 0xff,
    0xe1, 0xff, 0xcf, 0x68, 0xc8, 0x7f, 0xf1, 0xda,
    0x32, 0x15, 0x1d, 0xf, 0x9a, 0xc8, 0x7d, 0x47,
    0x40, 0x84, 0x87, 0x9e, 0x5d, 0x44, 0x32, 0x12,
    0x1f, 0xfc, 0xb, 0x86, 0xf2, 0x34, 0x43, 0xff,
    0x87, 0xb6, 0x8d, 0x10, 0x5a, 0x36, 0x87, 0xff,
    0x5, 0x91, 0xa2, 0x1e, 0xb8, 0x14, 0x43, 0xcd,
    0x6f, 0xd2, 0x1f, 0xe7, 0xfa, 0xa4,

    /* U+58 "X" */
    0x1b, 0xd2, 0x1f, 0xfc, 0x17, 0xe8, 0x27, 0x46,
    0x81, 0xfe, 0x68, 0x7, 0xc, 0xd0, 0xe, 0x87,
    0xcc, 0x8d, 0x10, 0xf3, 0x20, 0xa2, 0x13, 0x40,
    0x32, 0x1f, 0xcd, 0x11, 0xa3, 0x44, 0x68, 0x1f,
    0xfc, 0x16, 0x80, 0x64, 0x68, 0x87, 0xff, 0x13,
    0xf, 0xfe, 0x63, 0x20, 0x64, 0x68, 0x87, 0xff,
    0x1, 0xa2, 0x34, 0x68, 0x8d, 0x3, 0xfc, 0xc8,
    0x28, 0x84, 0xd0, 0xc, 0x87, 0x9a, 0x1, 0xd0,
    0xf9, 0x91, 0xa2, 0x13, 0xa3, 0x40, 0xff, 0x34,
    0x3, 0x80,

    /* U+59 "Y" */
    0xf, 0xfe, 0x8d, 0xf2, 0x1f, 0xf3, 0x7a, 0x43,
    0x21, 0xff, 0xc5, 0x43, 0xff, 0xef, 0x87, 0xff,
    0x25, 0xb9, 0x5f, 0xff, 0x43, 0x44, 0x3e, 0x6e,
    0xbf, 0xe5, 0xa8, 0x87, 0xf9, 0x7f, 0xed, 0xf,
    0xff, 0xaa, 0xff, 0xf0, 0xb4, 0x24, 0x39, 0xaf,
    0xfe, 0x1a, 0x5c, 0x18,

    /* U+5A "Z" */
    0xd, 0x7f, 0xff, 0x21, 0xf, 0xd5, 0xff, 0xc4,
    0x50, 0xc8, 0x7f, 0x2f, 0xff, 0xb, 0x50, 0x7f,
    0xf3, 0x6d, 0x5, 0x10, 0xff, 0xe4, 0x5a, 0xb,
    0x43, 0xff, 0x92, 0xa1, 0xb4, 0x3f, 0xf9, 0x17,
    0xd7, 0x21, 0xff, 0xc8, 0xb4, 0x1a, 0x1f, 0xfc,
    0x9b, 0x41, 0x68, 0x7f, 0xf2, 0x19, 0x3, 0xa1,
    0xff, 0xcd, 0x56, 0xbf, 0xfc, 0x20, 0xfe, 0xa2,
    0x2a, 0xbf, 0xf8, 0x68, 0x60,

    /* U+5B "[" */
    0x3, 0x7f, 0xc8, 0x67, 0x40, 0xd6, 0x43, 0xfb,
    0x5c, 0x1f, 0xfd, 0x77, 0x58, 0x3f, 0xf9, 0xae,
    0xb0, 0x7f, 0xf8, 0x75, 0xc1, 0xce, 0x81, 0xac,
    0x84,

    /* U+5C "\\" */
    0x9, 0xb9, 0xf, 0xfe, 0x3a, 0x6, 0x81, 0xff,
    0xc7, 0xa0, 0x19, 0xf, 0xfe, 0x33, 0x23, 0xa1,
    0xff, 0xc6, 0x74, 0x74, 0x3f, 0xf8, 0xce, 0x8c,
    0x87, 0xff, 0x19, 0x90, 0x50, 0x3f, 0xf8, 0xf2,
    0x6, 0xf, 0xfe, 0x3d, 0x0, 0xc8, 0x7f, 0xf1,
    0x99, 0x1d, 0xf, 0xfe, 0x33, 0xa3, 0xa1, 0xff,
    0xc6, 0x64, 0x70, 0xc0,

    /* U+5D "]" */
    0xd, 0x7f, 0xd2, 0x1d, 0x5c, 0x81, 0xc3, 0xcb,
    0x83, 0xff, 0xc3, 0xa3, 0x87, 0xff, 0x37, 0x47,
    0xf, 0xfe, 0xc2, 0xe0, 0xff, 0x57, 0x20, 0x70,

    /* U+5E "^" */
    0xf, 0xfe, 0xb3, 0x59, 0xf, 0xfe, 0x1b, 0x72,
    0xeb, 0x90, 0xfe, 0x6e, 0x46, 0xf4, 0x8d, 0xc8,
    0x73, 0x23, 0x72, 0x6, 0xe4, 0x64,

    /* U+5F "_" */
    0xf, 0xff, 0xb, 0x7f, 0xff, 0x55, 0xf, 0x37,
    0x5f, 0xfd, 0x3d, 0x8,

    /* U+60 "`" */
    0x9, 0xfa, 0x43, 0xf9, 0x91, 0xb9, 0xf, 0x9b,
    0x91, 0x90, 0x0,

    /* U+61 "a" */
    0xe, 0x7f, 0xff, 0x89, 0x21, 0xcf, 0xa6, 0xbf,
    0xe4, 0x3f, 0x9c, 0x2d, 0x7f, 0xec, 0x3f, 0xfb,
    0xb8, 0x7f, 0xf2, 0x5a, 0x95, 0xff, 0xf4, 0x34,
    0x43, 0xaa, 0x55, 0x7f, 0xc8, 0xd1, 0xc, 0x86,
    0xd7, 0xfe, 0xc3, 0xff, 0xfe, 0x1f, 0xfc, 0x36,
    0xad, 0xf, 0xf9, 0xea, 0x42,

    /* U+62 "b" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0xe7, 0x40, 0xd7,
    0xfc, 0xab, 0x83, 0xfd, 0xaf, 0xfd, 0x86, 0x43,
    0xff, 0xb1, 0x87, 0xff, 0x25, 0xa9, 0x5f, 0xff,
    0x43, 0x44, 0x3a, 0xa5, 0x57, 0xfc, 0xb5, 0x10,
    0xc8, 0x6d, 0x7f, 0xed, 0xf, 0xff, 0xbe, 0xbf,
    0xf6, 0x84, 0x86, 0x74, 0xd, 0x7f, 0xc9, 0x70,
    0x60,

    /* U+63 "c" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xec, 0x32,
    0x1f, 0xfc, 0x96, 0xb2, 0x1f, 0xfc, 0xa5, 0x83,
    0xce, 0xb0, 0x7f, 0xf9, 0x5d, 0x60, 0xff, 0xee,
    0x2c, 0x1f, 0xfc, 0xb6, 0xb2, 0x19, 0xc2, 0xd7,
    0xfe, 0xc3, 0x21, 0xcf, 0xa6, 0xbf, 0xe5, 0x5c,
    0x18,

    /* U+64 "d" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0xe7, 0x40, 0xd7,
    0xfc, 0xab, 0x83, 0xfd, 0xaf, 0xfd, 0x86, 0x43,
    0xff, 0xdc, 0xeb, 0x7, 0xff, 0x1, 0x76, 0x87,
    0xff, 0x4d, 0xd6, 0xf, 0xfe, 0x2, 0xed, 0xf,
    0xff, 0x9e, 0xbf, 0xf6, 0x19, 0xc, 0xe8, 0x1a,
    0xff, 0x95, 0x70, 0x60,

    /* U+65 "e" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0x3a, 0x6, 0xbf,
    0xf8, 0x28, 0x7f, 0x6b, 0xff, 0xc0, 0xf, 0xfe,
    0xbe, 0x1f, 0xfc, 0x66, 0xa5, 0x7f, 0xff, 0x2,
    0x43, 0xaa, 0x55, 0x7f, 0xdc, 0x86, 0x43, 0x6b,
    0xff, 0x7, 0xff, 0xc3, 0x5f, 0xfe, 0x0, 0x79,
    0xd0, 0x35, 0xff, 0xc1, 0x42,

    /* U+66 "f" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0x3a, 0x6, 0xbf,
    0xf8, 0x28, 0x7f, 0x6b, 0xff, 0xc0, 0xf, 0xfe,
    0xbe, 0x1f, 0xfc, 0x66, 0xa5, 0x7f, 0xff, 0x2,
    0x43, 0xaa, 0x55, 0x7f, 0xdc, 0x86, 0x43, 0x6b,
    0xff, 0x7, 0xff, 0xfc, 0x33, 0x56, 0x87, 0xff,
    0x14,

    /* U+67 "g" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xed, 0x9,
    0xf, 0xfe, 0x4b, 0x7a, 0x43, 0xff, 0xa6, 0xd1,
    0x90, 0xcd, 0xff, 0xd2, 0x1d, 0x46, 0x43, 0x37,
    0x59, 0x41, 0xf9, 0xf, 0xfe, 0x2, 0xed, 0xf,
    0xff, 0x93, 0x85, 0xaf, 0xfd, 0xa1, 0x21, 0xcf,
    0xa6, 0xbf, 0xe4, 0xb8, 0x30,

    /* U+68 "h" */
    0xf, 0xfe, 0x8d, 0xf2, 0x1f, 0xf3, 0x7a, 0x43,
    0x21, 0xff, 0xc5, 0x43, 0xff, 0xef, 0x87, 0xff,
    0x25, 0xa9, 0x5f, 0xff, 0x43, 0x44, 0x3a, 0xa5,
    0x57, 0xfc, 0x8d, 0x10, 0xc8, 0x6d, 0x7f, 0xec,
    0x3f, 0xff, 0xe1, 0xff, 0xc3, 0x6a, 0xd0, 0xff,
    0x9e, 0xa4, 0x20,

    /* U+69 "i" */
    0x3, 0x7f, 0xcb, 0x5f, 0xe9, 0x9, 0xaf, 0x9a,
    0x86, 0xbc, 0x87, 0x2f, 0x83, 0xa5, 0xe0, 0xff,
    0xf8, 0xeb, 0x61, 0xff, 0xdf, 0xd6, 0xc3, 0xff,
    0xe2, 0xbe, 0xe, 0x5f, 0x7, 0x35, 0xf3, 0x51,
    0x5f, 0x20,

    /* U+6A "j" */
    0xf, 0xfe, 0x3d, 0x48, 0x7f, 0xf2, 0x97, 0x68,
    0x7f, 0xff, 0xc3, 0xff, 0x9e, 0xca, 0xd0, 0xe6,
    0x88, 0x7f, 0xf2, 0x9d, 0x52, 0x1f, 0xf3, 0x2b,
    0x43, 0xff, 0xdc, 0xe1, 0x6b, 0xff, 0x61, 0x90,
    0xe7, 0xd3, 0x5f, 0xf2, 0xae, 0xc,

    /* U+6B "k" */
    0x3, 0x72, 0x1f, 0xcf, 0xd2, 0x1e, 0x74, 0x43,
    0xe6, 0xe1, 0xa2, 0x1f, 0xfc, 0x36, 0xe5, 0x5c,
    0x87, 0xff, 0x7, 0x6e, 0x4b, 0x90, 0xff, 0xe2,
    0xe8, 0xda, 0x1f, 0xfc, 0x26, 0xa5, 0x80, 0xdf,
    0xf4, 0x87, 0xea, 0x95, 0x5f, 0xf2, 0xae, 0x43,
    0x21, 0xb5, 0xff, 0xb0, 0xff, 0xff, 0x87, 0xff,
    0xd, 0xab, 0x43, 0xfe, 0x7a, 0x90, 0x80,

    /* U+6C "l" */
    0x3, 0x52, 0x1f, 0xfc, 0x67, 0x58, 0x3f, 0xff,
    0xe1, 0xff, 0xc4, 0x75, 0x83, 0xff, 0xbe, 0xeb,
    0x7, 0xff, 0xf3, 0x5f, 0xfe, 0x0, 0x79, 0xd0,
    0x35, 0xff, 0xc1, 0x42,

    /* U+6D "m" */
    0x9, 0x60, 0xff, 0xe5, 0x2c, 0x13, 0x5b, 0xf4,
    0x87, 0xf9, 0xfe, 0xa9, 0xf, 0x99, 0x1a, 0x21,
    0xeb, 0x81, 0x44, 0x3f, 0xed, 0xb4, 0x68, 0x82,
    0xd1, 0xb4, 0x3f, 0xf8, 0xb7, 0xd, 0xe4, 0x68,
    0x87, 0xf9, 0x9, 0xf, 0x3c, 0xba, 0x88, 0x64,
    0x24, 0x35, 0x1d, 0xf, 0x9a, 0xc8, 0x7d, 0x47,
    0x40, 0xd1, 0x90, 0xff, 0xe3, 0xb4, 0x64, 0x3f,
    0xff, 0xe1, 0xff, 0xce, 0x42, 0x43, 0xff, 0x90,
    0x84, 0x86, 0xbd, 0x21, 0xff, 0xc8, 0xbd, 0x20,

    /* U+6E "n" */
    0xf, 0xfe, 0x8b, 0xea, 0x2e, 0xf, 0x9b, 0xd0,
    0x73, 0x81, 0x3a, 0xc8, 0x79, 0x9, 0xf, 0xee,
    0xd1, 0xb8, 0x3f, 0xf9, 0x37, 0x23, 0xce, 0x1f,
    0xfc, 0x76, 0x88, 0xc8, 0x7f, 0x34, 0x64, 0x3c,
    0xdf, 0xa5, 0x68, 0x75, 0x1d, 0xf, 0xf9, 0xd5,
    0xa1, 0x90, 0x90, 0xff, 0xe0, 0xa1, 0xff, 0xff,
    0xf, 0xfe, 0x13, 0x59, 0xf, 0xf9, 0xac, 0x84,

    /* U+6F "o" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xec, 0x32,
    0x1f, 0xfe, 0xe7, 0x58, 0x3f, 0xf8, 0xb, 0xb4,
    0x3f, 0xfa, 0x6e, 0xb0, 0x7f, 0xf0, 0x17, 0x68,
    0x7f, 0xfb, 0x9c, 0x2d, 0x7f, 0xec, 0x32, 0x1c,
    0xfa, 0x6b, 0xfe, 0x55, 0xc1, 0x80,

    /* U+70 "p" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0xe7, 0x40, 0xd7,
    0xfc, 0x97, 0x21, 0xfd, 0xaf, 0xfd, 0x84, 0x87,
    0xff, 0x67, 0xf, 0xfe, 0x4b, 0x52, 0xbf, 0xfe,
    0x95, 0x68, 0x75, 0x4a, 0xaf, 0xfb, 0xd2, 0x1e,
    0x43, 0x6b, 0xff, 0x7, 0xff, 0xfc, 0x3f, 0xf8,
    0x8d, 0x5a, 0x1f, 0xfc, 0x80,

    /* U+71 "q" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xec, 0x32,
    0x1f, 0xfe, 0xe7, 0x58, 0x3f, 0xf8, 0xb, 0xb4,
    0x3f, 0xfa, 0x6e, 0xb0, 0x7f, 0xf0, 0x17, 0x68,
    0x7f, 0xf7, 0x1f, 0xa0, 0xff, 0xe0, 0xb8, 0x5a,
    0xd8, 0x69, 0x58, 0x64, 0x39, 0xf4, 0xd4, 0xbe,
    0xa2, 0xae, 0xf, 0xe7, 0xf2, 0xf7, 0xe9, 0xf,
    0xfe, 0x26, 0x19, 0xf, 0xfe, 0x4b, 0xca, 0xbe,
    0x83, 0xff, 0x8e, 0xde, 0xa7, 0x7, 0xc0,

    /* U+72 "r" */
    0x3, 0x7f, 0xff, 0xe, 0x43, 0xe7, 0x40, 0xd7,
    0xfc, 0xab, 0x83, 0xfd, 0xaf, 0xfd, 0x86, 0x43,
    0xff, 0xb1, 0x87, 0xff, 0x25, 0xa9, 0x5f, 0xff,
    0x4d, 0xc8, 0x75, 0x4b, 0xa, 0xaf, 0xb9, 0xf,
    0x90, 0xf9, 0x56, 0x2e, 0xf, 0xfe, 0x1f, 0x72,
    0x36, 0x87, 0xff, 0x21, 0xb4, 0x17, 0x21, 0xff,
    0xc8, 0xb9, 0x1b, 0x90, 0xf3, 0xae, 0xf, 0x9b,
    0x91, 0x90, 0xc0,

    /* U+73 "s" */
    0xe, 0x7f, 0xff, 0x83, 0x21, 0xf9, 0xf4, 0xd7,
    0xfc, 0xab, 0x83, 0x9c, 0x2d, 0x7f, 0xed, 0x9,
    0xf, 0xfe, 0x4b, 0x7a, 0x43, 0xfb, 0xf, 0xfe,
    0x4b, 0x72, 0xbf, 0xff, 0x81, 0x21, 0xfe, 0x6e,
    0xbf, 0xe4, 0xb9, 0xf, 0xf2, 0xff, 0xda, 0x1f,
    0xe5, 0x7, 0xff, 0x2d, 0xab, 0x43, 0xff, 0x92,
    0xe1, 0x6b, 0xff, 0x68, 0x48, 0x73, 0xe9, 0xaf,
    0xf9, 0x2e, 0xc,

    /* U+74 "t" */
    0x9, 0xbf, 0xfa, 0x5b, 0xff, 0xd2, 0x1e, 0x6b,
    0xf9, 0x2a, 0x6b, 0xfc, 0x87, 0xe5, 0xfd, 0x87,
    0x2f, 0xf0, 0x7f, 0xff, 0xc3, 0xf9, 0xd6, 0xc3,
    0xff, 0xe0, 0xeb, 0x61, 0xff, 0xff, 0xf, 0xff,
    0x3b, 0xad, 0x87, 0xff, 0x8,

    /* U+75 "u" */
    0x3, 0x52, 0x1f, 0xfc, 0xa, 0x90, 0xe7, 0x58,
    0x3f, 0xf8, 0xb, 0xb4, 0x3f, 0xff, 0xe1, 0xfe,
    0x75, 0x83, 0xff, 0x80, 0xbb, 0x43, 0xff, 0xa6,
    0xeb, 0x7, 0xff, 0x1, 0x76, 0x87, 0xff, 0xb9,
    0xc2, 0xd7, 0xfe, 0xc3, 0x21, 0xcf, 0xa6, 0xbf,
    0xe5, 0x5c, 0x18,

    /* U+76 "v" */
    0x3, 0x52, 0x1f, 0xe6, 0xa4, 0x27, 0x58, 0x3f,
    0xf8, 0xb, 0x68, 0x7f, 0xff, 0x9d, 0x60, 0xff,
    0xe0, 0x23, 0xa1, 0xff, 0xc3, 0x6e, 0x68, 0x84,
    0xeb, 0x7, 0x37, 0x23, 0x21, 0xfe, 0xd5, 0x72,
    0x37, 0x21, 0xff, 0x34, 0x46, 0xe4, 0x3f, 0xf8,
    0x6a, 0xb9, 0xf, 0xfe, 0x3, 0xad, 0x52, 0x1f,
    0xfc, 0x20,

    /* U+77 "w" */
    0xf, 0xfe, 0xbd, 0xe9, 0xf, 0xfe, 0x45, 0xe9,
    0x2, 0x12, 0x1f, 0xfc, 0x84, 0x24, 0x3f, 0xff,
    0xe1, 0xff, 0xcf, 0x68, 0xc8, 0x7f, 0xf1, 0xda,
    0x32, 0x15, 0x1d, 0xf, 0x9a, 0xc8, 0x7d, 0x47,
    0x40, 0x84, 0x87, 0x9e, 0x5d, 0x44, 0x32, 0x12,
    0x1f, 0xfc, 0xb, 0x86, 0xf2, 0x34, 0x43, 0xff,
    0x87, 0xb6, 0x8d, 0x10, 0x5a, 0x36, 0x87, 0xff,
    0x5, 0x91, 0xa2, 0x1e, 0xb8, 0x14, 0x43, 0xcd,
    0x6f, 0xd2, 0x1f, 0xe7, 0xfa, 0xa4,

    /* U+78 "x" */
    0x1b, 0xd2, 0x1f, 0xfc, 0x17, 0xe8, 0x27, 0x46,
    0x81, 0xfe, 0x68, 0x7, 0xc, 0xd0, 0xe, 0x87,
    0xcc, 0x8d, 0x10, 0xf3, 0x20, 0xa2, 0x13, 0x40,
    0x32, 0x1f, 0xcd, 0x11, 0xa3, 0x44, 0x68, 0x1f,
    0xfc, 0x16, 0x80, 0x64, 0x68, 0x87, 0xff, 0x13,
    0xf, 0xfe, 0x63, 0x20, 0x64, 0x68, 0x87, 0xff,
    0x1, 0xa2, 0x34, 0x68, 0x8d, 0x3, 0xfc, 0xc8,
    0x28, 0x84, 0xd0, 0xc, 0x87, 0x9a, 0x1, 0xd0,
    0xf9, 0x91, 0xa2, 0x13, 0xa3, 0x40, 0xff, 0x34,
    0x3, 0x80,

    /* U+79 "y" */
    0xf, 0xfe, 0x8d, 0xf2, 0x1f, 0xf3, 0x7a, 0x43,
    0x21, 0xff, 0xc5, 0x43, 0xff, 0xef, 0x87, 0xff,
    0x25, 0xb9, 0x5f, 0xff, 0x43, 0x44, 0x3e, 0x6e,
    0xbf, 0xe5, 0xa8, 0x87, 0xf9, 0x7f, 0xed, 0xf,
    0xff, 0xaa, 0xff, 0xf0, 0xb4, 0x24, 0x39, 0xaf,
    0xfe, 0x1a, 0x5c, 0x18,

    /* U+7A "z" */
    0xd, 0x7f, 0xff, 0x21, 0xf, 0xd5, 0xff, 0xc4,
    0x50, 0xc8, 0x7f, 0x2f, 0xff, 0xb, 0x50, 0x7f,
    0xf3, 0x6d, 0x5, 0x10, 0xff, 0xe4, 0x5a, 0xb,
    0x43, 0xff, 0x92, 0xa1, 0xb4, 0x3f, 0xf9, 0x17,
    0xd7, 0x21, 0xff, 0xc8, 0xb4, 0x1a, 0x1f, 0xfc,
    0x9b, 0x41, 0x68, 0x7f, 0xf2, 0x19, 0x3, 0xa1,
    0xff, 0xcd, 0x56, 0xbf, 0xfc, 0x20, 0xfe, 0xa2,
    0x2a, 0xbf, 0xf8, 0x68, 0x60,

    /* U+7B "{" */
    0xf, 0xf9, 0xbf, 0x48, 0x7f, 0xd7, 0xd, 0x64,
    0x3f, 0xc8, 0x4e, 0xb0, 0x7f, 0xf6, 0x50, 0xff,
    0xe0, 0x5f, 0x4a, 0xa2, 0x1f, 0xf5, 0xd4, 0xaa,
    0x21, 0xff, 0xc1, 0x50, 0x64, 0x3f, 0xfd, 0xc8,
    0x4e, 0xb0, 0x7f, 0xf0, 0x6e, 0x1a, 0xc8, 0x0,

    /* U+7C "|" */
    0x3, 0x52, 0x13, 0xac, 0x1f, 0xfd, 0x37, 0x58,
    0x3f, 0xf8, 0x2e, 0xb0, 0x7f, 0xf4, 0xdd, 0x60,
    0x80,

    /* U+7D "}" */
    0xd, 0x7e, 0x90, 0xff, 0xe1, 0x56, 0x4b, 0x90,
    0xff, 0xe0, 0x2d, 0x4, 0xe1, 0xff, 0xde, 0x43,
    0xff, 0x87, 0x52, 0xaf, 0x90, 0xff, 0x9a, 0x2a,
    0x9e, 0x43, 0xfe, 0xc3, 0x28, 0x3f, 0xfd, 0xb,
    0x82, 0x70, 0xff, 0xab, 0x8b, 0x90, 0xf8,

    /* U+7E "~" */
    0xf, 0x9b, 0xff, 0x48, 0x7c, 0xdf, 0x48, 0x66,
    0xe4, 0x6f, 0x48, 0xdc, 0x8d, 0xc8, 0x28, 0x84,
    0xc8, 0xdc, 0x81, 0xb9, 0x1b, 0x90, 0x5e, 0x40
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 66, .box_w = 6, .box_h = 0, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 46, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 88, .box_w = 18, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 36, .adv_w = 170, .box_w = 36, .box_h = 13, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 134, .box_w = 27, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 192, .adv_w = 222, .box_w = 42, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 152, .box_w = 30, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 46, .box_w = 9, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 354, .adv_w = 77, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 77, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 115, .box_w = 27, .box_h = 8, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 455, .adv_w = 131, .box_w = 30, .box_h = 9, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 485, .adv_w = 46, .box_w = 9, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 493, .adv_w = 90, .box_w = 21, .box_h = 3, .ofs_x = -1, .ofs_y = 5},
    {.bitmap_index = 504, .adv_w = 46, .box_w = 9, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 511, .adv_w = 94, .box_w = 24, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 134, .box_w = 30, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 718, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 134, .box_w = 30, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 926, .adv_w = 134, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 965, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1016, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 46, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1079, .adv_w = 46, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1095, .adv_w = 88, .box_w = 18, .box_h = 7, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1120, .adv_w = 107, .box_w = 21, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1144, .adv_w = 88, .box_w = 18, .box_h = 7, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1171, .adv_w = 122, .box_w = 27, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1223, .adv_w = 219, .box_w = 42, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1314, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1359, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1408, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1457, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1501, .adv_w = 114, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1546, .adv_w = 114, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1587, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1640, .adv_w = 134, .box_w = 27, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1683, .adv_w = 134, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1717, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1755, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1810, .adv_w = 111, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1838, .adv_w = 179, .box_w = 33, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1910, .adv_w = 134, .box_w = 27, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1966, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2012, .adv_w = 136, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2057, .adv_w = 134, .box_w = 27, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2128, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2187, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2246, .adv_w = 142, .box_w = 33, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2283, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2326, .adv_w = 128, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2376, .adv_w = 179, .box_w = 33, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2446, .adv_w = 143, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2520, .adv_w = 134, .box_w = 27, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2564, .adv_w = 127, .box_w = 30, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2625, .adv_w = 68, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2650, .adv_w = 94, .box_w = 24, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2702, .adv_w = 68, .box_w = 15, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2726, .adv_w = 106, .box_w = 24, .box_h = 5, .ofs_x = -1, .ofs_y = 8},
    {.bitmap_index = 2748, .adv_w = 193, .box_w = 42, .box_h = 3, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 2760, .adv_w = 54, .box_w = 15, .box_h = 3, .ofs_x = -1, .ofs_y = 9},
    {.bitmap_index = 2771, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2816, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2865, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2914, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2958, .adv_w = 114, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3003, .adv_w = 114, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3044, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3097, .adv_w = 134, .box_w = 27, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3140, .adv_w = 134, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3174, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3212, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3267, .adv_w = 111, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3295, .adv_w = 179, .box_w = 33, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3367, .adv_w = 134, .box_w = 27, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3423, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3469, .adv_w = 136, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3514, .adv_w = 134, .box_w = 27, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3585, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3644, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3703, .adv_w = 142, .box_w = 33, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 3740, .adv_w = 134, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3783, .adv_w = 128, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3833, .adv_w = 179, .box_w = 33, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3903, .adv_w = 143, .box_w = 27, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3977, .adv_w = 134, .box_w = 27, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4021, .adv_w = 127, .box_w = 30, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 4082, .adv_w = 89, .box_w = 21, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 4122, .adv_w = 46, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4139, .adv_w = 89, .box_w = 21, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 4178, .adv_w = 157, .box_w = 33, .box_h = 3, .ofs_x = -1, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t LcdNova16px = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if LCDNOVA16PX*/
