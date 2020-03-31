// global_a.cpp

#include "types.h"

// address: 0x80105D00
static unsigned short Em23_life;

// address: 0x80105D02
static unsigned short Em23_life_easy;

// address: 0x80105D04
// size: 0x20
static unsigned short Em25_life[16];

// address: 0x80105D24
// size: 0x20
static unsigned short Em25_life_easy[16];

// address: 0x80105D44
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80105D58
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80105D6C
static unsigned short Em2b_life;

// address: 0x80105D6E
static unsigned short Em2b_life_easy;

// address: 0x80105D70
// size: 0x80
static struct _56fake Em25_hit_tbl[4];

// address: 0x80105DF0
// size: 0x20
static void (*Em25_routine_0[8])();

// address: 0x80105E10
// size: 0x10
static void (*Em25_move_tbl[4])();

// address: 0x80105E20
// size: 0x28
static void (*Em25_floor_tbl[10])();

// address: 0x80105E48
// size: 0x2C
static void (*Em25_ceiling_tbl[11])();

// address: 0x80105E74
// size: 0x20
static void (*move_wall_tbl[8])();

// address: 0x80105E94
// size: 0x10
static short ceil_turn_tbl[8];

// address: 0x80105EA4
// size: 0x20
static void (*move_wallset_tbl[8])();

// address: 0x80105EC4
// size: 0x4C
static void (*Em25_dm[19])();

// address: 0x80105F10
// size: 0x10
static void (*dmg_nml_tbl[4])();

// address: 0x80105F20
// size: 0x8
static unsigned char next_rtn_tbl[8];

// address: 0x80105F28
// size: 0x10
static void (*dmg_ftl_tbl[4])();

// address: 0x80105F38
// size: 0xC
static void (*dm_ftl11_tbl[3])();

// address: 0x80105F44
// size: 0xC
static void (*dm_ftl21_tbl[3])();

// address: 0x80105F50
// size: 0x4
static unsigned char hitmark_tbl00[4];

// address: 0x80105F54
// size: 0x4C
static void (*em25_die_tbl[19])();

// address: 0x80105FA0
// size: 0x10
static void (*die_nml_tbl[4])();

// address: 0x80105FB0
// size: 0xC
static void (*die_nml10_tbl[3])();

// address: 0x80105FBC
// size: 0x40
static struct _2fake shibuki_tbl[8];

// address: 0x80105FFC
// size: 0xC
static void (*die_nml20_tbl[3])();

// address: 0x80106008
// size: 0x10
static void (*die_ftl_tbl[4])();

// address: 0x80106018
// size: 0xC
static void (*die_ftl20_tbl[3])();

// address: 0x80106024
// size: 0x8
static unsigned char float_fy[8];

// address: 0x8010602C
// size: 0x42
static struct _99fake blood_id_tbl[11];

// address: 0x80106070
// size: 0x4
static unsigned char foot_se_tbl[4];

// address: 0x80106074
// size: 0x8
static unsigned char biripos_tbl[8];

