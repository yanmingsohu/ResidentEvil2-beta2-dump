#include "types.h"

// === [ Overlay ID 2e ] ===

// address: 0x801119AC
static short Bak_pos_x;

// address: 0x801119B0
static short Bak_pos_z;

// address: 0x801119B4
static short Bak_dir_y;

// address: 0x801119B8
static short Bak_cut_no;

// address: 0x801119BC
static unsigned long Rand;

// address: 0x801118F0
// size: 0x10
static void (*Em2b_routine_0[4])();

// address: 0x80111900
// size: 0x24
static void (*Em2b_mv_br[9])();

// address: 0x80111924
// size: 0x24
static void (*Em2b_mv[9])();

// address: 0x80111948
// size: 0xC
static void (*Em2b_damage[3])();

// address: 0x80111954
// size: 0x4
static void (*Em2b_die[1])();

// address: 0x80111958
// size: 0xC
static void (*Em2b_pldm_tbl[3])();

// address: 0x80111578
// size: 0x1B0
static struct _107fake Blood_tbl[36];

// address: 0x80111424
// size: 0x12C
static struct _110fake Parts_fly[15];

// address: 0x80111728
// size: 0x120
static struct _108fake Spark_tbl[24];

// address: 0x80111848
// size: 0xA8
static struct _107fake Flame_tbl[14];

// address: 0x8010D108
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


// address: 0x8010D24C
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


// address: 0x8010D5AC
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


// address: 0x8010D668
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


// address: 0x8010D790
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


// address: 0x8010D9EC
// line start: 292
// line end:   301
long Get_dir_pl(struct _74fake *pEm) {
	// register: 3
	register short Dir;
}


// address: 0x8010DA58
// line start: 306
// line end:   321
void Set_tri(struct _2fake *pP1, struct _2fake *pP2, struct _2fake *pP3) {
	// address: 0x80111550
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


// address: 0x8010DB08
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


// address: 0x8010DBF8
// line start: 360
// line end:   367
unsigned long Em2b_add_dm(unsigned long Att) {
}


// address: 0x8010DC30
// line start: 378
// line end:   422
void Breast_move(struct _74fake *pEm) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0x80111964
	static unsigned long Time;
	{
	}
}


// address: 0x8010DE1C
// line start: 432
// line end:   446
unsigned long S_rnd(unsigned char N, unsigned long *pBuf, unsigned long *pBuf2) {
	// register: 3
	register long Ck;
}


// address: 0x8010DEA8
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


// address: 0x8010DF84
// line start: 465
// line end:   469
void Set_esp_s(struct _74fake *pEm, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Cdir_y, unsigned long Parts_no, struct _2fake *pSvec) {
	// register: 6
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x8010DFE4
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


// address: 0x8010E184
// line start: 568
// line end:   591
void Dm_eff_0f(struct _74fake *pEm) {
	// address: 0x80111968
	static int Damage_no;
	// address: 0x8011196C
	static int Damage_old;
}


// address: 0x8010E2AC
// line start: 593
// line end:   601
void Pl_dm_set(struct _74fake *pEm) {
}


// address: 0x8010E300
// line start: 603
// line end:   627
long Pl_dm_set_push(struct _74fake *pEm, short Old_x, short Old_z, unsigned long Parts_no) {
	// register: 17
	// size: 0x244
	register struct _74fake *pPl;
}


// address: 0x8010E3B0
// line start: 660
// line end:   688
void Dm_eff_spark(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0x80111970
	// size: 0xC
	static struct _108fake *pEsp2;
	{
	}
}


// address: 0x8010E4DC
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


// address: 0x8010E58C
// line start: 730
// line end:   741
void Em_explosion_set(struct _74fake *pEm, unsigned long Parts_no) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010E5F4
// line start: 747
// line end:   753
void Bomb_tbl_set() {
	// register: 5
	register unsigned long i;
}


// address: 0x8010E62C
// line start: 759
// line end:   765
void Bomb_tbl_reset() {
	// register: 5
	register unsigned long i;
}


// address: 0x8010E67C
// line start: 769
// line end:   773
void Color_chg(struct _74fake *pEm, unsigned long Num, unsigned long r, unsigned long g, unsigned long b) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x8010E6CC
// line start: 778
// line end:   793
void Pl_launcher_set(struct _74fake *pEm, unsigned long Dis) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x8010E768
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


// address: 0x8010E7E8
// line start: 45
// line end:   154
void Em22b(struct _74fake *pEm) {
	// register: 4
	register short Dir;
	{
	}
}


// address: 0x8010EA74
// line start: 159
// line end:   217
void Em2b_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010EB78
// line start: 222
// line end:   229
void Em2b_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010EC14
// line start: 233
// line end:   233
void Em2b_taiki_br(struct _74fake *pEm);

// address: 0x8010EC1C
// line start: 235
// line end:   243
void Em2b_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010EC50
// line start: 247
// line end:   247
void Em2b_walk_br(struct _74fake *pEm);

// address: 0x8010EC58
// line start: 249
// line end:   332
void Em2b_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	register short Dir;
	// register: 17
	register short Check_dis;
	// address: 0x8010EE88
	bool move;
	{
	}
}


// address: 0x8010EEE0
// line start: 336
// line end:   336
void Em2a_att_t_br(struct _74fake *pEm);

// address: 0x8010EEE8
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


// address: 0x8010F178
// line start: 401
// line end:   401
void Em2a_att_w_br(struct _74fake *pEm);

// address: 0x8010F180
// line start: 403
// line end:   491
void Em2a_att_w(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0x80111974
	static unsigned long R_old_x;
	// address: 0x80111978
	static unsigned long R_old_z;
	// address: 0x8011197C
	static unsigned long L_old_x;
	// address: 0x80111980
	static unsigned long L_old_z;
	// address: 0x80111984
	static unsigned long Tmp_x;
	// address: 0x80111988
	static unsigned long Tmp_z;
	// register: 19
	register unsigned long Tmp;
	{
		{
		}
	}
}


// address: 0x8010F490
// line start: 496
// line end:   496
void Em2b_dash_br(struct _74fake *pEm);

// address: 0x8010F498
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


// address: 0x8010F6DC
// line start: 554
// line end:   554
void Em2a_att_t2_br(struct _74fake *pEm);

// address: 0x8010F6E4
// line start: 556
// line end:   663
void Em2a_att_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x218
	register struct _72fake *pPl;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0x8011198C
	// size: 0x10
	static struct _1fake Vec;
	{
		{
		}
	}
}


// address: 0x8010FA74
// line start: 667
// line end:   667
void Em2a_where_br(struct _74fake *pEm);

// address: 0x8010FA7C
// line start: 669
// line end:   679
void Em2a_where(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register short Dir;
	{
	}
}


// address: 0x8010FB10
// line start: 683
// line end:   683
void Em2a_critical_br(struct _74fake *pEm);

// address: 0x8010FB18
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


// address: 0x8010FCC0
// line start: 726
// line end:   726
void Em2a_opening_br(struct _74fake *pEm);

// address: 0x8010FCC8
// line start: 728
// line end:   762
void Em2a_opening(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010FE24
// line start: 767
// line end:   892
void Em2b_damage_ck(struct _74fake *pEm) {
	// address: 0x8011199C
	static unsigned long Buf0;
	// address: 0x801119A0
	static unsigned long Buf1;
	// address: 0x801119A4
	static unsigned long Buf2;
	// address: 0x801119A8
	static unsigned long Buf3;
	// register: 17
	register unsigned long Rnd_adv;
}


// address: 0x801100C4
// line start: 894
// line end:   902
void Em2b_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110148
// line start: 908
// line end:   914
void Em2b_dm_no(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801101AC
// line start: 920
// line end:   934
void Em2b_dm_f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80110268
// line start: 939
// line end:   949
void Em2b_dm_b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801102D8
// line start: 954
// line end:   956
void Em2b_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110300
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


// address: 0x80110B98
// line start: 1218
// line end:   1219
void Em22b_Pldm(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110BD4
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


// address: 0x80110E30
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


// address: 0x80111218
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


// address: 0x8011141C
// line start: 1493
// line end:   1494
void Em2b_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

