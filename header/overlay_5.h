#include "types.h"

// === [ Overlay ID 5 ] ===

// address: 0x8010C4E0
// size: 0x4
static unsigned char Em10_pldm00_hajiki[4];

// address: 0x8010C4E4
static unsigned char Em10_hajiki_no;

// address: 0x8010BC0C
// size: 0x20
static unsigned short Em10_life[16];

// address: 0x8010BC2C
// size: 0x20
static unsigned short Em10_life_easy[16];

// address: 0x8010BC4C
static unsigned short Em23_life;

// address: 0x8010BC4E
static unsigned short Em23_life_easy;

// address: 0x8010BC50
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x8010BC64
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8010BC78
static unsigned short Em2b_life;

// address: 0x8010BC7A
static unsigned short Em2b_life_easy;

// address: 0x8010BC7C
// size: 0x40
static unsigned char Subpl_walk[2][32];

// address: 0x8010BCBC
// size: 0x40
static unsigned char Subpl_back[2][32];

// address: 0x8010BCFC
// size: 0x40
static unsigned char Subpl_dir[2][32];

// address: 0x8010BD3C
// size: 0x40
static unsigned char Subpl_ato[2][32];

// address: 0x8010BD7C
// size: 0x40
static unsigned char Subpl_run[2][32];

// address: 0x8010BDBC
// size: 0xE
static unsigned char Em4a_zobiparts_tbl[2][7];

// address: 0x8010BDCC
// size: 0x24
static void (*Em10_routine_0[9])();

// address: 0x8010BDF0
// size: 0x38
static void (*Em10_Move_type[14])();

// address: 0x8010BE28
// size: 0x40
static void (*Em10_mv_br_type00[16])();

// address: 0x8010BE68
// size: 0x40
static void (*Em10_mv_type00[16])();

// address: 0x8010BEA8
// size: 0xC
static void (*Em10_mv_br_type01[3])();

// address: 0x8010BEB4
// size: 0xC
static void (*Em10_mv_type01[3])();

// address: 0x8010BEC0
// size: 0x40
static unsigned short Em10_walk_rnd[32];

// address: 0x8010BF00
// size: 0x288
static void (*Em10_dm[9][18])();

// address: 0x8010C188
// size: 0x48
static void (*Em10_haidm[18])();

// address: 0x8010C1D0
// size: 0x11
static unsigned char Em10_dm00_usonum[17];

// address: 0x8010C1E4
// size: 0x288
static void (*Em10_die[9][18])();

// address: 0x8010C46C
// size: 0x48
static void (*Em10_haidie[18])();

// address: 0x8010C4B4
// size: 0x14
static void (*Em10_sce[5])();

// address: 0x8010C4C8
// size: 0x10
static void (*Pldamage_Em10_tbl[4])();

// address: 0x8010C4D8
// size: 0x8
static void (*Pldie_Em10_tbl[2])();

// address: 0x801002A0
// line start: 48
// line end:   214
void Em110(struct _74fake *pEm) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 5
	// size: 0x10
	register struct _1fake *pTv;
	{
	}
}


// address: 0x80100668
// line start: 221
// line end:   575
void Em10_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 17
	register unsigned long Tex;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto unsigned char Em10_walk_no[8];
	{
		{
			{
			}
		}
	}
}


// address: 0x80100FEC
// line start: 593
// line end:   597
void Em10_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010102C
// line start: 618
// line end:   624
void Em10_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801010B0
// line start: 637
// line end:   643
void Em10_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101134
// line start: 650
// line end:   680
void Em10_mv00_br(struct _74fake *pEm) {
	// register: 19
	register short Dir0;
	// register: 3
	register short Dir1;
	// register: 18
	register unsigned long LL;
}


// address: 0x80101294
// line start: 683
// line end:   763
void Em10_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80101568
// line start: 769
// line end:   852
void Em10_mv01_br(struct _74fake *pEm) {
	// register: 19
	register short Dir0;
	// register: 16
	register short Dir1;
	// register: 18
	register unsigned long LL;
	{
		{
		}
	}
}


// address: 0x801018E8
// line start: 869
// line end:   1005
void Em10_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	register short Dir;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80101E20
// line start: 1010
// line end:   1086
void Em10_mv02_br(struct _74fake *pEm) {
	// register: 19
	register short Dir0;
	// register: 16
	register short Dir1;
	// register: 18
	register unsigned long LL;
	{
		{
		}
	}
}


// address: 0x80102158
// line start: 1089
// line end:   1165
void Em10_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8010242C
// line start: 1171
// line end:   1173
void Em10_mv03_br(struct _74fake *pEm);

// address: 0x80102434
// line start: 1176
// line end:   1534
void Em10_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFA8
	// size: 0x4
	auto unsigned char Em10_mv03_type[2][2];
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto unsigned char Em10_mv03_atck[2][2];
	// register: 16
	// size: 0x244
	register struct _74fake *pT;
	// register: 20
	register unsigned long Flg;
	// register: 3
	register unsigned long Life_ck;
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


// address: 0x80102C0C
// line start: 1539
// line end:   1576
void Em10_mv04_br(struct _74fake *pEm) {
	// register: 16
	register unsigned long LL;
	{
		{
		}
	}
}


// address: 0x80102D50
// line start: 1579
// line end:   1608
void Em10_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80102E9C
// line start: 1613
// line end:   1615
void Em10_mv05_br(struct _74fake *pEm);

// address: 0x80102EA4
// line start: 1618
// line end:   1620
void Em10_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102EAC
// line start: 1625
// line end:   1627
void Em10_mv06_br(struct _74fake *pEm);

// address: 0x80102EB4
// line start: 1630
// line end:   1863
void Em10_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB8
	// size: 0x6
	auto unsigned char Em10_mv06_mot[2][3];
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto unsigned short Em10_mv06_timer[16];
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


// address: 0x80103494
// line start: 1868
// line end:   1870
void Em10_mv07_br(struct _74fake *pEm);

// address: 0x8010349C
// line start: 1873
// line end:   1934
void Em10_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80103668
// line start: 1939
// line end:   1941
void Em10_mv08_br(struct _74fake *pEm);

// address: 0x80103670
// line start: 1944
// line end:   1979
void Em10_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8010378C
// line start: 1984
// line end:   2002
void Em10_mv09_br(struct _74fake *pEm) {
	// register: 18
	register unsigned long LL;
}


// address: 0x8010386C
// line start: 2005
// line end:   2017
void Em10_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103890
// line start: 2022
// line end:   2024
void Em10_mv0a_br(struct _74fake *pEm);

// address: 0x80103898
// line start: 2030
// line end:   2123
void Em10_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto unsigned char Em10_mv0a_mot[8];
	// address: 0xFFFFFFE8
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


// address: 0x80103B64
// line start: 2128
// line end:   2130
void Em10_mv0b_br(struct _74fake *pEm);

// address: 0x80103B6C
// line start: 2133
// line end:   2237
void Em10_mv0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x4
	auto unsigned char Em10_mv0b_mot[2][2];
	// address: 0xFFFFFFE0
	// size: 0x6
	auto unsigned char Em10_mv06_mot[2][3];
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80103E98
// line start: 2242
// line end:   2244
void Em10_mv0c_br(struct _74fake *pEm);

// address: 0x80103EA0
// line start: 2247
// line end:   2309
void Em10_mv0c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto unsigned char Em10_mv0c_mot[3];
	{
	}
}


// address: 0x801040B8
// line start: 2315
// line end:   2317
void Em10_mv0d_br(struct _74fake *pEm);

// address: 0x801040C0
// line start: 2320
// line end:   2395
void Em10_mv0d(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
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


// address: 0x80104330
// line start: 2400
// line end:   2402
void Em10_mv0e_br(struct _74fake *pEm);

// address: 0x80104338
// line start: 2405
// line end:   2483
void Em10_mv0e(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long LL;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80104614
// line start: 2488
// line end:   2490
void Em10_mv0f_br(struct _74fake *pEm);

// address: 0x8010461C
// line start: 2493
// line end:   2655
void Em10_mv0f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 18
	register unsigned long Tex;
	// register: 5
	register unsigned long i;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto unsigned char Em10_walk_no[8];
	{
	}
}


// address: 0x80104A40
// line start: 2660
// line end:   2662
void Em10_mv10_br(struct _74fake *pEm);

// address: 0x80104A48
// line start: 2665
// line end:   2702
void Em10_mv10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104B18
// line start: 2707
// line end:   2709
void Em10_mv11_br(struct _74fake *pEm);

// address: 0x80104B20
// line start: 2712
// line end:   2743
void Em10_mv11(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104C0C
// line start: 2888
// line end:   3029
void Em10_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
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


// address: 0x801050B4
// line start: 3043
// line end:   3280
void Em10_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake V;
	// register: 8
	register short Dir;
	// register: 16
	register unsigned char Cnt;
	// register: 19
	register unsigned long LL;
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


// address: 0x801057F8
// line start: 3285
// line end:   3502
void Em10_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC8
	// size: 0x4
	auto short Spd[2];
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 8
	register short Dir;
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


// address: 0x80105D60
// line start: 3507
// line end:   3571
void Em10_Firedm(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
		}
	}
}


// address: 0x80105F3C
// line start: 3577
// line end:   3605
void Em10_Ryudm(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80106010
// line start: 3610
// line end:   3642
void Em10_Tudm(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80106100
// line start: 3648
// line end:   3682
void Em10_Spdm(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801062EC
// line start: 3688
// line end:   3953
void Em10_dm02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFF90
	// size: 0x4
	auto short Spd[2];
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M1;
	// register: 17
	register unsigned long i;
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


// address: 0x80106B00
// line start: 3958
// line end:   3987
void Em10_dm03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x4
	auto short Spd[2];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x80106BFC
// line start: 3992
// line end:   4145
void Em10_dm04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Rot;
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


// address: 0x801070B8
// line start: 4150
// line end:   4293
void Em10_dm05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD0
	// size: 0x4
	auto short Spd[2];
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


// address: 0x801074BC
// line start: 4298
// line end:   4358
void Em10_dm06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x4
	auto short Spd[2];
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
		}
	}
}


// address: 0x801076AC
// line start: 4363
// line end:   4557
void Em10_dm07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF90
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M1;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake V;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80107B1C
// line start: 4562
// line end:   4661
void Em10_dm08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto unsigned char Em10_dm08_mot[8];
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80107F44
// line start: 151
// line end:   224
void Em10_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
			{
			}
		}
	}
}


// address: 0x80108158
// line start: 228
// line end:   393
void Em10_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x2
	auto unsigned char Em10_mv06_mot[2];
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
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


// address: 0x80108618
// line start: 398
// line end:   466
void Em10_die01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x2
	auto unsigned char Em10_mv06_mot[2];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
			{
			}
		}
	}
}


// address: 0x801087E8
// line start: 471
// line end:   661
void Em10_die02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC0
	// size: 0x4
	auto short Spd[2];
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 2
	// size: 0xAC
	register struct _65fake *pO;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x2
	auto unsigned char Em10_die02_mot[2];
	{
		{
		}
	}
}


// address: 0x80108DDC
// line start: 665
// line end:   770
void Em10_die03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD0
	// size: 0x2
	auto unsigned char Em10_mv06_mot[2];
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
		}
	}
}


// address: 0x80109118
// line start: 774
// line end:   888
void Em10_die04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC8
	// size: 0x2
	auto unsigned char Em10_mv06_mot[2];
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 20
	register unsigned long i;
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


// address: 0x801094EC
// line start: 892
// line end:   1004
void Em10_die05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x9
	auto unsigned char Em10_die05_tbl[3][3];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
			{
			}
		}
	}
}


// address: 0x801097FC
// line start: 1018
// line end:   1021
void Em10_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80109838
// line start: 1029
// line end:   1041
void Em10_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801098B4
// line start: 1046
// line end:   1058
void Em10_sce01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80109958
// line start: 1065
// line end:   1115
void Em10_sce02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x244
	register struct _74fake *pAt;
	{
		{
		}
	}
}


// address: 0x80109B5C
// line start: 1120
// line end:   1162
void Em10_sce03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto unsigned char Em10_mv0a_mot[8];
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 17
	// size: 0x244
	register struct _74fake *pAt;
	{
		{
			{
			}
		}
	}
}


// address: 0x80109D40
// line start: 1167
// line end:   1226
void Em10_sce04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD0
	// size: 0x2
	auto unsigned char Em10_mv06_mot[2];
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
		}
	}
}


// address: 0x80109F40
// line start: 1233
// line end:   1433
void Em10_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x68
	register struct _61fake *pKage;
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
	{
	}
}


// address: 0x8010A3E0
// line start: 1445
// line end:   1465
void Pldamege_Em110(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
	}
}


// address: 0x8010A484
// line start: 1473
// line end:   1692
void Em10_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	// size: 0x244
	register struct _74fake *pAi;
	// register: 16
	// size: 0x244
	register struct _74fake *pT;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 20
	register unsigned long i;
	// register: 18
	register short Ck_flg;
	// address: 0xFFFFFFD0
	// size: 0x2
	auto unsigned char Em10_pldm00_mot[2];
	// address: 0xFFFFFFD8
	// size: 0xC
	auto short Em10_pldm00_blo[3][2];
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8010AA1C
// line start: 1697
// line end:   1699
void Em10_pldm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010AA24
// line start: 1705
// line end:   1840
void Em10_pldm02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	// size: 0x244
	register struct _74fake *pAi;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x2
	auto unsigned char Em10_pldm02_mot[2];
	// address: 0xFFFFFFD8
	// size: 0xC
	auto short Em10_pldm02_blo[3][2];
	{
		{
			{
			}
		}
	}
}


// address: 0x8010AE80
// line start: 1852
// line end:   1871
void Pldie_Em110(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
	}
}


// address: 0x8010AF24
// line start: 1876
// line end:   1989
void Em10_pldie00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFE8
	// size: 0x2
	auto unsigned char Em10_pldie00_mot[2];
	{
		{
			{
			}
		}
	}
}


// address: 0x8010B1E8
// line start: 1994
// line end:   2187
void Em10_Kahannsin_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFF90
	// size: 0x30
	auto struct _100fake Em10_Jp0;
	// register: 17
	register short Tmp;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Spd;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
	// register: 4
	// size: 0x68
	register struct _61fake *pKage;
	{
		{
		}
	}
}


// address: 0x8010B6E4
// line start: 2193
// line end:   2279
void Em10_Kubigoro(struct _74fake *pEm) {
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake TMP_SV;
	// register: 20
	register short Ground;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Tv0;
	{
		{
		}
	}
}


// address: 0x8010BA50
// line start: 2285
// line end:   2316
void Em10_water(struct _74fake *pEm) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv1;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010BBFC
// line start: 2322
// line end:   2409
void Em10_ude_down(struct _74fake *pEm) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


