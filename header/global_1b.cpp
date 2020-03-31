// global_1b.cpp

#include "types.h"

// address: 0x801008D0
static unsigned short Em23_life;

// address: 0x801008D2
static unsigned short Em23_life_easy;

// address: 0x801008D4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x801008E8
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x801008FC
static unsigned short Em2b_life;

// address: 0x801008FE
static unsigned short Em2b_life_easy;

// address: 0x80100900
// size: 0x20
static void (*Em38_routine_0[8])();

// address: 0x80100920
// size: 0x8
static void (*Em38_Move_type[2])();

// address: 0x80100928
// size: 0x8
static void (*Em38_mv_br_type00[2])();

// address: 0x80100930
// size: 0x8
static void (*Em38_mv_type00[2])();

// address: 0x80100938
static void (*Em38_mv_br_type01[])();

// address: 0x80100938
static void (*Em38_mv_type01[])();

// address: 0x80100938
// size: 0x264
static void (*Em38_dm[9][17])();

// address: 0x80100B9C
// size: 0x22
static unsigned char Em38_Dm_cnt[2][17];

// address: 0x80100BC0
// size: 0x264
static void (*Em38_die[9][17])();

// address: 0x80100E24
static void (*Em38_sce[])();

// address: 0x80100E24
// size: 0x8
static void (*Pldamage_Em38_tbl[2])();

// address: 0x80100E2C
static void (*Pldie_Em38_tbl[])();

