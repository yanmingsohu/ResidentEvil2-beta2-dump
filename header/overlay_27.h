#include "types.h"

// === [ Overlay ID 27 ] ===

// address: 0x801112E0
// size: 0x20
static void (*Em23_routine_0[8])();

// address: 0x80111300
// size: 0x20
static void (*Em23_mv_br[8])();

// address: 0x80111320
// size: 0x20
static void (*Em23_mv[8])();

// address: 0x80111340
// size: 0x14
static void (*Em23_damage[5])();

// address: 0x80111354
static void (*Em23_die[])();

// address: 0x80111354
// size: 0x10
static void (*Em23_pldm_tbl[4])();

// address: 0x801112B0
static unsigned short Em23_life;

// address: 0x801112B2
static unsigned short Em23_life_easy;

// address: 0x801112B4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x801112C8
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x801112DC
static unsigned short Em2b_life;

// address: 0x801112DE
static unsigned short Em2b_life_easy;

// address: 0x80111364
// size: 0x120
static struct _99fake Blood_tbl[24];

// address: 0x80111484
// size: 0xFC
static struct _100fake Spark_tbl[21];

// address: 0x8010D190
// line start: 53
// line end:   210
void Em223(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	{
		// register: 4
		// size: 0x244
		register struct _74fake *pEm2;
		// register: 17
		// size: 0x244
		register struct _74fake **ppEm;
		// address: 0xFFFFFFD8
		// size: 0x10
		auto struct _1fake Vec;
		// address: 0xFFFFFFE8
		// size: 0x8
		auto struct _2fake Dir_bak;
		{
			{
			}
		}
	}
}


// address: 0x8010D4CC
// line start: 215
// line end:   322
void Em23_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	register unsigned long i;
	// register: 3
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x8010D71C
// line start: 327
// line end:   334
void Em23_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010D7B4
// line start: 340
// line end:   340
void Em23_ent_br(struct _74fake *pEm);

// address: 0x8010D7BC
// line start: 342
// line end:   369
void Em23_ent(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010D914
// line start: 383
// line end:   477
void Em23_walk_br(struct _74fake *pEm) {
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	{
	}
}


// address: 0x8010DBCC
// line start: 479
// line end:   484
void Em23_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010DC00
// line start: 488
// line end:   503
void Em23_run_br(struct _74fake *pEm);

// address: 0x8010DC94
// line start: 506
// line end:   515
void Em23_run(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010DCE0
// line start: 522
// line end:   522
void Em23_turn_br(struct _74fake *pEm);

// address: 0x8010DCE8
// line start: 524
// line end:   582
void Em23_turn(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long Tmp;
	{
		{
			{
			}
		}
	}
}


// address: 0x8010DF08
// line start: 586
// line end:   586
void Em23_Chit_br(struct _74fake *pEm);

// address: 0x8010DF10
// line start: 588
// line end:   646
void Em23_Chit(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010E180
// line start: 650
// line end:   650
void Em23_haziki_br(struct _74fake *pEm);

// address: 0x8010E188
// line start: 652
// line end:   685
void Em23_haziki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E190
// line start: 689
// line end:   689
void Em23_taiki_br(struct _74fake *pEm);

// address: 0x8010E198
// line start: 691
// line end:   697
void Em23_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E1A0
// line start: 701
// line end:   701
void Em23_last_br(struct _74fake *pEm);

// address: 0x8010E1A8
// line start: 703
// line end:   726
void Em23_last(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010E278
// line start: 731
// line end:   737
void Em23_Bite(struct _74fake *pEm);

// address: 0x8010E304
// line start: 745
// line end:   810
void Em23_mouse_move(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x8010E4F4
// line start: 813
// line end:   857
unsigned long Pl_bite_dm(struct _74fake *pEm) {
	{
	}
}


// address: 0x8010E634
// line start: 862
// line end:   884
unsigned long Player_stumble_ck(struct _74fake *pEm) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 2
	register long x;
	// register: 2
	register long z;
}


// address: 0x8010E720
// line start: 891
// line end:   1077
unsigned long Gas_get(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	// size: 0x1F8
	register struct _71fake *pOm;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake Loc_m;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Vec;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec1;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec2;
	{
		{
		}
	}
}


// address: 0x8010EB08
// line start: 1085
// line end:   1095
long Em23_get_spd(long Rtime, long Ntime, long Dir) {
	// register: 3
	register long Ntime2;
}


// address: 0x8010EBD0
// line start: 1097
// line end:   1108
long Em23_get_spd_r(long Rtime, long Ntime, long Dir) {
}


// address: 0x8010ECA0
// line start: 1113
// line end:   1151
void Earthquake_move(struct _74fake *pEm);

// address: 0x8010EDC8
// line start: 1157
// line end:   1200
void Em23_damage_ck(struct _74fake *pEm);

// address: 0x8010EF0C
// line start: 1205
// line end:   1217
void Em23_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010EFAC
// line start: 1223
// line end:   1238
void Em23_dm_no(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010F074
// line start: 1243
// line end:   1371
void Em23_explosion(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	// size: 0x1F8
	register struct _71fake *pOm;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0x80111580
	static int Dir;
	// address: 0x80111584
	static short Spd_add;
	{
		{
			{
			}
		}
	}
}


// address: 0x8010F518
// line start: 1376
// line end:   1432
void Em23_dm_escape(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010F75C
// line start: 1437
// line end:   1503
void Em23_died(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010F9B4
// line start: 1508
// line end:   1522
void Em23_dm(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010FA60
// line start: 1527
// line end:   1528
void Em23_die_ck(struct _74fake *pEm);

// address: 0x8010FA68
// line start: 1535
// line end:   1542
void Em23_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FAE4
// line start: 1545
// line end:   1546
void Em23_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FAEC
// line start: 1551
// line end:   1552
void Em223_Pldm(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FB28
// line start: 1558
// line end:   1585
void Em23_Pl_die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010FC80
// line start: 1590
// line end:   1616
void Em23_Pl_stumble(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x244
	register struct _74fake *pWani;
	{
	}
}


// address: 0x8010FDA0
// line start: 1621
// line end:   1674
void Em2a_pl_dm_f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long Tmp;
	{
	}
}


// address: 0x8010FF1C
// line start: 1679
// line end:   1756
void Em2a_pl_dm_b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long Tmp;
	{
	}
}


// address: 0x801100B0
// line start: 1908
// line end:   1926
void Gas_explosion(struct _74fake *pEm, unsigned long Rtn) {
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm;
	// address: 0xFFFFFFC8
	// size: 0x30
	auto struct _2fake Ob_vec[6];
}


// address: 0x8011020C
// line start: 1931
// line end:   1960
void Pl_stumble_blood(unsigned long Rtn) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFF70
	// size: 0x6C
	auto struct _99fake Pos_tbl[9];
}


// address: 0x801103A4
// line start: 1965
// line end:   2012
void Em23_Head_flying(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0x80111588
	static short Spd_z;
	// address: 0x8011158C
	static short Spd_y;
	// address: 0x80111590
	static short Sp_add_y;
	// address: 0x80111594
	static short Cspd_z;
	// address: 0x80111598
	static short Csp_add_z;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x80110580
// line start: 2020
// line end:   2026
void Em23_Bomb_tbl_set() {
	// register: 5
	register unsigned long i;
}


// address: 0x801105B8
// line start: 2032
// line end:   2038
void Em23_Bomb_tbl_reset() {
	// register: 5
	register unsigned long i;
}


// address: 0x80110608
// line start: 2041
// line end:   2052
void Em23_add_dm(unsigned long Att) {
	// register: 3
	register long Pl_life;
}


// address: 0x80110654
// line start: 2062
// line end:   2076
unsigned long S_rnd(unsigned char N, unsigned long *pBuf, unsigned long *pBuf2) {
	// register: 3
	register long Ck;
}


// address: 0x801106E0
// line start: 2081
// line end:   2141
unsigned long Dm_eff(struct _74fake *pEm);

// address: 0x80110854
// line start: 2190
// line end:   2206
unsigned long Dm_eff_blood(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Flg) {
	// register: 16
	// size: 0xC
	register struct _99fake *pEsp;
}


// address: 0x80110978
// line start: 2242
// line end:   2256
void Dm_eff_3handgun(struct _74fake *pEm) {
	// address: 0x8011159C
	static unsigned char Cnt;
	// register: 16
	// size: 0xC
	register struct _99fake *pEsp;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0x801115A0
	static unsigned long Tbl_no;
}


// address: 0x80110A74
// line start: 2262
// line end:   2292
void Bite_blood(struct _74fake *pEm) {
	// register: 16
	register short Dir;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 3
	// size: 0x218
	register struct _72fake *pPl;
	{
	}
}


// address: 0x80110BA8
// line start: 2297
// line end:   2351
void Explosion_blood(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x80110DE0
// line start: 2353
// line end:   2376
void Dm_eff_Frame(struct _74fake *pEm, unsigned long Id, unsigned long Type) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80110F38
// line start: 2378
// line end:   2394
void Dm_eff_shotgun(struct _74fake *pEm, unsigned long Num) {
	// address: 0x801115A4
	static unsigned long Limit;
}


// address: 0x8011100C
// line start: 2396
// line end:   2404
void Em_explosion_set(struct _74fake *pEm, struct _65fake *pP_ptr);

// address: 0x80111050
// line start: 2434
// line end:   2462
void Dm_eff_spark(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0x801115A8
	// size: 0xC
	static struct _100fake *pEsp2;
	{
	}
}


// address: 0x8011117C
// line start: 2465
// line end:   2473
void Color_chg(struct _74fake *pEm, unsigned long Num, unsigned long r, unsigned long g, unsigned long b) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 8
	register unsigned long i;
}


// address: 0x801111D4
// line start: 2478
// line end:   2487
void Set_esp_w(struct _74fake *pEm, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Cdir_y, unsigned long Parts_no, struct _2fake *pSvec) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


