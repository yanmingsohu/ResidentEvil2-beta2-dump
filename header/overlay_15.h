#include "types.h"

// === [ Overlay ID 15 ] ===

// address: 0x80106F34
static unsigned short Em23_life;

// address: 0x80106F36
static unsigned short Em23_life_easy;

// address: 0x80106F38
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80106F4C
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80106F60
static unsigned short Em2b_life;

// address: 0x80106F62
static unsigned short Em2b_life_easy;

// address: 0x80106F64
// size: 0x20
static void (*Em30_routine_0[8])();

// address: 0x80106F84
// size: 0x8
static short Em30_dest[2][2];

// address: 0x80106F8C
// size: 0x14
static short Em30_dest303[2][5];

// address: 0x80106FA0
// size: 0x10
static short Em30_hani[4][2];

// address: 0x80106FB0
// size: 0x28
static short Em30_hani303[4][5];

// address: 0x80106FD8
static char Em30_me_tate;

// address: 0x80106FD9
static char Em30_me_yoko;

// address: 0x80106FDA
static short Em30_me_tate_mv;

// address: 0x80106FDC
static short Em30_me_yoko_mv;

// address: 0x80106FDE
static short Em30_me_tate_a;

// address: 0x80106FE0
static short Em30_me_yoko_a;

// address: 0x80106FE2
static char Em30_me_tate_d;

// address: 0x80106FE3
static char Em30_me_yoko_d;

// address: 0x80106FE4
// size: 0x18
static void (*Em30_Move_type[6])();

// address: 0x80106FFC
// size: 0x38
static void (*Em30_mv_br_type00[14])();

// address: 0x80107034
// size: 0x38
static void (*Em30_mv_type00[14])();

// address: 0x8010706C
static void (*Em30_mv_br_type01[])();

// address: 0x8010706C
static void (*Em30_mv_type01[])();

// address: 0x8010706C
// size: 0x4
static short Em30_dir[2];

// address: 0x80107070
// size: 0xA
static short Em30_dir303[5];

// address: 0x8010707C
// size: 0x40
static char Em30_iki[64];

// address: 0x801070BC
// size: 0xC
static unsigned char Em30_kuchi_mv09[12];

// address: 0x801070C8
// size: 0xC
static unsigned char Em30_kuchi_mv09_01[12];

// address: 0x801070D4
// size: 0xC
static void (*Em30_san_tbl[3])();

// address: 0x801070E0
static void (*Em30_dm[9][])();

// address: 0x801070E0
// size: 0x12
static unsigned char Em30_Dm_cnt[18];

// address: 0x801070F4
static void (*Em30_die[9][])();

// address: 0x801070F4
static void (*Em30_sce[])();

// address: 0x801070F4
// size: 0x8
static void (*Pldamage_Em30_tbl[2])();

// address: 0x801070FC
// size: 0x4
static void (*Pldie_Em30_tbl[1])();

// address: 0x80107100
// size: 0xC
static void (*Em30_core_me_sa_tbl[3])();

// address: 0x8010013C
// line start: 84
// line end:   195
void Em130(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	auto short Dir;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Dv;
	{
	}
}


// address: 0x8010042C
// line start: 202
// line end:   203
void Em30_after(struct _74fake *pEm);

// address: 0x80100434
// line start: 216
// line end:   498
void Em30_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 6
	// size: 0xAC
	register struct _65fake *pO_ptr;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 4
	register unsigned long i;
	// register: 5
	register unsigned long *pTmp;
	// address: 0xFFFFFFD8
	// size: 0xF
	auto unsigned char Me4[15];
}


// address: 0x80100A88
// line start: 511
// line end:   515
void Em30_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100AC8
// line start: 536
// line end:   542
void Em30_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100B4C
// line start: 555
// line end:   561
void Em30_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100BD0
// line start: 566
// line end:   569
void Em30_Move_type05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100BF4
// line start: 576
// line end:   587
void Em30_mv00_br(struct _74fake *pEm) {
}


// address: 0x80100C54
// line start: 589
// line end:   645
void Em30_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 6
	register unsigned long i;
	{
	}
}


// address: 0x80100EF8
// line start: 650
// line end:   708
void Em30_mv01_br(struct _74fake *pEm) {
	// register: 19
	register short Dir1;
	// register: 16
	register short Dir2;
	// register: 18
	register unsigned long LL;
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
		{
		}
	}
}


// address: 0x801010A8
// line start: 710
// line end:   744
void Em30_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80101218
// line start: 749
// line end:   751
void Em30_mv02_br(struct _74fake *pEm);

// address: 0x80101220
// line start: 753
// line end:   960
void Em30_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFA0
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto struct _0fake M;
	// register: 16
	register unsigned char Ck;
	// register: 18
	register short Dir;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto unsigned char Em30_mv02_end[2];
	// address: 0xFFFFFFD0
	// size: 0x18
	auto unsigned short Em30_mv02_ikari[3][4];
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


// address: 0x801019BC
// line start: 965
// line end:   967
void Em30_mv03_br(struct _74fake *pEm);

// address: 0x801019C4
// line start: 969
// line end:   1033
void Em30_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv1;
	{
		{
			{
			}
		}
	}
}


// address: 0x80101C20
// line start: 1038
// line end:   1040
void Em30_mv04_br(struct _74fake *pEm);

// address: 0x80101C28
// line start: 1042
// line end:   1262
void Em30_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
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
	// register: 16
	register unsigned long LL;
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


// address: 0x8010238C
// line start: 1268
// line end:   1285
void Em30_mv05_br(struct _74fake *pEm) {
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


// address: 0x80102428
// line start: 1287
// line end:   1312
void Em30_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010254C
// line start: 1317
// line end:   1319
void Em30_mv06_br(struct _74fake *pEm);

// address: 0x80102554
// line start: 1321
// line end:   1346
void Em30_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010268C
// line start: 1351
// line end:   1353
void Em30_mv07_br(struct _74fake *pEm);

// address: 0x80102694
// line start: 1355
// line end:   1373
void Em30_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102774
// line start: 1395
// line end:   1398
void Em30_mv08_br(struct _74fake *pEm);

// address: 0x8010277C
// line start: 1400
// line end:   1514
void Em30_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 16
	register long i;
	// register: 18
	register unsigned long L;
	// register: 3
	register unsigned long LL;
	{
		{
			{
			}
		}
	}
}


// address: 0x80102AEC
// line start: 1519
// line end:   1521
void Em30_mv09_br(struct _74fake *pEm);

// address: 0x80102AF4
// line start: 1553
// line end:   1865
void Em30_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
	// register: 7
	register unsigned long *pTmp;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
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


// address: 0x801033F4
// line start: 1870
// line end:   1872
void Em30_mv0a_br(struct _74fake *pEm);

// address: 0x801033FC
// line start: 1874
// line end:   2192
void Em30_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80103CD0
// line start: 2200
// line end:   2201
void Em30_san(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80103D0C
// line start: 2206
// line end:   2207
void Em30_san_mv00(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80103D20
// line start: 2212
// line end:   2286
void Em30_san_mv01(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFE8
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


// address: 0x80103FB0
// line start: 2289
// line end:   2291
void Em30_san_mv02(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80103FB8
// line start: 2296
// line end:   2298
void Em30_mv0b_br(struct _74fake *pEm);

// address: 0x80103FC0
// line start: 2300
// line end:   2361
void Em30_mv0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801041CC
// line start: 2366
// line end:   2368
void Em30_mv0c_br(struct _74fake *pEm);

// address: 0x801041D4
// line start: 2370
// line end:   2515
void Em30_mv0c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 3
	register unsigned long i;
	{
		{
			{
			}
		}
	}
}


// address: 0x801046B4
// line start: 2570
// line end:   2678
void Em30_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x80104A88
// line start: 2684
// line end:   2701
void Em30_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104B64
// line start: 2707
// line end:   2719
void Em30_firedm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80104C38
// line start: 2724
// line end:   2736
void Em30_ryudm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80104D0C
// line start: 2741
// line end:   2756
void Em30_bomdm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80104E30
// line start: 2761
// line end:   2812
void Em30_spdm(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80105100
// line start: 2818
// line end:   2911
void Em30_mgdm(struct _74fake *pEm) {
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


// address: 0x80105758
// line start: 2917
// line end:   2919
void Em30_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80105760
// line start: 2930
// line end:   3005
void Em30_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x80105A3C
// line start: 3010
// line end:   3150
void Em30_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
	// register: 18
	register short Dir;
	// register: 17
	register unsigned char Ck;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80105EC8
// line start: 3163
// line end:   3166
void Em30_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80105F04
// line start: 3174
// line end:   3176
void Em30_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80105F0C
// line start: 3183
// line end:   3186
void Em30_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80105F14
// line start: 3197
// line end:   3202
void Pldamege_Em130(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80105F50
// line start: 3208
// line end:   3240
void Em30_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80106070
// line start: 3244
// line end:   3302
void Em30_pldm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801061D0
// line start: 3314
// line end:   3318
void Pldie_Em130(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010620C
// line start: 3326
// line end:   3373
void Em30_pldie00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
		}
	}
}


// address: 0x801063B4
// line start: 3379
// line end:   3462
void Em30_core_me_mv(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFC8
	// size: 0x7
	auto unsigned char Me3[7];
	// address: 0xFFFFFFD0
	// size: 0xF
	auto unsigned char Me4[15];
	// register: 9
	register short Tmp_t;
	// register: 8
	register short Tmp_y;
}


// address: 0x80106788
// line start: 3468
// line end:   3522
void Em30_kuchi_mv(struct _74fake *pEm, struct _65fake *pP_ptr, unsigned char *pSeq) {
	// address: 0xFFFFFFD0
	// size: 0x5
	auto unsigned char Me3[5];
	// address: 0xFFFFFFD8
	// size: 0x3
	auto unsigned char Me4[3];
	// address: 0xFFFFFFE0
	// size: 0x6
	auto unsigned char Za[2][3];
	// register: 5
	register short Tmp_t;
	// register: 3
	register short Tmp_y;
	// register: 8
	register unsigned char Zan;
}


// address: 0x80106918
// line start: 3531
// line end:   3534
void Em30_core_me_sa(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80106954
// line start: 3541
// line end:   3543
void Em30_core_mv00(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x8010695C
// line start: 3549
// line end:   3581
void Em30_core_mv01(struct _74fake *pEm, struct _65fake *pP_ptr) {
	{
	}
}


// address: 0x80106AF0
// line start: 3587
// line end:   3625
void Em30_core_mv02(struct _74fake *pEm, struct _65fake *pP_ptr) {
}


// address: 0x80106CD0
// line start: 3630
// line end:   3671
void Em30_syoku(struct _74fake *pEm, struct _65fake *pP_ptr) {
}


// address: 0x80106E88
// line start: 3678
// line end:   3689
void Em30_hand(struct _74fake *pEm, struct _0fake *pM) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


