// global_1e.cpp

#include "types.h"

// address: 0x801012F0
static unsigned short Em23_life;

// address: 0x801012F2
static unsigned short Em23_life_easy;

// address: 0x801012F4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80101308
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8010131C
static unsigned short Em2b_life;

// address: 0x8010131E
static unsigned short Em2b_life_easy;

// address: 0x80101320
// size: 0x20
static void (*Em3b_routine_0[8])();

// address: 0x80101340
// size: 0xC
static unsigned char init_routine_tbl[12];

// address: 0x8010134C
// size: 0x4
static unsigned char set_max_tbl[4];

// address: 0x80101350
// size: 0x18
static void (*em3b_move_tbl[6])();

// address: 0x80101368
// size: 0xC
static void (*move_oya_tbl[3])();

// address: 0x80101374
// size: 0x8
static unsigned char set_int_tbl[8];

// address: 0x8010137C
// size: 0xC
static void (*move_oya2_tbl[3])();

// address: 0x80101388
// size: 0x14
static unsigned char dieblood_type_tbl[20];

// address: 0x8010139C
// size: 0x14
static unsigned char die_time_tbl[20];

// address: 0x801013B0
// size: 0x1E
static struct _102fake blood_id_tbl[5];

