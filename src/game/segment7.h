#ifndef SEGMENT_7_H
#define SEGMENT_7_H

#include "types.h"

// from main menu segment 7
extern u8 dl_menu_idle_hand[];
extern u8 dl_menu_grabbing_hand[];
extern u8 menu_hud_lut[];
extern u8 menu_font_lut[];
extern u8 dl_menu_ia8_text_begin[];
extern u8 dl_menu_ia8_text_end[];
extern u8 dl_menu_rgba16_wood_course[];
#if defined(VERSION_EU)
extern u8 dl_menu_rgba16_wood_course_end[];
extern u8 dl_menu_texture_course_upper[];
extern u8 dl_menu_texture_niveau_upper[];
extern u8 dl_menu_texture_kurs_upper[];

extern const u8 eu_course_strings_en_table[];
extern const u8 eu_course_strings_fr_table[];
extern const u8 eu_course_strings_de_table[];
#elif VERSION_ML
extern const u8 us_course_strings_en_table[];
extern const u8 eu_course_strings_en_table[];
extern const u8 jp_course_strings_jp_table[];
extern const u8 eu_course_strings_fr_table[];
extern const u8 eu_course_strings_de_table[];
#endif

// from intro_segment7
extern Gfx *intro_seg7_dl_0700B3A0;
extern Gfx *intro_seg7_dl_0700C6A0;
extern f32 intro_seg7_table_0700C790[];
extern f32 intro_seg7_table_0700C880[];

#endif /* SEGMENT_7_H */
