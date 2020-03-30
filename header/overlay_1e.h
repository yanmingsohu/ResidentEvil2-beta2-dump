#include "types.h"

// === [ Overlay ID 1e ] ===

// address: 0x801012F0
static unsigned short Em23_life;

// address: 0x801012F2
static unsigned short Em23_life_easy;

// address: 0x801012F4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80101308
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8010131C
static unsigned short Em2b_life;

// address: 0x8010131E
static unsigned short Em2b_life_easy;

// address: 0x80101320
// size: 0x20
static void (*Em3b_routine_0[8])();

// address: 0x80101340
// size: 0xC
static unsigned char init_routine_tbl[12];

// address: 0x8010134C
// size: 0x4
static unsigned char set_max_tbl[4];

// address: 0x80101350
// size: 0x18
static void (*em3b_move_tbl[6])();

// address: 0x80101368
// size: 0xC
static void (*move_oya_tbl[3])();

// address: 0x80101374
// size: 0x8
static unsigned char set_int_tbl[8];

// address: 0x8010137C
// size: 0xC
static void (*move_oya2_tbl[3])();

// address: 0x80101388
// size: 0x14
static unsigned char dieblood_type_tbl[20];

// address: 0x8010139C
// size: 0x14
static unsigned char die_time_tbl[20];

// address: 0x801013B0
// size: 0x1E
static struct _102fake blood_id_tbl[5];

// address: 0x80100004
// line start: 49
// line end:   64
void Em13b(struct _74fake *pEm) {
	{
	}
}


// address: 0x80100090
// line start: 83
// line end:   190
void Em3b_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xE
	register struct _101fake *pFp;
	// register: 4
	register unsigned long i;
	{
	}
}


// address: 0x8010037C
// line start: 196
// line end:   207
void Em3b_Init_wall(struct _74fake *pEm, short rx, short ry, short rz);

// address: 0x801003E8
// line start: 228
// line end:   244
void Em3b_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	// size: 0xE
	register struct _101fake *pFp;
}


// address: 0x80100474
// line start: 253
// line end:   259
void Em3b_Move_move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801004B4
// line start: 267
// line end:   324
void Em3b_mv_move00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	register short dir;
	// register: 18
	// size: 0xE
	register struct _101fake *pFp;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake goal;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801006EC
// line start: 332
// line end:   374
void Em3b_mv_move10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Ofs;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Rot;
	{
	}
}


// address: 0x8010083C
// line start: 384
// line end:   408
void Em3b_Move_fall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80100934
// line start: 428
// line end:   433
void Em3b_Move_oya(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100984
// line start: 445
// line end:   482
void Em3b_mv_oya00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x218
	register struct _72fake *pTg;
	// register: 17
	// size: 0xE
	register struct _101fake *pFp;
	{
		{
		}
	}
}


// address: 0x80100ADC
// line start: 499
// line end:   536
void Em3b_mv_oya10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x244
	register struct _74fake *pWk;
	// register: 18
	// size: 0xE
	register struct _101fake *pFp;
	// register: 16
	register long x;
	{
	}
}


// address: 0x80100C04
// line start: 543
// line end:   544
void Em3b_mv_oya20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100C0C
// line start: 554
// line end:   568
void Ck_total(struct _74fake *pEm) {
	{
	}
}


// address: 0x80100C60
// line start: 579
// line end:   580
void Em3b_Move_wall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100C80
// line start: 590
// line end:   613
void Em3b_Move_loop(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xE
	register struct _101fake *pFp;
	{
	}
}


// address: 0x80100D70
// line start: 633
// line end:   636
void Em3b_Move_oya2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100DC0
// line start: 645
// line end:   657
void Em3b_mv_oya200(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100DFC
// line start: 664
// line end:   665
void Em3b_mv_oya220(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100E04
// line start: 688
// line end:   689
void Em3b_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100E0C
// line start: 709
// line end:   757
void Em3b_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x68
	register struct _61fake *pKage;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
	{
	}
}


// address: 0x80100F94
// line start: 770
// line end:   771
void Em3b_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100F9C
// line start: 788
// line end:   838
void Em3b_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	// size: 0x68
	register struct _61fake *pKage;
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 6
	register unsigned long i;
}


// address: 0x80101100
// line start: 867
// line end:   891
void Set_blood(struct _74fake *pEm, unsigned char parts, unsigned char type) {
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 4
	register long Id;
	// register: 16
	// size: 0x6
	register struct _102fake *tbl;
}


// address: 0x801011EC
// line start: 903
// line end:   914
void Em3b_Pl_to_dmg(unsigned long pl, unsigned char dir) {
	// register: 4
	// size: 0x218
	register struct _72fake *pPl;
}


// address: 0x80101230
// size: 0x244
// line start: 928
// line end:   950
struct _74fake *Set_child(struct _74fake *pEm, unsigned long Type, long Px, long Pz) {
	// register: 4
	// size: 0x244
	register struct _74fake *pWk;
}


