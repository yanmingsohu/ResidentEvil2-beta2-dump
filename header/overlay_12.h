#include "types.h"

// === [ Overlay ID 12 ] ===

// address: 0x80101498
static unsigned char Se_call;

// address: 0x80101358
static unsigned short Em23_life;

// address: 0x8010135A
static unsigned short Em23_life_easy;

// address: 0x8010135C
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80101370
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80101384
static unsigned short Em2b_life;

// address: 0x80101386
static unsigned short Em2b_life_easy;

// address: 0x80101388
// size: 0xE
static unsigned char P_hand[7][2];

// address: 0x80101398
// size: 0x20
static void (*Em2d_routine_0[8])();

// address: 0x801013B8
// size: 0x8
static void (*Em2d_Move_type[2])();

// address: 0x801013C0
// size: 0x20
static void (*Em2d_mv_br_type00[8])();

// address: 0x801013E0
// size: 0x20
static void (*Em2d_mv_type00[8])();

// address: 0x80101400
// size: 0x20
static void (*Em2d_mv_br_type01[8])();

// address: 0x80101420
// size: 0x20
static void (*Em2d_mv_type01[8])();

// address: 0x80101440
// size: 0x24
static void (*Em2d_dm[9])();

// address: 0x80101464
// size: 0x24
static void (*Em2d_die[9])();

// address: 0x80101488
static void (*Em2d_sce[])();

// address: 0x80101488
static void (*Pldie_Em2d_tbl[])();

// address: 0x80101488
// size: 0x10
static void (*Pldamage_Em2d_tbl[4])();

// address: 0x80100018
// line start: 58
// line end:   119
void Em12d(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x801000F8
// line start: 126
// line end:   239
void Em2d_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 5
	register unsigned char i;
}


// address: 0x801003C4
// line start: 250
// line end:   254
void Em2d_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100404
// line start: 271
// line end:   277
void Em2d_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100488
// line start: 292
// line end:   298
void Em2d_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010050C
// line start: 305
// line end:   375
void Em2d_mv00_br(struct _74fake *pEm) {
	// register: 3
	register short Dir1;
	// register: 18
	register unsigned long LL;
	{
		{
		}
	}
}


// address: 0x80100674
// line start: 378
// line end:   419
void Em2d_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801007A8
// line start: 424
// line end:   464
void Em2d_mv01_br(struct _74fake *pEm) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pPt;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x80100830
// line start: 466
// line end:   515
void Em2d_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80100990
// line start: 520
// line end:   522
void Em2d_mv02_br(struct _74fake *pEm);

// address: 0x80100998
// line start: 524
// line end:   525
void Em2d_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801009A0
// line start: 530
// line end:   563
void Em2d_mv03_br(struct _74fake *pEm) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pPt;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x80100A90
// line start: 565
// line end:   582
void Em2d_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80100B60
// line start: 587
// line end:   589
void Em2d_mv04_br(struct _74fake *pEm);

// address: 0x80100B68
// line start: 591
// line end:   661
void Em2d_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pPt;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80100D2C
// line start: 666
// line end:   668
void Em2d_mv05_br(struct _74fake *pEm);

// address: 0x80100D34
// line start: 670
// line end:   698
void Em2d_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80100E38
// line start: 703
// line end:   705
void Em2d_mv06_br(struct _74fake *pEm);

// address: 0x80100E40
// line start: 707
// line end:   738
void Em2d_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100EE4
// line start: 743
// line end:   745
void Em2d_mv07_br(struct _74fake *pEm);

// address: 0x80100EEC
// line start: 747
// line end:   748
void Em2d_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100EF4
// line start: 767
// line end:   774
void Em2d_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x80100F30
// line start: 780
// line end:   803
void Em2d_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake V;
	{
		{
		}
	}
}


// address: 0x80100F84
// line start: 818
// line end:   824
void Em2d_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100FC0
// line start: 829
// line end:   857
void Em2d_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	// size: 0xAC
	register struct _65fake *pPt;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
		}
	}
}


// address: 0x80101080
// line start: 870
// line end:   873
void Em2d_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801010BC
// line start: 881
// line end:   883
void Em2d_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801010C4
// line start: 890
// line end:   893
void Em2d_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801010CC
// line start: 905
// line end:   909
void Pldie_Em12d(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101108
// line start: 918
// line end:   946
void Hand_display(struct _74fake *pEm, unsigned char L_r, unsigned char On_off) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 7
	register unsigned char i;
}


// address: 0x801011C0
// line start: 957
// line end:   962
void Pldamege_Em12d(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801011FC
// line start: 970
// line end:   1015
void Em2d_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x244
	register struct _74fake *pAi;
	// register: 16
	register unsigned char Cdir_ck_flg;
	{
	}
}


