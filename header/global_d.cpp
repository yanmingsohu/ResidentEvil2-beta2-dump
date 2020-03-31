// global_d.cpp

#include "types.h"

// address: 0x80105FBC
static unsigned short Em23_life;

// address: 0x80105FBE
static unsigned short Em23_life_easy;

// address: 0x80105FC0
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80105FD4
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80105FE8
static unsigned short Em2b_life;

// address: 0x80105FEA
static unsigned short Em2b_life_easy;

// address: 0x80105FEC
// size: 0x20
static void (*Em28_routine_0[8])();

// address: 0x8010600C
// size: 0x40
static char Em28_iki[64];

// address: 0x8010604C
static char Em28_me_tate;

// address: 0x8010604D
static char Em28_me_yoko;

// address: 0x8010604E
static short Em28_me_tate_mv;

// address: 0x80106050
static short Em28_me_yoko_mv;

// address: 0x80106052
static short Em28_me_tate_a;

// address: 0x80106054
static short Em28_me_yoko_a;

// address: 0x80106056
static char Em28_me_tate_d;

// address: 0x80106057
static char Em28_me_yoko_d;

// address: 0x80106058
// size: 0x8
static void (*Em28_Move_type[2])();

// address: 0x80106060
// size: 0x28
static void (*Em28_mv_br_type00[10])();

// address: 0x80106088
// size: 0x28
static void (*Em28_mv_type00[10])();

// address: 0x801060B0
static void (*Em28_mv_br_type01[])();

// address: 0x801060B0
static void (*Em28_mv_type01[])();

// address: 0x801060B0
// size: 0x288
static void (*Em28_dm[9][18])();

// address: 0x80106338
// size: 0x24
static unsigned char Em28_Dm_cnt[2][18];

// address: 0x8010635C
static void (*Em28_die[9][])();

// address: 0x8010635C
static void (*Em28_sce[])();

// address: 0x8010635C
// size: 0x8
static void (*Pldamage_Em28_tbl[2])();

// address: 0x80106364
static void (*Pldie_Em28_tbl[])();

