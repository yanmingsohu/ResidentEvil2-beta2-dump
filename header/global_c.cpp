// global_c.cpp

#include "types.h"

// address: 0x801034F0
static unsigned short Em23_life;

// address: 0x801034F2
static unsigned short Em23_life_easy;

// address: 0x801034F4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80103508
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8010351C
static unsigned short Em2b_life;

// address: 0x8010351E
static unsigned short Em2b_life_easy;

// address: 0x80103520
// size: 0x20
static void (*Em27_routine_0[8])();

// address: 0x80103540
static void (*Em27_Move_type[])();

// address: 0x80103540
// size: 0x20
static void (*Em27_mv_br_type00[8])();

// address: 0x80103560
// size: 0x20
static void (*Em27_mv_type00[8])();

// address: 0x80103580
// size: 0x48
static void (*Em27_die[18])();

// address: 0x801035C8
// size: 0x4
static void (*Pldamage_Em27_tbl[1])();

// address: 0x801035CC
static void (*Pldie_Em27_tbl[])();

