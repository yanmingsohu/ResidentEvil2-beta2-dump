#include "types.h"

// === [ Overlay ID 25 ] ===

// address: 0x8011185C
static unsigned short Em23_life;

// address: 0x8011185E
static unsigned short Em23_life_easy;

// address: 0x80111860
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80111874
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80111888
static unsigned short Em2b_life;

// address: 0x8011188A
static unsigned short Em2b_life_easy;

// address: 0x8011188C
// size: 0x20
static void (*Em21_routine_0[8])();

// address: 0x801118AC
// size: 0x3C
static void (*Em21_indoor_br[15])();

// address: 0x801118E8
// size: 0x3C
static void (*Em21_indoor_mv[15])();

// address: 0x80111924
// size: 0x3C
static void (*Em21_outdoor_br[15])();

// address: 0x80111960
// size: 0x3C
static void (*Em21_outdoor_mv[15])();

// address: 0x8011199C
// size: 0x4C
static void (*Em21_dm[19])();

// address: 0x801119E8
// size: 0xC
static void (*Em21_sce_mv[3])();

// address: 0x801119F4
// size: 0x10
static void (*Em21_dead_mv[4])();

// address: 0x80111A04
// size: 0x4
static void (*Pldamage_Em21_tbl[1])();

// address: 0x8010D13C
// line start: 43
// line end:   120
void Em221(struct _74fake *pEm) {
	// address: 0x80111A08
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


// address: 0x8010D26C
// line start: 124
// line end:   144
void Em21_kage_set(struct _74fake *pEm) {
	// register: 2
	register long D0;
}


// address: 0x8010D2FC
// line start: 151
// line end:   232
void Em21_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010D4E4
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


// address: 0x8010D6C0
// line start: 356
// line end:   379
void Em21_br_wait_i(struct _74fake *pEm) {
	// register: 5
	register long D0;
}


// address: 0x8010D7A0
// line start: 385
// line end:   476
void Em21_mv_wait_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010DB94
// line start: 483
// line end:   484
void Em21_br_go_wait_i(struct _74fake *pEm);

// address: 0x8010DB9C
// line start: 490
// line end:   503
void Em21_mv_go_wait_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010DC2C
// line start: 510
// line end:   511
void Em21_br_take_off_i(struct _74fake *pEm);

// address: 0x8010DC34
// line start: 523
// line end:   585
void Em21_mv_take_off_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 17
	register long D0;
	{
		// address: 0x8010DDCC
		bool move;
		{
			{
			}
		}
	}
}


// address: 0x8010DEBC
// line start: 592
// line end:   593
void Em21_br_glide_i(struct _74fake *pEm);

// address: 0x8010DEC4
// line start: 599
// line end:   638
void Em21_mv_glide_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register long D0;
	{
		// address: 0x8010E000
		bool move;
	}
}


// address: 0x8010E0AC
// line start: 645
// line end:   672
void Em21_br_flight_i(struct _74fake *pEm) {
	{
	}
}


// address: 0x8010E1B0
// line start: 678
// line end:   703
void Em21_mv_flight_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x8010E2E8
// line start: 710
// line end:   727
void Em21_br_up_i(struct _74fake *pEm);

// address: 0x8010E39C
// line start: 734
// line end:   751
void Em21_mv_up_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010E488
// line start: 758
// line end:   774
void Em21_br_down_i(struct _74fake *pEm);

// address: 0x8010E53C
// line start: 781
// line end:   798
void Em21_mv_down_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010E628
// line start: 805
// line end:   807
void Em21_br_landing_i(struct _74fake *pEm);

// address: 0x8010E630
// line start: 813
// line end:   892
void Em21_mv_landing_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	register long D0;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
		// address: 0x8010E7F0
		bool move;
		{
		}
	}
}


// address: 0x8010E944
// line start: 899
// line end:   901
void Em21_br_quick_turn_i(struct _74fake *pEm);

// address: 0x8010E964
// line start: 908
// line end:   938
void Em21_mv_quick_turn_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x8010EAB4
// line start: 945
// line end:   946
void Em21_br_jump_i(struct _74fake *pEm);

// address: 0x8010EABC
// line start: 952
// line end:   965
void Em21_mv_jump_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010EB78
// line start: 972
// line end:   973
void Em21_br_fall_i(struct _74fake *pEm);

// address: 0x8010EB80
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


// address: 0x8010ED30
// line start: 1033
// line end:   1040
void Em21_br_crash_f_i(struct _74fake *pEm) {
}


// address: 0x8010ED98
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


// address: 0x8010EF90
// line start: 1099
// line end:   1100
void Em21_br_crash_i(struct _74fake *pEm);

// address: 0x8010EFB0
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


// address: 0x8010F1D0
// line start: 1172
// line end:   1180
void Em21_br_peck_f_i(struct _74fake *pEm) {
}


// address: 0x8010F244
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


// address: 0x8010F460
// line start: 1252
// line end:   1253
void Em21_br_peck_i(struct _74fake *pEm);

// address: 0x8010F480
// line start: 1260
// line end:   1364
void Em21_mv_peck_i(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	register long D0;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	{
		// address: 0x8010F814
		bool end;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8010F888
// line start: 1397
// line end:   1402
void Em21_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010F900
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


// address: 0x8010FC6C
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


// address: 0x8010FEC0
// line start: 1576
// line end:   1584
void Em21_parts_bobm_set(struct _65fake *pP_ptr, long B_y);

// address: 0x8010FF00
// line start: 1588
// line end:   1598
void Em21_parts_fall_set(struct _65fake *pP_ptr, long D_y) {
}


// address: 0x8010FF80
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


// address: 0x80110248
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


// address: 0x801104A0
// line start: 1764
// line end:   1767
void Em21_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801104A8
// line start: 1784
// line end:   1788
void Em21_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80110520
// line start: 1795
// line end:   1818
void Em21_sce_wait(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110608
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


// address: 0x801107C4
// line start: 1878
// line end:   1906
void Em21_sce_crash(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8011091C
// line start: 1928
// line end:   1929
void Em21_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110958
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


// address: 0x80110BD8
// line start: 2016
// line end:   2024
void Em21_dead_bomb(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80110C10
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


// address: 0x80110E7C
// line start: 2138
// line end:   2171
void Em21_dead_instant(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80110FAC
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


// address: 0x80111044
// line start: 2207
// line end:   2210
void Em21_r0_set(struct _74fake *pEm, unsigned long Rno0, unsigned long Rno1);

// address: 0x80111054
// line start: 2218
// line end:   2220
void Em21_r1_set(struct _74fake *pEm, unsigned long Rno1);

// address: 0x80111060
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


// address: 0x801111BC
// line start: 2276
// line end:   2336
void Em21_attack_ck(struct _74fake *pEm) {
	{
		{
		}
	}
}


// address: 0x801113B4
// line start: 2343
// line end:   2354
void Em21_run_away_ck(struct _74fake *pEm) {
	{
	}
}


// address: 0x80111430
// line start: 2361
// line end:   2364
void Em21_pl_dead_ck(struct _74fake *pEm);

// address: 0x80111464
// line start: 2372
// line end:   2386
void Em21_lock_off_ck(struct _74fake *pEm) {
	// register: 2
	register unsigned long D0;
}


// address: 0x801114E0
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


// address: 0x80111550
// line start: 2409
// line end:   2415
void Em_21_blood_call(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x801115DC
// line start: 2421
// line end:   2427
void Em_21_blood_call2(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x8011162C
// line start: 2433
// line end:   2441
void Em_21_feather_call(struct _74fake *pEm, long Num) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x801116E0
// line start: 2447
// line end:   2451
void Em21_atd_set(struct _74fake *pEm, long Size);

// address: 0x801116F4
// line start: 2464
// line end:   2468
void Pldamege_Em221(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80111730
// line start: 2476
// line end:   2509
void Em21_pldm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8011184C
// line start: 2511
// line end:   2511
void Em21_dummy_br(struct _74fake *pEm);

// address: 0x80111854
// line start: 2512
// line end:   2512
void Em21_dummy(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

