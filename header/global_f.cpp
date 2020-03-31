// global_f.cpp

#include "types.h"

// address: 0x80104614
static unsigned short Em23_life;

// address: 0x80104616
static unsigned short Em23_life_easy;

// address: 0x80104618
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x8010462C
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80104640
static unsigned short Em2b_life;

// address: 0x80104642
static unsigned short Em2b_life_easy;

// address: 0x80104C50
// size: 0x20
static void (*Em2a_routine_0[8])();

// address: 0x80104C70
// size: 0x48
static void (*Em2a_mv_br[18])();

// address: 0x80104CB8
// size: 0x48
static void (*Em2a_mv[18])();

// address: 0x80104D00
// size: 0x14
static void (*Em2a_damage[5])();

// address: 0x80104D14
static void (*Em2a_die[])();

// address: 0x80104D14
// size: 0xC
static void (*Em2a_pldm_tbl[3])();

// address: 0x80104924
// size: 0x1B0
static struct _107fake Blood_tbl[36];

// address: 0x80104AD4
// size: 0x54
static struct _107fake Flame_tbl[7];

// address: 0x80104B28
// size: 0x120
static struct _108fake Spark_tbl[24];

// address: 0x80104644
// size: 0x88
static struct _104fake Ty_jh0_tbl[34];

// address: 0x801046CC
// size: 0x38
static struct _105fake Ty_jh0_head[1];

// address: 0x80104704
// size: 0x98
static struct _104fake Ty_jh1_tbl[38];

// address: 0x8010479C
// size: 0x38
static struct _105fake Ty_jh1_head[1];

// address: 0x801047D4
// size: 0x98
static struct _104fake Ty_jh2_tbl[38];

// address: 0x8010486C
// size: 0x38
static struct _105fake Ty_jh2_head[1];

// address: 0x801048A4
// size: 0x8
static struct _104fake Ty_jh3_tbl[2];

// address: 0x801048AC
// size: 0x38
static struct _105fake Ty_jh3_head[1];

// address: 0x801048E4
// size: 0x8
static struct _104fake Ty_jh4_tbl[2];

// address: 0x801048EC
// size: 0x38
static struct _105fake Ty_jh4_head[1];

// address: 0x80104C48
// size: 0x8
static unsigned char Em2a_sce_rtn[8];

