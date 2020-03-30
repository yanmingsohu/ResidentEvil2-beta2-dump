#include "types.h"

// === [ Overlay ID 6 ] ===

// address: 0x80105120
// size: 0x20
static unsigned short Em20_life[16];

// address: 0x80105140
// size: 0x20
static unsigned short Em20_life_easy[16];

// address: 0x80105160
static unsigned short Em23_life;

// address: 0x80105162
static unsigned short Em23_life_easy;

// address: 0x80105164
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80105178
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8010518C
static unsigned short Em2b_life;

// address: 0x8010518E
static unsigned short Em2b_life_easy;

// address: 0x80105190
// size: 0x8
static unsigned char em20_time_tbl00[8];

// address: 0x80105198
// size: 0x8
static unsigned char em20_time_tbl01[8];

// address: 0x801051A0
// size: 0x8
static unsigned char em20_time_tbl02[8];

// address: 0x801051A8
// size: 0x20
static void (*Em20_routine_0[8])();

// address: 0x801051C8
// size: 0xC
static unsigned char em20_routine_tbl[12];

// address: 0x801051D4
// size: 0x44
static void (*em20_move_tbl[17])();

// address: 0x80105218
// size: 0x20
static long yori_ofs[8];

// address: 0x80105238
// size: 0x10
static void (*move_run_tbl[4])();

// address: 0x80105248
// size: 0x10
static unsigned short dash_turn_rnd[8];

// address: 0x80105258
// size: 0x10
static void (*move_atck_tbl[4])();

// address: 0x80105268
// size: 0x10
static void (*move_sleep_tbl[4])();

// address: 0x80105278
// size: 0x4
static unsigned char pl_chi_parts[4];

// address: 0x8010527C
// size: 0x8
static unsigned char house_mot_rnd[8];

// address: 0x80105284
// size: 0xC
static void (*move_rush_tbl[3])();

// address: 0x80105290
// size: 0x10
static void (*move_bodyatck_tbl[4])();

// address: 0x801052A0
// size: 0xC
static void (*move_jumpin_tbl[3])();

// address: 0x801052AC
// size: 0x4C
static void (*em20_dmg_tbl[19])();

// address: 0x801052F8
// size: 0x14
static void (*dmg_nml_tbl[5])();

// address: 0x8010530C
// size: 0x10
static short dir_hosei[8];

// address: 0x8010531C
// size: 0x10
static void (*dmg_combo_tbl[4])();

// address: 0x8010532C
// size: 0x4C
static void (*em20_die_tbl[19])();

// address: 0x80105378
// size: 0x4C
static void (*die_nml_init[19])();

// address: 0x801053C4
// size: 0x10
static void (*die_nml_tbl[4])();

// address: 0x801053D4
// size: 0x8
static void (*die_bang_tbl[2])();

// address: 0x801053DC
// size: 0x8
static unsigned char bang_parts_no[8];

// address: 0x801053E4
// size: 0x10
static void (*die_gnml_tbl[4])();

// address: 0x801053F4
// size: 0x10
static void (*die_spark_tbl[4])();

// address: 0x80105404
// size: 0x4
static unsigned char mot_tbl[4];

// address: 0x80105408
// size: 0x4E
static struct _102fake blood_id_tbl[13];

// address: 0x80100004
// line start: 48
// line end:   77
void Em120(struct _74fake *pEm) {
	{
	}
}


// address: 0x801000F4
// line start: 93
// line end:   198
void Em20_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	// size: 0x1C
	register struct _101fake *pFp;
	// register: 4
	register unsigned long i;
}


// address: 0x80100460
// line start: 228
// line end:   247
void Em20_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801004CC
// line start: 257
// line end:   323
unsigned long Em20_rndwalk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x1C
	register struct _101fake *pFp;
	// register: 18
	register unsigned long ck;
	{
		{
		}
	}
}


// address: 0x80100708
// line start: 334
// line end:   354
void Em20_Move_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	register unsigned long ck;
}


// address: 0x801007A8
// line start: 369
// line end:   444
void Em20_Move_yori(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x244
	register struct _74fake *pTg;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake targ;
	{
		{
			{
			}
		}
	}
}


// address: 0x80100AA4
// line start: 463
// line end:   471
void Em20_Move_run(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100B2C
// line start: 484
// line end:   515
void Em20_Mv_run00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80100C1C
// line start: 522
// line end:   587
void Em20_Mv_run10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x1C
	register struct _101fake *pFp;
	// register: 19
	// size: 0x244
	register struct _74fake *pTg;
	// register: 3
	register long ck;
	// register: 18
	register long d_tmp;
	{
	}
}


// address: 0x80100DD0
// line start: 593
// line end:   624
void Em20_Mv_run20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned short dir;
}


// address: 0x80100F00
// line start: 631
// line end:   691
void Em20_Mv_run30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x1C
	register struct _101fake *pFp;
	// register: 19
	// size: 0x218
	register struct _72fake *pTg;
	// register: 20
	register long ck;
	// register: 17
	register long d0;
	// register: 19
	register long d1;
	{
		{
		}
	}
}


// address: 0x80101170
// line start: 708
// line end:   713
void Em20_Move_atck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801011D0
// line start: 720
// line end:   759
void Em20_Mv_atck00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101304
// line start: 765
// line end:   776
void Jump_set(struct _74fake *pEm, long spd_x, long spd_y);

// address: 0x80101348
// line start: 785
// line end:   813
void Em20_Mv_atck10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register long ck;
}


// address: 0x801013EC
// line start: 821
// line end:   843
long Em20_Mv_jump10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register long d0;
}


// address: 0x80101498
// line start: 850
// line end:   856
void Em20_Mv_atck20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801014D8
// line start: 864
// line end:   902
long Em20_Mv_jump20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x801015E8
// line start: 910
// line end:   963
void Em20_Mv_atck30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80101794
// line start: 982
// line end:   983
void Em20_Move_sleep(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801017D0
// line start: 990
// line end:   1022
void Em20_Mv_sleep00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0x218
	register struct _72fake *pPl;
	// register: 4
	register unsigned long range;
	{
	}
}


// address: 0x8010191C
// line start: 1028
// line end:   1033
void Em20_Mv_sleep10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101968
// line start: 1040
// line end:   1045
void Em20_Mv_sleep20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801019BC
// line start: 1052
// line end:   1073
void Em20_Mv_sleep30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101A78
// line start: 1085
// line end:   1109
void Em20_Move_ikaku(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101B40
// line start: 1118
// line end:   1144
void Em20_Move_back(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x80101C40
// line start: 1156
// line end:   1162
void Em20_Move_critical(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101C80
// line start: 1174
// line end:   1276
void Em20_Mv_critical00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0x218
	register struct _72fake *pPl;
	// register: 20
	// size: 0x1C
	register struct _101fake *pFp;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80101FBC
// line start: 1283
// line end:   1318
void Em20_Mv_critical10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long eos;
	{
		{
		}
	}
}


// address: 0x801020E4
// line start: 1330
// line end:   1363
void Em20_Move_escape(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register long d_tmp;
	{
	}
}


// address: 0x80102214
// line start: 1375
// line end:   1390
void Em20_Move_floorout(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010229C
// line start: 1401
// line end:   1411
void Em20_Move_walk2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102328
// line start: 1423
// line end:   1461
void Em20_Move_died(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x244
	register struct _74fake *pTg;
	{
	}
}


// address: 0x801024A0
// line start: 1472
// line end:   1478
void Em20_Move_eat(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801024E0
// line start: 1485
// line end:   1558
void Em20_mv_eat00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned long chr_type;
	// register: 4
	register unsigned long range;
	{
		{
		}
	}
}


// address: 0x80102744
// line start: 1568
// line end:   1577
void Em20_Move_house(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102798
// line start: 1591
// line end:   1621
void Em20_mv_house00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x801028FC
// line start: 1628
// line end:   1679
void Em20_mv_house10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102AC0
// line start: 1697
// line end:   1700
void Em20_Move_rush(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102B10
// line start: 1708
// line end:   1736
void Em20_Mv_rush00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80102C2C
// line start: 1742
// line end:   1748
void Em20_Mv_rush10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102CA0
// line start: 1755
// line end:   1762
void Em20_Mv_rush20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102CEC
// line start: 1780
// line end:   1782
void Em20_Move_bodyatck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102D3C
// line start: 1789
// line end:   1805
void Em20_Mv_bodyatck10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102E08
// line start: 1812
// line end:   1817
void Em20_Mv_bodyatck20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102E50
// line start: 1824
// line end:   1859
void Em20_Mv_bodyatck30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80102F90
// line start: 1879
// line end:   1880
void Em20_Move_jumpin(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102FCC
// line start: 1887
// line end:   1910
void Em20_Mv_jumpin00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801030B0
// line start: 1916
// line end:   1932
void Em20_Mv_jumpin20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010313C
// line start: 1968
// line end:   1974
void Em20_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010319C
// line start: 1992
// line end:   1993
void Em20_Dmg_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801031D8
// line start: 2006
// line end:   2048
void Em20_Dmg_nml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x1C
	register struct _101fake *pFp;
	{
	}
}


// address: 0x8010335C
// line start: 2055
// line end:   2083
void Em20_Dmg_nml10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8010347C
// line start: 2090
// line end:   2135
void Em20_Dmg_nml20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pPl;
	{
		{
		}
	}
}


// address: 0x80103600
// line start: 2142
// line end:   2153
void Em20_Dmg_nml30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010367C
// line start: 2161
// line end:   2170
void Em20_Dmg_nml40(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103754
// line start: 2188
// line end:   2194
void Em20_Dmg_combo(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801037E4
// line start: 2200
// line end:   2240
void Em20_Dmg_combo00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x1C
	register struct _101fake *pFp;
	{
		{
			{
			}
		}
	}
}


// address: 0x80103938
// line start: 2247
// line end:   2255
void Em20_Dmg_combo10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801039D4
// line start: 2261
// line end:   2282
void Em20_Dmg_combo20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x1C
	register struct _101fake *pFp;
	{
		{
		}
	}
}


// address: 0x80103ABC
// line start: 2289
// line end:   2304
void Em20_Dmg_combo30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103B78
// line start: 2313
// line end:   2324
void Em20_Dmg_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long i;
	{
	}
}


// address: 0x80103C30
// line start: 2333
// line end:   2347
void Em20_Dmg_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long i;
	{
	}
}


// address: 0x80103CF4
// line start: 2356
// line end:   2371
void Em20_Dmg_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	register unsigned long d0;
}


// address: 0x80103D94
// line start: 2379
// line end:   2396
void Em20_Dmg_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80103E88
// line start: 2405
// line end:   2417
void Set_dmghit(struct _74fake *pEm, unsigned long Type);

// address: 0x80103EDC
// line start: 2453
// line end:   2454
void Em20_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103F18
// line start: 2496
// line end:   2502
void Em20_Die_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103F78
// line start: 2511
// line end:   2527
void Em20_Die_nml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long tmp;
	{
	}
}


// address: 0x80104000
// line start: 2539
// line end:   2558
void Em20_Die_nml20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801040B0
// line start: 2574
// line end:   2580
void Em20_Die_bang(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80104134
// line start: 2592
// line end:   2624
void Em20_Die_bang00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104240
// line start: 2628
// line end:   2646
void Set_head_bomb(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
}


// address: 0x801042E4
// line start: 2654
// line end:   2694
void Em20_Die_bang10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x1C
	register struct _101fake *pFp;
}


// address: 0x80104410
// line start: 2711
// line end:   2717
void Em20_Die_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80104494
// line start: 2723
// line end:   2750
void Em20_Die_gnml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long d0;
	{
	}
}


// address: 0x80104574
// line start: 2760
// line end:   2781
void Em20_Die_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	register unsigned long i;
	{
	}
}


// address: 0x8010461C
// line start: 2793
// line end:   2814
void Em20_Die_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x801046B4
// line start: 2830
// line end:   2838
void Em20_Die_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104748
// line start: 2844
// line end:   2861
void Em20_Die_spark00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x801047E4
// line start: 2872
// line end:   2873
void Em20_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801047EC
// line start: 2884
// line end:   2890
void Em20_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010482C
// line start: 2900
// line end:   2928
void Em20_Blood_move(struct _74fake *pEm) {
	// register: 6
	// size: 0x68
	register struct _61fake *pKage;
}


// address: 0x801048CC
// line start: 2942
// line end:   2970
void Pldie_Em120(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104998
// line start: 2989
// line end:   3000
void Dog_rot_neck(struct _74fake *pEm) {
}


// address: 0x801049EC
// line start: 3013
// line end:   3019
void Rate_speed_up(struct _74fake *pEm, long g, long limit);

// address: 0x80104A30
// line start: 3023
// line end:   3029
void Rate_speed_down(struct _74fake *pEm, long g, long limit);

// address: 0x80104A74
// line start: 3046
// line end:   3058
void Set_run_motion(struct _74fake *pEm, short d_tmp) {
	// register: 3
	register unsigned char t_tmp;
}


// address: 0x80104AD8
// line start: 3074
// line end:   3109
long Atck_range_ck(struct _74fake *pEm) {
	// register: 18
	// size: 0x1C
	register struct _101fake *pFp;
	// register: 17
	// size: 0x244
	register struct _74fake *pTg;
	// register: 2
	register long dist;
	{
		{
		}
	}
}


// address: 0x80104BF0
// line start: 3119
// line end:   3175
unsigned long hit_ck_main(struct _74fake *pEm, long pl) {
	// register: 18
	// size: 0x1C
	register struct _101fake *pFp;
	// register: 5
	// size: 0xAC
	register struct _65fake *pPt;
	// register: 17
	// size: 0x218
	register struct _72fake *pPl;
	// register: 6
	register long range;
	// register: 2
	register long life;
	// register: 3
	register long ck;
	{
		{
			{
			}
		}
	}
}


// address: 0x80104DD0
// line start: 3178
// line end:   3194
unsigned long Atck_hit_ck(struct _74fake *pEm);

// address: 0x80104E50
// line start: 3226
// line end:   3262
void Set_blood(struct _74fake *pEm, unsigned char parts, unsigned char type) {
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 19
	// size: 0x1C
	register struct _101fake *pFp;
	// register: 16
	// size: 0x244
	register struct _74fake *pTg;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 5
	register long dir;
	// register: 4
	register long Id;
	// register: 17
	// size: 0x6
	register struct _102fake *tbl;
	{
		{
		}
	}
}


// address: 0x80104F9C
// line start: 3274
// line end:   3285
void Em20_Pl_to_dmg(unsigned long pl, unsigned char dir) {
	// register: 4
	// size: 0x218
	register struct _72fake *pPl;
}


// address: 0x80104FE4
// line start: 3294
// line end:   3303
void Em20_Pl_to_die(unsigned long pl) {
	// register: 3
	// size: 0x218
	register struct _72fake *pPl;
}


// address: 0x80105014
// line start: 3312
// line end:   3317
void Ck_Floor(struct _74fake *pEm);

// address: 0x80105054
// line start: 3326
// line end:   3330
void Ck_Died(struct _74fake *pEm);

// address: 0x8010507C
// size: 0x244
// line start: 3341
// line end:   3364
struct _74fake *Get_target_pl(struct _74fake *pEm) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTg;
}


