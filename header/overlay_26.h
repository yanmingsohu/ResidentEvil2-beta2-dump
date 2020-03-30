#include "types.h"

// === [ Overlay ID 26 ] ===

// address: 0x80113BC8
// size: 0x8
static struct _2fake Add_dir;

// address: 0x80113BD0
static unsigned long Tongue_flg;

// address: 0x80113B10
// size: 0x20
static void (*Em22_routine_0[8])();

// address: 0x80113B30
// size: 0x5C
static void (*Em22_mv[23])();

// address: 0x80113B8C
// size: 0x1C
static void (*Em22_dm[7])();

// address: 0x80113BA8
// size: 0x14
static void (*Em22_die[5])();

// address: 0x80113BBC
// size: 0x8
static void (*Em22_pldm_tbl[2])();

// address: 0x801137CC
// size: 0x20
static unsigned short Em22_life[16];

// address: 0x801137EC
// size: 0x20
static unsigned short Em22_life_easy[16];

// address: 0x8011380C
static unsigned short Em23_life;

// address: 0x8011380E
static unsigned short Em23_life_easy;

// address: 0x80113810
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80113824
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80113838
static unsigned short Em2b_life;

// address: 0x8011383A
static unsigned short Em2b_life_easy;

// address: 0x8011383C
// size: 0x90
static short Axis_add_tbl[3][4][6];

// address: 0x801138CC
// size: 0xC0
static struct _98fake Blood_point_tbl[24];

// address: 0x8011398C
// size: 0xC0
static struct _100fake Spark_tbl[16];

// address: 0x80113A4C
// size: 0x3
static unsigned char Normal_type_set[3];

// address: 0x80113A50
// size: 0x4
static unsigned char Scenario_type_set[4];

// address: 0x80113A5C
// size: 0x12
static unsigned short Tongue_hit_l[9];

// address: 0x80113A70
// size: 0xA0
static struct _99fake Wep_blood_tbl[20];

// address: 0x8010D24C
// line start: 35
// line end:   75
unsigned long Wall_turn_ck(struct _74fake *pEm, struct _2fake *pSv) {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Vec;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 4
	register short Gnd;
	{
		{
		}
	}
}


// address: 0x8010D39C
// line start: 86
// line end:   140
void Wall_turn_init(struct _74fake *pEm) {
	// register: 16
	register short Dir;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Add_vec;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Vec;
	{
		{
		}
	}
}


// address: 0x8010D55C
// line start: 151
// line end:   169
void Wall_turning(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake Vec;
	{
		{
		}
	}
}


// address: 0x8010D61C
// line start: 180
// line end:   197
void Wall_turn_end(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x8010D75C
// line start: 202
// line end:   281
long Em22_wall_hosei(struct _74fake *pEm, struct _2fake *pFront_pos) {
	// register: 17
	// size: 0x10
	register struct _57fake **ppSca_data;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Ck_pos;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Ck_posV;
	// register: 4
	register unsigned char Wall_dir;
	// register: 18
	register unsigned long Floor;
	// register: 19
	register unsigned long Hit_flg;
	{
		{
			{
			}
		}
	}
}


// address: 0x8010D928
// line start: 289
// line end:   385
unsigned long Em22_tongue_move(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
	}
}


// address: 0x8010DBA8
// line start: 397
// line end:   438
void Shadow_move(struct _74fake *pEm) {
	// register: 5
	register long Kage_mag;
	// register: 6
	// size: 0x68
	register struct _61fake *pKage;
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x8010DD94
// size: 0x244
// line start: 452
// line end:   499
struct _74fake *Em22_search_lv0(struct _74fake *pEm) {
}


// address: 0x8010DEE4
// size: 0x244
// line start: 505
// line end:   555
struct _74fake *Em22_search_lv1(struct _74fake *pEm) {
}


// address: 0x8010E038
// line start: 560
// line end:   581
void Em22_Atd_set_1(struct _74fake *pEm);

// address: 0x8010E0B4
// line start: 587
// line end:   610
void Em22_Atd_set_2(struct _74fake *pEm);

// address: 0x8010E148
// line start: 623
// line end:   643
void Em22_Foot_set(struct _74fake *pEm, unsigned long Foot_no) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010E230
// line start: 733
// line end:   814
int Blood_move(struct _74fake *pEm, struct _99fake *pWb, unsigned long Front_flg) {
	// register: 7
	register unsigned char Bp_no;
	// register: 20
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 7
	// size: 0x8
	register struct _98fake *pBd;
	// register: 17
	register unsigned long No;
	// register: 21
	register unsigned long Range;
	// register: 19
	register unsigned long Ofs;
	{
	}
}


// address: 0x8010E3AC
// line start: 839
// line end:   867
void Dm_eff_spark(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0x80113BC4
	// size: 0xC
	static struct _100fake *pEsp2;
	{
	}
}


// address: 0x8010E4D4
// line start: 869
// line end:   892
void Gunarea_chg(struct _74fake *pEm, unsigned long Id);

// address: 0x8010E5C0
// line start: 895
// line end:   903
void Color_chg(struct _74fake *pEm, unsigned long Num, unsigned long r, unsigned long g, unsigned long b) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 8
	register unsigned long i;
}


// address: 0x8010E618
// line start: 52
// line end:   240
void Em222(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _1fake Vec;
	{
		{
			// register: 4
			// size: 0x244
			register struct _74fake *pEm2;
			// register: 16
			// size: 0x244
			register struct _74fake **ppEm;
			{
				{
					// address: 0xFFFFFFD0
					// size: 0x10
					auto struct _1fake Pos;
					// address: 0xFFFFFFE0
					// size: 0x8
					auto struct _2fake Svec;
				}
			}
		}
	}
}


// address: 0x8010E914
// line start: 261
// line end:   397
void Em22_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010ECAC
// line start: 402
// line end:   404
void Em22_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010ECE8
// line start: 409
// line end:   409
void Em22_no_br(struct _74fake *pEm);

// address: 0x8010ECF0
// line start: 411
// line end:   465
void Em22_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		// address: 0x8010EE40
		bool walk;
		{
		}
	}
}


// address: 0x8010EECC
// line start: 479
// line end:   513
unsigned long Em22_Wall_escape(struct _74fake *pEm, short Spd, unsigned long Flg) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Ck_pos;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Vec;
	{
		// register: 2
		register long Dir;
		// register: 3
		register long Cdir;
		{
		}
	}
}


// address: 0x8010F030
// line start: 519
// line end:   636
void Em22_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Ck_pos;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Vec;
	// register: 17
	// size: 0x10
	register struct _57fake **ppSca_data;
	// register: 3
	register long Dir;
	// register: 18
	register long Dis;
	// register: 19
	register long Best_dis;
	// register: 17
	// size: 0x8728
	register struct _97fake *pG;
	{
		{
			{
			}
		}
	}
}


// address: 0x8010F410
// line start: 709
// line end:   739
void Em22_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010F594
// line start: 745
// line end:   767
void Em22_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010F674
// line start: 773
// line end:   785
void Em22_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010F6FC
// line start: 791
// line end:   872
void Em22_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register short Add_dir_y;
	{
		// address: 0x8010F82C
		bool rot;
		{
		}
	}
}


// address: 0x8010F968
// line start: 878
// line end:   922
void Em22_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010FAA0
// line start: 928
// line end:   1059
void Em22_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0x80113A54
	// size: 0x8
	static struct _2fake Ck_pos;
	// register: 16
	register long Wall_dir;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	{
		// address: 0x8010FB98
		bool next;
		// address: 0x8010FBD4
		bool boko;
		// address: 0x8010FCDC
		bool deko;
		{
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
	}
}


// address: 0x8010FDEC
// line start: 1079
// line end:   1161
void Em22_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Tmp_Svec;
	// register: 19
	// size: 0xAC
	register struct _65fake *pParts;
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


// address: 0x801100F8
// line start: 1167
// line end:   1236
void Em22_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	{
		{
			{
				{
					// address: 0xFFFFFFE0
					// size: 0x8
					auto struct _2fake Bpos;
				}
			}
		}
	}
}


// address: 0x8011035C
// line start: 1242
// line end:   1359
void Em22_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
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


// address: 0x80110780
// line start: 1365
// line end:   1425
void Em22_mv0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			// address: 0xFFFFFFE8
			// size: 0x8
			auto struct _2fake Ck_pos;
		}
	}
}


// address: 0x801109E0
// line start: 1431
// line end:   1489
void Em22_mv0c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80110BC0
// line start: 1495
// line end:   1573
void Em22_mv0d(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 6
	register long Tmp;
	{
		// address: 0x80110E9C
		bool side;
		{
			// address: 0xFFFFFFE0
			// size: 0x8
			auto struct _2fake Vec;
		}
	}
}


// address: 0x80110F14
// line start: 1579
// line end:   1610
void Em22_mv0e(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80111014
// line start: 1616
// line end:   1781
void Em22_mv0f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	register short Dir;
	// address: 0x80111424
	bool exit;
	{
		{
			{
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
		}
	}
}


// address: 0x80111484
// line start: 1787
// line end:   1844
void Em22_mv10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			// address: 0xFFFFFFE8
			// size: 0x8
			auto struct _2fake Ck_pos;
		}
	}
}


// address: 0x801116D4
// line start: 1850
// line end:   1892
void Em22_mv11(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80111864
// line start: 1898
// line end:   1919
void Em22_mv12(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80111918
// line start: 1925
// line end:   1951
void Em22_mv13(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80111A28
// line start: 1957
// line end:   2008
void Em22_mv14(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80111BE8
// line start: 2014
// line end:   2033
void Em22_mv15(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80111CB0
// line start: 2038
// line end:   2061
void Em22_mv16(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80111D90
// line start: 2066
// line end:   2089
void Em22_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80111E64
// line start: 2098
// line end:   2174
void Em22_damage_ck(struct _74fake *pEm) {
	// register: 4
	register unsigned long Dir;
}


// address: 0x80111F88
// line start: 2203
// line end:   2221
void Em22_damage_after_ck(struct _74fake *pEm) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80112030
// line start: 2226
// line end:   2239
void Em22_dm_no(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80112108
// line start: 2244
// line end:   2306
void Em22_dm_s(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake L_spd;
	{
		{
		}
	}
}


// address: 0x80112364
// line start: 2311
// line end:   2399
void Em22_dm_fall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake L_spd;
	// register: 3
	register long Up_dir;
	{
	}
}


// address: 0x8011264C
// line start: 2404
// line end:   2475
void Em22_dm_lf(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _1fake TmpV1;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake TmpV2;
	{
	}
}


// address: 0x80112880
// line start: 2480
// line end:   2526
void Em22_dm_lb(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80112A8C
// line start: 2569
// line end:   2660
void Em22_dm_fall_v(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake L_spd;
	{
		{
			// register: 3
			register unsigned long Axis;
		}
	}
}


// address: 0x80112D6C
// line start: 2665
// line end:   2727
void Em22_dm_flame(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake L_spd;
	{
		{
		}
	}
}


// address: 0x80112FC8
// line start: 2732
// line end:   2752
void Em22_die_ck(struct _74fake *pEm) {
}


// address: 0x80113070
// line start: 2754
// line end:   2765
void Em22_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80113108
// line start: 2824
// line end:   2845
void Em22_die_f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80113214
// line start: 2850
// line end:   2866
void Em22_die_b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80113300
// line start: 2871
// line end:   2888
void Em22_die_wall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801133B0
// line start: 2893
// line end:   2914
void Em22_die_climb(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801134B8
// line start: 2919
// line end:   2936
void Em22_die_wall_v(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80113568
// line start: 2941
// line end:   2942
void Em22_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113570
// line start: 2947
// line end:   2948
void Em22_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80113578
// line start: 2953
// line end:   2954
void Em222_Pldm(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801135B4
// line start: 2960
// line end:   3001
void Em22_Pl00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0xAC
	register struct _65fake *pParts;
	{
		{
			// address: 0xFFFFFFE0
			// size: 0x8
			auto struct _2fake Vec;
		}
	}
}


