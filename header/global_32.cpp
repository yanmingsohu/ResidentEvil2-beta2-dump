// global_32.cpp

#include "types.h"

// address: 0x8010F050
static unsigned short Em23_life;

// address: 0x8010F052
static unsigned short Em23_life_easy;

// address: 0x8010F054
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x8010F068
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8010F07C
static unsigned short Em2b_life;

// address: 0x8010F07E
static unsigned short Em2b_life_easy;

// address: 0x8010F080
// size: 0x20
static void (*Em2f_routine_0[8])();

// address: 0x8010F0A0
// size: 0x28
static void (*Mv_move_tbl[10])();

// address: 0x8010F0C8
// size: 0xC
static void (*move_atck_tbl[3])();

// address: 0x8010F0D4
// size: 0x8
static unsigned char atck_wait_tbl[8];

// address: 0x8010F0DC
// size: 0x14
static void (*Em2f_dmg_tbl[5])();

// address: 0x8010F0F0
// size: 0x8
static void (*dmg_omake_tbl[2])();

// address: 0x8010F0F8
// size: 0x4C
static void (*em2f_die_tbl[19])();

// address: 0x8010F144
// size: 0x24
static struct _108fake blood_id_tbl[6];

// address: 0x8010F168
// size: 0x28
static struct _104fake Iv_jh0_tbl[10];

// address: 0x8010F190
// size: 0x38
static struct _105fake Iv_jh0_head[1];

// address: 0x8010F1C8
// size: 0x34
static struct _104fake Iv_jh1_tbl[13];

// address: 0x8010F1FC
// size: 0x38
static struct _105fake Iv_jh1_head[1];

