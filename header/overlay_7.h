#include "types.h"

// === [ Overlay ID 7 ] ===

// address: 0x8010485C
static unsigned short Em23_life;

// address: 0x8010485E
static unsigned short Em23_life_easy;

// address: 0x80104860
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80104874
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80104888
static unsigned short Em2b_life;

// address: 0x8010488A
static unsigned short Em2b_life_easy;

// address: 0x8010488C
// size: 0x20
static void (*Em21_routine_0[8])();

// address: 0x801048AC
// size: 0x3C
static void (*Em21_indoor_br[15])();

// address: 0x801048E8
// size: 0x3C
static void (*Em21_indoor_mv[15])();

// address: 0x80104924
// size: 0x3C
static void (*Em21_outdoor_br[15])();

// address: 0x80104960
// size: 0x3C
static void (*Em21_outdoor_mv[15])();

// address: 0x8010499C
// size: 0x4C
static void (*Em21_dm[19])();

// address: 0x801049E8
// size: 0xC
static void (*Em21_sce_mv[3])();

// address: 0x801049F4
// size: 0x10
static void (*Em21_dead_mv[4])();

// address: 0x80104A04
// size: 0x4
static void (*Pldamage_Em21_tbl[1])();

// address: 0x8010013C
// line start: 43
// line end:   120
void Em121(struct _74fake *pEm) {
	// address: 0x80104A08
	static long D0;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Vec0;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake Vec1;
	{
	}
}


// address: 0x8010026C
// line start: 124
// line end:   144
void Em21_kage_set(struct _74fake *pEm) {
	// register: 2
	register long D0;
}


// address: 0x801002FC
// line start: 151
// line end:   232
void Em21_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801004E4
// line start: 312
// line end:   349
void Em21_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned long Flg;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801006C0
// line start: 356
// line end:   379
void Em21_br_wait_i(struct _74fake *pEm) {
	// register: 5
	register long D0;
}


// address: 0x801007A0
// line start: 385
// line end:   476
void Em21_mv_wait_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80100B94
// line start: 483
// line end:   484
void Em21_br_go_wait_i(struct _74fake *pEm);

// address: 0x80100B9C
// line start: 490
// line end:   503
void Em21_mv_go_wait_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80100C2C
// line start: 510
// line end:   511
void Em21_br_take_off_i(struct _74fake *pEm);

// address: 0x80100C34
// line start: 523
// line end:   585
void Em21_mv_take_off_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 17
	register long D0;
	{
		// address: 0x80100DCC
		bool move;
		{
			{
			}
		}
	}
}


// address: 0x80100EBC
// line start: 592
// line end:   593
void Em21_br_glide_i(struct _74fake *pEm);

// address: 0x80100EC4
// line start: 599
// line end:   638
void Em21_mv_glide_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register long D0;
	{
		// address: 0x80101000
		bool move;
	}
}


// address: 0x801010AC
// line start: 645
// line end:   672
void Em21_br_flight_i(struct _74fake *pEm) {
	{
	}
}


// address: 0x801011B0
// line start: 678
// line end:   703
void Em21_mv_flight_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x801012E8
// line start: 710
// line end:   727
void Em21_br_up_i(struct _74fake *pEm);

// address: 0x8010139C
// line start: 734
// line end:   751
void Em21_mv_up_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101488
// line start: 758
// line end:   774
void Em21_br_down_i(struct _74fake *pEm);

// address: 0x8010153C
// line start: 781
// line end:   798
void Em21_mv_down_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101628
// line start: 805
// line end:   807
void Em21_br_landing_i(struct _74fake *pEm);

// address: 0x80101630
// line start: 813
// line end:   892
void Em21_mv_landing_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	register long D0;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
		// address: 0x801017F0
		bool move;
		{
		}
	}
}


// address: 0x80101944
// line start: 899
// line end:   901
void Em21_br_quick_turn_i(struct _74fake *pEm);

// address: 0x80101964
// line start: 908
// line end:   938
void Em21_mv_quick_turn_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x80101AB4
// line start: 945
// line end:   946
void Em21_br_jump_i(struct _74fake *pEm);

// address: 0x80101ABC
// line start: 952
// line end:   965
void Em21_mv_jump_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80101B78
// line start: 972
// line end:   973
void Em21_br_fall_i(struct _74fake *pEm);

// address: 0x80101B80
// line start: 979
// line end:   1024
void Em21_mv_fall_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 17
	register long D0;
	{
		{
		}
	}
}


// address: 0x80101D30
// line start: 1033
// line end:   1040
void Em21_br_crash_f_i(struct _74fake *pEm) {
}


// address: 0x80101D98
// line start: 1046
// line end:   1092
void Em21_mv_crash_f_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register long D0;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80101F90
// line start: 1099
// line end:   1100
void Em21_br_crash_i(struct _74fake *pEm);

// address: 0x80101FB0
// line start: 1107
// line end:   1165
void Em21_mv_crash_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 17
	register long D0;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801021D0
// line start: 1172
// line end:   1180
void Em21_br_peck_f_i(struct _74fake *pEm) {
}


// address: 0x80102244
// line start: 1186
// line end:   1244
void Em21_mv_peck_f_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register long D0;
	// register: 3
	register long D1;
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


// address: 0x80102460
// line start: 1252
// line end:   1253
void Em21_br_peck_i(struct _74fake *pEm);

// address: 0x80102480
// line start: 1260
// line end:   1364
void Em21_mv_peck_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	register long D0;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	{
		// address: 0x80102814
		bool end;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80102888
// line start: 1397
// line end:   1402
void Em21_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102900
// line start: 1408
// line end:   1502
void Em21_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 17
	register long D0;
	{
		{
			{
			}
		}
	}
}


// address: 0x80102C6C
// line start: 1508
// line end:   1573
void Em21_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 17
	register long D0;
	// register: 18
	register unsigned long R0;
}


// address: 0x80102EC0
// line start: 1576
// line end:   1584
void Em21_parts_bobm_set(struct _65fake *pP_ptr, long B_y);

// address: 0x80102F00
// line start: 1588
// line end:   1598
void Em21_parts_fall_set(struct _65fake *pP_ptr, long D_y) {
}


// address: 0x80102F80
// line start: 1604
// line end:   1678
void Em21_dm02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 3
	register long D0;
	{
	}
}


// address: 0x80103248
// line start: 1684
// line end:   1754
void Em21_dm03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 17
	register long D0;
	{
	}
}


// address: 0x801034A0
// line start: 1764
// line end:   1767
void Em21_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801034A8
// line start: 1784
// line end:   1788
void Em21_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103520
// line start: 1795
// line end:   1818
void Em21_sce_wait(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103608
// line start: 1827
// line end:   1871
void Em21_sce_rush(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x801037C4
// line start: 1878
// line end:   1906
void Em21_sce_crash(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010391C
// line start: 1928
// line end:   1929
void Em21_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103958
// line start: 1936
// line end:   2010
void Em21_dead_normal(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	register unsigned long D0;
	{
		{
			{
			}
		}
	}
}


// address: 0x80103BD8
// line start: 2016
// line end:   2024
void Em21_dead_bomb(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103C10
// line start: 2031
// line end:   2132
void Em21_dead_bow(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register long D0;
	{
		{
			{
			}
		}
	}
}


// address: 0x80103E7C
// line start: 2138
// line end:   2171
void Em21_dead_instant(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80103FAC
// line start: 2184
// line end:   2200
void Em21_foot_set(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80104044
// line start: 2207
// line end:   2210
void Em21_r0_set(struct _74fake *pEm, unsigned long Rno0, unsigned long Rno1);

// address: 0x80104054
// line start: 2218
// line end:   2220
void Em21_r1_set(struct _74fake *pEm, unsigned long Rno1);

// address: 0x80104060
// line start: 2229
// line end:   2269
void Em21_sca_avoid_ck(struct _74fake *pEm) {
	// register: 3
	register unsigned long D0;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 17
	register unsigned long Cdir_y;
	{
		{
		}
	}
}


// address: 0x801041BC
// line start: 2276
// line end:   2336
void Em21_attack_ck(struct _74fake *pEm) {
	{
		{
		}
	}
}


// address: 0x801043B4
// line start: 2343
// line end:   2354
void Em21_run_away_ck(struct _74fake *pEm) {
	{
	}
}


// address: 0x80104430
// line start: 2361
// line end:   2364
void Em21_pl_dead_ck(struct _74fake *pEm);

// address: 0x80104464
// line start: 2372
// line end:   2386
void Em21_lock_off_ck(struct _74fake *pEm) {
	// register: 2
	register unsigned long D0;
}


// address: 0x801044E0
// line start: 2392
// line end:   2403
void Em21_set_flg_all(unsigned long Mask) {
	// register: 3
	// size: 0x244
	register struct _74fake *pEm;
	// register: 6
	// size: 0x244
	register struct _74fake **ppEm;
}


// address: 0x80104550
// line start: 2409
// line end:   2415
void Em_21_blood_call(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x801045DC
// line start: 2421
// line end:   2427
void Em_21_blood_call2(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x8010462C
// line start: 2433
// line end:   2441
void Em_21_feather_call(struct _74fake *pEm, long Num) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x801046E0
// line start: 2447
// line end:   2451
void Em21_atd_set(struct _74fake *pEm, long Size);

// address: 0x801046F4
// line start: 2464
// line end:   2468
void Pldamege_Em121(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104730
// line start: 2476
// line end:   2509
void Em21_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010484C
// line start: 2511
// line end:   2511
void Em21_dummy_br(struct _74fake *pEm);

// address: 0x80104854
// line start: 2512
// line end:   2512
void Em21_dummy(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

