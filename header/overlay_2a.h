#include "types.h"

// === [ Overlay ID 2a ] ===

// address: 0x801104F0
static unsigned short Em23_life;

// address: 0x801104F2
static unsigned short Em23_life_easy;

// address: 0x801104F4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80110508
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8011051C
static unsigned short Em2b_life;

// address: 0x8011051E
static unsigned short Em2b_life_easy;

// address: 0x80110520
// size: 0x20
static void (*Em27_routine_0[8])();

// address: 0x80110540
static void (*Em27_Move_type[])();

// address: 0x80110540
// size: 0x20
static void (*Em27_mv_br_type00[8])();

// address: 0x80110560
// size: 0x20
static void (*Em27_mv_type00[8])();

// address: 0x80110580
// size: 0x48
static void (*Em27_die[18])();

// address: 0x801105C8
// size: 0x4
static void (*Pldamage_Em27_tbl[1])();

// address: 0x801105CC
static void (*Pldie_Em27_tbl[])();

// address: 0x8010D0E0
// line start: 47
// line end:   101
void Em227(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x8010D1CC
// line start: 108
// line end:   245
void Em27_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv1;
	// register: 17
	register unsigned long i;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
	}
}


// address: 0x8010D5B8
// line start: 257
// line end:   263
void Em27_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D5D8
// line start: 280
// line end:   286
void Em27_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D65C
// line start: 293
// line end:   295
void Em27_mv00_br(struct _74fake *pEm);

// address: 0x8010D664
// line start: 298
// line end:   300
void Em27_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D66C
// line start: 305
// line end:   318
void Em27_mv01_br(struct _74fake *pEm) {
	// register: 16
	register unsigned long LL;
}


// address: 0x8010D6CC
// line start: 320
// line end:   433
void Em27_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	register short Add;
	// address: 0xFFFFFF88
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFF90
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x8010DAE4
// line start: 439
// line end:   441
void Em27_mv02_br(struct _74fake *pEm);

// address: 0x8010DAEC
// line start: 443
// line end:   484
void Em27_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010DC88
// line start: 489
// line end:   491
void Em27_mv03_br(struct _74fake *pEm);

// address: 0x8010DC90
// line start: 493
// line end:   717
void Em27_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFA0
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto unsigned char Em27_mv03_tbl[8];
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x8010E338
// line start: 722
// line end:   724
void Em27_mv04_br(struct _74fake *pEm);

// address: 0x8010E340
// line start: 726
// line end:   1110
void Em27_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	// register: 2
	register unsigned short Rot;
	// register: 18
	register long x;
	// register: 17
	register long z;
	// register: 4
	register long i;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto unsigned char Em27_kam[4];
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8010EFB0
// line start: 1113
// line end:   1132
unsigned long Em27_gacha_ch() {
	// register: 2
	register unsigned long R;
}


// address: 0x8010EFDC
// line start: 1137
// line end:   1139
void Em27_mv05_br(struct _74fake *pEm);

// address: 0x8010EFE4
// line start: 1141
// line end:   1222
void Em27_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8010F2E8
// line start: 1227
// line end:   1229
void Em27_mv06_br(struct _74fake *pEm);

// address: 0x8010F2F0
// line start: 1232
// line end:   1397
void Em27_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 4
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x8010F808
// line start: 1402
// line end:   1404
void Em27_mv07_br(struct _74fake *pEm);

// address: 0x8010F810
// line start: 1406
// line end:   1476
void Em27_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8010FAB0
// line start: 1481
// line end:   1495
void Em27_pl_on(struct _74fake *pEm, unsigned long L, short Dir) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010FB50
// line start: 1506
// line end:   1508
void Em27_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FB58
// line start: 1573
// line end:   1579
void Em27_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010FB94
// line start: 1584
// line end:   1707
void Em27_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
	// register: 18
	// size: 0x68
	register struct _61fake *pKage;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x8010FFB8
// line start: 1717
// line end:   1719
void Em27_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FFC0
// line start: 1727
// line end:   1819
void Em27_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 17
	register unsigned long i;
	// register: 20
	// size: 0x68
	register struct _61fake *pKage;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
		}
	}
}


// address: 0x801101E0
// line start: 1830
// line end:   1835
void Pldamege_Em227(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8011021C
// line start: 1842
// line end:   1929
void Em27_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
		}
	}
}


// address: 0x801104B4
// line start: 1940
// line end:   1944
void Pldie_Em227(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

