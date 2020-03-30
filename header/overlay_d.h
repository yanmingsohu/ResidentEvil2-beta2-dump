#include "types.h"

// === [ Overlay ID d ] ===

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

// address: 0x801000FC
// line start: 67
// line end:   202
void Em128(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	auto short Dir;
	// register: 18
	register short Tmp;
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 4
	// size: 0x244
	register struct _74fake *pEm2;
	// register: 16
	// size: 0x244
	register struct _74fake **ppEm;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801004D0
// line start: 209
// line end:   211
void Em28_after(struct _74fake *pEm) {
}


// address: 0x801004F0
// line start: 214
// line end:   483
void Em28_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x80100AFC
// line start: 495
// line end:   499
void Em28_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100B3C
// line start: 518
// line end:   524
void Em28_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100BC0
// line start: 537
// line end:   543
void Em28_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100C44
// line start: 550
// line end:   563
void Em28_mv00_br(struct _74fake *pEm) {
}


// address: 0x80100CAC
// line start: 565
// line end:   578
void Em28_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80100D4C
// line start: 583
// line end:   640
void Em28_mv01_br(struct _74fake *pEm) {
	// register: 20
	register short Dir1;
	// register: 19
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
}


// address: 0x80100F6C
// line start: 642
// line end:   669
void Em28_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8010108C
// line start: 674
// line end:   676
void Em28_mv02_br(struct _74fake *pEm);

// address: 0x80101094
// line start: 678
// line end:   712
void Em28_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x801011D0
// line start: 717
// line end:   719
void Em28_mv03_br(struct _74fake *pEm);

// address: 0x801011D8
// line start: 721
// line end:   840
void Em28_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register unsigned short Ck;
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


// address: 0x801015B8
// line start: 845
// line end:   847
void Em28_mv04_br(struct _74fake *pEm);

// address: 0x801015C0
// line start: 849
// line end:   865
void Em28_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010167C
// line start: 871
// line end:   873
void Em28_mv05_br(struct _74fake *pEm);

// address: 0x80101684
// line start: 875
// line end:   891
void Em28_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101740
// line start: 896
// line end:   898
void Em28_mv06_br(struct _74fake *pEm);

// address: 0x80101748
// line start: 900
// line end:   1000
void Em28_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x244
	register struct _74fake *pKo;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
		}
	}
}


// address: 0x80101B0C
// line start: 1005
// line end:   1007
void Em28_mv07_br(struct _74fake *pEm);

// address: 0x80101B14
// line start: 1009
// line end:   1027
void Em28_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101BE0
// line start: 1032
// line end:   1035
void Em28_mv08_br(struct _74fake *pEm);

// address: 0x80101BE8
// line start: 1037
// line end:   1470
void Em28_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF50
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFF58
	// size: 0x40
	auto short Em28_mv08_hen[32];
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
		}
	}
}


// address: 0x80102F70
// line start: 1475
// line end:   1510
void Em28_mv09_br(struct _74fake *pEm) {
	// register: 16
	register short Dir1;
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
}


// address: 0x801030B4
// line start: 1512
// line end:   1542
void Em28_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x801031E4
// line start: 1689
// line end:   1701
void Em28_firedm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801032B8
// line start: 1706
// line end:   1718
void Em28_ryudm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010338C
// line start: 1723
// line end:   1738
void Em28_bomdm(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801034B0
// line start: 1744
// line end:   1795
void Em28_spdm(struct _74fake *pEm, unsigned char Flg) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80103774
// line start: 1801
// line end:   1864
void Em28_mgdm(struct _74fake *pEm) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
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


// address: 0x80103B20
// line start: 1867
// line end:   2054
void Em28_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M;
	{
		{
			{
			}
		}
	}
}


// address: 0x80103FE4
// line start: 2060
// line end:   2177
void Em28_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
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


// address: 0x801043D8
// line start: 2182
// line end:   2427
void Em28_ude(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// register: 21
	// size: 0x10
	register struct _1fake *pPos;
	// register: 18
	// size: 0xAC
	register struct _65fake *pO;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 17
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x80104B68
// line start: 2432
// line end:   2479
void Em28_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x80104D34
// line start: 2484
// line end:   2551
void Em28_dm02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
			}
		}
	}
}


// address: 0x80105010
// line start: 2562
// line end:   2568
void Em28_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80105030
// line start: 2573
// line end:   2865
void Em28_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
	// register: 4
	register unsigned long j;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 16
	// size: 0x68
	register struct _61fake *pKage;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto short Em28_die00_hen[8];
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


// address: 0x80105894
// line start: 2878
// line end:   2881
void Em28_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801058D0
// line start: 2889
// line end:   2891
void Em28_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801058D8
// line start: 2898
// line end:   2901
void Em28_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801058E0
// line start: 2912
// line end:   2917
void Pldamege_Em128(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010591C
// line start: 2923
// line end:   2955
void Em28_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80105A3C
// line start: 2959
// line end:   3017
void Em28_pldm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80105B9C
// line start: 3029
// line end:   3033
void Pldie_Em128(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80105BD8
// line start: 3042
// line end:   3124
void Em28_core_me_mv(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFB8
	// size: 0x11
	auto unsigned char Me3[17];
	// address: 0xFFFFFFD0
	// size: 0xD
	auto unsigned char Me4[13];
	// register: 9
	register short Tmp_t;
	// register: 8
	register short Tmp_y;
}


