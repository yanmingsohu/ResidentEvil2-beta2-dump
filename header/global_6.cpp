// global_6.cpp

#include "types.h"

// address: 0x80105120
// size: 0x20
static unsigned short Em20_life[16];

// address: 0x80105140
// size: 0x20
static unsigned short Em20_life_easy[16];

// address: 0x80105160
static unsigned short Em23_life;

// address: 0x80105162
static unsigned short Em23_life_easy;

// address: 0x80105164
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80105178
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8010518C
static unsigned short Em2b_life;

// address: 0x8010518E
static unsigned short Em2b_life_easy;

// address: 0x80105190
// size: 0x8
static unsigned char em20_time_tbl00[8];

// address: 0x80105198
// size: 0x8
static unsigned char em20_time_tbl01[8];

// address: 0x801051A0
// size: 0x8
static unsigned char em20_time_tbl02[8];

// address: 0x801051A8
// size: 0x20
static void (*Em20_routine_0[8])();

// address: 0x801051C8
// size: 0xC
static unsigned char em20_routine_tbl[12];

// address: 0x801051D4
// size: 0x44
static void (*em20_move_tbl[17])();

// address: 0x80105218
// size: 0x20
static long yori_ofs[8];

// address: 0x80105238
// size: 0x10
static void (*move_run_tbl[4])();

// address: 0x80105248
// size: 0x10
static unsigned short dash_turn_rnd[8];

// address: 0x80105258
// size: 0x10
static void (*move_atck_tbl[4])();

// address: 0x80105268
// size: 0x10
static void (*move_sleep_tbl[4])();

// address: 0x80105278
// size: 0x4
static unsigned char pl_chi_parts[4];

// address: 0x8010527C
// size: 0x8
static unsigned char house_mot_rnd[8];

// address: 0x80105284
// size: 0xC
static void (*move_rush_tbl[3])();

// address: 0x80105290
// size: 0x10
static void (*move_bodyatck_tbl[4])();

// address: 0x801052A0
// size: 0xC
static void (*move_jumpin_tbl[3])();

// address: 0x801052AC
// size: 0x4C
static void (*em20_dmg_tbl[19])();

// address: 0x801052F8
// size: 0x14
static void (*dmg_nml_tbl[5])();

// address: 0x8010530C
// size: 0x10
static short dir_hosei[8];

// address: 0x8010531C
// size: 0x10
static void (*dmg_combo_tbl[4])();

// address: 0x8010532C
// size: 0x4C
static void (*em20_die_tbl[19])();

// address: 0x80105378
// size: 0x4C
static void (*die_nml_init[19])();

// address: 0x801053C4
// size: 0x10
static void (*die_nml_tbl[4])();

// address: 0x801053D4
// size: 0x8
static void (*die_bang_tbl[2])();

// address: 0x801053DC
// size: 0x8
static unsigned char bang_parts_no[8];

// address: 0x801053E4
// size: 0x10
static void (*die_gnml_tbl[4])();

// address: 0x801053F4
// size: 0x10
static void (*die_spark_tbl[4])();

// address: 0x80105404
// size: 0x4
static unsigned char mot_tbl[4];

// address: 0x80105408
// size: 0x4E
static struct _102fake blood_id_tbl[13];

