#include "types.h"

// === [ Overlay ID 32 ] ===

// address: 0x8010F050
static unsigned short Em23_life;

// address: 0x8010F052
static unsigned short Em23_life_easy;

// address: 0x8010F054
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x8010F068
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8010F07C
static unsigned short Em2b_life;

// address: 0x8010F07E
static unsigned short Em2b_life_easy;

// address: 0x8010F080
// size: 0x20
static void (*Em2f_routine_0[8])();

// address: 0x8010F0A0
// size: 0x28
static void (*Mv_move_tbl[10])();

// address: 0x8010F0C8
// size: 0xC
static void (*move_atck_tbl[3])();

// address: 0x8010F0D4
// size: 0x8
static unsigned char atck_wait_tbl[8];

// address: 0x8010F0DC
// size: 0x14
static void (*Em2f_dmg_tbl[5])();

// address: 0x8010F0F0
// size: 0x8
static void (*dmg_omake_tbl[2])();

// address: 0x8010F0F8
// size: 0x4C
static void (*em2f_die_tbl[19])();

// address: 0x8010F144
// size: 0x24
static struct _108fake blood_id_tbl[6];

// address: 0x8010F168
// size: 0x28
static struct _104fake Iv_jh0_tbl[10];

// address: 0x8010F190
// size: 0x38
static struct _105fake Iv_jh0_head[1];

// address: 0x8010F1C8
// size: 0x34
static struct _104fake Iv_jh1_tbl[13];

// address: 0x8010F1FC
// size: 0x38
static struct _105fake Iv_jh1_head[1];

// address: 0x8010D034
// line start: 55
// line end:   91
void Em22f(struct _74fake *pEm) {
	{
	}
}


// address: 0x8010D10C
// line start: 101
// line end:   102
void Em2f_after(struct _74fake *pEm);

// address: 0x8010D12C
// line start: 106
// line end:   189
void Em2f_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x8010D33C
// line start: 200
// line end:   206
void Em2f_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D37C
// line start: 215
// line end:   216
void Em2f_Mv_dummy(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D384
// line start: 239
// line end:   268
void Em2f_Mv_move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register unsigned char req;
}


// address: 0x8010D44C
// line start: 275
// line end:   285
void Em2f_move_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D4D0
// line start: 300
// line end:   316
void Em2f_move_atck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0x244
	register struct _74fake *pIv;
	// register: 2
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x8010D56C
// line start: 327
// line end:   333
void move_atck00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D5E4
// line start: 340
// line end:   369
void move_atck10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x244
	register struct _74fake *pIv;
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x8010D708
// line start: 377
// line end:   413
void move_atck20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x244
	register struct _74fake *pIv;
	// register: 17
	register unsigned long chr_type;
	// register: 18
	register unsigned long eos;
}


// address: 0x8010D7F4
// line start: 416
// line end:   426
void move_atck20_0(struct _74fake *pEm);

// address: 0x8010D820
// line start: 434
// line end:   436
void move_atck30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D828
// line start: 445
// line end:   495
void Em2f_move_neck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x244
	register struct _74fake *pIv;
	// register: 19
	// size: 0x28
	register struct _106fake *pIvf;
	// register: 2
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x8010DA14
// line start: 507
// line end:   519
void Em2f_move_dmg(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DABC
// line start: 528
// line end:   548
void Em2f_move_color(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010DB18
// line start: 555
// line end:   565
void Em2f_move_ivyfall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010DB58
// line start: 573
// line end:   590
void Em2f_move_gas(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DC18
// line start: 602
// line end:   616
void Em2f_move_hole(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DCA0
// line start: 623
// line end:   636
void Em2f_move_hole00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DD84
// line start: 644
// line end:   666
void Em2f_move_hole10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010DE44
// line start: 686
// line end:   687
void Em2f_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DE80
// line start: 696
// line end:   762
void Em2f_dmg_down(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0x244
	register struct _74fake *pIv;
}


// address: 0x8010E090
// line start: 769
// line end:   791
void Em2f_dmg_fall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E1B8
// line start: 806
// line end:   832
void Em2f_dmg_omake(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010E290
// line start: 838
// line end:   867
void Em2f_dmg_omake00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x28
	register struct _106fake *pIvf;
}


// address: 0x8010E3B0
// line start: 873
// line end:   948
void Em2f_dmg_omake10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned long chr_type;
	{
	}
}


// address: 0x8010E610
// line start: 958
// line end:   984
void Em2f_dmg_oki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0x18
	register struct _107fake *pFp;
}


// address: 0x8010E6B8
// line start: 992
// line end:   1040
void Em2f_dmg_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x8010E840
// line start: 1078
// line end:   1081
void Em2f_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E88C
// line start: 1090
// line end:   1093
void Em2f_Die_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E8CC
// line start: 1102
// line end:   1135
void Em2f_Die_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long i;
}


// address: 0x8010EA48
// line start: 1149
// line end:   1150
void Em2f_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010EA50
// line start: 1160
// line end:   1161
void Em2f_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010EA64
// size: 0xAC
// line start: 1179
// line end:   1189
struct _65fake *Get_parts_pos(struct _74fake *pTg, struct _2fake *pSv, unsigned long no) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010EAAC
// line start: 1201
// line end:   1239
void On_Ivyparts(struct _74fake *pEm, unsigned long mode) {
	// register: 20
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	// size: 0x244
	register struct _74fake *pTg;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake sv;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake sv2;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010EC08
// line start: 1254
// line end:   1300
long hit_ck_main(struct _74fake *pEm, long pl, short dmg) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pPt;
	// register: 16
	// size: 0x218
	register struct _72fake *pTg;
	// register: 3
	register long ck;
	// register: 18
	register long i;
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


// address: 0x8010EDB0
// line start: 1303
// line end:   1317
long Atck_hit_ck(struct _74fake *pEm, short dmg) {
	// register: 2
	register long rep;
}


// address: 0x8010EE28
// line start: 1328
// line end:   1334
void Em2f_Pl_to_dmg(struct _72fake *pPl, unsigned char dir);

// address: 0x8010EE4C
// line start: 1345
// line end:   1349
void Em2f_Pl_to_die(struct _72fake *pPl);

// address: 0x8010EE64
// line start: 1358
// line end:   1365
void Set_req(struct _74fake *pEm, unsigned char req);

// address: 0x8010EE94
// line start: 1374
// line end:   1396
void Pcolor_dec(struct _74fake *pEm) {
	// register: 6
	register unsigned long p0;
	// register: 5
	register unsigned long p1;
	// register: 3
	register unsigned long p2;
	// register: 9
	register unsigned long i;
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010EF08
// line start: 1418
// line end:   1440
void Set_blood(struct _74fake *pEm, unsigned char parts, unsigned char type) {
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 8
	register long dir;
	// register: 3
	// size: 0x6
	register struct _108fake *tbl;
}


// address: 0x8010EFA0
// line start: 1521
// line end:   1524
unsigned long Iv_Jh_init(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x8010EFF4
// line start: 1538
// line end:   1565
void Iv_Jh_move(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


