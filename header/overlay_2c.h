#include "types.h"

// === [ Overlay ID 2c ] ===

// address: 0x8010EC50
static unsigned long Hold_info;

// address: 0x8010EC54
static unsigned long Hold_num;

// address: 0x8010EC58
static unsigned long Critical_flg;

// address: 0x8010EC5C
static unsigned long Hold_time;

// address: 0x8010EA90
// size: 0x1C0
static struct _99fake Hold_tbl[32];

// address: 0x8010EA40
// size: 0x20
static void (*Em29_routine_0[8])();

// address: 0x8010EA60
// size: 0x14
static void (*Em29_mv_br[5])();

// address: 0x8010EA74
// size: 0x14
static void (*Em29_mv[5])();

// address: 0x8010EA88
// size: 0x8
static void (*Em29_die[2])();

// address: 0x8010EA38
// size: 0x8
static void (*Em29_pldm_tbl[2])();

// address: 0x8010D078
// line start: 42
// line end:   105
void Em229(struct _74fake *pEm) {
}


// address: 0x8010D25C
// line start: 110
// line end:   179
void Em29_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x8010D428
// line start: 185
// line end:   187
void Em29_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D4AC
// line start: 193
// line end:   193
void Em29_taiki_br(struct _74fake *pEm);

// address: 0x8010D4B4
// line start: 195
// line end:   217
void Em29_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8010D598
// line start: 221
// line end:   221
void Em29_run_br(struct _74fake *pEm);

// address: 0x8010D5A0
// line start: 223
// line end:   283
void Em29_run(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Spd;
	{
		{
		}
	}
}


// address: 0x8010D81C
// line start: 287
// line end:   287
void Em29_fly_br(struct _74fake *pEm);

// address: 0x8010D824
// line start: 289
// line end:   470
void Em29_fly(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 20
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	register long z;
	// register: 16
	register long y;
	// register: 17
	register long r;
	// address: 0xFFFFFF80
	// size: 0x20
	auto struct _0fake Tmp_m2;
	{
		{
			{
				// address: 0xFFFFFFA0
				// size: 0x20
				auto struct _0fake Tmp_m;
				// address: 0xFFFFFFC0
				// size: 0x10
				auto struct _1fake Vec;
				// register: 16
				// size: 0xE
				register struct _99fake *pH;
				// register: 17
				// size: 0xAC
				register struct _65fake *pPl_Parts;
				{
				}
			}
		}
	}
}


// address: 0x8010DDE8
// line start: 474
// line end:   474
void Em29_hold_br(struct _74fake *pEm);

// address: 0x8010DDF0
// line start: 476
// line end:   519
void Em29_hold(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 17
	// size: 0xE
	register struct _99fake *pH;
	{
	}
}


// address: 0x8010DFEC
// line start: 523
// line end:   523
void Em29_fall_br(struct _74fake *pEm);

// address: 0x8010DFF4
// line start: 525
// line end:   591
void Em29_fall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	register short Gnd;
	// register: 20
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFF88
	// size: 0x8
	auto struct _2fake Vec;
	{
		{
			// address: 0xFFFFFF90
			// size: 0x20
			auto struct _0fake Tmp_m;
			// address: 0xFFFFFFB0
			// size: 0x20
			auto struct _0fake Tmp_m2;
			// address: 0xFFFFFFD0
			// size: 0x10
			auto struct _1fake Vec;
			// register: 16
			// size: 0xE
			register struct _99fake *pH;
			// register: 17
			// size: 0xAC
			register struct _65fake *pPl_Parts;
			{
			}
		}
	}
}


// address: 0x8010E2D0
// line start: 661
// line end:   668
void Em29_die_ck(struct _74fake *pEm);

// address: 0x8010E2F8
// line start: 670
// line end:   679
void Em29_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E380
// line start: 685
// line end:   686
void Em29_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E388
// line start: 691
// line end:   692
void Em29_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E390
// line start: 697
// line end:   739
void Em29_die0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 4
	register short Gnd;
	{
	}
}


// address: 0x8010E548
// line start: 744
// line end:   763
void Em29_die1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	{
	}
}


// address: 0x8010E608
// line start: 768
// line end:   775
void Em229_Pldm(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010E64C
// line start: 780
// line end:   795
void Em29_Pl00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010E6EC
// line start: 800
// line end:   810
void Em29_Pl0f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010E748
// line start: 843
// line end:   851
void Em29_Dir_set(struct _74fake *pEm) {
}


// address: 0x8010E814
// line start: 923
// line end:   954
unsigned long Em29_sel_hold() {
	// register: 3
	register unsigned long Randam;
	// register: 4
	register unsigned long Flg;
	// register: 16
	register unsigned long i;
	{
	}
}


// address: 0x8010E8B8
// line start: 960
// line end:   1009
unsigned long Dm_eff(struct _74fake *pEm, unsigned long Wep_no) {
}


// address: 0x8010E968
// line start: 1012
// line end:   1017
unsigned long Dm_eff_disp(struct _74fake *pEm, unsigned long Id, unsigned long Type, unsigned long Z) {
	// register: 19
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x8010EA00
// line start: 1020
// line end:   1027
unsigned long Dm_eff_explosion(struct _74fake *pEm, struct _65fake *pP_ptr);

