#include "types.h"

// === [ Overlay ID 17 ] ===

// address: 0x80106024
static unsigned short Em23_life;

// address: 0x80106026
static unsigned short Em23_life_easy;

// address: 0x80106028
// size: 0x14
static unsigned short Em2a_life[10];

// address: 0x8010603C
// size: 0x14
static unsigned short Em2a_life_easy[10];

// address: 0x80106050
static unsigned short Em2b_life;

// address: 0x80106052
static unsigned short Em2b_life_easy;

// address: 0x80106054
static char Em33_me_tate;

// address: 0x80106055
static char Em33_me_yoko;

// address: 0x80106056
static short Em33_me_tate_mv;

// address: 0x80106058
static short Em33_me_yoko_mv;

// address: 0x8010605A
static short Em33_me_tate_a;

// address: 0x8010605C
static short Em33_me_yoko_a;

// address: 0x8010605E
static char Em33_me_tate_d;

// address: 0x8010605F
static char Em33_me_yoko_d;

// address: 0x80106060
// size: 0x14
static short touch_tbl[10];

// address: 0x80106074
// size: 0x14
static short esc_rot_tbl[10];

// address: 0x80106088
// size: 0x14
static unsigned char dieblood_type_tbl[20];

// address: 0x8010609C
// size: 0x4
static unsigned char blood_pos_tbl[4];

// address: 0x801060A0
// size: 0xC
static unsigned char blood_rnd[12];

// address: 0x801060AC
// size: 0x8
static unsigned char Mof_parts[8];

// address: 0x801060B4
// size: 0x20
static void (*Em33_routine_0[8])();

// address: 0x801060D4
// size: 0x28
static void (*Em33_Move_tbl[10])();

// address: 0x801060FC
// size: 0x10
static void (*Mv_tojo_tbl[4])();

// address: 0x8010610C
// size: 0xC
static void (*Mv_atck_tbl[3])();

// address: 0x80106118
// size: 0xC
static void (*Mv_combo_tbl[3])();

// address: 0x80106124
// size: 0xC
static void (*Mv_critical_tbl[3])();

// address: 0x80106130
// size: 0xC
static void (*Mv_jump_tbl[3])();

// address: 0x8010613C
// size: 0xA
static char down_dest_tbl[10];

// address: 0x80106148
// size: 0xC8
static char jump_dest_tbl[200];

// address: 0x80106210
// size: 0x4C
static void (*em33_dmg_init[19])();

// address: 0x8010625C
// size: 0x14
static unsigned char yoro_tbl00[20];

// address: 0x80106270
// size: 0x14
static unsigned char yoro_tbl01[20];

// address: 0x80106284
// size: 0x14
static void (*Em33_sce_tbl[5])();

// address: 0x80106298
// size: 0x10
static void (*pldamage_tbl[4])();

// address: 0x801062A8
// size: 0x4
static unsigned char catch_parts_tbl[4];

// address: 0x801062AC
// size: 0xC
static void (*Mv_core_tbl[3])();

// address: 0x801062B8
// size: 0x3C
static struct _102fake blood_id_tbl[10];

// address: 0x80100098
// line start: 105
// line end:   175
void Em133(struct _74fake *pEm) {
	// register: 2
	register long xx;
	// register: 3
	register long zz;
	{
		{
		}
	}
}


// address: 0x801002D8
// line start: 184
// line end:   284
void Em33_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 8
	// size: 0x28
	register struct _101fake *pFp;
	// register: 4
	register unsigned long i;
}


// address: 0x801004F4
// line start: 306
// line end:   327
void Em33_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010056C
// line start: 343
// line end:   344
void Em33_Mv_tojo(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801005A8
// line start: 353
// line end:   394
void Em33_Mv_tojo00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 17
	register unsigned long i;
	{
	}
}


// address: 0x801006E4
// line start: 404
// line end:   414
void Em33_Mv_tojo10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100764
// line start: 424
// line end:   431
unsigned long Mv_tojo20_0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, short Rate);

// address: 0x801007C8
// line start: 435
// line end:   441
void Mv_tojo20_1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100830
// line start: 446
// line end:   643
void Em33_Mv_tojo20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
	// register: 17
	register unsigned long chr_type;
	{
	}
}


// address: 0x80100F2C
// line start: 650
// line end:   679
void Em33_Mv_tojo30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	register unsigned long i;
}


// address: 0x8010100C
// line start: 694
// line end:   708
void Em33_Mv_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801010B0
// line start: 718
// line end:   771
void Em33_Mv_walk(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0x218
	register struct _72fake *pTg;
	// register: 7
	register short rot;
	{
		{
			{
			}
		}
	}
}


// address: 0x801012C8
// line start: 781
// line end:   842
long Mv_atck_ck(struct _74fake *pEm) {
	// register: 19
	// size: 0x218
	register struct _72fake *pTg;
	// register: 16
	// size: 0x28
	register struct _101fake *pFp;
	// register: 20
	register short dir;
	// register: 3
	register short range;
	// register: 2
	register short cnt;
	{
	}
}


// address: 0x8010148C
// line start: 851
// line end:   891
void Em33_Mv_turn(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 20
	// size: 0x218
	register struct _72fake *pTg;
	// register: 17
	// size: 0x28
	register struct _101fake *pFp;
	// register: 4
	register short dir;
	{
	}
}


// address: 0x80101638
// line start: 897
// line end:   906
void Mv_turn_ck(struct _74fake *pEm) {
	{
		{
		}
	}
}


// address: 0x801016DC
// line start: 923
// line end:   941
void Em33_Mv_atck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	register unsigned long d0;
}


// address: 0x80101788
// line start: 948
// line end:   972
void Em33_Mv_atck00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0x28
	register struct _101fake *pFp;
	{
	}
}


// address: 0x80101874
// line start: 979
// line end:   1046
void Em33_Mv_atck10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x28
	register struct _101fake *pFp;
	// register: 19
	// size: 0x218
	register struct _72fake *pTg;
	// register: 17
	register unsigned long chr_type;
	// register: 5
	register unsigned long d0;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80101A94
// line start: 1055
// line end:   1078
long Arm_spark_ck(struct _74fake *pEm, unsigned char no) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
	}
}


// address: 0x80101B98
// line start: 1087
// line end:   1115
void Em33_Mv_atck20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x28
	register struct _101fake *pFp;
	// register: 5
	register unsigned long d0;
}


// address: 0x80101CA8
// line start: 1122
// line end:   1127
void Mv_kill_ck(struct _74fake *pEm);

// address: 0x80101CD8
// line start: 1151
// line end:   1152
void Em33_Mv_combo(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101D14
// line start: 1160
// line end:   1212
void Em33_Mv_combo00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80101F28
// line start: 1220
// line end:   1264
void Em33_Mv_combo10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned long d0;
	{
	}
}


// address: 0x801020C4
// line start: 1271
// line end:   1304
void Em33_Mv_combo20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8010223C
// line start: 1324
// line end:   1325
void Em33_Mv_critical(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80102278
// line start: 1338
// line end:   1428
void Em33_Mv_critical00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0x218
	register struct _72fake *pTg;
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


// address: 0x801025B4
// line start: 1438
// line end:   1509
void Em33_Mv_critical10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
	// register: 16
	register unsigned long chr_type;
	// register: 3
	register unsigned long i;
	{
		{
			{
			}
		}
	}
}


// address: 0x8010287C
// line start: 1516
// line end:   1541
void Em33_Mv_critical20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x801029A0
// line start: 1558
// line end:   1559
void Em33_Mv_jump(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801029DC
// line start: 1568
// line end:   1628
void Em33_Mv_jump00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x80102C30
// line start: 1635
// line end:   1657
void Em33_Mv_jump10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80102D48
// line start: 1671
// line end:   1802
void Em33_Mv_jump20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 19
	// size: 0x218
	register struct _72fake *pTg;
	// register: 3
	register unsigned long area;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801031C4
// line start: 1838
// line end:   1853
long jump_ck_main(struct _74fake *pEm, long Type) {
	// register: 16
	register unsigned long Pa;
	// register: 4
	register unsigned long Ea;
	// register: 3
	register char *pTbl;
}


// address: 0x80103248
// line start: 1858
// line end:   1875
void Mv_jump_ck(struct _74fake *pEm) {
	{
	}
}


// address: 0x801032C4
// line start: 1886
// line end:   1928
void Em33_Mv_yoro(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80103440
// line start: 1938
// line end:   1961
void Em33_Mv_ikaku(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80103524
// line start: 1988
// line end:   1994
void Em33_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103564
// line start: 2041
// line end:   2116
void Em33_dmg_nml00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x28
	register struct _101fake *pFp;
	{
	}
}


// address: 0x801037C8
// line start: 2122
// line end:   2137
void Em33_dmg_nml10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010385C
// line start: 2146
// line end:   2147
void Em33_dmg_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103864
// line start: 2156
// line end:   2157
void Em33_dmg_mag(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80103870
// line start: 2167
// line end:   2170
void Em33_dmg_combo(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x801038F0
// line start: 2179
// line end:   2198
void Em33_dmg_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long i;
	// register: 18
	register unsigned long max;
	// register: 19
	register unsigned long add;
	{
	}
}


// address: 0x801039D0
// line start: 2208
// line end:   2222
void Em33_dmg_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long i;
	// register: 18
	register unsigned long add;
	{
		{
		}
	}
}


// address: 0x80103AC4
// line start: 2231
// line end:   2243
void Em33_dmg_spark(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80103BB4
// line start: 2252
// line end:   2345
void Em33_magdmg(struct _74fake *pEm) {
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sv1;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sv2;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	{
	}
}


// address: 0x80104204
// line start: 2357
// line end:   2369
long Die_move_rot(struct _74fake *pEm, short rot) {
	// register: 7
	register short d0;
}


// address: 0x80104280
// line start: 2375
// line end:   2551
void Em33_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	register long d0;
	{
		{
			{
			}
		}
	}
}


// address: 0x801048C4
// line start: 2573
// line end:   2574
void Em33_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104900
// line start: 2583
// line end:   2597
void Em33_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010495C
// line start: 2606
// line end:   2654
void Em33_sce10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80104AFC
// line start: 2662
// line end:   2696
void Em33_sce20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 5
	register unsigned long d0;
	{
		{
		}
	}
}


// address: 0x80104C58
// line start: 2703
// line end:   2747
void Em33_sce30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80104DD8
// line start: 2755
// line end:   2762
void Em33_sce40(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104E2C
// line start: 2790
// line end:   2791
void Pldamage_Em133(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80104E6C
// line start: 2801
// line end:   2839
void Em33_pldmg_push(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	register unsigned long dir;
	{
	}
}


// address: 0x80104F9C
// line start: 2851
// line end:   2884
void Em33_pldmg_combo1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0x244
	register struct _74fake *pG3;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 2
	register unsigned long d0;
	{
	}
}


// address: 0x801050D0
// line start: 2905
// line end:   2960
void Pldie_Em133(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	// size: 0x244
	register struct _74fake *pTg;
	// register: 2
	register unsigned long chr_type;
	// register: 5
	register unsigned long i;
	{
	}
}


// address: 0x80105294
// line start: 2974
// line end:   2975
void Em33_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010529C
// line start: 2992
// line end:   2993
void Em33_Mv_core(struct _74fake *pEm, struct _101fake *pFp);

// address: 0x801052D8
// line start: 3000
// line end:   3027
void Em33_Mv_core00(struct _74fake *pEm, struct _101fake *pFp) {
	{
	}
}


// address: 0x80105414
// line start: 3035
// line end:   3052
void Em33_Mv_core10(struct _74fake *pEm, struct _101fake *pFp) {
	{
	}
}


// address: 0x801054C0
// line start: 3060
// line end:   3090
void Em33_Mv_core20(struct _74fake *pEm, struct _101fake *pFp) {
}


// address: 0x80105594
// line start: 3102
// line end:   3115
long Ck_core_tate(short Add);

// address: 0x801055F8
// line start: 3119
// line end:   3132
long Ck_core_yoko(short Add);

// address: 0x8010565C
// line start: 3146
// line end:   3193
void Em33_Mv_heart(struct _74fake *pEm, struct _101fake *pFp) {
	// register: 6
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80105784
// line start: 3228
// line end:   3255
void Set_blood(struct _74fake *pEm, unsigned char parts, unsigned char type) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 5
	register long dir;
	// register: 8
	register long Id;
	// register: 18
	// size: 0x6
	register struct _102fake *tbl;
	{
		{
		}
	}
}


// address: 0x8010589C
// line start: 3265
// line end:   3276
void Em33_Pl_to_dmg(unsigned char dir) {
}


// address: 0x801058CC
// line start: 3285
// line end:   3296
void Em33_Pl_to_dmg2(struct _74fake *pEm, unsigned char Type, unsigned char Dir) {
}


// address: 0x8010590C
// line start: 3307
// line end:   3316
void Em33_Pl_to_die() {
}


// address: 0x80105938
// line start: 3327
// line end:   3347
long Arm_touch_ck(struct _74fake *pEm, unsigned long Type) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pPt;
	// register: 7
	// size: 0x218
	register struct _72fake *pTg;
	{
	}
}


// address: 0x80105A14
// line start: 3358
// line end:   3384
long Arm_atck_ck(struct _74fake *pEm, unsigned long Type) {
	// register: 17
	// size: 0x218
	register struct _72fake *pPl;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80105AEC
// line start: 3394
// line end:   3419
long Combo_atck_ck(struct _74fake *pEm, unsigned long Type) {
	// register: 18
	// size: 0x218
	register struct _72fake *pPl;
	{
		{
			{
			}
		}
	}
}


// address: 0x80105BB8
// line start: 3430
// line end:   3437
long Ck_schit(struct _74fake *pEm, unsigned long no, long r) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80105C14
// line start: 3446
// line end:   3529
void Em33_core_me_mv(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// address: 0xFFFFFFC8
	// size: 0x3
	auto unsigned char Me3[3];
	// address: 0xFFFFFFD0
	// size: 0xF
	auto unsigned char Me4[15];
	// register: 9
	register short Tmp_t;
	// register: 8
	register short Tmp_y;
}


// address: 0x80105FD4
// line start: 3540
// line end:   3546
void Set_sabun(struct _74fake *pEm, unsigned long Parts, unsigned long Ofs, short Rate) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


