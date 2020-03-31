// global_1a.cpp

#include "types.h"

// address: 0x80104590
static unsigned short Em23_life;

// address: 0x80104592
static unsigned short Em23_life_easy;

// address: 0x80104594
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x801045A8
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x801045BC
static unsigned short Em2b_life;

// address: 0x801045BE
static unsigned short Em2b_life_easy;

// address: 0x801045C0
// size: 0x20
static short Em37_pos_xyz[4][4];

// address: 0x801045E0
// size: 0x20
static void (*Em37_routine_0[8])();

// address: 0x80104600
// size: 0x8
static void (*Em37_Move_type[2])();

// address: 0x80104608
// size: 0x3C
static void (*Em37_mv_br_type00[15])();

// address: 0x80104644
// size: 0x3C
static void (*Em37_mv_type00[15])();

// address: 0x80104680
static void (*Em37_mv_br_type01[])();

// address: 0x80104680
static void (*Em37_mv_type01[])();

// address: 0x80104680
// size: 0x8
static unsigned char Em37_mv03_tbl[4][2];

// address: 0x80104688
// size: 0x8
static short Em37_mv03_dir_tbl[4];

// address: 0x80104690
// size: 0x30
static short Em37_mv08_tbl[6][4];

// address: 0x801046C0
// size: 0x80
static short Em37_mv0b_tbl[4][16];

// address: 0x80104740
static void (*Em37_dm[9][])();

// address: 0x80104740
// size: 0x24
static unsigned char Em37_Dm_cnt[2][18];

// address: 0x80104764
static void (*Em37_die[9][])();

// address: 0x80104764
static void (*Em37_sce[])();

// address: 0x80104764
// size: 0xC
static void (*Pldamage_Em37_tbl[3])();

// address: 0x80104770
static void (*Pldie_Em37_tbl[])();

// address: 0x80104770
// size: 0x78
static struct _115fake G5s_jh0_tbl[30];

// address: 0x801047E8
// size: 0x38
static struct _116fake G5s_jh0_head[1];

// address: 0x80104820
// size: 0x50
static struct _115fake G5s_jh1_tbl[20];

// address: 0x80104870
// size: 0x38
static struct _116fake G5s_jh1_head[1];

// address: 0x801048A8
// size: 0x40
static struct _115fake G5s_jh2_tbl[16];

// address: 0x801048E8
// size: 0x38
static struct _116fake G5s_jh2_head[1];

