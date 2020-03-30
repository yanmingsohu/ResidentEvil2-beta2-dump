#include "types.h"

// === [ Overlay ID 38 ] ===

// address: 0x80111590
static unsigned short Em23_life;

// address: 0x80111592
static unsigned short Em23_life_easy;

// address: 0x80111594
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x801115A8
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x801115BC
static unsigned short Em2b_life;

// address: 0x801115BE
static unsigned short Em2b_life_easy;

// address: 0x801115C0
// size: 0x20
static short Em37_pos_xyz[4][4];

// address: 0x801115E0
// size: 0x20
static void (*Em37_routine_0[8])();

// address: 0x80111600
// size: 0x8
static void (*Em37_Move_type[2])();

// address: 0x80111608
// size: 0x3C
static void (*Em37_mv_br_type00[15])();

// address: 0x80111644
// size: 0x3C
static void (*Em37_mv_type00[15])();

// address: 0x80111680
static void (*Em37_mv_br_type01[])();

// address: 0x80111680
static void (*Em37_mv_type01[])();

// address: 0x80111680
// size: 0x8
static unsigned char Em37_mv03_tbl[4][2];

// address: 0x80111688
// size: 0x8
static short Em37_mv03_dir_tbl[4];

// address: 0x80111690
// size: 0x30
static short Em37_mv08_tbl[6][4];

// address: 0x801116C0
// size: 0x80
static short Em37_mv0b_tbl[4][16];

// address: 0x80111740
static void (*Em37_dm[9][])();

// address: 0x80111740
// size: 0x24
static unsigned char Em37_Dm_cnt[2][18];

// address: 0x80111764
static void (*Em37_die[9][])();

// address: 0x80111764
static void (*Em37_sce[])();

// address: 0x80111764
// size: 0xC
static void (*Pldamage_Em37_tbl[3])();

// address: 0x80111770
static void (*Pldie_Em37_tbl[])();

// address: 0x80111770
// size: 0x78
static struct _115fake G5s_jh0_tbl[30];

// address: 0x801117E8
// size: 0x38
static struct _116fake G5s_jh0_head[1];

// address: 0x80111820
// size: 0x50
static struct _115fake G5s_jh1_tbl[20];

// address: 0x80111870
// size: 0x38
static struct _116fake G5s_jh1_head[1];

// address: 0x801118A8
// size: 0x40
static struct _115fake G5s_jh2_tbl[16];

// address: 0x801118E8
// size: 0x38
static struct _116fake G5s_jh2_head[1];

// address: 0x8010D12C
// line start: 71
// line end:   159
void Em237(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x8010D404
// line start: 166
// line end:   169
void Em37_after(struct _74fake *pEm);

// address: 0x8010D440
// line start: 173
// line end:   368
void Em37_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 2
	// size: 0xAC
	register struct _65fake *pO_ptr;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 16
	register unsigned long i;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	// register: 18
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	// size: 0x244
	register struct _74fake *pKem;
}


// address: 0x8010D848
// line start: 380
// line end:   384
void Em37_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D888
// line start: 405
// line end:   411
void Em37_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D90C
// line start: 424
// line end:   430
void Em37_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D990
// line start: 437
// line end:   440
void Em37_mv00_br(struct _74fake *pEm);

// address: 0x8010D998
// line start: 442
// line end:   468
void Em37_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010DA08
// line start: 473
// line end:   476
void Em37_mv01_br(struct _74fake *pEm);

// address: 0x8010DA10
// line start: 478
// line end:   543
void Em37_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	// size: 0xAC
	register struct _65fake *pTa;
	// register: 2
	register long X;
	// register: 2
	register long Z;
	// register: 4
	register long L;
}


// address: 0x8010DC74
// line start: 548
// line end:   550
void Em37_mv02_br(struct _74fake *pEm);

// address: 0x8010DC7C
// line start: 552
// line end:   750
void Em37_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 2
	// size: 0xAC
	register struct _65fake *pTa;
	// register: 2
	register long X;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
}


// address: 0x8010E2C8
// line start: 755
// line end:   757
void Em37_mv03_br(struct _74fake *pEm);

// address: 0x8010E2D0
// line start: 769
// line end:   894
void Em37_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
		}
	}
}


// address: 0x8010E6A8
// line start: 899
// line end:   901
void Em37_mv04_br(struct _74fake *pEm);

// address: 0x8010E6B0
// line start: 903
// line end:   940
void Em37_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pTa;
}


// address: 0x8010E874
// line start: 946
// line end:   948
void Em37_mv05_br(struct _74fake *pEm);

// address: 0x8010E87C
// line start: 950
// line end:   992
void Em37_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 2
	// size: 0xAC
	register struct _65fake *pTa;
}


// address: 0x8010E9E8
// line start: 997
// line end:   999
void Em37_mv06_br(struct _74fake *pEm);

// address: 0x8010E9F0
// line start: 1001
// line end:   1020
void Em37_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010EA7C
// line start: 1025
// line end:   1027
void Em37_mv07_br(struct _74fake *pEm);

// address: 0x8010EA84
// line start: 1029
// line end:   1058
void Em37_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pTa;
}


// address: 0x8010EB34
// line start: 1073
// line end:   1076
void Em37_mv08_br(struct _74fake *pEm);

// address: 0x8010EB3C
// line start: 1078
// line end:   1207
void Em37_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto unsigned char Mot_tbl[4];
	{
	}
}


// address: 0x8010EEB4
// line start: 1212
// line end:   1216
void Em37_mv09_br(struct _74fake *pEm);

// address: 0x8010EEBC
// line start: 1218
// line end:   1417
void Em37_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 2
	register long X;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
	{
	}
}


// address: 0x8010F578
// line start: 1423
// line end:   1427
void Em37_mv0a_br(struct _74fake *pEm);

// address: 0x8010F580
// line start: 1429
// line end:   1499
void Em37_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
	}
}


// address: 0x8010F8B0
// line start: 1504
// line end:   1508
void Em37_mv0b_br(struct _74fake *pEm);

// address: 0x8010F8B8
// line start: 1535
// line end:   1787
void Em37_mv0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 2
	register long X;
	// register: 2
	register long Ck;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
		}
	}
}


// address: 0x80110174
// line start: 1792
// line end:   1794
void Em37_mv0c_br(struct _74fake *pEm);

// address: 0x8011017C
// line start: 1797
// line end:   1856
void Em37_mv0c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80110338
// line start: 1861
// line end:   1863
void Em37_mv0d_br(struct _74fake *pEm);

// address: 0x80110340
// line start: 1866
// line end:   1925
void Em37_mv0d(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801104FC
// line start: 1930
// line end:   1932
void Em37_mv0e_br(struct _74fake *pEm);

// address: 0x80110504
// line start: 1935
// line end:   2006
void Em37_mv0e(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80110704
// line start: 2059
// line end:   2061
void Em37_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110754
// line start: 2069
// line end:   2071
void Em37_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8011075C
// line start: 2077
// line end:   2079
void Em37_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110764
// line start: 2090
// line end:   2096
void Em37_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801107B4
// line start: 2101
// line end:   2103
void Em37_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801107BC
// line start: 2116
// line end:   2119
void Em37_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801107F8
// line start: 2127
// line end:   2129
void Em37_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110800
// line start: 2136
// line end:   2139
void Em37_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110808
// line start: 2150
// line end:   2155
void Pldamege_Em237(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110844
// line start: 2162
// line end:   2208
void Em37_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv0;
	{
	}
}


// address: 0x801109D4
// line start: 2213
// line end:   2278
void Em37_pldm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80110BCC
// line start: 2290
// line end:   2294
void Pldie_Em237(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110C08
// line start: 2301
// line end:   2307
void Em37_trans(struct _74fake *pEm, struct _65fake *pP_ptr) {
}


// address: 0x80110C94
// line start: 2312
// line end:   2316
void Em37_move(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80110CE8
// line start: 2450
// line end:   2454
unsigned long G5s_Jh_init(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x80110D54
// line start: 2459
// line end:   2470
void G5s_Jh_move(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80110DC8
// line start: 2475
// line end:   2495
void Goto00_x(struct _74fake *pEm, long Vec_y, long Vec_z, short Add_dir) {
	// register: 3
	register short Dir;
}


// address: 0x80110E6C
// line start: 2500
// line end:   2551
void Em37_ob_at(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x80110FC8
// line start: 2554
// line end:   2614
void Em37_ob_at1(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 16
	// size: 0x244
	register struct _74fake *pO;
}


// address: 0x80111120
// size: 0x244
// line start: 2626
// line end:   2747
struct _74fake *EM37_Set_enemy_work(unsigned char Id, struct _74fake *pMoto) {
	// register: 7
	register long i;
	// register: 5
	register long Flg;
	// register: 16
	// size: 0x244
	register struct _74fake *pEm;
	// register: 3
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 9
	// size: 0x244
	register struct _74fake **pTmp;
	// register: 17
	// size: 0x8728
	register struct _97fake *pG;
	// register: 8
	register unsigned long Mem_top;
}


// address: 0x80111530
// line start: 2753
// line end:   2760
void Em37_hari_quake(struct _74fake *pEm);

