// D:\Bio2\prog\EM26.C

#include "types.h"

// address: 0x8010001C
// line start: 47
// line end:   74
void Em126(struct _74fake *pEm) {
	{
	}
}


// address: 0x801000DC
// line start: 91
// line end:   169
void Em26_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	register unsigned long i;
}


// address: 0x80100288
// line start: 190
// line end:   192
void Em26_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801002C4
// line start: 203
// line end:   206
void Em26_Mv_dummy(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801002E4
// line start: 223
// line end:   270
void Em26_Mv_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 4
	register long Dir0;
	// register: 2
	register long dist;
}


// address: 0x801004E8
// line start: 278
// line end:   317
void Em26_Mv_walk00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801005FC
// line start: 324
// line end:   376
void Em26_Mv_walk10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x80100714
// line start: 388
// line end:   431
void Em26_Mv_fall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	register long hit;
}


// address: 0x8010084C
// line start: 441
// line end:   492
void Em26_Mv_jump(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register long hit;
	// register: 18
	// size: 0xC
	register struct _98fake *pFp;
	{
		{
		}
	}
}


// address: 0x801009B0
// line start: 502
// line end:   553
void Em26_Mv_swim(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 18
	register long Dir0;
	// register: 2
	register long dist;
	{
		{
		}
	}
}


// address: 0x80100B84
// line start: 566
// line end:   594
void Catch_plparts(struct _74fake *pEm) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	// size: 0x8
	register struct _100fake *pTbl;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake sv;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake sv2;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80100CEC
// line start: 606
// line end:   608
void Em26_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100CF4
// line start: 614
// line end:   626
void Em26_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100D20
// line start: 633
// line end:   636
void Em26_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100D28
// line start: 641
// line end:   643
void Em26_dm02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100D30
// line start: 654
// line end:   661
void Em26_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100DB8
// line start: 677
// line end:   699
void Em26_Die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	// size: 0x68
	register struct _61fake *pKage;
	{
	}
}


// address: 0x80100E74
// line start: 706
// line end:   718
void Em26_Die10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100F04
// line start: 728
// line end:   731
void Em26_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100F0C
// line start: 738
// line end:   741
void Em26_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100F14
// line start: 750
// line end:   751
void Pldamage_Em126(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100F1C
// size: 0xAC
// line start: 769
// line end:   780
struct _65fake *Get_plparts(struct _2fake *pSv, unsigned long no) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80100F68
// line start: 790
// line end:   825
unsigned long Em26_atck_ck(struct _74fake *pEm, unsigned long pl) {
	// register: 3
	register unsigned long dist;
	// register: 17
	// size: 0x218
	register struct _72fake *pPl;
	// register: 18
	// size: 0xC
	register struct _98fake *pFp;
	{
	}
}


// address: 0x8010109C
// line start: 848
// line end:   868
void Set_blood(struct _74fake *pTg, unsigned char parts, unsigned char type) {
	// register: 9
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 5
	register long dir;
	// register: 7
	// size: 0x6
	register struct _99fake *tbl;
}


// address: 0x80101170
// line start: 882
// line end:   887
void Em26_Pl_to_dmg(struct _72fake *pPl, unsigned char dir);

// address: 0x80101194
// line start: 899
// line end:   913
long Get_sc_hit(struct _74fake *pEm) {
	// register: 2
	register long wat;
}


// address: 0x8010D01C
// line start: 47
// line end:   74
void Em226(struct _74fake *pEm) {
	{
	}
}


// address: 0x8010D0DC
// line start: 91
// line end:   169
void Em26_Init_addr_8010D0DC(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	register unsigned long i;
}


// address: 0x8010D288
// line start: 190
// line end:   192
void Em26_Move_addr_8010D288(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D2C4
// line start: 203
// line end:   206
void Em26_Mv_dummy_addr_8010D2C4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010D2E4
// line start: 223
// line end:   270
void Em26_Mv_walk_addr_8010D2E4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 4
	register long Dir0;
	// register: 2
	register long dist;
}


// address: 0x8010D4E8
// line start: 278
// line end:   317
void Em26_Mv_walk00_addr_8010D4E8(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010D5FC
// line start: 324
// line end:   376
void Em26_Mv_walk10_addr_8010D5FC(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x8010D714
// line start: 388
// line end:   431
void Em26_Mv_fall_addr_8010D714(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	register long hit;
}


// address: 0x8010D84C
// line start: 441
// line end:   492
void Em26_Mv_jump_addr_8010D84C(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register long hit;
	// register: 18
	// size: 0xC
	register struct _98fake *pFp;
	{
		{
		}
	}
}


// address: 0x8010D9B0
// line start: 502
// line end:   553
void Em26_Mv_swim_addr_8010D9B0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 18
	register long Dir0;
	// register: 2
	register long dist;
	{
		{
		}
	}
}


// address: 0x8010DB84
// line start: 566
// line end:   594
void Catch_plparts_addr_8010DB84(struct _74fake *pEm) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	// size: 0x8
	register struct _100fake *pTbl;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake sv;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake sv2;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010DCEC
// line start: 606
// line end:   608
void Em26_Damage_addr_8010DCEC(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DCF4
// line start: 614
// line end:   626
void Em26_dm00_addr_8010DCF4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DD20
// line start: 633
// line end:   636
void Em26_dm01_addr_8010DD20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DD28
// line start: 641
// line end:   643
void Em26_dm02_addr_8010DD28(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DD30
// line start: 654
// line end:   661
void Em26_Die_addr_8010DD30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010DDB8
// line start: 677
// line end:   699
void Em26_Die00_addr_8010DDB8(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	// size: 0x68
	register struct _61fake *pKage;
	{
	}
}


// address: 0x8010DE74
// line start: 706
// line end:   718
void Em26_Die10_addr_8010DE74(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010DF04
// line start: 728
// line end:   731
void Em26_Scenario_addr_8010DF04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DF0C
// line start: 738
// line end:   741
void Em26_Dead_addr_8010DF0C(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DF14
// line start: 750
// line end:   751
void Pldamage_Em226(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DF1C
// size: 0xAC
// line start: 769
// line end:   780
struct _65fake *Get_plparts_addr_8010DF1C(struct _2fake *pSv, unsigned long no) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010DF68
// line start: 790
// line end:   825
unsigned long Em26_atck_ck_addr_8010DF68(struct _74fake *pEm, unsigned long pl) {
	// register: 3
	register unsigned long dist;
	// register: 17
	// size: 0x218
	register struct _72fake *pPl;
	// register: 18
	// size: 0xC
	register struct _98fake *pFp;
	{
	}
}


// address: 0x8010E09C
// line start: 848
// line end:   868
void Set_blood_addr_8010E09C(struct _74fake *pTg, unsigned char parts, unsigned char type) {
	// register: 9
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 5
	register long dir;
	// register: 7
	// size: 0x6
	register struct _99fake *tbl;
}


// address: 0x8010E170
// line start: 882
// line end:   887
void Em26_Pl_to_dmg_addr_8010E170(struct _72fake *pPl, unsigned char dir);

// address: 0x8010E194
// line start: 899
// line end:   913
long Get_sc_hit_addr_8010E194(struct _74fake *pEm) {
	// register: 2
	register long wat;
}


