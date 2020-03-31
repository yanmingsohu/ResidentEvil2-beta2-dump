// global_e.cpp

#include "types.h"

// address: 0x80101C50
static unsigned long Hold_info;

// address: 0x80101C54
static unsigned long Hold_num;

// address: 0x80101C58
static unsigned long Critical_flg;

// address: 0x80101C5C
static unsigned long Hold_time;

// address: 0x80101A90
// size: 0x1C0
static struct _99fake Hold_tbl[32];

// address: 0x80101A40
// size: 0x20
static void (*Em29_routine_0[8])();

// address: 0x80101A60
// size: 0x14
static void (*Em29_mv_br[5])();

// address: 0x80101A74
// size: 0x14
static void (*Em29_mv[5])();

// address: 0x80101A88
// size: 0x8
static void (*Em29_die[2])();

// address: 0x80101A38
// size: 0x8
static void (*Em29_pldm_tbl[2])();

