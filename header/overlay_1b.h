#include "types.h"

// === [ Overlay ID 1b ] ===

// address: 0x801008D0
static unsigned short Em23_life;

// address: 0x801008D2
static unsigned short Em23_life_easy;

// address: 0x801008D4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x801008E8
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x801008FC
static unsigned short Em2b_life;

// address: 0x801008FE
static unsigned short Em2b_life_easy;

// address: 0x80100900
// size: 0x20
static void (*Em38_routine_0[8])();

// address: 0x80100920
// size: 0x8
static void (*Em38_Move_type[2])();

// address: 0x80100928
// size: 0x8
static void (*Em38_mv_br_type00[2])();

// address: 0x80100930
// size: 0x8
static void (*Em38_mv_type00[2])();

// address: 0x80100938
static void (*Em38_mv_br_type01[])();

// address: 0x80100938
static void (*Em38_mv_type01[])();

// address: 0x80100938
// size: 0x264
static void (*Em38_dm[9][17])();

// address: 0x80100B9C
// size: 0x22
static unsigned char Em38_Dm_cnt[2][17];

// address: 0x80100BC0
// size: 0x264
static void (*Em38_die[9][17])();

// address: 0x80100E24
static void (*Em38_sce[])();

// address: 0x80100E24
// size: 0x8
static void (*Pldamage_Em38_tbl[2])();

// address: 0x80100E2C
static void (*Pldie_Em38_tbl[])();

// address: 0x80100018
// line start: 47
// line end:   86
void Em138(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x801000BC
// line start: 93
// line end:   95
void Em38_after(struct _74fake *pEm);

// address: 0x801000C4
// line start: 98
// line end:   173
void Em38_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x801001C8
// line start: 185
// line end:   189
void Em38_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100208
// line start: 204
// line end:   210
void Em38_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010028C
// line start: 223
// line end:   229
void Em38_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100310
// line start: 236
// line end:   247
void Em38_mv00_br(struct _74fake *pEm) {
}


// address: 0x80100378
// line start: 249
// line end:   261
void Em38_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801003D4
// line start: 266
// line end:   281
void Em38_mv01_br(struct _74fake *pEm) {
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


// address: 0x8010044C
// line start: 283
// line end:   285
void Em38_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100454
// line start: 290
// line end:   292
void Em38_mv02_br(struct _74fake *pEm);

// address: 0x8010045C
// line start: 294
// line end:   296
void Em38_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100464
// line start: 301
// line end:   303
void Em38_mv03_br(struct _74fake *pEm);

// address: 0x8010046C
// line start: 305
// line end:   307
void Em38_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100474
// line start: 312
// line end:   314
void Em38_mv04_br(struct _74fake *pEm);

// address: 0x8010047C
// line start: 316
// line end:   318
void Em38_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100484
// line start: 324
// line end:   326
void Em38_mv05_br(struct _74fake *pEm);

// address: 0x8010048C
// line start: 328
// line end:   330
void Em38_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100494
// line start: 335
// line end:   337
void Em38_mv06_br(struct _74fake *pEm);

// address: 0x8010049C
// line start: 339
// line end:   341
void Em38_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801004A4
// line start: 346
// line end:   348
void Em38_mv07_br(struct _74fake *pEm);

// address: 0x801004AC
// line start: 350
// line end:   352
void Em38_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801004B4
// line start: 357
// line end:   360
void Em38_mv08_br(struct _74fake *pEm);

// address: 0x801004BC
// line start: 362
// line end:   366
void Em38_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801004C4
// line start: 371
// line end:   375
void Em38_mv09_br(struct _74fake *pEm);

// address: 0x801004CC
// line start: 377
// line end:   379
void Em38_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801004D4
// line start: 516
// line end:   518
void Em38_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100524
// line start: 526
// line end:   528
void Em38_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010052C
// line start: 534
// line end:   536
void Em38_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100534
// line start: 632
// line end:   638
void Em38_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100584
// line start: 643
// line end:   645
void Em38_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010058C
// line start: 658
// line end:   661
void Em38_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801005C8
// line start: 669
// line end:   671
void Em38_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801005D0
// line start: 678
// line end:   681
void Em38_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801005D8
// line start: 692
// line end:   697
void Pldamege_Em138(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100614
// line start: 703
// line end:   735
void Em38_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80100734
// line start: 739
// line end:   797
void Em38_pldm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100894
// line start: 809
// line end:   813
void Pldie_Em138(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

