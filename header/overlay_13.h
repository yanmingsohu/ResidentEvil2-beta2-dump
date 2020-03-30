#include "types.h"

// === [ Overlay ID 13 ] ===

// address: 0x801052A8
static unsigned short Em23_life;

// address: 0x801052AA
static unsigned short Em23_life_easy;

// address: 0x801052AC
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x801052C0
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x801052D4
static unsigned short Em2b_life;

// address: 0x801052D6
static unsigned short Em2b_life_easy;

// address: 0x801052D8
// size: 0x20
static unsigned short Em2e_life[16];

// address: 0x801052F8
// size: 0x20
static unsigned short Em2e_life_easy[16];

// address: 0x80105318
// size: 0x10
static struct _104fake Arm_hit_size[4];

// address: 0x80105328
// size: 0x40
static struct _105fake Hand_tbl[8];

// address: 0x80105368
// size: 0x10
static unsigned char Hand_set_tbl[16];

// address: 0x80105378
// size: 0x10
static unsigned char fire_rnd_tbl[16];

// address: 0x80105388
// size: 0x20
static void (*Em2e_routine_0[8])();

// address: 0x801053A8
// size: 0x8
static unsigned char Type_rno_tbl[8];

// address: 0x801053B0
// size: 0x2C
static void (*em2e_move_tbl[11])();

// address: 0x801053DC
// size: 0x8
static unsigned char no_atck_rnd[8];

// address: 0x801053E4
// size: 0xC
static void (*Mv_struck00_tbl[3])();

// address: 0x801053F0
// size: 0x10
static void (*mv_poison_tbl[4])();

// address: 0x80105400
// size: 0x8
static char poison_time_tbl[8];

// address: 0x80105408
// size: 0xC
static void (*mv_neck_tbl[3])();

// address: 0x80105414
// size: 0xC
static void (*mv_fall_tbl[3])();

// address: 0x80105420
// size: 0xC
static void (*move_catch_tbl[3])();

// address: 0x8010542C
// size: 0x4C
static void (*em2e_dmg_tbl[19])();

// address: 0x80105478
// size: 0x8
static unsigned char combo_mark_rnd[8];

// address: 0x80105480
// size: 0x4C
static void (*em2e_die_tbl[19])();

// address: 0x801054CC
// size: 0xC
static void (*pldmg_tbl[3])();

// address: 0x801054D8
// size: 0xC
static void (*pldie_tbl[3])();

// address: 0x801054E4
// size: 0xC
static void (*move_flower_tbl[3])();

// address: 0x801054F0
// size: 0x42
static struct _103fake blood_id_tbl[11];

// address: 0x80100004
// line start: 152
// line end:   201
void Em12e(struct _74fake *pEm) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80100158
// line start: 216
// line end:   358
void Em2e_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 20
	// size: 0x28
	register struct _102fake *pFp;
	// register: 16
	// size: 0x8
	register struct _105fake *handset;
	// register: 9
	// size: 0x244
	register struct _74fake *pSet;
	// register: 18
	register unsigned char i;
	// register: 19
	register unsigned char *tbl;
	// register: 21
	register unsigned char act;
	{
		{
		}
	}
}


// address: 0x8010062C
// line start: 382
// line end:   459
void Em2e_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x28
	register struct _102fake *pFp;
}


// address: 0x80100818
// line start: 468
// line end:   521
void Em2e_Mv_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x801009DC
// line start: 527
// line end:   535
void Fire_die_ck(struct _74fake *pEm);

// address: 0x80100A0C
// line start: 546
// line end:   620
void Em2e_Mv_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	// size: 0x218
	register struct _72fake *pTg;
	// register: 20
	// size: 0x28
	register struct _102fake *pFp;
	// register: 19
	register long dist;
	{
	}
}


// address: 0x80100C94
// line start: 623
// line end:   654
void Mv_walk00(struct _74fake *pEm) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 18
	register long dist;
}


// address: 0x80100DAC
// line start: 664
// line end:   759
void Em2e_atck_ck(struct _74fake *pEm) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	// size: 0x28
	register struct _102fake *pFp;
	// register: 20
	register short neck;
	// register: 4
	register short sa;
	// register: 19
	register short sb;
	// register: 21
	register long dist;
	// address: 0xFFFFFFD8
	auto long range;
	{
	}
}


// address: 0x80101150
// line start: 768
// line end:   774
void Em2e_Mv_reverse(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101190
// line start: 781
// line end:   810
void Em2e_Mv_rev00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x801012C0
// line start: 813
// line end:   838
void Mv_rev00_0(struct _74fake *pEm) {
	// register: 18
	// size: 0x218
	register struct _72fake *pTg;
	// register: 17
	// size: 0x28
	register struct _102fake *pFp;
}


// address: 0x801013A0
// line start: 852
// line end:   875
void Em2e_Mv_rev10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010146C
// line start: 888
// line end:   915
void Em2e_Mv_turn(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x80101598
// line start: 932
// line end:   936
void Em2e_Mv_struck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801015E8
// line start: 946
// line end:   962
void Em2e_Mv_struck000(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801016B0
// line start: 968
// line end:   1017
void Em2e_Mv_struck001(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 18
	register short eos;
	// register: 17
	register long chr_type;
}


// address: 0x80101838
// line start: 1021
// line end:   1034
void Mv_struck001_0(struct _74fake *pEm) {
}


// address: 0x801018CC
// line start: 1041
// line end:   1055
void Em2e_Mv_struck002(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801019BC
// line start: 1076
// line end:   1077
void Em2e_Mv_poison(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801019F8
// line start: 1085
// line end:   1105
void Em2e_Mv_poison00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	// size: 0x28
	register struct _102fake *pFp;
}


// address: 0x80101A90
// line start: 1112
// line end:   1136
void Em2e_Mv_poison10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register long chr_type;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake sv;
	{
	}
}


// address: 0x80101B94
// line start: 1143
// line end:   1181
void Em2e_Mv_poison20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0x28
	register struct _102fake *pFp;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake sv;
	{
	}
}


// address: 0x80101CCC
// line start: 1193
// line end:   1198
void Em2e_Mv_poison30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80101D20
// line start: 1215
// line end:   1219
void Em2e_Mv_neck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101D74
// line start: 1228
// line end:   1281
void Em2e_Mv_neck00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x218
	register struct _72fake *pPl;
	// register: 17
	register short d2;
	{
		{
		}
	}
}


// address: 0x80101F80
// line start: 1289
// line end:   1330
void Em2e_Mv_neck10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801020D0
// line start: 1338
// line end:   1394
void Em2e_Mv_neck20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0x218
	register struct _72fake *pPl;
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	register unsigned long chr_type;
	// register: 5
	register unsigned long i;
	{
		{
			{
			}
		}
	}
}


// address: 0x80102350
// line start: 1408
// line end:   1439
void Em2e_Mv_open(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102484
// line start: 1456
// line end:   1460
void Em2e_Mv_fall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801024D8
// line start: 1469
// line end:   1494
void Em2e_Mv_fall00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 7
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x801025CC
// line start: 1503
// line end:   1526
void Em2e_Mv_fall10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801026A8
// line start: 1533
// line end:   1566
void Em2e_Mv_fall20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102808
// line start: 1578
// line end:   1628
void Em2e_Mv_gas(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x28
	register struct _102fake *pFp;
}


// address: 0x80102960
// line start: 1646
// line end:   1650
void Em2e_Mv_catch(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801029B4
// line start: 1659
// line end:   1702
void Em2e_Mv_catch00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pPl;
	{
	}
}


// address: 0x80102B50
// line start: 1710
// line end:   1808
void Em2e_Mv_catch10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x218
	register struct _72fake *pPl;
	// register: 3
	register unsigned long d0;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake sv;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80102E6C
// line start: 1816
// line end:   1838
void Em2e_Mv_catch20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102F30
// line start: 1886
// line end:   1895
void Em2e_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102FA8
// line start: 1903
// line end:   1934
void Em2e_dmg_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x801030FC
// line start: 1943
// line end:   1987
void Em2e_dmg_ftl(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x801032D0
// line start: 2001
// line end:   2013
void Em2e_dmg_combo(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103368
// line start: 2022
// line end:   2032
void Em2e_dmg_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103418
// line start: 2043
// line end:   2051
void Set_dmg_fire(struct _74fake *pEm, unsigned long type, long max) {
	// register: 16
	register unsigned long i;
	// register: 18
	register unsigned long d0;
}


// address: 0x801034AC
// line start: 2054
// line end:   2060
void Em2e_dmg_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103510
// line start: 2070
// line end:   2079
void Em2e_dmg_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103580
// line start: 2088
// line end:   2096
void Em2e_dmg_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103618
// line start: 2105
// line end:   2113
void Em2e_dmg_fire2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103690
// line start: 2149
// line end:   2153
void Em2e_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801036E0
// line start: 2162
// line end:   2171
void Em2e_Die_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103748
// line start: 2179
// line end:   2190
void Em2e_Die_nml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801037C8
// line start: 2196
// line end:   2211
void Em2e_Die_nml10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103884
// line start: 2220
// line end:   2235
void Break_parts(struct _74fake *pEm, unsigned long st, unsigned long ed) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
}


// address: 0x80103910
// line start: 2238
// line end:   2262
void Em2e_Die_ftl(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned long d0;
	// register: 18
	register unsigned long d1;
}


// address: 0x80103A0C
// line start: 2272
// line end:   2296
void Em2e_Die_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	register unsigned long d0;
	// register: 19
	register unsigned long d1;
}


// address: 0x80103B04
// line start: 2306
// line end:   2365
void Em2e_Die_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80103D1C
// line start: 2374
// line end:   2392
void Em2e_Die_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x80103DB4
// line start: 2400
// line end:   2427
void Em2e_Die_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x28
	register struct _102fake *pFp;
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
	{
	}
}


// address: 0x80103EC4
// line start: 2436
// line end:   2459
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


// address: 0x80103F38
// line start: 2468
// line end:   2469
void Em2e_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103F40
// line start: 2485
// line end:   2486
void Pldamage_Em12e(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103F7C
// line start: 2495
// line end:   2524
void Em2e_Pl_dmg00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x244
	register struct _74fake *pTg;
	// register: 6
	register long Ofs;
	{
	}
}


// address: 0x801040AC
// line start: 2532
// line end:   2575
void Em2e_Pl_dmg10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x244
	register struct _74fake *pTg;
	// register: 3
	register long Ofs;
	{
	}
}


// address: 0x80104228
// line start: 2582
// line end:   2605
void Em2e_Pl_dmg20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104340
// line start: 2625
// line end:   2626
void Pldie_Em12e(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010437C
// line start: 2634
// line end:   2643
void Em2e_Pl_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801043D4
// line start: 2653
// line end:   2684
void Em2e_Pl_die10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010450C
// line start: 2691
// line end:   2711
void Em2e_Pl_die20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801045D4
// line start: 2723
// line end:   2725
void Em2e_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104600
// line start: 2735
// line end:   2761
void Em2e_kage_move(struct _74fake *pEm) {
	// register: 6
	// size: 0x68
	register struct _61fake *pKage;
}


// address: 0x801046A0
// line start: 2778
// line end:   2779
void Em2e_Move_flower(struct _74fake *pEm);

// address: 0x801046DC
// line start: 2787
// line end:   2788
void Em2e_Mv_flower00(struct _74fake *pEm, struct _102fake *pFp);

// address: 0x801046E4
// line start: 2794
// line end:   2802
void Em2e_Mv_flower10(struct _74fake *pEm, struct _102fake *pFp);

// address: 0x8010472C
// line start: 2809
// line end:   2818
void Em2e_Mv_flower20(struct _74fake *pEm, struct _102fake *pFp);

// address: 0x80104770
// size: 0x218
// line start: 2840
// line end:   2862
struct _72fake *Get_target_pl(struct _74fake *pEm) {
	// register: 8
	// size: 0x218
	register struct _72fake *pTg;
	// register: 5
	register long dst0;
	// register: 6
	register long dst1;
}


// address: 0x801047F4
// line start: 2874
// line end:   2910
long Arm_ck_main(struct _74fake *pEm, struct _72fake *pTg, unsigned long No, long R) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pPt;
	// register: 3
	register long ck;
	// register: 19
	register long flg;
	{
		{
			{
			}
		}
	}
}


// address: 0x8010497C
// line start: 2913
// line end:   2934
long Arm_hit_ck(struct _74fake *pEm) {
	// register: 17
	// size: 0x4
	register struct _104fake *pAt;
	// register: 18
	register unsigned long i;
}


// address: 0x80104A44
// line start: 2948
// line end:   2954
void Em2e_Pl_to_dmg(struct _72fake *pPl, unsigned char dir);

// address: 0x80104A6C
// line start: 2965
// line end:   2969
void Em2e_Pl_to_die(struct _72fake *pPl);

// address: 0x80104A84
// line start: 2980
// line end:   3009
void Set_flower(struct _74fake *pEm) {
	// register: 17
	register short rot;
}


// address: 0x80104B10
// line start: 3018
// line end:   3026
unsigned long Head_open_ck(struct _74fake *pEm);

// address: 0x80104B60
// line start: 3038
// line end:   3078
unsigned long Hand_atck_ck(struct _74fake *pEm) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 18
	// size: 0x28
	register struct _102fake *pFp;
	// register: 19
	register long range;
	// register: 4
	register short att;
}


// address: 0x80104CA8
// line start: 3105
// line end:   3135
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
	register struct _103fake *tbl;
	{
		{
		}
	}
}


// address: 0x80104DD4
// line start: 3145
// line end:   3158
long Cut_hand(struct _74fake *pEm, unsigned long Id) {
}


// address: 0x80104E24
// line start: 3169
// line end:   3176
long Ck_schit_parts(struct _74fake *pEm, unsigned long no, long r) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80104E80
// line start: 3185
// line end:   3194
short Em2e_goto00_ck(struct _74fake *pEm, long dx, long dz, short rot) {
	// register: 17
	register short rr;
}


// address: 0x80104ED8
// line start: 3203
// line end:   3230
void Get_workm(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80104FC4
// line start: 3239
// line end:   3259
void Catch_pos_set(struct _74fake *pEm, struct _74fake *pTg, long Ofs) {
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake v0;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake v1;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x801050BC
// line start: 3271
// line end:   3300
short Parts_to_pl(struct _74fake *pEm, unsigned long No, short Rot, long *Dist) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 19
	register long xx;
	// register: 18
	register long zz;
	// register: 17
	register long rr;
}


// address: 0x80105214
// line start: 3309
// line end:   3329
void Oba_ck_em2e(struct _74fake *pEm) {
	// register: 4
	// size: 0x244
	register struct _74fake *pEm2;
	// register: 16
	// size: 0x244
	register struct _74fake **ppEm;
	{
	}
}


