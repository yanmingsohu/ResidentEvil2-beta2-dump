// global_17.cpp

#include "types.h"

// address: 0x80106024
static unsigned short Em23_life;

// address: 0x80106026
static unsigned short Em23_life_easy;

// address: 0x80106028
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x8010603C
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80106050
static unsigned short Em2b_life;

// address: 0x80106052
static unsigned short Em2b_life_easy;

// address: 0x80106054
static char Em33_me_tate;

// address: 0x80106055
static char Em33_me_yoko;

// address: 0x80106056
static short Em33_me_tate_mv;

// address: 0x80106058
static short Em33_me_yoko_mv;

// address: 0x8010605A
static short Em33_me_tate_a;

// address: 0x8010605C
static short Em33_me_yoko_a;

// address: 0x8010605E
static char Em33_me_tate_d;

// address: 0x8010605F
static char Em33_me_yoko_d;

// address: 0x80106060
// size: 0x14
static short touch_tbl[10];

// address: 0x80106074
// size: 0x14
static short esc_rot_tbl[10];

// address: 0x80106088
// size: 0x14
static unsigned char dieblood_type_tbl[20];

// address: 0x8010609C
// size: 0x4
static unsigned char blood_pos_tbl[4];

// address: 0x801060A0
// size: 0xC
static unsigned char blood_rnd[12];

// address: 0x801060AC
// size: 0x8
static unsigned char Mof_parts[8];

// address: 0x801060B4
// size: 0x20
static void (*Em33_routine_0[8])();

// address: 0x801060D4
// size: 0x28
static void (*Em33_Move_tbl[10])();

// address: 0x801060FC
// size: 0x10
static void (*Mv_tojo_tbl[4])();

// address: 0x8010610C
// size: 0xC
static void (*Mv_atck_tbl[3])();

// address: 0x80106118
// size: 0xC
static void (*Mv_combo_tbl[3])();

// address: 0x80106124
// size: 0xC
static void (*Mv_critical_tbl[3])();

// address: 0x80106130
// size: 0xC
static void (*Mv_jump_tbl[3])();

// address: 0x8010613C
// size: 0xA
static char down_dest_tbl[10];

// address: 0x80106148
// size: 0xC8
static char jump_dest_tbl[200];

// address: 0x80106210
// size: 0x4C
static void (*em33_dmg_init[19])();

// address: 0x8010625C
// size: 0x14
static unsigned char yoro_tbl00[20];

// address: 0x80106270
// size: 0x14
static unsigned char yoro_tbl01[20];

// address: 0x80106284
// size: 0x14
static void (*Em33_sce_tbl[5])();

// address: 0x80106298
// size: 0x10
static void (*pldamage_tbl[4])();

// address: 0x801062A8
// size: 0x4
static unsigned char catch_parts_tbl[4];

// address: 0x801062AC
// size: 0xC
static void (*Mv_core_tbl[3])();

// address: 0x801062B8
// size: 0x3C
static struct _102fake blood_id_tbl[10];

