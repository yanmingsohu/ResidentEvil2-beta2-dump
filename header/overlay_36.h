#include "types.h"

// === [ Overlay ID 36 ] ===

// address: 0x80116720
static unsigned short Chg_t;

// address: 0x801162E8
static unsigned short Em23_life;

// address: 0x801162EA
static unsigned short Em23_life_easy;

// address: 0x801162EC
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80116300
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80116314
static unsigned short Em2b_life;

// address: 0x80116316
static unsigned short Em2b_life_easy;

// address: 0x80116318
// size: 0x8
static struct _2fake Em34_T_PL_POS;

// address: 0x80116320
static short Em34_pl_dir;

// address: 0x80116324
// size: 0x24
static short Em34_hosei_pos[2][9];

// address: 0x80116348
// size: 0x20
static short Em34_mv10_pos[2][8];

// address: 0x80116368
static unsigned char Em34_uppos;

// address: 0x8011636C
// size: 0x4
static unsigned char Em34_uppos_no[4];

// address: 0x80116370
// size: 0x40
static short Em34_mv10_downpos[2][16];

// address: 0x801163B0
static unsigned char Em34_pl_downpos_no;

// address: 0x801163B2
static short Em34_back_pos_x;

// address: 0x801163B4
static short Em34_back_pos_z;

// address: 0x801163B6
static short Em34_sake_cnt;

// address: 0x801163B8
// size: 0x20
static void (*Em34_routine_0[8])();

// address: 0x801163D8
// size: 0x4
static unsigned char Em34_Me3_0[4];

// address: 0x801163DC
// size: 0xF
static unsigned char Em34_Me4_0[15];

// address: 0x801163EC
// size: 0x9
static unsigned char Em34_Me3_1[9];

// address: 0x801163F8
// size: 0x1
static unsigned char Em34_Me4_1[1];

// address: 0x801163FC
// size: 0xD
static unsigned char Em34_Me3_2[13];

// address: 0x8011640C
// size: 0x6
static unsigned char Em34_Me4_2[6];

// address: 0x80116414
// size: 0x54
static struct _118fake Em34_Me[3];

// address: 0x80116468
static unsigned char Em34_init_flg;

// address: 0x8011646C
// size: 0x8
static void (*Em34_Move_type[2])();

// address: 0x80116474
// size: 0x48
static void (*Em34_mv_br_type00[18])();

// address: 0x801164BC
// size: 0x48
static void (*Em34_mv_type00[18])();

// address: 0x80116504
static void (*Em34_mv_br_type01[])();

// address: 0x80116504
static void (*Em34_mv_type01[])();

// address: 0x80116504
// size: 0x40
static char Em34_iki[64];

// address: 0x80116544
// size: 0x4
static unsigned char Em34_mv02_tbl[2][2];

// address: 0x80116548
// size: 0x8
static short Em34_mv05_dir[4];

// address: 0x80116550
// size: 0x12
static unsigned char Em34_Dm_cnt[18];

// address: 0x80116564
// size: 0x8
static void (*Em34_Damage_type[2])();

// address: 0x8011656C
static void (*Em34_sce[])();

// address: 0x8011656C
// size: 0x8
static void (*Pldamage_Em34_tbl[2])();

// address: 0x80116574
// size: 0xC
static void (*Pldie_Em34_tbl[3])();

// address: 0x80116580
// size: 0x1C
static void (*Em34_kuchi_move_tbl[7])();

// address: 0x8011659C
// size: 0x6
static short Em34_kuchi_mv1_tbl[3];

// address: 0x801165A4
// size: 0x40
static short Em34_kuchi_mv2_tbl[32];

// address: 0x801165E4
// size: 0x10
static long Em34_m03_sabun[4];

// address: 0x801165F4
// size: 0xF4
static struct _115fake Em34_jh0_tbl[61];

// address: 0x801166E8
// size: 0x38
static struct _116fake Em34_jh0_head[1];

// address: 0x8010D12C
// line start: 89
// line end:   211
void Em234(struct _74fake *pEm) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 4
	// size: 0x1C
	register struct _62fake *pK9;
	{
		{
			{
			}
		}
	}
}


// address: 0x8010D598
// line start: 222
// line end:   225
void Em34_after(struct _74fake *pEm);

// address: 0x8010D5CC
// line start: 231
// line end:   399
void Em34_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 18
	register unsigned long i;
	{
	}
}


// address: 0x8010D988
// line start: 410
// line end:   418
void Em34_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D9EC
// line start: 441
// line end:   447
void Em34_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DA70
// line start: 458
// line end:   464
void Em34_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DAF4
// line start: 471
// line end:   482
void Em34_mv00_br(struct _74fake *pEm) {
}


// address: 0x8010DB54
// line start: 498
// line end:   702
void Em34_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	register unsigned long i;
	// register: 3
	// size: 0x1C
	register struct _62fake *pK9;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
		}
	}
}


// address: 0x8010E204
// line start: 707
// line end:   745
void Em34_mv01_br(struct _74fake *pEm) {
	// register: 3
	register short Dir2;
	// register: 18
	register unsigned long LL;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _1fake V;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010E2F8
// line start: 747
// line end:   801
void Em34_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Tv;
	{
		{
		}
	}
}


// address: 0x8010E4F4
// line start: 806
// line end:   809
void Em34_mv02_br(struct _74fake *pEm);

// address: 0x8010E4FC
// line start: 815
// line end:   1050
void Em34_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv1;
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	// register: 16
	register short Ck;
	{
		{
			{
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x8010EE2C
// line start: 1056
// line end:   1186
void Em34_mv03_br(struct _74fake *pEm) {
	// register: 21
	register short Dir0;
	// register: 20
	register short Dir1;
	// register: 19
	register short Dir2;
	// register: 4
	register short Dir3;
	// register: 18
	register unsigned long LL;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct _1fake V;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010F290
// line start: 1188
// line end:   1246
void Em34_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Tv;
	{
	}
}


// address: 0x8010F474
// line start: 1251
// line end:   1253
void Em34_mv04_br(struct _74fake *pEm);

// address: 0x8010F47C
// line start: 1255
// line end:   1437
void Em34_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFA8
	// size: 0x8
	auto char Em34_mv04_z[8];
	// register: 22
	register short Do_x;
	// register: 21
	register short Do_z;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB8
	// size: 0x10
	auto struct _1fake Tv;
	{
		{
			{
				{
					{
						{
							{
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8010FB2C
// line start: 1443
// line end:   1445
void Em34_mv05_br(struct _74fake *pEm);

// address: 0x8010FB34
// line start: 1453
// line end:   1715
void Em34_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register short Ck;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _1fake Tv;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	register unsigned long L;
	{
		{
			{
				{
					{
						{
							{
								{
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801103CC
// line start: 1720
// line end:   1722
void Em34_mv06_br(struct _74fake *pEm);

// address: 0x801103D4
// line start: 1724
// line end:   1767
void Em34_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80110500
// line start: 1772
// line end:   1774
void Em34_mv07_br(struct _74fake *pEm);

// address: 0x80110508
// line start: 1776
// line end:   1912
void Em34_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	register short Ck;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
			{
			}
		}
	}
}


// address: 0x801109DC
// line start: 1917
// line end:   1949
void Em34_mv08_br(struct _74fake *pEm) {
	// register: 18
	register unsigned long LL;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _1fake V;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80110AB4
// line start: 1951
// line end:   1976
void Em34_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80110BE4
// line start: 1981
// line end:   1983
void Em34_mv09_br(struct _74fake *pEm);

// address: 0x80110BEC
// line start: 1985
// line end:   2000
void Em34_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80110C9C
// line start: 2005
// line end:   2006
void Em34_mv0a_br(struct _74fake *pEm);

// address: 0x80110CA4
// line start: 2008
// line end:   2023
void Em34_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80110D54
// line start: 2028
// line end:   2030
void Em34_mv0b_br(struct _74fake *pEm);

// address: 0x80110D5C
// line start: 2032
// line end:   2194
void Em34_mv0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	register short Dir;
	// register: 2
	register short Ck;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 2
	register unsigned long X;
	// register: 2
	register unsigned long Z;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Tv;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80111288
// line start: 2199
// line end:   2201
void Em34_mv0c_br(struct _74fake *pEm);

// address: 0x80111290
// line start: 2203
// line end:   2252
void Em34_mv0c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80111484
// line start: 2258
// line end:   2260
void Em34_mv0d_br(struct _74fake *pEm);

// address: 0x8011148C
// line start: 2262
// line end:   2317
void Em34_mv0d(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80111674
// line start: 2322
// line end:   2324
void Em34_mv0e_br(struct _74fake *pEm);

// address: 0x8011167C
// line start: 2326
// line end:   2431
void Em34_mv0e(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	// register: 16
	register short Ck;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80111A10
// line start: 2436
// line end:   2438
void Em34_mv0f_br(struct _74fake *pEm);

// address: 0x80111A18
// line start: 2440
// line end:   2511
void Em34_mv0f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
			{
			}
		}
	}
}


// address: 0x80111D20
// line start: 2516
// line end:   2518
void Em34_mv10_br(struct _74fake *pEm);

// address: 0x80111D28
// line start: 2520
// line end:   2657
void Em34_mv10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _1fake Tv;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
	// register: 2
	register unsigned long X;
	// register: 2
	register unsigned long Z;
	// register: 21
	register short D_x;
	// register: 22
	register short D_z;
	{
		{
		}
	}
}


// address: 0x801121A0
// line start: 2662
// line end:   2670
int Em34_Tume_color(struct _74fake *pEm, unsigned long Flg) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801121F4
// line start: 2723
// line end:   2739
void Em34_firedm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80112330
// line start: 2744
// line end:   2760
void Em34_ryudm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8011246C
// line start: 2765
// line end:   2784
void Em34_bomdm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80112600
// line start: 2789
// line end:   2851
void Em34_spdm(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80112A04
// line start: 2857
// line end:   2950
void Em34_mgdm(struct _74fake *pEm) {
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv2;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
	}
}


// address: 0x8011309C
// line start: 2957
// line end:   2958
void Em34_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801130DC
// line start: 2965
// line end:   3070
void Em34_Damage_33(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv0;
	// register: 20
	register short Ck;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x80113500
// line start: 3075
// line end:   3088
void Em34_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113588
// line start: 3094
// line end:   3205
void Em34_Damage_34(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv0;
	// register: 20
	register short Ck;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x801139BC
// line start: 3210
// line end:   3211
void Em34_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801139C4
// line start: 3218
// line end:   3219
void Em34_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801139E4
// line start: 3225
// line end:   3315
void Em34_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto short Em34_die00_hen[8];
	{
		{
		}
	}
}


// address: 0x80113D08
// line start: 3328
// line end:   3330
void Em34_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113D44
// line start: 3337
// line end:   3338
void Em34_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113D4C
// line start: 3345
// line end:   3347
void Em34_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113D54
// line start: 3358
// line end:   3363
void Pldamege_Em234(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113D90
// line start: 3368
// line end:   3461
void Em34_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
			{
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x801140CC
// line start: 3465
// line end:   3466
void Em34_pldm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801140D4
// line start: 3478
// line end:   3482
void Pldie_Em234(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80114110
// line start: 3488
// line end:   3628
void Em34_pldie00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	// size: 0xAC
	register struct _65fake *pO;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
			{
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x801144F0
// line start: 3632
// line end:   3725
void Em34_pldie01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
			{
			}
		}
	}
}


// address: 0x80114820
// line start: 3731
// line end:   3749
unsigned long Em34_kabe_dir(struct _74fake *pEm, short Ck) {
	// register: 3
	register unsigned short Cc;
}


// address: 0x80114860
// line start: 3755
// line end:   3771
void Em34_hand_right(struct _74fake *pEm, struct _0fake *pM) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8011491C
// line start: 3775
// line end:   3790
void Em34_hand_left(struct _74fake *pEm, struct _0fake *pM) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801149C8
// line start: 3794
// line end:   3833
void Foot_set_Em34(struct _74fake *pEm, unsigned long Mode, unsigned long Foot_no) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
	// register: 2
	register long x;
	// register: 2
	register long z;
}


// address: 0x80114B30
// line start: 3843
// line end:   3858
void Em34_kuchi_move(struct _74fake *pEm, struct _65fake *pP_ptr) {
}


// address: 0x80114BA0
// line start: 3862
// line end:   3905
void Em34_kuchi_mv0(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80114CDC
// line start: 3916
// line end:   4023
void Em34_kuchi_mv1(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x801150DC
// line start: 4035
// line end:   4066
void Em34_kuchi_mv2(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x80115280
// line start: 4070
// line end:   4115
void Em34_kuchi_mv3(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFF8
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x80115458
// line start: 4119
// line end:   4150
void Em34_kuchi_mv4(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x801155FC
// line start: 4154
// line end:   4182
void Em34_kuchi_mv5(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFF8
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x80115740
// line start: 4186
// line end:   4266
void Em34_kuchi_mv6(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80115A14
// line start: 4277
// line end:   4320
void Em34_kubi(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 7
	register long i;
	// register: 3
	register long Ck;
	// register: 6
	register long Tmp;
	// address: 0xFFFFFFF0
	auto short Dir;
}


// address: 0x80115B1C
// line start: 4325
// line end:   4336
void Em34_dir_spd(struct _74fake *pEm, short Dir, struct _2fake *pSpd) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake S_dir;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80115B80
// line start: 4421
// line end:   4423
unsigned long Em34_Jh_init(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x80115BB0
// line start: 4428
// line end:   4437
void Em34_Jh_move(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80115C00
// line start: 4446
// line end:   4455
void Em34_core_set_dest(unsigned char No, short D_x, short D_y) {
	// register: 2
	// size: 0x1C
	register struct _118fake *pMe;
}


// address: 0x80115C28
// line start: 4458
// line end:   4540
void Em34_core_me_mv(struct _74fake *pEm, unsigned char No) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 8
	register short Tmp_t;
	// register: 7
	register short Tmp_y;
	// register: 18
	// size: 0x1C
	register struct _118fake *pMe;
}


// address: 0x80115F4C
// line start: 4545
// line end:   4591
unsigned long Em34_pl_pos(struct _74fake *pEm, struct _2fake *pSv, unsigned long L, unsigned short Flg) {
	// register: 16
	register short i;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
	// register: 2
	register unsigned long X;
	// register: 2
	register unsigned long Z;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Tv;
	{
	}
}


// address: 0x80116100
// line start: 4596
// line end:   4642
void Em34_pos_set(struct _74fake *pEm) {
	// register: 19
	register unsigned char Area_no;
	// register: 16
	register unsigned char i;
	// register: 18
	register unsigned char j;
	// register: 17
	register unsigned char k;
	// register: 22
	register unsigned long LL;
	// register: 3
	register unsigned long L;
	// register: 2
	register unsigned long X;
	// register: 2
	register unsigned long Z;
}


