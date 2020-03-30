#include "types.h"

// === [ Overlay ID 34 ] ===

// address: 0x801146F8
static unsigned short Em23_life;

// address: 0x801146FA
static unsigned short Em23_life_easy;

// address: 0x801146FC
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80114710
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80114724
static unsigned short Em2b_life;

// address: 0x80114726
static unsigned short Em2b_life_easy;

// address: 0x80114728
// size: 0x20
static void (*Em31_routine_0[8])();

// address: 0x80114748
// size: 0x40
static char Em31_iki[64];

// address: 0x80114788
static char Em31_me_tate;

// address: 0x80114789
static char Em31_me_yoko;

// address: 0x8011478A
static short Em31_me_tate_mv;

// address: 0x8011478C
static short Em31_me_yoko_mv;

// address: 0x8011478E
static short Em31_me_tate_a;

// address: 0x80114790
static short Em31_me_yoko_a;

// address: 0x80114792
static char Em31_me_tate_d;

// address: 0x80114793
static char Em31_me_yoko_d;

// address: 0x80114794
// size: 0x10
static void (*Em31_Move_type[4])();

// address: 0x801147A4
// size: 0x28
static void (*Em31_mv_br_type00[10])();

// address: 0x801147CC
// size: 0x28
static void (*Em31_mv_type00[10])();

// address: 0x801147F4
// size: 0x1C
static void (*Em31_mv_br_type01[7])();

// address: 0x80114810
// size: 0x1C
static void (*Em31_mv_type01[7])();

// address: 0x8011482C
// size: 0x8
static void (*Em31_mv_br_type02[2])();

// address: 0x80114834
// size: 0x8
static void (*Em31_mv_type02[2])();

// address: 0x8011483C
// size: 0x18
static short Em31_mv08_pod[2][6];

// address: 0x80114854
// size: 0x8
static unsigned char Em31_mv08_no[4][2];

// address: 0x8011485C
static void (*Em31_dm[9][])();

// address: 0x8011485C
// size: 0x12
static unsigned char Em31_Dm_cnt[18];

// address: 0x80114870
static void (*Em31_die[9][])();

// address: 0x80114870
static void (*Em31_sce[])();

// address: 0x80114870
// size: 0x8
static void (*Pldamage_Em31_tbl[2])();

// address: 0x80114878
// size: 0x4
static void (*Pldie_Em31_tbl[1])();

// address: 0x8011487C
// size: 0xC
static void (*Em31_core_me_sa_tbl[3])();

// address: 0x8010D0C4
// line start: 70
// line end:   191
void Em231(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	auto short Dir;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake Dv;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto short Max_life[2];
	{
		{
			{
			}
		}
	}
}


// address: 0x8010D4B0
// line start: 198
// line end:   199
void Em31_after(struct _74fake *pEm);

// address: 0x8010D4B8
// line start: 201
// line end:   419
void Em31_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 4
	register unsigned long i;
	// address: 0xFFFFFFD8
	// size: 0xF
	auto unsigned char Me4[15];
	{
	}
}


// address: 0x8010D9AC
// line start: 432
// line end:   436
void Em31_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D9EC
// line start: 455
// line end:   461
void Em31_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DA70
// line start: 476
// line end:   482
void Em31_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DAF4
// line start: 494
// line end:   500
void Em31_Move_type02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DB78
// line start: 507
// line end:   518
void Em31_mv00_br(struct _74fake *pEm) {
}


// address: 0x8010DBE0
// line start: 520
// line end:   536
void Em31_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010DC44
// line start: 541
// line end:   611
void Em31_mv01_br(struct _74fake *pEm) {
	// register: 20
	register short Dir0;
	// register: 16
	register short Dir1;
	// register: 4
	register short Dir2;
	// register: 18
	register unsigned long LL;
	// register: 19
	register unsigned long Ck;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB8
	// size: 0x10
	auto struct _1fake V;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
	{
	}
}


// address: 0x8010DE84
// line start: 614
// line end:   639
void Em31_mv01_br1(struct _74fake *pEm) {
	// register: 16
	register short Dir1;
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


// address: 0x8010DF5C
// line start: 642
// line end:   690
void Em31_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
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


// address: 0x8010E168
// line start: 695
// line end:   697
void Em31_mv02_br(struct _74fake *pEm);

// address: 0x8010E170
// line start: 699
// line end:   881
void Em31_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv1;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	// register: 16
	register unsigned char Ck;
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


// address: 0x8010E864
// line start: 886
// line end:   926
void Em31_mv03_br(struct _74fake *pEm) {
	// register: 19
	register short Dir2;
	// register: 17
	register unsigned long LL;
	{
	}
}


// address: 0x8010E9CC
// line start: 928
// line end:   975
void Em31_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv1;
	{
		{
			{
			}
		}
	}
}


// address: 0x8010EB68
// line start: 980
// line end:   982
void Em31_mv04_br(struct _74fake *pEm);

// address: 0x8010EB70
// line start: 984
// line end:   1282
void Em31_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M;
	{
		{
			{
				{
					{
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
				}
			}
		}
	}
}


// address: 0x8010F6DC
// line start: 1288
// line end:   1326
void Em31_mv05_br(struct _74fake *pEm) {
	// register: 4
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


// address: 0x8010F810
// line start: 1329
// line end:   1344
void Em31_mv05_br1(struct _74fake *pEm) {
	// register: 17
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


// address: 0x8010F870
// line start: 1347
// line end:   1374
void Em31_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010F994
// line start: 1379
// line end:   1381
void Em31_mv06_br(struct _74fake *pEm);

// address: 0x8010F99C
// line start: 1383
// line end:   1467
void Em31_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8010FCD4
// line start: 1472
// line end:   1474
void Em31_mv07_br(struct _74fake *pEm);

// address: 0x8010FCDC
// line start: 1476
// line end:   1617
void Em31_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
			}
		}
	}
}


// address: 0x80110184
// line start: 1637
// line end:   1653
void Em31_mv08_br(struct _74fake *pEm) {
}


// address: 0x801101D8
// line start: 1655
// line end:   1693
void Em31_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8011032C
// line start: 1698
// line end:   1700
void Em31_mv09_br(struct _74fake *pEm);

// address: 0x80110334
// line start: 1702
// line end:   1928
void Em31_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
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


// address: 0x8011099C
// line start: 1933
// line end:   1935
void Em31_mv0a_br(struct _74fake *pEm);

// address: 0x801109A4
// line start: 1937
// line end:   2323
void Em31_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
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


// address: 0x80111780
// line start: 2328
// line end:   2330
void Em31_mv0b_br(struct _74fake *pEm);

// address: 0x80111788
// line start: 2332
// line end:   2465
void Em31_mv0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
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


// address: 0x80111D00
// line start: 2470
// line end:   2472
void Em31_mv0c_br(struct _74fake *pEm);

// address: 0x80111D08
// line start: 2474
// line end:   2576
void Em31_mv0c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct _0fake M;
	{
	}
}


// address: 0x80111FF8
// line start: 2580
// line end:   2603
int Em31_Tume_color(struct _74fake *pEm) {
}


// address: 0x80112070
// line start: 2657
// line end:   2799
void Em31_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv0;
	// register: 6
	register short Ck;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8011259C
// line start: 2804
// line end:   2820
void Em31_firedm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801126C0
// line start: 2825
// line end:   2841
void Em31_ryudm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801127E4
// line start: 2846
// line end:   2865
void Em31_bomdm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80112958
// line start: 2870
// line end:   2932
void Em31_spdm(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80112CC0
// line start: 2938
// line end:   3031
void Em31_mgdm(struct _74fake *pEm) {
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


// address: 0x80113318
// line start: 3037
// line end:   3066
void Em31_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8011344C
// line start: 3072
// line end:   3074
void Em31_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113454
// line start: 3085
// line end:   3094
void Em31_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80113474
// line start: 3099
// line end:   3253
void Em31_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFA0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
	// register: 20
	register unsigned char Ck;
	// register: 5
	// size: 0x68
	register struct _61fake *pKage;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801139CC
// line start: 3266
// line end:   3269
void Em31_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113A08
// line start: 3277
// line end:   3279
void Em31_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113A10
// line start: 3286
// line end:   3289
void Em31_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113A18
// line start: 3300
// line end:   3305
void Pldamege_Em231(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113A54
// line start: 3311
// line end:   3331
void Em31_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80113B1C
// line start: 3343
// line end:   3347
void Pldie_Em231(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113B58
// line start: 3354
// line end:   3439
void Em31_pldie00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80113E28
// line start: 3449
// line end:   3532
void Em31_core_me_mv(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFC8
	// size: 0x3
	auto unsigned char Me3[3];
	// address: 0xFFFFFFD0
	// size: 0xF
	auto unsigned char Me4[15];
	// register: 9
	register short Tmp_t;
	// register: 8
	register short Tmp_y;
}


// address: 0x801141E8
// line start: 3542
// line end:   3545
void Em31_core_me_sa(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80114224
// line start: 3552
// line end:   3554
void Em31_core_mv00(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x8011422C
// line start: 3560
// line end:   3590
void Em31_core_mv01(struct _74fake *pEm, struct _65fake *pP_ptr) {
	{
	}
}


// address: 0x801143C0
// line start: 3596
// line end:   3634
void Em31_core_mv02(struct _74fake *pEm, struct _65fake *pP_ptr) {
}


// address: 0x801145A0
// line start: 3641
// line end:   3652
void Em31_hand(struct _74fake *pEm, struct _0fake *pM) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8011464C
// line start: 3655
// line end:   3667
void Em31_hand_left(struct _74fake *pEm, struct _0fake *pM) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


