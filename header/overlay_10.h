#include "types.h"

// === [ Overlay ID 10 ] ===

// address: 0x801049AC
static short Bak_pos_x;

// address: 0x801049B0
static short Bak_pos_z;

// address: 0x801049B4
static short Bak_dir_y;

// address: 0x801049B8
static short Bak_cut_no;

// address: 0x801049BC
static unsigned long Rand;

// address: 0x801048F0
// size: 0x10
static void (*Em2b_routine_0[4])();

// address: 0x80104900
// size: 0x24
static void (*Em2b_mv_br[9])();

// address: 0x80104924
// size: 0x24
static void (*Em2b_mv[9])();

// address: 0x80104948
// size: 0xC
static void (*Em2b_damage[3])();

// address: 0x80104954
// size: 0x4
static void (*Em2b_die[1])();

// address: 0x80104958
// size: 0xC
static void (*Em2b_pldm_tbl[3])();

// address: 0x80104578
// size: 0x1B0
static struct _107fake Blood_tbl[36];

// address: 0x80104424
// size: 0x12C
static struct _110fake Parts_fly[15];

// address: 0x80104728
// size: 0x120
static struct _108fake Spark_tbl[24];

// address: 0x80104848
// size: 0xA8
static struct _107fake Flame_tbl[14];

// address: 0x80100108
// line start: 41
// line end:   75
void Em2b_parts_fly_init(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 17
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 19
	register unsigned long i;
	{
	}
}


// address: 0x8010024C
// line start: 80
// line end:   158
void Em2b_parts_fly_move(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 20
	register unsigned long i;
	{
	}
}


// address: 0x801005AC
// line start: 163
// line end:   178
void Em2b_parts_smoke(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 4
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 18
	register unsigned long i;
	{
	}
}


// address: 0x80100668
// line start: 183
// line end:   205
void Em2b_parts_fly_end(struct _74fake *pEm, short x, short z) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 17
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Vec;
	// register: 20
	register unsigned long i;
	{
	}
}


// address: 0x80100790
// line start: 211
// line end:   287
unsigned long Em2b_att_ck2(struct _74fake *pEm, unsigned long Parts_no, unsigned short Start, unsigned short End, unsigned long At_dis, unsigned long At_w) {
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
	// register: 17
	register short Old_z;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x801009EC
// line start: 292
// line end:   301
long Get_dir_pl(struct _74fake *pEm) {
	// register: 3
	register short Dir;
}


// address: 0x80100A58
// line start: 306
// line end:   321
void Set_tri(struct _2fake *pP1, struct _2fake *pP2, struct _2fake *pP3) {
	// address: 0x80104550
	// size: 0x28
	static struct _23fake Tri[2];
	// register: 16
	// size: 0x14
	register struct _23fake *pTri;
	// address: 0xFFFFFFE0
	auto long p;
	// address: 0xFFFFFFE4
	auto long flg;
}


// address: 0x80100B08
// line start: 333
// line end:   355
void Foot_set(struct _74fake *pEm, unsigned long Foot_no) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80100BF8
// line start: 360
// line end:   367
unsigned long Em2b_add_dm(unsigned long Att) {
}


// address: 0x80100C30
// line start: 378
// line end:   422
void Breast_move(struct _74fake *pEm) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0x80104964
	static unsigned long Time;
	{
	}
}


// address: 0x80100E1C
// line start: 432
// line end:   446
unsigned long S_rnd(unsigned char N, unsigned long *pBuf, unsigned long *pBuf2) {
	// register: 3
	register long Ck;
}


// address: 0x80100EA8
// line start: 451
// line end:   460
void Set_esp_w(struct _74fake *pEm, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Cdir_y, unsigned long Parts_no, struct _2fake *pSvec) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80100F84
// line start: 465
// line end:   469
void Set_esp_s(struct _74fake *pEm, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Cdir_y, unsigned long Parts_no, struct _2fake *pSvec) {
	// register: 6
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x80100FE4
// line start: 480
// line end:   508
void Dm_eff_blood(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Atr) {
	// register: 8
	// size: 0xC
	register struct _107fake *pEsp;
	// register: 19
	register unsigned long Ofs;
	// register: 18
	register unsigned long Mask;
	// register: 3
	register unsigned long i;
	{
	}
}


// address: 0x80101184
// line start: 568
// line end:   591
void Dm_eff_0f(struct _74fake *pEm) {
	// address: 0x80104968
	static int Damage_no;
	// address: 0x8010496C
	static int Damage_old;
}


// address: 0x801012AC
// line start: 593
// line end:   601
void Pl_dm_set(struct _74fake *pEm) {
}


// address: 0x80101300
// line start: 603
// line end:   627
long Pl_dm_set_push(struct _74fake *pEm, short Old_x, short Old_z, unsigned long Parts_no) {
	// register: 17
	// size: 0x244
	register struct _74fake *pPl;
}


// address: 0x801013B0
// line start: 660
// line end:   688
void Dm_eff_spark(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0x80104970
	// size: 0xC
	static struct _108fake *pEsp2;
	{
	}
}


// address: 0x801014DC
// line start: 716
// line end:   725
void Set_flame(struct _74fake *pEm) {
	// register: 16
	register unsigned long i;
	// register: 7
	// size: 0xC
	register struct _107fake *pEsp;
	// register: 19
	// size: 0xAC
	register struct _65fake *pParts;
	{
	}
}


// address: 0x8010158C
// line start: 730
// line end:   741
void Em_explosion_set(struct _74fake *pEm, unsigned long Parts_no) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801015F4
// line start: 747
// line end:   753
void Bomb_tbl_set() {
	// register: 5
	register unsigned long i;
}


// address: 0x8010162C
// line start: 759
// line end:   765
void Bomb_tbl_reset() {
	// register: 5
	register unsigned long i;
}


// address: 0x8010167C
// line start: 769
// line end:   773
void Color_chg(struct _74fake *pEm, unsigned long Num, unsigned long r, unsigned long g, unsigned long b) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x801016CC
// line start: 778
// line end:   793
void Pl_launcher_set(struct _74fake *pEm, unsigned long Dis) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80101768
// line start: 798
// line end:   809
void Add_spdXZ(struct _74fake *pEm, long Dir) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x801017E8
// line start: 45
// line end:   154
void Em12b(struct _74fake *pEm) {
	// register: 4
	register short Dir;
	{
	}
}


// address: 0x80101A74
// line start: 159
// line end:   217
void Em2b_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80101B78
// line start: 222
// line end:   229
void Em2b_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80101C14
// line start: 233
// line end:   233
void Em2b_taiki_br(struct _74fake *pEm);

// address: 0x80101C1C
// line start: 235
// line end:   243
void Em2b_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101C50
// line start: 247
// line end:   247
void Em2b_walk_br(struct _74fake *pEm);

// address: 0x80101C58
// line start: 249
// line end:   332
void Em2b_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	register short Dir;
	// register: 17
	register short Check_dis;
	// address: 0x80101E88
	bool move;
	{
	}
}


// address: 0x80101EE0
// line start: 336
// line end:   336
void Em2a_att_t_br(struct _74fake *pEm);

// address: 0x80101EE8
// line start: 338
// line end:   397
void Em2a_att_t(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	register short Dir;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Vec;
	{
		{
			{
			}
		}
	}
}


// address: 0x80102178
// line start: 401
// line end:   401
void Em2a_att_w_br(struct _74fake *pEm);

// address: 0x80102180
// line start: 403
// line end:   491
void Em2a_att_w(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0x80104974
	static unsigned long R_old_x;
	// address: 0x80104978
	static unsigned long R_old_z;
	// address: 0x8010497C
	static unsigned long L_old_x;
	// address: 0x80104980
	static unsigned long L_old_z;
	// address: 0x80104984
	static unsigned long Tmp_x;
	// address: 0x80104988
	static unsigned long Tmp_z;
	// register: 19
	register unsigned long Tmp;
	{
		{
		}
	}
}


// address: 0x80102490
// line start: 496
// line end:   496
void Em2b_dash_br(struct _74fake *pEm);

// address: 0x80102498
// line start: 498
// line end:   550
void Em2b_dash(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
		{
			{
			}
		}
	}
}


// address: 0x801026DC
// line start: 554
// line end:   554
void Em2a_att_t2_br(struct _74fake *pEm);

// address: 0x801026E4
// line start: 556
// line end:   663
void Em2a_att_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x218
	register struct _72fake *pPl;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0x8010498C
	// size: 0x10
	static struct _1fake Vec;
	{
		{
		}
	}
}


// address: 0x80102A74
// line start: 667
// line end:   667
void Em2a_where_br(struct _74fake *pEm);

// address: 0x80102A7C
// line start: 669
// line end:   679
void Em2a_where(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register short Dir;
	{
	}
}


// address: 0x80102B10
// line start: 683
// line end:   683
void Em2a_critical_br(struct _74fake *pEm);

// address: 0x80102B18
// line start: 685
// line end:   722
void Em2a_critical(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
		{
		}
	}
}


// address: 0x80102CC0
// line start: 726
// line end:   726
void Em2a_opening_br(struct _74fake *pEm);

// address: 0x80102CC8
// line start: 728
// line end:   762
void Em2a_opening(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102E24
// line start: 767
// line end:   892
void Em2b_damage_ck(struct _74fake *pEm) {
	// address: 0x8010499C
	static unsigned long Buf0;
	// address: 0x801049A0
	static unsigned long Buf1;
	// address: 0x801049A4
	static unsigned long Buf2;
	// address: 0x801049A8
	static unsigned long Buf3;
	// register: 17
	register unsigned long Rnd_adv;
}


// address: 0x801030C4
// line start: 894
// line end:   902
void Em2b_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103148
// line start: 908
// line end:   914
void Em2b_dm_no(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801031AC
// line start: 920
// line end:   934
void Em2b_dm_f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103268
// line start: 939
// line end:   949
void Em2b_dm_b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801032D8
// line start: 954
// line end:   956
void Em2b_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103300
// line start: 968
// line end:   1213
void Em2b_dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Rstart;
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	// size: 0xAC
	register struct _65fake *pEm_Parts;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80103B98
// line start: 1218
// line end:   1219
void Em12b_Pldm(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103BD4
// line start: 1222
// line end:   1279
void Em2b_pl_die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	{
	}
}


// address: 0x80103E30
// line start: 1285
// line end:   1415
void Em2b_pl_dm_f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long Tmp;
	// register: 5
	register short Dir;
	// register: 18
	// size: 0x244
	register struct _74fake *pEnemy;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
		{
		}
	}
}


// address: 0x80104218
// line start: 1417
// line end:   1488
void Em2b_pl_dm_b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long Tmp;
	// register: 18
	register short Dir;
	// register: 2
	// size: 0x244
	register struct _74fake *pEnemy;
	{
	}
}


// address: 0x8010441C
// line start: 1493
// line end:   1494
void Em2b_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

