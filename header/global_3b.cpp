// global_3b.cpp

#include "types.h"

// address: 0x801116B0
static unsigned short Em23_life;

// address: 0x801116B2
static unsigned short Em23_life_easy;

// address: 0x801116B4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x801116C8
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x801116DC
static unsigned short Em2b_life;

// address: 0x801116DE
static unsigned short Em2b_life_easy;

// address: 0x801116E0
// size: 0x20
static void (*Em3a_routine_0[8])();

// address: 0x80111700
// size: 0x30
static void (*Em3a_move_tbl[12])();

// address: 0x80111730
// size: 0x8
static unsigned char atck_rnd00[8];

// address: 0x80111738
// size: 0x8
static unsigned char atck_rnd01[8];

// address: 0x80111740
// size: 0x10
static void (*move_fly_tbl[4])();

// address: 0x80111750
// size: 0x20
static short fly_spd_tbl[16];

// address: 0x80111770
// size: 0x10
static short body_rot_tbl[8];

// address: 0x80111780
// size: 0xC
static void (*move_atck_tbl[3])();

// address: 0x8011178C
// size: 0x4
static unsigned char atck_mset_tbl[4];

// address: 0x80111790
// size: 0xC
static void (*move_wall_tbl[3])();

// address: 0x8011179C
// size: 0x8
static char wall_time_tbl[8];

// address: 0x801117A4
// size: 0xC
static void (*move_wallset_tbl[3])();

// address: 0x801117B0
// size: 0x10
static void (*move_newfly_tbl[4])();

// address: 0x801117C0
// size: 0x4C
static void (*em3a_dmg_tbl[19])();

// address: 0x8011180C
// size: 0x14
static unsigned char dieblood_type_tbl[20];

// address: 0x80111820
// size: 0x14
static unsigned char dieblood_ofs_tbl[20];

// address: 0x80111834
// size: 0x10
static void (*dmg_ftl_tbl[4])();

// address: 0x80111844
// size: 0x10
static void (*dmg_fire_tbl[4])();

// address: 0x80111854
// size: 0xC
static unsigned long wing_rgb_tbl[3];

// address: 0x80111860
// size: 0x10
static void (*dmg_fire2_tbl[4])();

// address: 0x80111870
// size: 0x4C
static void (*em3a_die_tbl[19])();

// address: 0x801118BC
// size: 0xC
static void (*die_nml_tbl[3])();

// address: 0x801118C8
// size: 0xC
static void (*die_fire_tbl[3])();

// address: 0x801118D4
// size: 0x4
static unsigned char dmg_parts_rnd[4];

// address: 0x801118D8
// size: 0xC
static void (*wing_move_tbl[3])();

// address: 0x801118E4
// size: 0x4E
static struct _102fake blood_id_tbl[13];

// address: 0x80111934
// size: 0x90
static short fire_ofs_tbl[72];

