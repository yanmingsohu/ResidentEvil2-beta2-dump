#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80105D00
static unsigned short Em23_life;

// address: 0x80105D02
static unsigned short Em23_life_easy;

// address: 0x80105D04
// size: 0x20
static unsigned short Em25_life[16];

// address: 0x80105D24
// size: 0x20
static unsigned short Em25_life_easy[16];

// address: 0x80105D44
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x80105D58
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80105D6C
static unsigned short Em2b_life;

// address: 0x80105D6E
static unsigned short Em2b_life_easy;

// address: 0x80105D70
// size: 0x80
static struct _56fake Em25_hit_tbl[4];

// address: 0x80105DF0
// size: 0x20
static void (*Em25_routine_0[8])();

// address: 0x80105E10
// size: 0x10
static void (*Em25_move_tbl[4])();

// address: 0x80105E20
// size: 0x28
static void (*Em25_floor_tbl[10])();

// address: 0x80105E48
// size: 0x2C
static void (*Em25_ceiling_tbl[11])();

// address: 0x80105E74
// size: 0x20
static void (*move_wall_tbl[8])();

// address: 0x80105E94
// size: 0x10
static short ceil_turn_tbl[8];

// address: 0x80105EA4
// size: 0x20
static void (*move_wallset_tbl[8])();

// address: 0x80105EC4
// size: 0x4C
static void (*Em25_dm[19])();

// address: 0x80105F10
// size: 0x10
static void (*dmg_nml_tbl[4])();

// address: 0x80105F20
// size: 0x8
static unsigned char next_rtn_tbl[8];

// address: 0x80105F28
// size: 0x10
static void (*dmg_ftl_tbl[4])();

// address: 0x80105F38
// size: 0xC
static void (*dm_ftl11_tbl[3])();

// address: 0x80105F44
// size: 0xC
static void (*dm_ftl21_tbl[3])();

// address: 0x80105F50
// size: 0x4
static unsigned char hitmark_tbl00[4];

// address: 0x80105F54
// size: 0x4C
static void (*em25_die_tbl[19])();

// address: 0x80105FA0
// size: 0x10
static void (*die_nml_tbl[4])();

// address: 0x80105FB0
// size: 0xC
static void (*die_nml10_tbl[3])();

// address: 0x80105FBC
// size: 0x40
static struct _2fake shibuki_tbl[8];

// address: 0x80105FFC
// size: 0xC
static void (*die_nml20_tbl[3])();

// address: 0x80106008
// size: 0x10
static void (*die_ftl_tbl[4])();

// address: 0x80106018
// size: 0xC
static void (*die_ftl20_tbl[3])();

// address: 0x80106024
// size: 0x8
static unsigned char float_fy[8];

// address: 0x8010602C
// size: 0x42
static struct _99fake blood_id_tbl[11];

// address: 0x80106070
// size: 0x4
static unsigned char foot_se_tbl[4];

// address: 0x80106074
// size: 0x8
static unsigned char biripos_tbl[8];

// address: 0x801000E8
// line start: 85
// line end:   120
void Em125(struct _74fake *pEm) {
	{
	}
}


// address: 0x801001C4
// line start: 132
// line end:   235
void Em25_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x28
	register struct _98fake *pFp;
	// register: 4
	register unsigned long i;
	{
	}
}


// address: 0x801004E8
// line start: 251
// line end:   283
void Em25_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801005C4
// line start: 307
// line end:   308
void Em25_Move_floor(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100600
// line start: 319
// line end:   344
void Em25_mv_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801006C0
// line start: 351
// line end:   393
void Em25_mv000(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	register short Dir0;
	// register: 17
	register unsigned short LL;
	{
		{
		}
	}
}


// address: 0x80100808
// line start: 403
// line end:   444
void Em25_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC0
	// size: 0x24
	auto unsigned long Em25_mv01_tbl[3][3];
	{
	}
}


// address: 0x801009A8
// line start: 452
// line end:   486
void Em25_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80100AAC
// line start: 494
// line end:   539
void Em25_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	register short Add_dir;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto unsigned long Em25_mv03_tbl[2][2];
	{
	}
}


// address: 0x80100C0C
// line start: 547
// line end:   640
void Em25_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x80100EB4
// line start: 649
// line end:   693
void Em25_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Off_sv;
	{
	}
}


// address: 0x80100FC8
// line start: 699
// line end:   739
long Em25_mv08sp(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned long type;
	{
		{
		}
	}
}


// address: 0x80101140
// line start: 749
// line end:   791
void Em25_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake Tm;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Tsv;
	// register: 7
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x801012CC
// line start: 815
// line end:   816
void Em25_Move_ceiling(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101308
// line start: 824
// line end:   870
void Em25_mv001(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	register short Dir0;
	// register: 17
	register unsigned short LL;
	{
		{
			{
			}
		}
	}
}


// address: 0x80101444
// line start: 879
// line end:   910
void Em25_mv011(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80101550
// line start: 919
// line end:   1009
void Em25_mv071(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register short Add_dir;
	{
		{
		}
	}
}


// address: 0x801017F8
// line start: 1017
// line end:   1076
void Em25_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101A24
// line start: 1109
// line end:   1116
void Em25_Move_walldown(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80101A60
// line start: 1124
// line end:   1143
void Em25_wall_init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80101B18
// line start: 1152
// line end:   1187
void Em25_Mv_wall000(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register long dist;
	// register: 4
	register long water;
	// register: 2
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x80101C6C
// line start: 1196
// line end:   1217
void Em25_Mv_wall10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101D50
// line start: 1224
// line end:   1241
void Em25_Mv_wall200(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101E28
// line start: 1249
// line end:   1298
void Em25_Mv_wall30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80101FC4
// line start: 1313
// line end:   1395
void Em25_Mv_wall40(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	register long diff;
	// register: 2
	register unsigned short dd;
	{
	}
}


// address: 0x8010223C
// line start: 1405
// line end:   1462
void Em25_Mv_wall50(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8010242C
// line start: 1472
// line end:   1523
void Em25_Mv_wall60(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801025D0
// line start: 1530
// line end:   1588
void Em25_Mv_wall70(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register short type;
	{
	}
}


// address: 0x80102788
// line start: 1596
// line end:   1605
short Get_wallshot(struct _74fake *pEm) {
	// register: 4
	register short dir;
}


// address: 0x801027B8
// line start: 1627
// line end:   1633
void Em25_Move_wallset(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801027F4
// line start: 1641
// line end:   1645
void Em25_Mv_wall001(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102828
// line start: 1654
// line end:   1668
void Em25_Mv_wall201(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801028F0
// line start: 41
// line end:   51
void Em25_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102990
// line start: 71
// line end:   72
void Em25_dm_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801029CC
// line start: 85
// line end:   105
void Em25_dm_nml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102ABC
// line start: 111
// line end:   125
void Em25_dm_nml10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102B70
// line start: 132
// line end:   149
void Em25_dm_nml20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102C20
// line start: 168
// line end:   169
void Em25_dm_ftl(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102C5C
// line start: 176
// line end:   200
void Em25_dm_ftl00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102D18
// line start: 212
// line end:   231
void Em25_dm_ftl10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102DF4
// line start: 238
// line end:   261
void Em25_dm_ftl110(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102E8C
// line start: 267
// line end:   289
void Em25_dm_ftl111(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102F80
// line start: 295
// line end:   307
void Em25_dm_ftl112(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80102FDC
// line start: 312
// line end:   317
void Em25_dm_ftl12(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103050
// line start: 331
// line end:   355
void Em25_dm_ftl20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103154
// line start: 362
// line end:   382
void Em25_dm_ftl210(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103204
// line start: 388
// line end:   409
void Em25_dm_ftl211(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103350
// line start: 423
// line end:   442
void Em25_dm_combo(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register unsigned long no;
	{
	}
}


// address: 0x80103444
// line start: 451
// line end:   466
void Em25_dm_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	register unsigned long i;
	// register: 5
	register unsigned long d0;
	{
	}
}


// address: 0x80103528
// line start: 475
// line end:   492
void Em25_dm_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	register unsigned long i;
	// register: 5
	register unsigned long d0;
	{
	}
}


// address: 0x801035F0
// line start: 502
// line end:   533
void Em25_dm_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 17
	register unsigned long base;
	// register: 5
	register unsigned long no;
}


// address: 0x80103754
// line start: 542
// line end:   546
void Em25_dm_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801037BC
// line start: 555
// line end:   575
void Em25_dm_fire2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	// size: 0x28
	register struct _98fake *pFp;
	// register: 17
	register unsigned long i;
	// register: 5
	register unsigned long d0;
	{
	}
}


// address: 0x801038C4
// line start: 612
// line end:   626
void Em25_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103974
// line start: 641
// line end:   647
void Em25_Die_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801039D0
// line start: 655
// line end:   680
void Em25_Die_nml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0x28
	register struct _98fake *pFp;
}


// address: 0x80103AC4
// line start: 692
// line end:   693
void Em25_Die_nml10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103B00
// line start: 700
// line end:   712
void Em25_Die_nml100(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103B60
// line start: 719
// line end:   748
void Em25_Die_nml101(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103C5C
// line start: 763
// line end:   786
void Em25_Die_nml1010(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x80103D38
// line start: 794
// line end:   804
void Em25_Die_nml102(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103DB0
// line start: 817
// line end:   818
void Em25_Die_nml20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103DEC
// line start: 825
// line end:   851
void Em25_Die_nml200(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80103EA4
// line start: 857
// line end:   894
void Em25_Die_nml201(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104024
// line start: 901
// line end:   916
void Em25_Die_nml30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801040B4
// line start: 934
// line end:   940
void Em25_Die_ftl(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104110
// line start: 947
// line end:   963
void Em25_Die_ftl00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801041DC
// line start: 969
// line end:   982
void Em25_Die_ftl10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80104264
// line start: 994
// line end:   995
void Em25_Die_ftl20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801042A0
// line start: 1003
// line end:   1032
void Em25_Die_ftl200(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80104370
// line start: 1039
// line end:   1055
void Em25_Die_ftl30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80104408
// line start: 1064
// line end:   1085
void Die_break_set(struct _74fake *pEm) {
	// register: 17
	register unsigned long i;
}


// address: 0x801044B4
// line start: 1095
// line end:   1115
void Em25_Die_gnml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	register unsigned long i;
	// register: 16
	register unsigned long d0;
	// register: 19
	register unsigned long d1;
	{
	}
}


// address: 0x801045C4
// line start: 1124
// line end:   1146
void Em25_Die_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	register unsigned long i;
	// register: 16
	register unsigned long d0;
	// register: 19
	register unsigned long d1;
	{
	}
}


// address: 0x801046F0
// line start: 1157
// line end:   1182
void Em25_Die_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801047C4
// line start: 1191
// line end:   1200
void Em25_Die_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104858
// line start: 1213
// line end:   1216
void Em25_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104860
// line start: 1233
// line end:   1289
void Em25_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80104950
// line start: 1298
// line end:   1344
void Em25_kage_move(struct _74fake *pEm) {
	// register: 17
	// size: 0x68
	register struct _61fake *pKage;
}


// address: 0x80104A80
// line start: 1352
// line end:   1380
void Em25_float_move(struct _74fake *pEm) {
	// register: 6
	// size: 0x28
	register struct _98fake *pFp;
}


// address: 0x80104B4C
// line start: 1397
// line end:   1426
void Em25_foot_set(struct _74fake *pEm, unsigned char Flg) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 17
	register unsigned char no;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake Tm;
}


// address: 0x80104C6C
// line start: 1435
// line end:   1449
short Em25_goto00(struct _74fake *pEm, short rr) {
	// register: 6
	// size: 0x218
	register struct _72fake *pTg;
	// register: 5
	register long x;
	// register: 6
	register long z;
	{
		{
		}
	}
}


// address: 0x80104CF8
// line start: 1460
// line end:   1481
unsigned long Ck_lock_wall(struct _74fake *pEm) {
	// register: 16
	// size: 0x10
	register struct _57fake **ppScd;
	// register: 18
	// size: 0x28
	register struct _98fake *pFp;
	// register: 5
	register unsigned short pos;
	{
	}
}


// address: 0x80104DDC
// line start: 1492
// line end:   1509
void Em25_wall_rot(struct _74fake *pEm, short rot) {
	// register: 7
	// size: 0x28
	register struct _98fake *pFp;
}


// address: 0x80104E3C
// line start: 1519
// line end:   1532
void Em25_add_speed(struct _74fake *pEm, long rx, long ry, long rz) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80104EE8
// line start: 1545
// line end:   1580
long Ck_wall_edge(struct _74fake *pEm, short Scdir) {
	// register: 6
	// size: 0x10
	register struct _57fake *pSc;
	// register: 3
	register short pos;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80104FAC
// line start: 1591
// line end:   1610
long Ck_near_wall(struct _74fake *pEm, struct _57fake *pSc, short dir) {
	// register: 3
	register long edge;
	// register: 16
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x80105040
// line start: 1621
// line end:   1638
long Ck_wall_other(struct _74fake *pEm, short r) {
	// register: 5
	// size: 0x10
	register struct _57fake **ppScd;
}


// address: 0x80105110
// line start: 1646
// line end:   1667
short Ck_wall_to_pl(struct _74fake *pEm, short rot) {
	// register: 17
	register short xx;
	// register: 16
	register short yy;
	// register: 18
	register short zz;
	// register: 3
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x801051B8
// line start: 1697
// line end:   1751
void Set_blood(struct _74fake *pEm, unsigned char parts, unsigned char type) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv2;
	// register: 19
	// size: 0x6
	register struct _99fake *tbl;
	// register: 16
	register long dir;
	// register: 20
	register long Id;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x80105380
// line start: 1760
// line end:   1792
void Set_poison(struct _74fake *pEm, unsigned long Type, short Dir) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake sv;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake sv2;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x801054AC
// line start: 1807
// line end:   1837
unsigned long atck_ck_main(struct _74fake *pEm, unsigned long pl, long R) {
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 2
	register long dist;
	// register: 3
	register long ck;
	{
		{
		}
	}
}


// address: 0x8010559C
// line start: 1840
// line end:   1858
unsigned long Em25_atck_ck(struct _74fake *pEm, long R, long H) {
	{
		{
		}
	}
}


// address: 0x80105680
// line start: 1868
// line end:   1905
long Foot_break_set(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 8
	register unsigned long i;
	// register: 7
	register unsigned long base;
	// register: 5
	register unsigned long no;
}


// address: 0x801057C8
// line start: 1915
// line end:   1950
void Em25_Set_child(struct _74fake *pEm, unsigned short type, unsigned char cnt) {
	// register: 16
	// size: 0x244
	register struct _74fake *pWk;
	// register: 3
	register unsigned long total;
	{
		{
		}
	}
}


// address: 0x80105960
// line start: 1964
// line end:   1975
void Em25_Pl_to_dmg(unsigned long pl, unsigned char dir) {
	// register: 4
	// size: 0x218
	register struct _72fake *pPl;
}


// address: 0x801059A8
// line start: 1985
// line end:   1994
void Em25_Pl_to_die(unsigned long pl) {
	// register: 3
	// size: 0x218
	register struct _72fake *pPl;
}


// address: 0x801059D8
// size: 0x244
// line start: 2006
// line end:   2023
struct _74fake *Get_target_pl(struct _74fake *pEm) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTg;
}


// address: 0x80105A44
// line start: 2036
// line end:   2048
void Set_foot_se(struct _74fake *pEm) {
	{
		{
		}
	}
}


// address: 0x80105ADC
// line start: 2057
// line end:   2065
void Chg_modelcol(struct _74fake *pEm, unsigned long Rgb) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 6
	register unsigned long i;
}


// address: 0x80105B08
// line start: 2078
// line end:   2098
long Ck_land(struct _74fake *pEm, long Fe, long Fg, long Fw) {
}


// address: 0x80105B80
// line start: 2113
// line end:   2130
void Em25_spark_move(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	register unsigned long i;
	// register: 5
	register unsigned long d0;
	{
	}
}


// address: 0x80105C40
// line start: 2142
// line end:   2173
void Set_gunrange(struct _74fake *pEm) {
	// register: 6
	// size: 0x218
	register struct _72fake *pTg;
	// register: 5
	register long dh;
}


