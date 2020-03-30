#include "types.h"

// === [ Overlay ID 19 ] ===

// address: 0x801051A4
static short Em36_pos_y;

// address: 0x80104BF4
static unsigned short Em23_life;

// address: 0x80104BF6
static unsigned short Em23_life_easy;

// address: 0x80104BF8
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80104C0C
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80104C20
static unsigned short Em2b_life;

// address: 0x80104C22
static unsigned short Em2b_life_easy;

// address: 0x80104C24
// size: 0x20
static void (*Em36_routine_0[8])();

// address: 0x80104C44
// size: 0xA
static unsigned char Em36_Me3_0[10];

// address: 0x80104C50
// size: 0x3
static unsigned char Em36_Me4_0[3];

// address: 0x80104C54
// size: 0x9
static unsigned char Em36_Me3_1[9];

// address: 0x80104C60
// size: 0x5
static unsigned char Em36_Me4_1[5];

// address: 0x80104C68
// size: 0x38
static struct _118fake Em36_Me[2];

// address: 0x80104CA0
// size: 0x4
static void (*Em36_Move_type[1])();

// address: 0x80104CA4
// size: 0x14
static void (*Em36_mv_br_type00[5])();

// address: 0x80104CB8
// size: 0x14
static void (*Em36_mv_type00[5])();

// address: 0x80104CCC
// size: 0x12
static unsigned char Em36_Dm_cnt[18];

// address: 0x80104CE0
static void (*Em36_sce[])();

// address: 0x80104CE0
// size: 0x4
static void (*Pldamage_Em36_tbl[1])();

// address: 0x80104CE4
// size: 0x4
static void (*Pldie_Em36_tbl[1])();

// address: 0x80104CE8
// size: 0x2E8
static struct _115fake G5a_jh0_tbl[186];

// address: 0x80104FD0
// size: 0x38
static struct _116fake G5a_jh0_head[1];

// address: 0x80105008
// size: 0x34
static struct _115fake G5a_jh1_tbl[13];

// address: 0x8010503C
// size: 0x38
static struct _116fake G5a_jh1_head[1];

// address: 0x80105074
// size: 0x40
static char Em36_iki[64];

// address: 0x801050B4
// size: 0x14
static void (*Em37_K_tbl[5])();

// address: 0x801050C8
// size: 0xDC
static short Em37_K_mv03_tbl[110];

// address: 0x80100074
// line start: 51
// line end:   137
void Em136(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	auto short Dir;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x80100350
// line start: 168
// line end:   169
void Em36_after(struct _74fake *pEm);

// address: 0x80100370
// line start: 172
// line end:   347
void Em36_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pO_ptr;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80100700
// line start: 359
// line end:   363
void Em36_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100740
// line start: 380
// line end:   394
void Em36_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801007E4
// line start: 399
// line end:   436
void Em36_mv00_br(struct _74fake *pEm) {
	// register: 17
	register unsigned long LL;
	{
	}
}


// address: 0x801008CC
// line start: 439
// line end:   557
void Em36_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	register unsigned long i;
	// register: 4
	register unsigned long j;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto unsigned char Ok_no[4];
	// register: 3
	register unsigned char Ok_num;
	{
	}
}


// address: 0x80100BA4
// line start: 562
// line end:   575
void Em36_mv01_br(struct _74fake *pEm) {
	// register: 2
	register unsigned long LL;
}


// address: 0x80100C00
// line start: 577
// line end:   683
void Em36_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x10
	auto unsigned char Em36_mv01[4][4];
	{
	}
}


// address: 0x80100FEC
// line start: 688
// line end:   694
void Em36_mv02_br(struct _74fake *pEm);

// address: 0x80100FF4
// line start: 699
// line end:   1045
void Em36_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 6
	// size: 0x244
	register struct _74fake *pKem;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 4
	register long Ck;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801016EC
// line start: 1050
// line end:   1062
void Em36_mv03_br(struct _74fake *pEm) {
	// register: 2
	register unsigned long LL;
}


// address: 0x80101734
// line start: 1064
// line end:   1147
void Em36_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	register unsigned long i;
	// register: 4
	register unsigned long j;
	// address: 0xFFFFFFE8
	// size: 0x4
	auto unsigned char Ok_no[4];
	// register: 5
	register unsigned char Ok_num;
	{
	}
}


// address: 0x80101944
// line start: 1152
// line end:   1154
void Em36_mv04_br(struct _74fake *pEm);

// address: 0x8010194C
// line start: 1156
// line end:   1237
void Em36_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
		}
	}
}


// address: 0x80101C0C
// line start: 1243
// line end:   1245
void Em36_mv05_br(struct _74fake *pEm);

// address: 0x80101C14
// line start: 1247
// line end:   1249
void Em36_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101C1C
// line start: 1254
// line end:   1256
void Em36_mv06_br(struct _74fake *pEm);

// address: 0x80101C24
// line start: 1258
// line end:   1260
void Em36_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101C2C
// line start: 1265
// line end:   1267
void Em36_mv07_br(struct _74fake *pEm);

// address: 0x80101C34
// line start: 1269
// line end:   1271
void Em36_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101C3C
// line start: 1276
// line end:   1279
void Em36_mv08_br(struct _74fake *pEm);

// address: 0x80101C44
// line start: 1281
// line end:   1285
void Em36_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101C4C
// line start: 1290
// line end:   1294
void Em36_mv09_br(struct _74fake *pEm);

// address: 0x80101C54
// line start: 1296
// line end:   1298
void Em36_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101C5C
// line start: 1351
// line end:   1384
void Em36_firedm(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv0;
}


// address: 0x80101EB0
// line start: 1389
// line end:   1415
void Em36_ryudm(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv0;
}


// address: 0x801020DC
// line start: 1420
// line end:   1446
void Em36_bomdm(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
}


// address: 0x80102304
// line start: 1451
// line end:   1482
void Em36_spdm(struct _74fake *pEm) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801025F0
// line start: 1485
// line end:   1604
void Em36_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv0;
	// register: 22
	register short Ck;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x80102A30
// line start: 1610
// line end:   1641
void Em36_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102B1C
// line start: 1647
// line end:   1651
void Em36_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102B3C
// line start: 1658
// line end:   1898
void Em36_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFA0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 16
	register short Ck;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
	// register: 18
	register unsigned long i;
	// register: 4
	register unsigned long j;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto unsigned char Ok_no[4];
	// register: 5
	register unsigned char Ok_num;
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


// address: 0x80103500
// line start: 1911
// line end:   1914
void Em36_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010353C
// line start: 1922
// line end:   1924
void Em36_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103544
// line start: 1931
// line end:   1934
void Em36_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010354C
// line start: 1945
// line end:   1950
void Pldamege_Em136(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103588
// line start: 1955
// line end:   1957
void Em36_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103590
// line start: 1961
// line end:   1964
void Em36_pldm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103598
// line start: 1976
// line end:   1980
void Pldie_Em136(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801035D4
// line start: 1985
// line end:   2028
void Em36_pldie00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	{
	}
}


// address: 0x8010376C
// line start: 2289
// line end:   2292
unsigned long G5a_Jh_init(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x801037C0
// line start: 2297
// line end:   2307
void G5a_Jh_move(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80103820
// line start: 2328
// line end:   2335
void Em37_K(struct _74fake *pEm, struct _65fake *pP_ptr) {
}


// address: 0x8010387C
// line start: 2339
// line end:   2422
void Em37_K_mv00(struct _74fake *pEm, struct _65fake *pP_ptr) {
	{
	}
}


// address: 0x80103B50
// line start: 2426
// line end:   2547
void Em37_K_mv01(struct _74fake *pEm, struct _65fake *pP_ptr) {
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


// address: 0x80103F68
// line start: 2551
// line end:   2581
void Em37_K_mv02(struct _74fake *pEm, struct _65fake *pP_ptr) {
}


// address: 0x80104024
// line start: 2600
// line end:   2716
void Em37_K_mv03(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80104370
// line start: 2722
// line end:   2786
void Em37_K_mv04(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	{
	}
}


// address: 0x80104648
// line start: 2792
// line end:   2805
void Em36_set_em37_all(unsigned long R) {
	// register: 2
	// size: 0x244
	register struct _74fake *pKem;
}


// address: 0x80104688
// line start: 2808
// line end:   2815
void Em36_set_em37_1set(unsigned long No, unsigned long R) {
	// register: 2
	// size: 0x244
	register struct _74fake *pKem;
}


// address: 0x801046A0
// line start: 2821
// line end:   2854
int Em36_mv_quake(struct _74fake *pEm);

// address: 0x801047B4
// line start: 2860
// line end:   2869
void Em36_core_set_dest(unsigned char No, short D_x, short D_y) {
	// register: 2
	// size: 0x1C
	register struct _118fake *pMe;
}


// address: 0x801047DC
// line start: 2872
// line end:   2954
void Em36_core_me_mv(struct _74fake *pEm, unsigned char No) {
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


// address: 0x80104B00
// line start: 2960
// line end:   2984
void Em36_die_wait(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv0;
	// register: 17
	register unsigned long i;
	{
	}
}


