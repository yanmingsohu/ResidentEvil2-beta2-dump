#include "types.h"

// === [ Overlay ID 1d ] ===

// address: 0x801046B0
static unsigned short Em23_life;

// address: 0x801046B2
static unsigned short Em23_life_easy;

// address: 0x801046B4
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x801046C8
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x801046DC
static unsigned short Em2b_life;

// address: 0x801046DE
static unsigned short Em2b_life_easy;

// address: 0x801046E0
// size: 0x20
static void (*Em3a_routine_0[8])();

// address: 0x80104700
// size: 0x30
static void (*Em3a_move_tbl[12])();

// address: 0x80104730
// size: 0x8
static unsigned char atck_rnd00[8];

// address: 0x80104738
// size: 0x8
static unsigned char atck_rnd01[8];

// address: 0x80104740
// size: 0x10
static void (*move_fly_tbl[4])();

// address: 0x80104750
// size: 0x20
static short fly_spd_tbl[16];

// address: 0x80104770
// size: 0x10
static short body_rot_tbl[8];

// address: 0x80104780
// size: 0xC
static void (*move_atck_tbl[3])();

// address: 0x8010478C
// size: 0x4
static unsigned char atck_mset_tbl[4];

// address: 0x80104790
// size: 0xC
static void (*move_wall_tbl[3])();

// address: 0x8010479C
// size: 0x8
static char wall_time_tbl[8];

// address: 0x801047A4
// size: 0xC
static void (*move_wallset_tbl[3])();

// address: 0x801047B0
// size: 0x10
static void (*move_newfly_tbl[4])();

// address: 0x801047C0
// size: 0x4C
static void (*em3a_dmg_tbl[19])();

// address: 0x8010480C
// size: 0x14
static unsigned char dieblood_type_tbl[20];

// address: 0x80104820
// size: 0x14
static unsigned char dieblood_ofs_tbl[20];

// address: 0x80104834
// size: 0x10
static void (*dmg_ftl_tbl[4])();

// address: 0x80104844
// size: 0x10
static void (*dmg_fire_tbl[4])();

// address: 0x80104854
// size: 0xC
static unsigned long wing_rgb_tbl[3];

// address: 0x80104860
// size: 0x10
static void (*dmg_fire2_tbl[4])();

// address: 0x80104870
// size: 0x4C
static void (*em3a_die_tbl[19])();

// address: 0x801048BC
// size: 0xC
static void (*die_nml_tbl[3])();

// address: 0x801048C8
// size: 0xC
static void (*die_fire_tbl[3])();

// address: 0x801048D4
// size: 0x4
static unsigned char dmg_parts_rnd[4];

// address: 0x801048D8
// size: 0xC
static void (*wing_move_tbl[3])();

// address: 0x801048E4
// size: 0x4E
static struct _102fake blood_id_tbl[13];

// address: 0x80104934
// size: 0x90
static short fire_ofs_tbl[72];

// address: 0x80100030
// line start: 49
// line end:   110
void Em13a(struct _74fake *pEm) {
	// register: 17
	// size: 0x26
	register struct _101fake *pFp;
	// register: 2
	register unsigned long d0;
	{
		{
		}
	}
}


// address: 0x801001AC
// line start: 119
// line end:   207
void Em3a_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x801003D4
// line start: 231
// line end:   256
void Em3a_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010049C
// line start: 265
// line end:   283
void Em3a_Move_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80100534
// line start: 302
// line end:   352
void Em3a_Move_select(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x26
	register struct _101fake *pFp;
	// register: 3
	register long dist;
	{
		{
			{
			}
		}
	}
}


// address: 0x801006D0
// line start: 358
// line end:   363
void Ck_esc_set(struct _74fake *pEm);

// address: 0x80100714
// line start: 381
// line end:   391
void Em3a_Move_fly(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010078C
// line start: 408
// line end:   439
void Em3a_Mv_fly00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100878
// line start: 443
// line end:   449
void Set_under_smoke(struct _74fake *pEm);

// address: 0x801008F8
// line start: 458
// line end:   506
void Em3a_Mv_fly10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x218
	register struct _72fake *pTg;
	{
		{
		}
	}
}


// address: 0x80100A88
// line start: 516
// line end:   537
void Em3a_Mv_fly20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100B50
// line start: 544
// line end:   560
void Em3a_Mv_fly30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80100BD8
// line start: 577
// line end:   578
void Em3a_Move_atck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100C14
// line start: 585
// line end:   610
void Em3a_Mv_atck00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register long dist;
	// register: 3
	register long limit;
}


// address: 0x80100D10
// line start: 620
// line end:   665
void Em3a_Mv_atck10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80100F08
// line start: 671
// line end:   730
void Em3a_Mv_atck20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801010F4
// line start: 741
// line end:   814
void Em3a_Move_turn(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 17
	register short dir;
	{
	}
}


// address: 0x80101338
// line start: 824
// line end:   890
void Em3a_Move_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 20
	// size: 0x218
	register struct _72fake *pTg;
	// register: 17
	// size: 0x26
	register struct _101fake *pFp;
	// register: 18
	register long dist;
	// register: 19
	register short dir;
}


// address: 0x8010158C
// line start: 900
// line end:   936
void Em3a_Move_escturn(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x80101720
// line start: 951
// line end:   952
void Em3a_Move_wall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010175C
// line start: 960
// line end:   983
void Em3a_Mv_wall00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101844
// line start: 994
// line end:   1009
void Em3a_Mv_wall10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101900
// line start: 1016
// line end:   1071
void Em3a_Mv_wall20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register short d0;
	{
	}
}


// address: 0x80101A98
// line start: 1082
// line end:   1154
void Em3a_Move_ikaku(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv2;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x80101D00
// line start: 1166
// line end:   1239
void Em3a_Move_walk2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 20
	// size: 0x218
	register struct _72fake *pTg;
	// register: 18
	// size: 0x26
	register struct _101fake *pFp;
	// register: 17
	register long dist;
	// register: 19
	register short dir;
	{
	}
}


// address: 0x80101FC8
// line start: 1257
// line end:   1258
void Em3a_Move_wallset(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102004
// line start: 1266
// line end:   1281
void Em3a_Mv_wallset00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010209C
// line start: 1287
// line end:   1300
void Em3a_Mv_wallset10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801020FC
// line start: 1319
// line end:   1329
void Em3a_Move_newfly(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102174
// line start: 1335
// line end:   1413
void Em3a_Mv_newfly10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x218
	register struct _72fake *pTg;
	{
		{
		}
	}
}


// address: 0x801023E8
// line start: 1419
// line end:   1456
void Em3a_Mv_newfly30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80102524
// line start: 1502
// line end:   1505
void Em3a_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102560
// line start: 1531
// line end:   1568
void Em3a_dmg_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x26
	register struct _101fake *pFp;
	{
	}
}


// address: 0x801026EC
// line start: 1574
// line end:   1592
void Esc_dmg_ck(struct _74fake *pEm) {
	// register: 5
	register unsigned long max;
}


// address: 0x80102790
// line start: 1609
// line end:   1618
void Em3a_dmg_ftl(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102824
// line start: 1626
// line end:   1655
void Em3a_dmg_ftl00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102910
// line start: 1658
// line end:   1689
void Dmg_ftl00_0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x801029F4
// line start: 1698
// line end:   1701
void Em3a_dmg_combo(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102A58
// line start: 1711
// line end:   1719
void Em3a_dmg_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102AFC
// line start: 1739
// line end:   1748
void Em3a_dmg_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102B90
// line start: 1759
// line end:   1806
void Em3a_dmg_fire00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	register unsigned long i;
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80102CF4
// line start: 1812
// line end:   1815
void Em3a_dmg_fire10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102D34
// line start: 1822
// line end:   1895
void Em3a_dmg_fire20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	register unsigned long i;
	// register: 5
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 7
	// size: 0xAC
	register struct _65fake *pQ_ptr;
	// register: 8
	// size: 0x26
	register struct _101fake *pFp;
}


// address: 0x80102F18
// line start: 1902
// line end:   1905
void Em3a_dmg_fire30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102F58
// line start: 1915
// line end:   1926
void Em3a_dmg_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103024
// line start: 1936
// line end:   1944
void Em3a_dmg_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801030B8
// line start: 1963
// line end:   1972
void Em3a_dmg_fire2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010314C
// line start: 1979
// line end:   2036
void Em3a_dmg_fire200(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	register unsigned long i;
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
		}
	}
}


// address: 0x80103318
// line start: 2070
// line end:   2076
void Em3a_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103368
// line start: 2091
// line end:   2092
void Em3a_Die_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801033A4
// line start: 2099
// line end:   2120
void Em3a_Die_nml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103464
// line start: 2127
// line end:   2129
void Em3a_Die_nml10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801034B8
// line start: 2138
// line end:   2147
void Em3a_Die_nml20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103520
// line start: 2158
// line end:   2201
void Em3a_Die_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	register unsigned long i;
	// register: 16
	register unsigned long Dmg;
}


// address: 0x801036BC
// line start: 2218
// line end:   2219
void Em3a_Die_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801036F8
// line start: 2226
// line end:   2247
void Em3a_Die_fire00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	register unsigned long i;
	{
	}
}


// address: 0x801037EC
// line start: 2255
// line end:   2299
void Em3a_Die_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
	{
	}
}


// address: 0x801039B0
// line start: 2308
// line end:   2324
void Em3a_Die_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x80103A74
// line start: 2335
// line end:   2336
void Em3a_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103A7C
// line start: 2345
// line end:   2351
void Em3a_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103AD4
// line start: 2360
// line end:   2386
void Em3a_kage_move(struct _74fake *pEm) {
	// register: 6
	// size: 0x68
	register struct _61fake *pKage;
}


// address: 0x80103B74
// line start: 2428
// line end:   2470
void Pldamage_Em13a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80103CCC
// line start: 2492
// line end:   2510
void Wing_set(struct _74fake *pEm, unsigned long No, short Rx, short Ry) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80103D80
// line start: 2525
// line end:   2544
void Em3a_Wing(struct _74fake *pEm) {
	// register: 17
	// size: 0x26
	register struct _101fake *pFp;
	{
	}
}


// address: 0x80103E2C
// line start: 2552
// line end:   2564
void Em3a_Wing_dmg(struct _74fake *pEm, struct _101fake *pFp);

// address: 0x80103ECC
// line start: 2572
// line end:   2576
void Em3a_Wing_cont(struct _74fake *pEm, struct _101fake *pFp);

// address: 0x80103F28
// line start: 2585
// line end:   2604
void Em3a_Wing_right(struct _74fake *pEm, struct _101fake *pFp);

// address: 0x80103FE4
// line start: 2612
// line end:   2642
void Wing_fast_main(struct _74fake *pEm, struct _101fake *pFp);

// address: 0x8010409C
// size: 0x244
// line start: 2664
// line end:   2681
struct _74fake *Get_target_pl(struct _74fake *pEm) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTg;
}


// address: 0x80104108
// line start: 2694
// line end:   2716
unsigned long Touch_ck_main(struct _74fake *pEm, unsigned long Pl, long Range, short Dir) {
	// register: 16
	// size: 0x218
	register struct _72fake *pTg;
	// register: 17
	register long dist;
	// register: 4
	register long ck;
}


// address: 0x801041B4
// line start: 2726
// line end:   2757
unsigned long Bodyatck_ck(struct _74fake *pEm) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801042D4
// line start: 2769
// line end:   2780
void Em3a_Pl_to_dmg(unsigned long pl, unsigned char dir) {
	// register: 4
	// size: 0x218
	register struct _72fake *pPl;
}


// address: 0x8010431C
// line start: 2790
// line end:   2800
void Em3a_Pl_to_die(unsigned long pl) {
	// register: 3
	// size: 0x218
	register struct _72fake *pPl;
}


// address: 0x8010434C
// line start: 2829
// line end:   2859
void Set_blood(struct _74fake *pEm, unsigned char parts, unsigned char type) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 17
	// size: 0x244
	register struct _74fake *pTg;
	// register: 2
	// size: 0x218
	register struct _72fake *pPl;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 5
	register long dir;
	// register: 8
	register long Id;
	// register: 16
	// size: 0x6
	register struct _102fake *tbl;
	{
		{
		}
	}
}


// address: 0x80104478
// line start: 2898
// line end:   2926
void Set_fire(struct _74fake *pEm, unsigned long Type, unsigned long Tbl) {
	// register: 7
	register short *pTbl;
	// register: 8
	// size: 0x6
	register struct _102fake *pTbl2;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv2;
	{
	}
}


// address: 0x80104594
// line start: 2936
// line end:   2951
void Set_smoke(struct _74fake *pEm, unsigned long Type, struct _2fake *pBs, struct _2fake *pOf) {
	// register: 16
	// size: 0x6
	register struct _102fake *pTbl;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010468C
// line start: 2963
// line end:   2971
void Set_schit(struct _74fake *pEm, unsigned long Type);

