// global_35.cpp

#include "types.h"

// address: 0x80113024
static unsigned short Em23_life;

// address: 0x80113026
static unsigned short Em23_life_easy;

// address: 0x80113028
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x8011303C
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80113050
static unsigned short Em2b_life;

// address: 0x80113052
static unsigned short Em2b_life_easy;

// address: 0x80113054
static char Em33_me_tate;

// address: 0x80113055
static char Em33_me_yoko;

// address: 0x80113056
static short Em33_me_tate_mv;

// address: 0x80113058
static short Em33_me_yoko_mv;

// address: 0x8011305A
static short Em33_me_tate_a;

// address: 0x8011305C
static short Em33_me_yoko_a;

// address: 0x8011305E
static char Em33_me_tate_d;

// address: 0x8011305F
static char Em33_me_yoko_d;

// address: 0x80113060
// size: 0x14
static short touch_tbl[10];

// address: 0x80113074
// size: 0x14
static short esc_rot_tbl[10];

// address: 0x80113088
// size: 0x14
static unsigned char dieblood_type_tbl[20];

// address: 0x8011309C
// size: 0x4
static unsigned char blood_pos_tbl[4];

// address: 0x801130A0
// size: 0xC
static unsigned char blood_rnd[12];

// address: 0x801130AC
// size: 0x8
static unsigned char Mof_parts[8];

// address: 0x801130B4
// size: 0x20
static void (*Em33_routine_0[8])();

// address: 0x801130D4
// size: 0x28
static void (*Em33_Move_tbl[10])();

// address: 0x801130FC
// size: 0x10
static void (*Mv_tojo_tbl[4])();

// address: 0x8011310C
// size: 0xC
static void (*Mv_atck_tbl[3])();

// address: 0x80113118
// size: 0xC
static void (*Mv_combo_tbl[3])();

// address: 0x80113124
// size: 0xC
static void (*Mv_critical_tbl[3])();

// address: 0x80113130
// size: 0xC
static void (*Mv_jump_tbl[3])();

// address: 0x8011313C
// size: 0xA
static char down_dest_tbl[10];

// address: 0x80113148
// size: 0xC8
static char jump_dest_tbl[200];

// address: 0x80113210
// size: 0x4C
static void (*em33_dmg_init[19])();

// address: 0x8011325C
// size: 0x14
static unsigned char yoro_tbl00[20];

// address: 0x80113270
// size: 0x14
static unsigned char yoro_tbl01[20];

// address: 0x80113284
// size: 0x14
static void (*Em33_sce_tbl[5])();

// address: 0x80113298
// size: 0x10
static void (*pldamage_tbl[4])();

// address: 0x801132A8
// size: 0x4
static unsigned char catch_parts_tbl[4];

// address: 0x801132AC
// size: 0xC
static void (*Mv_core_tbl[3])();

// address: 0x801132B8
// size: 0x3C
static struct _102fake blood_id_tbl[10];

