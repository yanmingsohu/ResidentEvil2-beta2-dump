#include "types.h"

// === [ Overlay ID 24 ] ===

// address: 0x80112120
// size: 0x20
static unsigned short Em20_life[16];

// address: 0x80112140
// size: 0x20
static unsigned short Em20_life_easy[16];

// address: 0x80112160
static unsigned short Em23_life;

// address: 0x80112162
static unsigned short Em23_life_easy;

// address: 0x80112164
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80112178
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x8011218C
static unsigned short Em2b_life;

// address: 0x8011218E
static unsigned short Em2b_life_easy;

// address: 0x80112190
// size: 0x8
static unsigned char em20_time_tbl00[8];

// address: 0x80112198
// size: 0x8
static unsigned char em20_time_tbl01[8];

// address: 0x801121A0
// size: 0x8
static unsigned char em20_time_tbl02[8];

// address: 0x801121A8
// size: 0x20
static void (*Em20_routine_0[8])();

// address: 0x801121C8
// size: 0xC
static unsigned char em20_routine_tbl[12];

// address: 0x801121D4
// size: 0x44
static void (*em20_move_tbl[17])();

// address: 0x80112218
// size: 0x20
static long yori_ofs[8];

// address: 0x80112238
// size: 0x10
static void (*move_run_tbl[4])();

// address: 0x80112248
// size: 0x10
static unsigned short dash_turn_rnd[8];

// address: 0x80112258
// size: 0x10
static void (*move_atck_tbl[4])();

// address: 0x80112268
// size: 0x10
static void (*move_sleep_tbl[4])();

// address: 0x80112278
// size: 0x4
static unsigned char pl_chi_parts[4];

// address: 0x8011227C
// size: 0x8
static unsigned char house_mot_rnd[8];

// address: 0x80112284
// size: 0xC
static void (*move_rush_tbl[3])();

// address: 0x80112290
// size: 0x10
static void (*move_bodyatck_tbl[4])();

// address: 0x801122A0
// size: 0xC
static void (*move_jumpin_tbl[3])();

// address: 0x801122AC
// size: 0x4C
static void (*em20_dmg_tbl[19])();

// address: 0x801122F8
// size: 0x14
static void (*dmg_nml_tbl[5])();

// address: 0x8011230C
// size: 0x10
static short dir_hosei[8];

// address: 0x8011231C
// size: 0x10
static void (*dmg_combo_tbl[4])();

// address: 0x8011232C
// size: 0x4C
static void (*em20_die_tbl[19])();

// address: 0x80112378
// size: 0x4C
static void (*die_nml_init[19])();

// address: 0x801123C4
// size: 0x10
static void (*die_nml_tbl[4])();

// address: 0x801123D4
// size: 0x8
static void (*die_bang_tbl[2])();

// address: 0x801123DC
// size: 0x8
static unsigned char bang_parts_no[8];

// address: 0x801123E4
// size: 0x10
static void (*die_gnml_tbl[4])();

// address: 0x801123F4
// size: 0x10
static void (*die_spark_tbl[4])();

// address: 0x80112404
// size: 0x4
static unsigned char mot_tbl[4];

// address: 0x80112408
// size: 0x4E
static struct _102fake blood_id_tbl[13];

// address: 0x8010D004
// line start: 48
// line end:   77
void Em220(struct _74fake *pEm) {
	{
	}
}


// address: 0x8010D0F4
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


// address: 0x8010D460
// line start: 228
// line end:   247
void Em20_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010D4CC
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


// address: 0x8010D708
// line start: 334
// line end:   354
void Em20_Move_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	register unsigned long ck;
}


// address: 0x8010D7A8
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


// address: 0x8010DAA4
// line start: 463
// line end:   471
void Em20_Move_run(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DB2C
// line start: 484
// line end:   515
void Em20_Mv_run00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010DC1C
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


// address: 0x8010DDD0
// line start: 593
// line end:   624
void Em20_Mv_run20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned short dir;
}


// address: 0x8010DF00
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


// address: 0x8010E170
// line start: 708
// line end:   713
void Em20_Move_atck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E1D0
// line start: 720
// line end:   759
void Em20_Mv_atck00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010E304
// line start: 765
// line end:   776
void Jump_set(struct _74fake *pEm, long spd_x, long spd_y);

// address: 0x8010E348
// line start: 785
// line end:   813
void Em20_Mv_atck10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register long ck;
}


// address: 0x8010E3EC
// line start: 821
// line end:   843
long Em20_Mv_jump10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register long d0;
}


// address: 0x8010E498
// line start: 850
// line end:   856
void Em20_Mv_atck20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E4D8
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


// address: 0x8010E5E8
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


// address: 0x8010E794
// line start: 982
// line end:   983
void Em20_Move_sleep(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E7D0
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


// address: 0x8010E91C
// line start: 1028
// line end:   1033
void Em20_Mv_sleep10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E968
// line start: 1040
// line end:   1045
void Em20_Mv_sleep20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E9BC
// line start: 1052
// line end:   1073
void Em20_Mv_sleep30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010EA78
// line start: 1085
// line end:   1109
void Em20_Move_ikaku(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010EB40
// line start: 1118
// line end:   1144
void Em20_Move_back(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x8010EC40
// line start: 1156
// line end:   1162
void Em20_Move_critical(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010EC80
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


// address: 0x8010EFBC
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


// address: 0x8010F0E4
// line start: 1330
// line end:   1363
void Em20_Move_escape(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register long d_tmp;
	{
	}
}


// address: 0x8010F214
// line start: 1375
// line end:   1390
void Em20_Move_floorout(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010F29C
// line start: 1401
// line end:   1411
void Em20_Move_walk2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010F328
// line start: 1423
// line end:   1461
void Em20_Move_died(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x244
	register struct _74fake *pTg;
	{
	}
}


// address: 0x8010F4A0
// line start: 1472
// line end:   1478
void Em20_Move_eat(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010F4E0
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


// address: 0x8010F744
// line start: 1568
// line end:   1577
void Em20_Move_house(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010F798
// line start: 1591
// line end:   1621
void Em20_mv_house00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010F8FC
// line start: 1628
// line end:   1679
void Em20_mv_house10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010FAC0
// line start: 1697
// line end:   1700
void Em20_Move_rush(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FB10
// line start: 1708
// line end:   1736
void Em20_Mv_rush00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010FC2C
// line start: 1742
// line end:   1748
void Em20_Mv_rush10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FCA0
// line start: 1755
// line end:   1762
void Em20_Mv_rush20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FCEC
// line start: 1780
// line end:   1782
void Em20_Move_bodyatck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FD3C
// line start: 1789
// line end:   1805
void Em20_Mv_bodyatck10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FE08
// line start: 1812
// line end:   1817
void Em20_Mv_bodyatck20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FE50
// line start: 1824
// line end:   1859
void Em20_Mv_bodyatck30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010FF90
// line start: 1879
// line end:   1880
void Em20_Move_jumpin(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010FFCC
// line start: 1887
// line end:   1910
void Em20_Mv_jumpin00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801100B0
// line start: 1916
// line end:   1932
void Em20_Mv_jumpin20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8011013C
// line start: 1968
// line end:   1974
void Em20_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8011019C
// line start: 1992
// line end:   1993
void Em20_Dmg_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801101D8
// line start: 2006
// line end:   2048
void Em20_Dmg_nml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x1C
	register struct _101fake *pFp;
	{
	}
}


// address: 0x8011035C
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


// address: 0x8011047C
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


// address: 0x80110600
// line start: 2142
// line end:   2153
void Em20_Dmg_nml30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8011067C
// line start: 2161
// line end:   2170
void Em20_Dmg_nml40(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80110754
// line start: 2188
// line end:   2194
void Em20_Dmg_combo(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801107E4
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


// address: 0x80110938
// line start: 2247
// line end:   2255
void Em20_Dmg_combo10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801109D4
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


// address: 0x80110ABC
// line start: 2289
// line end:   2304
void Em20_Dmg_combo30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80110B78
// line start: 2313
// line end:   2324
void Em20_Dmg_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long i;
	{
	}
}


// address: 0x80110C30
// line start: 2333
// line end:   2347
void Em20_Dmg_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long i;
	{
	}
}


// address: 0x80110CF4
// line start: 2356
// line end:   2371
void Em20_Dmg_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	register unsigned long d0;
}


// address: 0x80110D94
// line start: 2379
// line end:   2396
void Em20_Dmg_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80110E88
// line start: 2405
// line end:   2417
void Set_dmghit(struct _74fake *pEm, unsigned long Type);

// address: 0x80110EDC
// line start: 2453
// line end:   2454
void Em20_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110F18
// line start: 2496
// line end:   2502
void Em20_Die_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110F78
// line start: 2511
// line end:   2527
void Em20_Die_nml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long tmp;
	{
	}
}


// address: 0x80111000
// line start: 2539
// line end:   2558
void Em20_Die_nml20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801110B0
// line start: 2574
// line end:   2580
void Em20_Die_bang(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80111134
// line start: 2592
// line end:   2624
void Em20_Die_bang00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80111240
// line start: 2628
// line end:   2646
void Set_head_bomb(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
}


// address: 0x801112E4
// line start: 2654
// line end:   2694
void Em20_Die_bang10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x1C
	register struct _101fake *pFp;
}


// address: 0x80111410
// line start: 2711
// line end:   2717
void Em20_Die_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80111494
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


// address: 0x80111574
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


// address: 0x8011161C
// line start: 2793
// line end:   2814
void Em20_Die_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x801116B4
// line start: 2830
// line end:   2838
void Em20_Die_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80111748
// line start: 2844
// line end:   2861
void Em20_Die_spark00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x801117E4
// line start: 2872
// line end:   2873
void Em20_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801117EC
// line start: 2884
// line end:   2890
void Em20_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8011182C
// line start: 2900
// line end:   2928
void Em20_Blood_move(struct _74fake *pEm) {
	// register: 6
	// size: 0x68
	register struct _61fake *pKage;
}


// address: 0x801118CC
// line start: 2942
// line end:   2970
void Pldie_Em220(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80111998
// line start: 2989
// line end:   3000
void Dog_rot_neck(struct _74fake *pEm) {
}


// address: 0x801119EC
// line start: 3013
// line end:   3019
void Rate_speed_up(struct _74fake *pEm, long g, long limit);

// address: 0x80111A30
// line start: 3023
// line end:   3029
void Rate_speed_down(struct _74fake *pEm, long g, long limit);

// address: 0x80111A74
// line start: 3046
// line end:   3058
void Set_run_motion(struct _74fake *pEm, short d_tmp) {
	// register: 3
	register unsigned char t_tmp;
}


// address: 0x80111AD8
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


// address: 0x80111BF0
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


// address: 0x80111DD0
// line start: 3178
// line end:   3194
unsigned long Atck_hit_ck(struct _74fake *pEm);

// address: 0x80111E50
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


// address: 0x80111F9C
// line start: 3274
// line end:   3285
void Em20_Pl_to_dmg(unsigned long pl, unsigned char dir) {
	// register: 4
	// size: 0x218
	register struct _72fake *pPl;
}


// address: 0x80111FE4
// line start: 3294
// line end:   3303
void Em20_Pl_to_die(unsigned long pl) {
	// register: 3
	// size: 0x218
	register struct _72fake *pPl;
}


// address: 0x80112014
// line start: 3312
// line end:   3317
void Ck_Floor(struct _74fake *pEm);

// address: 0x80112054
// line start: 3326
// line end:   3330
void Ck_Died(struct _74fake *pEm);

// address: 0x8011207C
// size: 0x244
// line start: 3341
// line end:   3364
struct _74fake *Get_target_pl(struct _74fake *pEm) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTg;
}


