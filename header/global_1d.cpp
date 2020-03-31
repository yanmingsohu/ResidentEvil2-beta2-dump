// global_1d.cpp

#include "types.h"

// address: 0x801046B0
static unsigned short Em23_life;

// address: 0x801046B2
static unsigned short Em23_life_easy;

// address: 0x801046B4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x801046C8
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x801046DC
static unsigned short Em2b_life;

// address: 0x801046DE
static unsigned short Em2b_life_easy;

// address: 0x801046E0
// size: 0x20
static void (*Em3a_routine_0[8])();

// address: 0x80104700
// size: 0x30
static void (*Em3a_move_tbl[12])();

// address: 0x80104730
// size: 0x8
static unsigned char atck_rnd00[8];

// address: 0x80104738
// size: 0x8
static unsigned char atck_rnd01[8];

// address: 0x80104740
// size: 0x10
static void (*move_fly_tbl[4])();

// address: 0x80104750
// size: 0x20
static short fly_spd_tbl[16];

// address: 0x80104770
// size: 0x10
static short body_rot_tbl[8];

// address: 0x80104780
// size: 0xC
static void (*move_atck_tbl[3])();

// address: 0x8010478C
// size: 0x4
static unsigned char atck_mset_tbl[4];

// address: 0x80104790
// size: 0xC
static void (*move_wall_tbl[3])();

// address: 0x8010479C
// size: 0x8
static char wall_time_tbl[8];

// address: 0x801047A4
// size: 0xC
static void (*move_wallset_tbl[3])();

// address: 0x801047B0
// size: 0x10
static void (*move_newfly_tbl[4])();

// address: 0x801047C0
// size: 0x4C
static void (*em3a_dmg_tbl[19])();

// address: 0x8010480C
// size: 0x14
static unsigned char dieblood_type_tbl[20];

// address: 0x80104820
// size: 0x14
static unsigned char dieblood_ofs_tbl[20];

// address: 0x80104834
// size: 0x10
static void (*dmg_ftl_tbl[4])();

// address: 0x80104844
// size: 0x10
static void (*dmg_fire_tbl[4])();

// address: 0x80104854
// size: 0xC
static unsigned long wing_rgb_tbl[3];

// address: 0x80104860
// size: 0x10
static void (*dmg_fire2_tbl[4])();

// address: 0x80104870
// size: 0x4C
static void (*em3a_die_tbl[19])();

// address: 0x801048BC
// size: 0xC
static void (*die_nml_tbl[3])();

// address: 0x801048C8
// size: 0xC
static void (*die_fire_tbl[3])();

// address: 0x801048D4
// size: 0x4
static unsigned char dmg_parts_rnd[4];

// address: 0x801048D8
// size: 0xC
static void (*wing_move_tbl[3])();

// address: 0x801048E4
// size: 0x4E
static struct _102fake blood_id_tbl[13];

// address: 0x80104934
// size: 0x90
static short fire_ofs_tbl[72];

