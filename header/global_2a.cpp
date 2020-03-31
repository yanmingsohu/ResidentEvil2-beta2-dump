// global_2a.cpp

#include "types.h"

// address: 0x801104F0
static unsigned short Em23_life;

// address: 0x801104F2
static unsigned short Em23_life_easy;

// address: 0x801104F4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80110508
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8011051C
static unsigned short Em2b_life;

// address: 0x8011051E
static unsigned short Em2b_life_easy;

// address: 0x80110520
// size: 0x20
static void (*Em27_routine_0[8])();

// address: 0x80110540
static void (*Em27_Move_type[])();

// address: 0x80110540
// size: 0x20
static void (*Em27_mv_br_type00[8])();

// address: 0x80110560
// size: 0x20
static void (*Em27_mv_type00[8])();

// address: 0x80110580
// size: 0x48
static void (*Em27_die[18])();

// address: 0x801105C8
// size: 0x4
static void (*Pldamage_Em27_tbl[1])();

// address: 0x801105CC
static void (*Pldie_Em27_tbl[])();

