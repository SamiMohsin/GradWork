#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 62 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifndef PLAYERICONS62PX
#define PLAYERICONS62PX 1
#endif

#if PLAYERICONS62PX

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+E800 "" */
    0xf, 0xff, 0xf8, 0x7f, 0xf3, 0x5b, 0x90, 0xff,
    0xff, 0x8d, 0xe9, 0xf, 0xff, 0xd2, 0x1c, 0xdc,
    0x87, 0xff, 0xdb, 0xf, 0xe6, 0xf4, 0x87, 0xff,
    0xc5, 0xf, 0xfe, 0x13, 0x72, 0x1f, 0xff, 0xf1,
    0xbd, 0x21, 0xff, 0xeb, 0x43, 0xff, 0x90, 0xde,
    0x83, 0xff, 0xcf, 0x87, 0xff, 0x35, 0xf4, 0x87,
    0xff, 0x89, 0xf, 0xfe, 0x8b, 0x7a, 0x43, 0xff,
    0xfe, 0x37, 0x21, 0xff, 0xff, 0x1b, 0xd2, 0x1f,
    0xff, 0xf1, 0xbd, 0x7, 0xff, 0xfc, 0xf, 0xa4,
    0x3f, 0xff, 0xe3, 0x7a, 0x43, 0xff, 0xfe, 0x37,
    0x21, 0xff, 0xfe, 0x68, 0x87, 0xff, 0x29, 0xf,
    0xff, 0x1b, 0x7a, 0x43, 0xff, 0x97, 0x87, 0xff,
    0x85, 0xb9, 0xf, 0xfe, 0x72, 0x1f, 0xfd, 0xe6,
    0xf4, 0x87, 0xff, 0x47, 0x43, 0xff, 0xb4, 0xdc,
    0x87, 0xff, 0x51, 0xf, 0xfe, 0xc3, 0x7a, 0x43,
    0xff, 0xac, 0xe8, 0x7f, 0xf4, 0xdb, 0xd2, 0x1f,
    0xfd, 0xad, 0xf, 0xfe, 0x8b, 0x72, 0x1f, 0xfd,
    0xd5, 0x7, 0xff, 0x39, 0xbd, 0x21, 0xff, 0xdf,
    0x70, 0xff, 0xe5, 0xb7, 0xa4, 0x3f, 0xfc, 0x4e,
    0x87, 0xff, 0x21, 0xb9, 0xf, 0xff, 0x2b, 0xa1,
    0xff, 0xc5, 0x6f, 0x48, 0x7f, 0xf9, 0xd9, 0xf,
    0xfe, 0x1b, 0x72, 0x1f, 0xfe, 0xaa, 0x7, 0xff,
    0x5, 0xbd, 0x21, 0xff, 0xeb, 0x64, 0x3f, 0xcd,
    0xe9, 0xf, 0xff, 0x73, 0xa1, 0xf9, 0xb9, 0xf,
    0xff, 0x8b, 0x21, 0xcd, 0xe9, 0xf, 0xff, 0x93,
    0x40, 0xcf, 0xa4, 0x3f, 0xfe, 0xac, 0x8d, 0xe8,
    0x3f, 0xff, 0xf, 0x7a, 0x43, 0xff, 0xf6, 0xc8,
    0x7f, 0xff, 0x0,

    /* U+E801 "" */
    0xf, 0xff, 0x7b, 0x72, 0x1f, 0xfe, 0x94, 0x6e,
    0x43, 0xff, 0xd6, 0xde, 0x90, 0xff, 0xf5, 0xb7,
    0xa4, 0x3f, 0xfd, 0x6d, 0xe8, 0x3f, 0xfd, 0x8f,
    0xa4, 0x3f, 0xfd, 0x6d, 0xe9, 0xf, 0xff, 0x5b,
    0x7a, 0x43, 0xff, 0xd6, 0xdc, 0x87, 0xff, 0xad,
    0xbd, 0x21, 0xff, 0xeb, 0x6f, 0x48, 0x7f, 0xfa,
    0xdb, 0x90, 0xff, 0xf5, 0xb7, 0xa4, 0x3f, 0xfd,
    0x6d, 0xe4, 0x3f, 0xfd, 0x98, 0x7f, 0xff, 0xc3,
    0xff, 0xfe, 0x1f, 0xff, 0xf0, 0xff, 0xff, 0x87,
    0xff, 0xfc, 0x3f, 0xff, 0xe1, 0xff, 0xff, 0xf,
    0xff, 0xf8, 0x7f, 0xff, 0xc3, 0xff, 0xfe, 0x1f,
    0xff, 0xf0, 0xff, 0xff, 0x87, 0xff, 0xe3, 0xf,
    0xff, 0x5a, 0x1f, 0xfe, 0xb7, 0x43, 0xff, 0xd5,
    0xa1, 0xff, 0xea, 0x43, 0xff, 0xd6, 0xe8, 0x7f,
    0xfa, 0x5d, 0xf, 0xff, 0x56, 0x87, 0xff, 0xa5,
    0x90, 0xff, 0xf4, 0xba, 0x1f, 0xfe, 0x97, 0x43,
    0xff, 0xd2, 0xe8, 0x7f, 0xfa, 0x59, 0xf, 0xff,
    0x4d, 0x3, 0xff, 0xd2, 0xc8, 0x7f, 0xfa, 0x68,
    0x87, 0xff, 0xa1, 0x90, 0xff, 0xf4, 0xb2, 0x1f,
    0xfe, 0x76, 0xe0, 0xff, 0xf2, 0xb7, 0xa4, 0x3f,
    0xfc, 0x6d, 0xe9, 0xf, 0xff, 0x1b, 0x7a, 0x43,
    0xff, 0xc6, 0xde, 0x90, 0xff, 0xf1, 0xb7, 0xa4,
    0x3f, 0xfc, 0x6d, 0xe9, 0xf, 0xff, 0x12, 0xaf,
    0x48, 0x7f, 0xf9, 0x5a, 0x21, 0xff, 0xe7
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 703, .box_w = 78, .box_h = 37, .ofs_x = 10, .ofs_y = 1},
    {.bitmap_index = 219, .adv_w = 703, .box_w = 57, .box_h = 59, .ofs_x = 12, .ofs_y = -8}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 59392, .range_length = 2, .glyph_id_start = 1,
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
lv_font_t PlayerIcons62px = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 59,          /*The maximum line height required by the font*/
    .base_line = 8,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if PLAYERICONS62PX*/

