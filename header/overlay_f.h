#include "types.h"

// === [ Overlay ID f ] ===

// address: 0x80104614
static unsigned short Em23_life;

// address: 0x80104616
static unsigned short Em23_life_easy;

// address: 0x80104618
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x8010462C
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80104640
static unsigned short Em2b_life;

// address: 0x80104642
static unsigned short Em2b_life_easy;

// address: 0x80104C50
// size: 0x20
static void (*Em2a_routine_0[8])();

// address: 0x80104C70
// size: 0x48
static void (*Em2a_mv_br[18])();

// address: 0x80104CB8
// size: 0x48
static void (*Em2a_mv[18])();

// address: 0x80104D00
// size: 0x14
static void (*Em2a_damage[5])();

// address: 0x80104D14
static void (*Em2a_die[])();

// address: 0x80104D14
// size: 0xC
static void (*Em2a_pldm_tbl[3])();

// address: 0x80104924
// size: 0x1B0
static struct _107fake Blood_tbl[36];

// address: 0x80104AD4
// size: 0x54
static struct _107fake Flame_tbl[7];

// address: 0x80104B28
// size: 0x120
static struct _108fake Spark_tbl[24];

// address: 0x80104644
// size: 0x88
static struct _104fake Ty_jh0_tbl[34];

// address: 0x801046CC
// size: 0x38
static struct _105fake Ty_jh0_head[1];

// address: 0x80104704
// size: 0x98
static struct _104fake Ty_jh1_tbl[38];

// address: 0x8010479C
// size: 0x38
static struct _105fake Ty_jh1_head[1];

// address: 0x801047D4
// size: 0x98
static struct _104fake Ty_jh2_tbl[38];

// address: 0x8010486C
// size: 0x38
static struct _105fake Ty_jh2_head[1];

// address: 0x801048A4
// size: 0x8
static struct _104fake Ty_jh3_tbl[2];

// address: 0x801048AC
// size: 0x38
static struct _105fake Ty_jh3_head[1];

// address: 0x801048E4
// size: 0x8
static struct _104fake Ty_jh4_tbl[2];

// address: 0x801048EC
// size: 0x38
static struct _105fake Ty_jh4_head[1];

// address: 0x80104C48
// size: 0x8
static unsigned char Em2a_sce_rtn[8];

// address: 0x80100180
// line start: 209
// line end:   215
unsigned long Ty_Jh_init(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x8010021C
// line start: 222
// line end:   253
void Ty_Jh_move(struct _74fake *pEm) {
}


// address: 0x801002C0
// line start: 299
// line end:   317
unsigned long Em2a_Att_ck(struct _74fake *pEm, unsigned long Parts_no, unsigned short Start, unsigned short End, unsigned long At_dis) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 4
	register unsigned long Dis;
}


// address: 0x801003DC
// line start: 322
// line end:   371
unsigned long Att_ck2(struct _74fake *pEm, unsigned long Parts_no, unsigned short Start, unsigned short End, unsigned long At_dis, unsigned long At_w) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	register unsigned long Dis;
	// register: 17
	register long Dir0;
	// register: 16
	register long Dir1;
	// register: 2
	register long Dir2;
	// register: 16
	register short Old_x;
	// register: 19
	register short Old_z;
}


// address: 0x801005FC
// line start: 377
// line end:   388
void Em2a_add_dm(unsigned long Att) {
}


// address: 0x80100630
// line start: 398
// line end:   412
unsigned long S_rnd(unsigned char N, unsigned long *pBuf, unsigned long *pBuf2) {
	// register: 3
	register long Ck;
}


// address: 0x801006BC
// line start: 417
// line end:   426
long Get_dir_pl(struct _74fake *pEm) {
	// register: 3
	register short Dir;
}


// address: 0x80100728
// line start: 427
// line end:   435
long Pl_dm_set_normal(struct _74fake *pEm) {
}


// address: 0x80100784
// line start: 437
// line end:   468
long Pl_dm_set(struct _74fake *pEm, struct _2fake *pSv, unsigned long Parts_no) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 19
	// size: 0x244
	register struct _74fake *pPl;
}


// address: 0x80100914
// line start: 475
// line end:   526
unsigned long Dm_eff(struct _74fake *pEm);

// address: 0x80100AA8
// line start: 538
// line end:   567
void Dm_eff_blood(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Atr) {
	// register: 7
	// size: 0xC
	register struct _107fake *pEsp;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 23
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	register unsigned long Ofs;
	// register: 17
	register unsigned long Mask;
	// register: 3
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x80100C34
// line start: 572
// line end:   595
void Dm_eff_0f(struct _74fake *pEm) {
	// address: 0x80104D20
	static int Damage_no;
	// address: 0x80104D24
	static int Damage_old;
}


// address: 0x80100D5C
// line start: 600
// line end:   609
void Dm_eff_disp(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, struct _107fake *pEsp) {
	// register: 22
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	{
	}
}


// address: 0x80100E50
// line start: 611
// line end:   623
void Dm_eff_flame(struct _74fake *pEm) {
	// register: 17
	// size: 0xC
	register struct _107fake *pEsp;
	// register: 20
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	register unsigned long No;
	{
	}
}


// address: 0x80100F08
// line start: 626
// line end:   654
void Dm_eff_spark(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0x80104D28
	// size: 0xC
	static struct _108fake *pEsp2;
	{
	}
}


// address: 0x80101034
// line start: 814
// line end:   840
void Goto00_r(struct _74fake *pEm, long Vec_x, long Vec_z, short Add_dir) {
	// register: 4
	register short Dir;
}


// address: 0x801010F8
// line start: 843
// line end:   856
long Sca_escape(struct _74fake *pEm) {
	// register: 3
	register short Dir;
	// register: 3
	// size: 0x10
	register struct _57fake *pSca;
}


// address: 0x8010118C
// line start: 55
// line end:   145
void Em12a(struct _74fake *pEm) {
}


// address: 0x801012C8
// line start: 150
// line end:   151
void Em2a_after(struct _74fake *pEm);

// address: 0x801012E8
// line start: 154
// line end:   346
void Em2a_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 3
	register unsigned long St_room;
	// register: 6
	register unsigned long *Bak;
}


// address: 0x80101898
// line start: 351
// line end:   358
void Em2a_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80101934
// line start: 363
// line end:   497
void Em2a_brain(struct _74fake *pEm) {
	// register: 18
	register short Dir;
	// register: 17
	register short Dir2;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Vec;
	// address: 0x80101A74
	bool next;
	{
	}
}


// address: 0x80101CEC
// line start: 501
// line end:   501
void Em2a_taiki_br(struct _74fake *pEm);

// address: 0x80101CF4
// line start: 503
// line end:   509
void Em2a_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101CFC
// line start: 513
// line end:   513
void Em2a_walk_br(struct _74fake *pEm);

// address: 0x80101D04
// line start: 515
// line end:   559
void Em2a_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101E58
// line start: 563
// line end:   563
void Em2a_walkf_br(struct _74fake *pEm);

// address: 0x80101E60
// line start: 565
// line end:   597
void Em2a_walkf(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101FAC
// line start: 601
// line end:   601
void Em2a_att_c_br(struct _74fake *pEm);

// address: 0x80101FB4
// line start: 603
// line end:   669
void Em2a_att_c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 18
	// size: 0x244
	register struct _74fake *pPl;
	{
		{
			// address: 0xFFFFFFE0
			// size: 0x8
			auto struct _2fake Bpos;
		}
	}
}


// address: 0x80102210
// line start: 673
// line end:   673
void Em2a_att2_r_br(struct _74fake *pEm);

// address: 0x80102218
// line start: 675
// line end:   724
void Em2a_att2_r(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 18
	// size: 0x244
	register struct _74fake *pPl;
	{
		{
			// address: 0xFFFFFFE0
			// size: 0x8
			auto struct _2fake Bpos;
		}
	}
}


// address: 0x801023F4
// line start: 728
// line end:   728
void Em2a_att2_l_br(struct _74fake *pEm);

// address: 0x801023FC
// line start: 730
// line end:   778
void Em2a_att2_l(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 18
	// size: 0x244
	register struct _74fake *pPl;
	{
		{
			// address: 0xFFFFFFE0
			// size: 0x8
			auto struct _2fake Bpos;
		}
	}
}


// address: 0x801025B8
// line start: 782
// line end:   782
void Em2a_att_w_br(struct _74fake *pEm);

// address: 0x801025C0
// line start: 784
// line end:   823
void Em2a_att_w(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	{
		{
			// address: 0xFFFFFFE0
			// size: 0x8
			auto struct _2fake Bpos;
		}
	}
}


// address: 0x80102790
// line start: 827
// line end:   827
void Em2a_att_t_br(struct _74fake *pEm);

// address: 0x80102798
// line start: 829
// line end:   917
void Em2a_att_t(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	// size: 0x244
	register struct _74fake *pPl;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Svec;
	{
		{
			// address: 0xFFFFFFD8
			// size: 0x8
			auto struct _2fake Bpos;
			{
				// address: 0xFFFFFFE0
				// size: 0x8
				auto struct _2fake Bpos;
			}
		}
	}
}


// address: 0x801029D4
// line start: 921
// line end:   921
void Em2a_att_cf_br(struct _74fake *pEm);

// address: 0x801029DC
// line start: 923
// line end:   960
void Em2a_att_cf(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	{
		{
			// address: 0xFFFFFFE8
			// size: 0x8
			auto struct _2fake Bpos;
		}
	}
}


// address: 0x80102B24
// line start: 964
// line end:   964
void Em2a_117_br(struct _74fake *pEm);

// address: 0x80102B2C
// line start: 966
// line end:   1005
void Em2a_117(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102CAC
// line start: 1009
// line end:   1009
void Em2a_30a_br(struct _74fake *pEm);

// address: 0x80102CB4
// line start: 1011
// line end:   1045
void Em2a_30a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102DD8
// line start: 1049
// line end:   1049
void Em2a_602_br(struct _74fake *pEm);

// address: 0x80102DE0
// line start: 1051
// line end:   1082
void Em2a_602(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102EF8
// line start: 1086
// line end:   1086
void Em2a_507_br(struct _74fake *pEm);

// address: 0x80102F00
// line start: 1088
// line end:   1125
void Em2a_507(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010303C
// line start: 1129
// line end:   1129
void Em2a_604l_br(struct _74fake *pEm);

// address: 0x80103044
// line start: 1131
// line end:   1283
void Em2a_604l(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103444
// line start: 1287
// line end:   1287
void Em2a_604c_br(struct _74fake *pEm);

// address: 0x8010344C
// line start: 1289
// line end:   1370
void Em2a_604c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801036E4
// line start: 1374
// line end:   1374
void Em2a_20d_br(struct _74fake *pEm);

// address: 0x801036EC
// line start: 1376
// line end:   1404
void Em2a_20d(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801037FC
// line start: 1408
// line end:   1408
void Em2a_cri_br(struct _74fake *pEm);

// address: 0x80103804
// line start: 1410
// line end:   1481
void Em2a_cri(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Bpos;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Vec;
	// register: 16
	register short Dir;
	{
		{
			{
			}
		}
	}
}


// address: 0x80103AFC
// line start: 1485
// line end:   1485
void Em2a_612_br(struct _74fake *pEm);

// address: 0x80103B04
// line start: 1487
// line end:   1506
void Em2a_612(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103BF0
// line start: 1511
// line end:   1578
void Em2a_pl_dm_c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x244
	register struct _74fake *pEnemy;
	// register: 18
	register short Dir;
	{
		{
		}
	}
}


// address: 0x80103E90
// line start: 1583
// line end:   1637
void Em2a_damage_ck(struct _74fake *pEm) {
	// address: 0x80104D2C
	static unsigned long Buf0;
	// address: 0x80104D30
	static unsigned long Buf1;
}


// address: 0x80103F08
// line start: 1639
// line end:   1648
void Em2a_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103F94
// line start: 1654
// line end:   1668
void Em2a_dm_f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104050
// line start: 1673
// line end:   1683
void Em2a_dm_b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801040C0
// line start: 1703
// line end:   1736
void Em2a_dm_down(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801041E0
// line start: 1741
// line end:   1746
void Em2a_dm_no(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104244
// line start: 1752
// line end:   1753
void Em2a_die_ck(struct _74fake *pEm);

// address: 0x8010424C
// line start: 1757
// line end:   1764
void Em2a_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801042C8
// line start: 1770
// line end:   1771
void Em12a_Pldamage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104304
// line start: 1777
// line end:   1827
void Em2a_pl_dm(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long Tmp;
	{
	}
}


// address: 0x80104470
// line start: 1832
// line end:   1906
void Em2a_pl_dm_b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long Tmp;
	{
	}
}


// address: 0x80104604
// line start: 1911
// line end:   1912
void Em2a_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010460C
// line start: 1917
// line end:   1918
void Em2a_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

