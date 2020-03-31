// global_24.cpp

#include "types.h"

// address: 0x80112120
// size: 0x20
static unsigned short Em20_life[16];

// address: 0x80112140
// size: 0x20
static unsigned short Em20_life_easy[16];

// address: 0x80112160
static unsigned short Em23_life;

// address: 0x80112162
static unsigned short Em23_life_easy;

// address: 0x80112164
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80112178
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8011218C
static unsigned short Em2b_life;

// address: 0x8011218E
static unsigned short Em2b_life_easy;

// address: 0x80112190
// size: 0x8
static unsigned char em20_time_tbl00[8];

// address: 0x80112198
// size: 0x8
static unsigned char em20_time_tbl01[8];

// address: 0x801121A0
// size: 0x8
static unsigned char em20_time_tbl02[8];

// address: 0x801121A8
// size: 0x20
static void (*Em20_routine_0[8])();

// address: 0x801121C8
// size: 0xC
static unsigned char em20_routine_tbl[12];

// address: 0x801121D4
// size: 0x44
static void (*em20_move_tbl[17])();

// address: 0x80112218
// size: 0x20
static long yori_ofs[8];

// address: 0x80112238
// size: 0x10
static void (*move_run_tbl[4])();

// address: 0x80112248
// size: 0x10
static unsigned short dash_turn_rnd[8];

// address: 0x80112258
// size: 0x10
static void (*move_atck_tbl[4])();

// address: 0x80112268
// size: 0x10
static void (*move_sleep_tbl[4])();

// address: 0x80112278
// size: 0x4
static unsigned char pl_chi_parts[4];

// address: 0x8011227C
// size: 0x8
static unsigned char house_mot_rnd[8];

// address: 0x80112284
// size: 0xC
static void (*move_rush_tbl[3])();

// address: 0x80112290
// size: 0x10
static void (*move_bodyatck_tbl[4])();

// address: 0x801122A0
// size: 0xC
static void (*move_jumpin_tbl[3])();

// address: 0x801122AC
// size: 0x4C
static void (*em20_dmg_tbl[19])();

// address: 0x801122F8
// size: 0x14
static void (*dmg_nml_tbl[5])();

// address: 0x8011230C
// size: 0x10
static short dir_hosei[8];

// address: 0x8011231C
// size: 0x10
static void (*dmg_combo_tbl[4])();

// address: 0x8011232C
// size: 0x4C
static void (*em20_die_tbl[19])();

// address: 0x80112378
// size: 0x4C
static void (*die_nml_init[19])();

// address: 0x801123C4
// size: 0x10
static void (*die_nml_tbl[4])();

// address: 0x801123D4
// size: 0x8
static void (*die_bang_tbl[2])();

// address: 0x801123DC
// size: 0x8
static unsigned char bang_parts_no[8];

// address: 0x801123E4
// size: 0x10
static void (*die_gnml_tbl[4])();

// address: 0x801123F4
// size: 0x10
static void (*die_spark_tbl[4])();

// address: 0x80112404
// size: 0x4
static unsigned char mot_tbl[4];

// address: 0x80112408
// size: 0x4E
static struct _102fake blood_id_tbl[13];

