#include "types.h"

// === [ Overlay ID 4c ] ===

// address: 0x800CF188
// size: 0x7C
extern struct _108fake *pESP;

// address: 0x800DA7D0
// size: 0x10
extern unsigned char Espid[16];

// address: 0x800C7318
// size: 0xC0
extern unsigned long *pEspdt[48];

// address: 0x800C7418
// size: 0xC0
extern unsigned long *pEspmv[48];

// address: 0x800CB2A0
// size: 0x2E80
extern struct _108fake Esp[96];

// address: 0x80093658
// size: 0x180
extern void (*Esp_tblj[96])();

// address: 0x800D1878
// size: 0x48
extern struct _98fake Game;

// address: 0x800D9E60
extern unsigned long Padd2_mode;

// address: 0x800D1B28
// size: 0x2D18
extern struct _101fake Line;

// address: 0x800937D8
// size: 0x100
extern char sin_tbl[256];

// address: 0x800938D8
// size: 0x20
extern unsigned char quake_tbl1[32];

// address: 0x800938F8
// size: 0x20
extern unsigned char quake_tbl2[32];

// address: 0x800BEB60
// size: 0x8728
extern struct _97fake G;

// address: 0x800CF158
// size: 0x20
extern struct _0fake GsWSMATRIX;

// address: 0x800D4860
// size: 0x20
extern struct _0fake GsMWSMATRIX;

// address: 0x800D18C8
// size: 0x25C
extern struct _100fake Main;

// address: 0x800D9E60
extern unsigned long Padd2_mode_addr_800D9E60;

// address: 0x800C9C44
extern unsigned long Ev0;

// address: 0x800C9DD0
extern unsigned long Ev1;

// address: 0x800C9DD4
extern unsigned long Ev2;

// address: 0x800C9DD8
extern unsigned long Ev3;

// address: 0x800CB27C
extern unsigned long Ev10;

// address: 0x800CB284
extern unsigned long Ev11;

// address: 0x800CB288
extern unsigned long Ev13;

// address: 0x80093968
// size: 0x20
extern struct _0fake COLORMATRIX;

// address: 0x80093948
// size: 0x20
extern struct _0fake LIGHTMATRIX;

// address: 0x80093928
// size: 0x20
extern struct _0fake GsIDMATRIX;

// address: 0x80093988
extern unsigned char Bgm_sw_timer;

// address: 0x80093989
extern unsigned char No_death_timer;

// address: 0x8009398C
// size: 0x40
static struct _40fake Curtain[2][2];

// address: 0x800939CC
// size: 0x20
static struct _40fake Pause[2];

// address: 0x800CB294
extern unsigned long *m_pl_weapon_parts;

// address: 0x800BEB58
extern unsigned long *m_pl_weapon_tmd;

// address: 0x800D1868
extern unsigned long *m_pl_weapon_packet;

// address: 0x800C77E8
extern unsigned long *m_pl_w00_tmd;

// address: 0x800D9E78
extern unsigned long *m_pl_w00_packet;

// address: 0x800C81E0
extern unsigned long *m_pl_w00_tmd2;

// address: 0x800DA7C0
extern unsigned long *m_pl_w00_packet2;

// address: 0x80093A0C
// size: 0x78
extern short Bomb_tbl[30][2];

// address: 0x80093A84
extern short G_Mirror_pos;

// address: 0x80093A86
extern unsigned char G_Mirror_flg;

// address: 0x80093A88
extern short G_Mirror_max;

// address: 0x80093A8A
extern short G_Mirror_min;

// address: 0x801C011C
// line start: 41
// line end:   43
void Ending();

// address: 0x8001BE38
// line start: 59
// line end:   104
unsigned char Esp_init_C() {
	// register: 3
	register unsigned long D0;
	// register: 5
	register unsigned long *pCore_end;
}


// address: 0x8001BF20
// line start: 116
// line end:   158
unsigned char Esp_init_R() {
	// register: 4
	register unsigned long cnt0;
	// register: 3
	register unsigned long cnt1;
}


// address: 0x8001C01C
// line start: 173
// line end:   204
unsigned char Esp_data_set0(unsigned char *ptr8, unsigned long *ptr32, unsigned long addr, unsigned long type) {
	// register: 2
	register unsigned long D0;
	// register: 4
	register unsigned long D1;
	// register: 5
	register unsigned long id;
	// register: 8
	register unsigned long cnt0;
	// register: 3
	register unsigned long addres;
}


// address: 0x8001C0B4
// line start: 219
// line end:   297
void Esp_data_set1(unsigned long *plong, unsigned long *ptr) {
	// register: 17
	register unsigned long D0;
	// register: 6
	register unsigned long D1;
	// register: 21
	register unsigned long tpage;
	// register: 18
	register unsigned long vramy;
	// register: 20
	register unsigned long cluty;
	// register: 16
	register unsigned long *pU32;
	// register: 3
	// size: 0x4
	register struct _105fake *pSpgp;
	// address: 0xFFFFFFA8
	// size: 0x14
	auto struct _52fake Tim;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto unsigned long *pTimadr[8];
}


// address: 0x8001C28C
// line start: 309
// line end:   449
unsigned char Esp_call(unsigned long bit, short dir_y, struct _0fake *pmat, struct _2fake *svec) {
	// register: 9
	register unsigned short *pU16;
	// register: 4
	register unsigned long *pAddr2;
	// register: 12
	register unsigned long *pAddr;
	// register: 8
	// size: 0x7C
	register struct _108fake *pEsp;
	// register: 10
	register unsigned long wk;
	// register: 14
	register unsigned long b_wk;
	// register: 5
	register unsigned long cnt;
	// register: 14
	register unsigned long id;
	// register: 13
	register unsigned long tp;
	// register: 15
	register unsigned long nseq;
	// register: 11
	register unsigned long nmvgp;
}


// address: 0x8001C5A0
// line start: 461
// line end:   606
unsigned char Esp_call3D(unsigned long bit, short dir_y, struct _0fake *pmat, struct _2fake *svec, struct _2fake *dsv) {
	// register: 9
	register unsigned short *pU16;
	// register: 4
	register unsigned long *pAddr2;
	// register: 12
	register unsigned long *pAddr;
	// register: 8
	// size: 0x7C
	register struct _108fake *pEsp;
	// register: 10
	register unsigned long wk;
	// register: 14
	register unsigned long b_wk;
	// register: 5
	register unsigned long cnt;
	// register: 14
	register unsigned long id;
	// register: 13
	register unsigned long tp;
	// register: 24
	register unsigned long nseq;
	// register: 11
	register unsigned long nmvgp;
}


// address: 0x8001C8E8
// line start: 618
// line end:   763
unsigned char Esp_call3D2(unsigned long bit, unsigned long dir_y_id2, struct _0fake *pmat, struct _2fake *svec, struct _2fake *dsv) {
	// register: 9
	register unsigned short *pU16;
	// register: 4
	register unsigned long *pAddr2;
	// register: 12
	register unsigned long *pAddr;
	// register: 8
	// size: 0x7C
	register struct _108fake *pEsp;
	// register: 10
	register unsigned long wk;
	// register: 14
	register unsigned long b_wk;
	// register: 5
	register unsigned long cnt;
	// register: 14
	register unsigned long id;
	// register: 13
	register unsigned long tp;
	// register: 24
	register unsigned long nseq;
	// register: 11
	register unsigned long nmvgp;
}


// address: 0x8001CC40
// line start: 775
// line end:   914
unsigned char Esp_call2(unsigned long bit, unsigned long dir_y_id2, struct _0fake *pmat, struct _2fake *svec) {
	// register: 9
	register unsigned short *pU16;
	// register: 4
	register unsigned long *pAddr2;
	// register: 12
	register unsigned long *pAddr;
	// register: 8
	// size: 0x7C
	register struct _108fake *pEsp;
	// register: 10
	register unsigned long wk;
	// register: 14
	register unsigned long b_wk;
	// register: 5
	register unsigned long cont;
	// register: 14
	register unsigned long id;
	// register: 13
	register unsigned long tp;
	// register: 15
	register unsigned long nseq;
	// register: 11
	register unsigned long nmvgp;
}


// address: 0x8001CF64
// line start: 926
// line end:   1065
unsigned char Esp_call3(unsigned long bit, short dir_y, struct _0fake *pmat, struct _2fake *svec) {
	// register: 9
	register unsigned short *pU16;
	// register: 4
	register unsigned long *pAddr2;
	// register: 12
	register unsigned long *pAddr;
	// register: 8
	// size: 0x7C
	register struct _108fake *pEsp;
	// register: 10
	register unsigned long wk;
	// register: 14
	register unsigned long b_wk;
	// register: 5
	register unsigned long cont;
	// register: 14
	register unsigned long id;
	// register: 13
	register unsigned long tp;
	// register: 15
	register unsigned long nseq;
	// register: 11
	register unsigned long nmvgp;
}


// address: 0x8001D278
// line start: 1077
// line end:   1106
unsigned char Esp_kill(unsigned char id, unsigned char tp, struct _0fake *pmat) {
	// register: 7
	register unsigned long wk_no;
}


// address: 0x8001D338
// line start: 1118
// line end:   1131
unsigned char Esp_kill2(unsigned long id2) {
	// register: 5
	// size: 0x7C
	register struct _108fake *pEsp;
	// register: 6
	// size: 0x7C
	register struct _108fake *pEsp_end;
}


// address: 0x8001D378
// line start: 1143
// line end:   1170
void Esp_die() {
	// register: 3
	register unsigned long flg;
	// register: 5
	// size: 0x7C
	register struct _108fake *pEsp;
	// register: 6
	// size: 0x7C
	register struct _108fake *pEsp_end;
}


// address: 0x8001D3F8
// line start: 1182
// line end:   1210
unsigned char Esp_ctrl(unsigned char id, unsigned char tp, unsigned short rtn, struct _0fake *pmat) {
	// register: 8
	register unsigned long wk_no;
}


// address: 0x8001D4A8
// line start: 1222
// line end:   1223
unsigned char Esp_ctrl2(unsigned short wk_no, unsigned short rtn);

// address: 0x8001D4CC
// line start: 1237
// line end:   1267
unsigned char Esp_ctrl3(unsigned char id, unsigned char tp, unsigned short magx, unsigned short sinx, struct _0fake *pmat) {
	// register: 8
	register unsigned long wk_no;
}


// address: 0x8001D58C
// line start: 1279
// line end:   1309
unsigned char Esp_ctrl4(unsigned char id, unsigned char tp, unsigned short magy, unsigned short siny, struct _0fake *pmat) {
	// register: 8
	register unsigned long wk_no;
}


// address: 0x8001D64C
// line start: 1322
// line end:   1439
void Esp_move() {
	// register: 4
	// size: 0x8
	register struct _104fake *pAnm;
	// register: 16
	// size: 0x7C
	register struct _108fake *pEsp_st;
	// register: 18
	// size: 0x7C
	register struct _108fake *pEsp_ed;
}


// address: 0x8001DD00
// line start: 1452
// line end:   1526
void Esp_pos() {
	// register: 4
	// size: 0x8
	register struct _104fake *pAnm;
}


// address: 0x8001E27C
// line start: 36
// line end:   38
void dummy();

// address: 0x8001E284
// line start: 48
// line end:   58
void Esp_01() {
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x8001E380
// line start: 69
// line end:   79
void Esp_02() {
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x8001E4DC
// line start: 87
// line end:   95
void Esp_03();

// address: 0x8001E5A4
// line start: 104
// line end:   111
void Esp_04();

// address: 0x8001E5E4
// line start: 119
// line end:   154
void Esp_05() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
	// register: 16
	register long ground;
	{
	}
}


// address: 0x8001E754
// line start: 162
// line end:   169
void Esp_06();

// address: 0x8001E78C
// line start: 177
// line end:   194
void Esp_07() {
	// register: 4
	register unsigned long bits;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake vec;
	{
		{
		}
	}
}


// address: 0x8001E838
// line start: 202
// line end:   215
void Esp_08() {
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x8001E9C8
// line start: 223
// line end:   225
void Esp_09();

// address: 0x8001E9FC
// line start: 235
// line end:   244
void Esp_0a() {
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x8001EAC4
// line start: 252
// line end:   259
void Esp_0b();

// address: 0x8001EC48
// line start: 269
// line end:   311
void Esp_0c() {
	// register: 4
	// size: 0x7C
	register struct _104fake *pEsp;
}


// address: 0x8001EEA8
// line start: 319
// line end:   321
void Esp_0d();

// address: 0x8001EEC0
// line start: 331
// line end:   425
void Esp_0e() {
	// register: 18
	register unsigned long dirud;
	// register: 20
	register unsigned long dir_y;
	// register: 19
	register long pos_y;
	// register: 16
	register unsigned long kyori;
	// register: 16
	register unsigned long kosuu;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake tsvec;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake tvec;
	// register: 17
	// size: 0x7C
	register struct _104fake *pEsp;
	// register: 17
	// size: 0x244
	register struct _74fake *pEnem;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _105fake Aw;
	{
		{
		}
	}
}


// address: 0x8001F3A0
// line start: 433
// line end:   494
void Esp_0f() {
	// register: 19
	register long ground;
	// register: 16
	register long attack;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake tvec;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _105fake Aw;
}


// address: 0x8001F658
// line start: 502
// line end:   511
void Esp_10() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
}


// address: 0x8001F6C8
// line start: 519
// line end:   532
void Esp_11() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
}


// address: 0x8001F718
// line start: 540
// line end:   541
void Esp_12();

// address: 0x8001F738
// line start: 551
// line end:   588
void Esp_13() {
	{
		{
		}
	}
}


// address: 0x8001F978
// line start: 596
// line end:   616
void Esp_14() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
}


// address: 0x8001FA0C
// line start: 624
// line end:   634
void Esp_15();

// address: 0x8001FA9C
// line start: 642
// line end:   644
void Esp_16();

// address: 0x8001FAD8
// line start: 654
// line end:   656
void Esp_17();

// address: 0x8001FB14
// line start: 666
// line end:   675
void Esp_18() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _105fake Aw;
}


// address: 0x8001FBA0
// line start: 683
// line end:   719
void Esp_19() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	// register: 16
	register long ground;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _105fake Aw;
}


// address: 0x8001FD18
// line start: 727
// line end:   729
void Esp_1a();

// address: 0x8001FD48
// line start: 739
// line end:   772
void Esp_1b() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x8001FE7C
// line start: 780
// line end:   810
void Esp_1c() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
	// register: 16
	register long ground;
}


// address: 0x8002000C
// line start: 818
// line end:   848
void Esp_1d() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
}


// address: 0x800201D0
// line start: 856
// line end:   866
void Esp_1e() {
	{
		{
		}
	}
}


// address: 0x8002029C
// line start: 874
// line end:   897
void Esp_1f() {
}


// address: 0x800203B4
// line start: 905
// line end:   929
void Esp_20() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	// register: 2
	// size: 0x244
	register struct _74fake *pAem;
}


// address: 0x80020528
// line start: 937
// line end:   952
void Esp_21() {
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
	{
	}
}


// address: 0x800205F4
// line start: 960
// line end:   976
void Esp_22() {
	{
	}
}


// address: 0x80020788
// line start: 984
// line end:   985
void Esp_23();

// address: 0x800207A0
// line start: 995
// line end:   1004
void Esp_24() {
}


// address: 0x800208F0
// line start: 1012
// line end:   1022
void Esp_25() {
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x80020970
// line start: 1030
// line end:   1031
void Esp_26();

// address: 0x8002098C
// line start: 1041
// line end:   1044
void Esp_27();

// address: 0x800209E8
// line start: 1054
// line end:   1062
void Esp_28() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _105fake Aw;
}


// address: 0x80020A74
// line start: 1070
// line end:   1076
void Esp_29() {
}


// address: 0x80020B48
// line start: 1084
// line end:   1089
void Esp_2a() {
}


// address: 0x80020BE0
// line start: 1097
// line end:   1107
void Esp_2b() {
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x80020C5C
// line start: 1115
// line end:   1130
void Esp_2c() {
	// register: 4
	register unsigned long bits;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake vec;
}


// address: 0x80020D54
// line start: 1138
// line end:   1151
void Esp_2d() {
	// register: 4
	register unsigned long bits;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake vec;
}


// address: 0x80020E00
// line start: 1159
// line end:   1169
void Esp_2e() {
}


// address: 0x80020EE4
// line start: 1177
// line end:   1235
void Esp_2f() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _105fake Aw;
	{
	}
}


// address: 0x800211F4
// line start: 1243
// line end:   1300
void Esp_30() {
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake tvec;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _105fake Aw;
	{
		{
		}
	}
}


// address: 0x800217FC
// line start: 1307
// line end:   1370
void Esp_31() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _105fake Aw;
	{
	}
}


// address: 0x80021B90
// line start: 1378
// line end:   1381
void Esp_32();

// address: 0x80021BD4
// line start: 1391
// line end:   1395
void Esp_33();

// address: 0x80021C38
// line start: 1405
// line end:   1420
void Esp_34() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
}


// address: 0x80021CF0
// line start: 1428
// line end:   1460
void Esp_35() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
	// register: 16
	register long ground;
	{
	}
}


// address: 0x80021E84
// line start: 1468
// line end:   1471
void Esp_36();

// address: 0x80021EC4
// line start: 1481
// line end:   1491
void Esp_37();

// address: 0x80021FB4
// line start: 1499
// line end:   1544
void Esp_38() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
	// register: 16
	register long ground;
	// register: 2
	// size: 0x244
	register struct _74fake *pAem;
	{
	}
}


// address: 0x80022234
// line start: 1552
// line end:   1584
void Esp_39() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	// register: 4
	register long ground;
	{
	}
}


// address: 0x800223E8
// line start: 1592
// line end:   1622
void Esp_3a() {
	{
	}
}


// address: 0x800225D4
// line start: 1630
// line end:   1635
void Esp_3b() {
}


// address: 0x80022630
// line start: 1643
// line end:   1644
void Esp_3c();

// address: 0x80022650
// line start: 1654
// line end:   1667
void Esp_3d() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _105fake Aw;
	{
		{
		}
	}
}


// address: 0x8002270C
// line start: 1675
// line end:   1717
void Esp_3e() {
	// register: 17
	register unsigned long kosuu;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake tsvec;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	// register: 16
	// size: 0x7C
	register struct _104fake *pEsp;
	{
		{
		}
	}
}


// address: 0x80022888
// line start: 1725
// line end:   1735
void Esp_3f() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
}


// address: 0x80022904
// line start: 1743
// line end:   1747
void Esp_40();

// address: 0x80022950
// line start: 1757
// line end:   1775
void Esp_41() {
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
	{
		{
		}
	}
}


// address: 0x80022AB4
// line start: 1783
// line end:   1796
void Esp_42();

// address: 0x80022BC0
// line start: 1804
// line end:   1815
void Esp_43() {
	// register: 3
	register long ground;
}


// address: 0x80022C98
// line start: 1823
// line end:   1837
void Esp_44() {
	// register: 3
	register long ground;
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x80022D54
// line start: 1845
// line end:   1868
void Esp_45() {
	// register: 18
	register unsigned char type;
	{
	}
}


// address: 0x8002309C
// line start: 1876
// line end:   1931
void Esp_46() {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake tvec;
	// register: 3
	register long ground;
	// register: 16
	register long ck;
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _105fake Aw;
	{
	}
}


// address: 0x80023420
// line start: 1939
// line end:   2000
void Esp_47() {
	// register: 17
	register long flg;
	// register: 16
	register long cnt0;
	// register: 4
	register long ground;
	// register: 16
	register long water;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake tvec;
	// register: 18
	// size: 0x7C
	register struct _104fake *pEsp;
	{
	}
}


// address: 0x8002361C
// line start: 2008
// line end:   2019
void Esp_48() {
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x8002375C
// line start: 2027
// line end:   2035
void Esp_49();

// address: 0x800237C4
// line start: 2043
// line end:   2054
void Esp_4a() {
	// register: 16
	register unsigned long cnt0;
	{
	}
}


// address: 0x800238A4
// line start: 2062
// line end:   2108
void Esp_4b() {
	// register: 5
	register long ground;
	// register: 2
	// size: 0x7C
	register struct _104fake *pEsp;
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
}


// address: 0x80023B38
// line start: 2116
// line end:   2131
void Esp_4c() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tvec;
	// register: 2
	// size: 0x244
	register struct _74fake *pAem;
	{
	}
}


// address: 0x80023BE4
// line start: 2139
// line end:   2157
void Esp_4d() {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake svec;
	// register: 16
	register unsigned char type;
}


// address: 0x8002413C
// line start: 2165
// line end:   2172
void Esp_4e();

// address: 0x800242C0
// line start: 2182
// line end:   2196
void Esp_4f() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake tvec;
	{
	}
}


// address: 0x8002438C
// line start: 2204
// line end:   2243
void Esp_50() {
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake tvec;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct _1fake tsvec;
	// register: 3
	// size: 0x8
	register struct _100fake *pAnm;
	{
	}
}


// address: 0x80024518
// line start: 2251
// line end:   2276
void Esp_51() {
	// register: 3
	// size: 0x7C
	register struct _104fake *pEsp;
}


// address: 0x80024648
// line start: 2284
// line end:   2329
void Esp_52() {
	// register: 16
	register unsigned char type;
	{
	}
}


// address: 0x800250E8
// line start: 2338
// line end:   2364
void Esp_53() {
	// register: 3
	register long ground;
}


// address: 0x80025178
// line start: 2372
// line end:   2376
void Esp_54();

// address: 0x800251D4
// line start: 2386
// line end:   2394
void Esp_55();

// address: 0x80025240
// line start: 2402
// line end:   2404
void Esp_56();

// address: 0x80025248
// line start: 2412
// line end:   2414
void Esp_57();

// address: 0x80025250
// line start: 2422
// line end:   2424
void Esp_58();

// address: 0x80025258
// line start: 2432
// line end:   2434
void Esp_59();

// address: 0x80025260
// line start: 2442
// line end:   2444
void Esp_5a();

// address: 0x80025268
// line start: 2452
// line end:   2454
void Esp_5b();

// address: 0x80025270
// line start: 2462
// line end:   2464
void Esp_5c();

// address: 0x80025278
// line start: 2472
// line end:   2474
void Esp_5d();

// address: 0x80025280
// line start: 2482
// line end:   2484
void Esp_5e();

// address: 0x80025288
// line start: 2492
// line end:   2494
void Esp_5f();

// address: 0x80025290
// line start: 114
// line end:   793
void Game_loop() {
	// register: 21
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0x800B66C0
	static int Stop_bak;
	// register: 22
	register unsigned short Time_cnt;
	{
		// address: 0x80025DE8
		bool trans;
		// address: 0x80026064
		bool loop_end;
		{
			{
				// address: 0x8002540C
				bool normal;
				// address: 0x800255D0
				bool first;
				{
					{
						{
							// address: 0x80025BC8
							bool move;
							{
								// register: 6
								register unsigned long Col;
								{
									{
										{
											{
												// register: 16
												// size: 0x244
												register struct _74fake *pEm;
												// register: 17
												// size: 0x244
												register struct _74fake **ppEm;
												// register: 2
												register long x;
												// register: 2
												register long z;
												// register: 18
												// size: 0x244
												register struct _74fake *pPl;
												// address: 0x80025CA4
												bool pl_move;
												{
													// address: 0x800B66C4
													// size: 0x10
													static struct _1fake V;
													{
														{
															{
																// register: 16
																// size: 0x244
																register struct _74fake *pEm;
																// register: 18
																// size: 0x244
																register struct _74fake **ppEm;
																{
																	// register: 17
																	// size: 0x68
																	register struct _61fake *pKage;
																	{
																		// address: 0x800B66D4
																		// size: 0x10
																		static struct _1fake Kpos;
																		// address: 0x800B66E4
																		// size: 0x8
																		static struct _2fake Kofs;
																		{
																			{
																				{
																					// register: 2
																					register unsigned long Flg;
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80026120
// line start: 804
// line end:   962
void Set_door() {
}


// address: 0x800264B8
// line start: 965
// line end:   1006
void Gun_light_set() {
	// register: 17
	// size: 0x28
	register struct _77fake *pLight;
}


// address: 0x800266CC
// line start: 1008
// line end:   1014
void Gun_light_reset() {
}


// address: 0x80026740
// line start: 40
// line end:   107
void Joint_trans2(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// register: 19
	register unsigned char i;
	// address: 0xFFFFFFB8
	// size: 0x10
	auto struct _1fake v;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
	{
	}
}


// address: 0x80026A14
// line start: 123
// line end:   303
void ko_joint_trans2(struct _74fake *pEm, struct _65fake *pP_ptr, unsigned long be_flg, struct _0fake *wm) {
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake m;
	// register: 6
	// size: 0x20
	register struct _0fake *owm;
	// register: 4
	// size: 0x20
	register struct _0fake *pm;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _1fake v;
	// register: 5
	// size: 0x10
	register struct _1fake *v1;
	// register: 30
	register unsigned long rgb;
	// address: 0xFFFFFFD0
	auto unsigned long Att;
	// register: 2
	register unsigned char *c0;
	// register: 4
	register unsigned char *c1;
	// register: 3
	register unsigned char *c2;
	// register: 20
	// size: 0x28
	register struct _29fake *p3;
	// register: 21
	// size: 0x34
	register struct _30fake *p4;
	// register: 22
	// size: 0x1C
	register struct _98fake *tmd;
	// register: 23
	// size: 0x1C
	register struct _98fake *tmd2;
	// register: 2
	// size: 0xAC
	register struct _65fake *pO;
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


// address: 0x800271B8
// line start: 316
// line end:   422
void SortGT3_neo(struct _98fake *pT_head, struct _29fake *bp, unsigned long Cv, unsigned long D0) {
	// register: 6
	// size: 0x8
	register struct _2fake *sp;
	// register: 8
	register short *p_prim;
	// register: 13
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 4
	// size: 0x8
	register struct _2fake *s0;
	// register: 9
	// size: 0x8
	register struct _2fake *s1;
	// register: 7
	// size: 0x8
	register struct _2fake *s2;
	// register: 12
	// size: 0x8
	register struct _2fake *s3;
	// address: 0xFFFFFFF8
	auto long D2;
	// address: 0x80027220
	bool Loop0;
	// address: 0x80027228
	bool Loop1;
}


// address: 0x80027388
// line start: 435
// line end:   547
void SortGT4_neo(struct _98fake *pT_head, struct _30fake *bp, unsigned long Cv, unsigned long D0) {
	// register: 10
	// size: 0x8
	register struct _2fake *sp;
	// register: 8
	register short *p_prim;
	// register: 5
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// address: 0xFFFFFFF8
	auto long D2;
	// register: 6
	// size: 0x8
	register struct _2fake *s0;
	// register: 11
	// size: 0x8
	register struct _2fake *s1;
	// register: 7
	// size: 0x8
	register struct _2fake *s2;
	// register: 14
	// size: 0x8
	register struct _2fake *s3;
	// address: 0x800273F4
	bool Loop0;
	// address: 0x800273FC
	bool Loop1;
}


// address: 0x800275BC
// line start: 561
// line end:   654
void ko_joint_trans3(struct _74fake *pEm, struct _65fake *pP_ptr, unsigned long be_flg, struct _0fake *wm) {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake m;
	// register: 4
	// size: 0x20
	register struct _0fake *owm;
	// register: 5
	// size: 0x20
	register struct _0fake *pm;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake v;
	// register: 2
	// size: 0x10
	register struct _1fake *v1;
	// register: 3
	register unsigned char *c0;
	// register: 5
	register unsigned char *c1;
	// register: 4
	register unsigned char *c2;
	// register: 2
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x800278F8
// line start: 665
// line end:   668
unsigned long PartsWork_set(struct _74fake *pEm, unsigned long work_top);

// address: 0x8002793C
// line start: 684
// line end:   789
unsigned long PartsWork_link(struct _74fake *pEm, unsigned long Packet_top, unsigned long *pKan_t_ptr, unsigned long Flg) {
	// register: 20
	register unsigned long parts_num;
	// address: 0xFFFFFFB8
	auto unsigned long joi_num;
	// address: 0xFFFFFFC0
	auto unsigned long parts_no;
	// address: 0xFFFFFFC8
	auto unsigned long *ko_link_ptr;
	// register: 22
	register unsigned long *link_ptr;
	// register: 5
	register unsigned long i;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 30
	// size: 0xAC
	register struct _65fake *oya;
	// register: 21
	// size: 0x1C
	register struct _98fake *t_head;
	// address: 0xFFFFFF38
	// size: 0x74
	auto struct _60fake mw;
	// address: 0xFFFFFFD0
	auto short *data_ptr;
	// register: 6
	register unsigned char *kodata;
	{
	}
}


// address: 0x80027C1C
// line start: 800
// line end:   863
void Init_Parts_work(struct _74fake *pEm) {
	// register: 8
	register unsigned long parts_num;
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF88
	// size: 0x74
	auto struct _60fake mw;
	// register: 9
	register short *data_ptr;
}


// address: 0x80027D68
// line start: 874
// line end:   894
unsigned long Mem_ck_Parts_work(struct _74fake *pEm) {
	// register: 8
	register unsigned long parts_num;
	// register: 6
	register unsigned long Mem;
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80027DD8
// line start: 905
// line end:   931
void Joint_pos_trans(struct _74fake *pEm) {
	// register: 18
	register unsigned char i;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake v;
}


// address: 0x80027E8C
// line start: 935
// line end:   1033
void Parts_down(struct _65fake *pP_ptr, struct _0fake *wm) {
	// address: 0xFFFFFF60
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct _2fake Sv;
	// register: 19
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFF88
	// size: 0x20
	auto struct _0fake M0;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto struct _0fake M1;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M2;
	// register: 16
	register long Ground;
	{
		{
		}
	}
}


// address: 0x80028160
// line start: 1037
// line end:   1068
void Parts_bomb(struct _65fake *pP_ptr) {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv1;
}


// address: 0x80028254
// line start: 1072
// line end:   1112
void Parts_ryu(struct _65fake *pP_ptr);

// address: 0x800282F8
// line start: 1119
// line end:   1159
void HMatrix(struct _0fake *pM0, struct _0fake *pM1, struct _0fake *pM2, unsigned long Late) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv0;
}


// address: 0x800284D0
// line start: 1163
// line end:   1222
void HMatrix1(struct _0fake *pM0, struct _0fake *pM1, struct _0fake *pM2, unsigned long Late) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
}


// address: 0x800287BC
// line start: 1226
// line end:   1265
void Model_color_plus(struct _60fake *pMw, unsigned long Pluscolor_1, unsigned long Pluscolor_2) {
	// register: 3
	// size: 0x28
	register struct _29fake *pGt3;
	// register: 3
	// size: 0x34
	register struct _30fake *pGt4;
	// register: 10
	register unsigned long i;
}


// address: 0x8002894C
// line start: 1280
// line end:   1311
unsigned long Joint_move(struct _74fake *pEm, unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long Late_flg) {
	// register: 6
	register unsigned long *seq_ptr;
	// register: 6
	register unsigned long f_num;
}


// address: 0x800289F0
// line start: 1324
// line end:   1497
unsigned long J_seq(unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long *pSeq_ptr, unsigned long Late_flg) {
	// register: 6
	register unsigned long *data_ptr;
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr1;
	// register: 7
	register unsigned long i;
	// register: 19
	register unsigned long j;
	// register: 11
	register unsigned long hokan;
	// address: 0xFFFFFF88
	// size: 0x10
	auto struct _1fake TV0;
	// register: 20
	register long Pos_y;
	// register: 7
	register unsigned long ck;
	// register: 3
	register unsigned long ck1;
	// register: 5
	register unsigned long ck2;
	// register: 23
	register unsigned long f_num;
	// register: 21
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake M0;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M1;
}


// address: 0x80028FBC
// line start: 1827
// line end:   1972
unsigned long J_seq_hokan(unsigned long kan_t_ptr, unsigned long seq_t_ptr, unsigned long r_flg, short late) {
	// register: 11
	register unsigned long *data_ptr;
	// register: 15
	register unsigned long no;
	// register: 14
	register unsigned long *bdata;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 24
	register unsigned char i;
	// register: 9
	register unsigned long *seq_ptr;
	// register: 10
	register unsigned long *seq_ptr2;
	// register: 17
	register unsigned long f_num;
	// register: 7
	register unsigned long hokan_late;
	// register: 6
	register unsigned long *bseq;
	// register: 4
	register short f_cnt;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake r;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake q;
	// register: 5
	register long Pos_y;
}


// address: 0x80029420
// line start: 1976
// line end:   2069
void rot_data_set02(unsigned long i, struct _65fake *pP_ptr, unsigned long *data_ptr, unsigned long hokan_late) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake w_sv;
}


// address: 0x8002985C
// line start: 2074
// line end:   2187
void rot_data_set03(unsigned long i, struct _65fake *pP_ptr, unsigned long *data_ptr, unsigned long hokan_late, int late) {
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake w_sv;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake w_sv1;
	// address: 0xFFFFFFD0
	auto unsigned char hokan;
}


// address: 0x80029D88
// line start: 2202
// line end:   2233
void hokan_svec(struct _2fake *sv0, struct _2fake *sv1, struct _2fake *sv2, unsigned long late) {
	// register: 10
	register unsigned long ck;
	// register: 3
	register unsigned long ck1;
	// register: 5
	register unsigned long ck2;
}


// address: 0x80029EAC
// line start: 2243
// line end:   2290
void Pl_set_packet2() {
	// register: 17
	register unsigned long Parts_num;
	// register: 8
	register unsigned long Packet;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 19
	register unsigned long *pWep_tmd;
	// register: 20
	register unsigned long *pWep_tmd2;
	// register: 21
	register unsigned long *pWep_packet;
	// register: 22
	register unsigned long *pWep_packet2;
	{
	}
}


// address: 0x80029FF4
// line start: 2292
// line end:   2332
void Pl_set_packet() {
	// register: 19
	register unsigned long Parts_num;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 20
	register unsigned long *pWep_tmd;
	// register: 21
	register unsigned long *pWep_tmd2;
	// register: 22
	register unsigned long *pWep_packet;
	// register: 23
	register unsigned long *pWep_packet2;
	{
	}
}


// address: 0x8002A108
// line start: 2347
// line end:   2561
unsigned long Joint_move_p(struct _100fake *pJp, unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long Late_flg) {
	// register: 16
	register unsigned long *data_ptr;
	// register: 22
	// size: 0xAC
	register struct _65fake *pP_ptr1;
	// register: 19
	register unsigned long i;
	// register: 23
	register unsigned long j;
	// address: 0xFFFFFFB8
	auto unsigned long hokan;
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct _1fake TV0;
	// address: 0xFFFFFFC0
	auto long Pos_y;
	// register: 7
	register unsigned long ck;
	// register: 3
	register unsigned long ck1;
	// register: 5
	register unsigned long ck2;
	// address: 0xFFFFFFC8
	auto unsigned long f_num;
	// register: 3
	// size: 0x244
	register struct _74fake *pEm;
	// register: 2
	register unsigned long *pSeq_ptr;
	// register: 8
	register unsigned long k;
	// register: 20
	register unsigned long Jp_flg;
}


// address: 0x8002A788
// line start: 2576
// line end:   2598
unsigned long Joint_move2(struct _74fake *pEm, unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long Late_flg) {
	// register: 6
	register unsigned long *seq_ptr;
	// register: 6
	register unsigned long f_num;
}


// address: 0x8002A800
// line start: 2611
// line end:   2754
unsigned long J_seq2(unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long *pSeq_ptr, unsigned long Late_flg) {
	// register: 6
	register unsigned long *data_ptr;
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr1;
	// register: 7
	register unsigned long i;
	// register: 19
	register unsigned long j;
	// register: 11
	register unsigned long hokan;
	// address: 0xFFFFFF90
	// size: 0x10
	auto struct _1fake TV0;
	// register: 21
	register long Pos_y;
	// register: 22
	register unsigned long f_num;
	// register: 20
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake M0;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M1;
}


// address: 0x8002ACB0
// line start: 125
// line end:   138
void Scr_effect();

// address: 0x8002AD14
// line start: 147
// line end:   179
void Scr_quake(unsigned long Amp) {
	// register: 16
	register long i;
	// register: 18
	register long D0;
	// register: 17
	register long D1;
	// register: 3
	register long D2;
	// register: 19
	register long Ofs;
}


// address: 0x8002AE2C
// line start: 190
// line end:   262
void Scr_rasta(unsigned long Amp_x, unsigned long Amp_y) {
	// register: 16
	register long i;
	// register: 17
	register long D0;
	// register: 18
	register long Ofs;
	// address: 0x80093918
	static long sinpuku;
	// address: 0x8009391C
	static long hacho;
	// address: 0x80093920
	static long speed;
	// address: 0x80093924
	static long mode;
}


// address: 0x8002AF3C
// line start: 274
// line end:   315
void line_trans(long Line_no, long Slide_ofs, long Copy_ofs, long Draw_ofs) {
	// register: 16
	// size: 0x18
	register struct _48fake *pMove;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _16fake Rect;
	// register: 9
	register unsigned long D0;
	// register: 3
	register unsigned long Id;
	// register: 4
	register long D1;
	// register: 18
	// size: 0x2D18
	register struct _101fake *pLine;
}


// address: 0x8002B084
// line start: 325
// line end:   326
void line_scr_end();

// address: 0x8002B0B8
// line start: 337
// line end:   361
void line_mode_set(unsigned long Ot_no, unsigned long Prio) {
	// register: 7
	register unsigned long *pOt;
	// register: 4
	register unsigned long *pNull;
	// register: 8
	// size: 0x2D18
	register struct _101fake *pLine;
	// register: 3
	// size: 0x8728
	register struct _97fake *pG;
	// register: 6
	register unsigned long Id;
}


// address: 0x8002B170
// line start: 370
// line end:   372
void Line_work_init();

// address: 0x8002B188
// line start: 105
// line end:   422
void main() {
	// register: 17
	// size: 0x25C
	register struct _100fake *pMain;
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	{
		// address: 0x8002B3D4
		bool soft_reset;
		// address: 0x8002B4E0
		bool normal;
		// address: 0x8002B800
		bool no_swap;
		{
			{
				// address: 0xFFFFFFE0
				// size: 0x8
				auto struct _16fake rect;
				{
					// address: 0x800939EC
					static unsigned char Stop_mode;
					// address: 0x800939ED
					static unsigned char Koma_cnt;
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


// address: 0x8002B870
// line start: 433
// line end:   556
void Init_system() {
	// register: 16
	// size: 0x25C
	register struct _100fake *pMain;
	// register: 6
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0xFFFFFFD8
	// size: 0x18
	auto struct _119fake Cd;
}


// address: 0x8002BA6C
// line start: 568
// line end:   570
void InitGeom_func();

// address: 0x8002BA94
// line start: 582
// line end:   661
void Init_main() {
	// register: 21
	register int i;
	// register: 18
	register int j;
}


// address: 0x8002BCA4
// line start: 672
// line end:   855
void Swap_Cbuff() {
	// register: 17
	// size: 0x25C
	register struct _100fake *pMain;
	// register: 18
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0x8002C050
	bool movie_draw;
	// address: 0x8002C094
	bool no_draw;
	{
		// register: 16
		register unsigned long *pAdr;
		// register: 21
		register unsigned long *pAdr2;
		// address: 0x800939F0
		static long Scrl_h;
		// address: 0x800939F4
		static long Scrl_ofs_y;
		// address: 0x800939F8
		// size: 0x8
		static struct _16fake Rect;
		// address: 0x80093A00
		static long Scrl_flg;
	}
}


// address: 0x8002C0DC
// line start: 869
// line end:   889
void Bg_set_mode(unsigned long Mode, unsigned long Rgb) {
	// register: 4
	register unsigned long i;
}


// address: 0x8002C128
// line start: 920
// line end:   1066
void Bg_draw() {
	// register: 18
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0x80093A04
	// size: 0x8
	static struct _16fake Rect;
	// register: 16
	register long i;
	// register: 16
	register unsigned char *pBuf;
	// register: 17
	// size: 0x4
	register unsigned short (*pBsize)[16];
	// address: 0x8002C2A8
	bool tim_desld;
	// address: 0x8002C370
	bool redraw;
	{
		{
			{
				// register: 16
				register unsigned short Tpage_clut;
				{
				}
			}
		}
	}
}


// address: 0x8002C494
// line start: 1084
// line end:   1101
void Fade_set(unsigned short A0, short Add, unsigned long Mask, unsigned long Pri) {
	// register: 16
	// size: 0x44
	register struct _98fake *pF;
}


// address: 0x8002C58C
// line start: 1119
// line end:   1148
void Fade_start(unsigned long No, unsigned long Kido, unsigned long Rgb, struct _16fake *Rect) {
}


// address: 0x8002C594
// line start: 1151
// line end:   1167
void Fade_adjust(unsigned long No, unsigned long Kido, unsigned long Rgb, struct _16fake *Rect) {
	// register: 4
	// size: 0x44
	register struct _98fake *pF;
}


// address: 0x8002C634
// line start: 1178
// line end:   1179
void Fade_off(unsigned long No);

// address: 0x8002C658
// line start: 1193
// line end:   1194
unsigned long Fade_status(unsigned long No);

// address: 0x8002C678
// line start: 1208
// line end:   1265
void System_trans() {
	// register: 19
	register long i;
	// register: 4
	register unsigned long Rgb;
	// register: 16
	// size: 0x44
	register struct _98fake *pF;
	// register: 18
	// size: 0x8728
	register struct _97fake *pG;
}


// address: 0x8002C8E8
// line start: 1276
// line end:   1329
void Init_global() {
}


// address: 0x8002C9E0
// line start: 1352
// line end:   1376
unsigned long Cut_check(unsigned long Flg) {
	// register: 18
	// size: 0x8728
	register struct _97fake *pG;
	// register: 17
	// size: 0x14
	register struct _75fake *cp;
}


// address: 0x8002CAD8
// line start: 1387
// line end:   1389
void Cut_change(unsigned long Fc);

// address: 0x8002CB08
// size: 0x14
// line start: 1401
// line end:   1406
struct _75fake *Ccut_serach(unsigned long Fc) {
	// register: 3
	// size: 0x14
	register struct _75fake *pCcut;
}


// address: 0x8002CB4C
// line start: 1419
// line end:   1439
unsigned long Hit_ck_point4(struct _1fake *p, struct _75fake *cp) {
	// register: 4
	register long x;
	// register: 10
	register long y;
	// register: 11
	register long a;
	// register: 6
	register long b;
	// register: 7
	register long c;
	// register: 8
	register long d;
	// register: 12
	register long e;
	// register: 9
	register long f;
}


// address: 0x8002CC30
// line start: 1452
// line end:   1455
unsigned long Hit_ck_box(struct _1fake *p, struct _55fake *q);

// address: 0x8002CC78
// line start: 1482
// line end:   1499
void Card_event_set();

// address: 0x8002CDF0
// line start: 1569
// line end:   1621
void Logo() {
}


// address: 0x8002CE40
// line start: 33
// line end:   75
unsigned long PresetObjectGT3_neo(struct _60fake *pMw, unsigned long *G_packet, unsigned long Flg) {
	// register: 12
	register unsigned long *p;
	// register: 10
	register unsigned long Poly_num;
	// register: 11
	register unsigned long *pPrim_ptr;
	// register: 15
	register unsigned long Late;
	// address: 0x8002CEC0
	bool label;
	{
	}
}


// address: 0x8002CFA0
// line start: 87
// line end:   131
unsigned long PresetObjectGT4_neo(struct _60fake *pMw, unsigned long *G_packet, unsigned long Flg) {
	// register: 12
	register unsigned long *p;
	// register: 10
	register unsigned long Poly_num;
	// register: 11
	register unsigned long *pPrim_ptr;
	// register: 15
	register unsigned long Late;
	// address: 0x8002D028
	bool label;
	{
	}
}


// address: 0x8002D110
// line start: 145
// line end:   181
void CompM(struct _0fake *m0, struct _0fake *m1, struct _0fake *m2) {
	// register: 5
	register unsigned long *v;
	// register: 4
	register unsigned char *c0;
	// register: 3
	register unsigned char *c1;
	// register: 2
	register unsigned char *c2;
}


// address: 0x8002D254
// line start: 193
// line end:   209
void mapModelingData(unsigned long *pHead) {
	// register: 7
	register unsigned long nPoly;
	// register: 5
	register unsigned long *pT_head;
	// register: 6
	register unsigned long ad_head;
}


// address: 0x8002D2AC
// line start: 221
// line end:   238
void MulLMatrix(struct _0fake *lwm, struct _0fake *klwm, struct _0fake *nlm) {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake tmp;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake vec;
}


// address: 0x8002D364
// line start: 242
// line end:   322
void SortGT3_lno(struct _98fake *pT_head, struct _29fake *bp, unsigned long Cv, unsigned long D0) {
	// register: 10
	// size: 0x8
	register struct _2fake *sp;
	// register: 9
	register short *p_prim;
	// register: 12
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 11
	// size: 0x8
	register struct _2fake *s1;
	// register: 5
	// size: 0x8
	register struct _2fake *s2;
	// register: 7
	// size: 0x8
	register struct _2fake *s3;
	// address: 0xFFFFFFF8
	auto long D2;
	// address: 0x8002D3C4
	bool Loop0;
	// address: 0x8002D3CC
	bool Loop1;
}


// address: 0x8002D4C0
// line start: 336
// line end:   422
void SortGT4_lno(struct _98fake *pT_head, struct _30fake *bp, unsigned long Cv, unsigned long D0) {
	// register: 6
	// size: 0x8
	register struct _2fake *sp;
	// register: 9
	register short *p_prim;
	// register: 12
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// address: 0xFFFFFFF8
	auto long D2;
	// register: 3
	// size: 0x8
	register struct _2fake *s0;
	// register: 10
	// size: 0x8
	register struct _2fake *s1;
	// register: 5
	// size: 0x8
	register struct _2fake *s2;
	// register: 11
	// size: 0x8
	register struct _2fake *s3;
	// address: 0x8002D520
	bool Loop0;
	// address: 0x8002D528
	bool Loop1;
}


// address: 0x8002D644
// line start: 437
// line end:   549
void Bomb_Parts_SortGT3(struct _98fake *pT_head, struct _29fake *pPacket, struct _65fake *pP_ptr) {
	// register: 15
	// size: 0x28
	register struct _29fake *bp;
	// register: 24
	// size: 0x8
	register struct _2fake *sp;
	// register: 19
	// size: 0x8
	register struct _2fake *np;
	// register: 11
	register unsigned long *p_prim;
	// register: 21
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 8
	// size: 0x8
	register struct _2fake *s0;
	// register: 16
	// size: 0x8
	register struct _2fake *s1;
	// register: 7
	// size: 0x8
	register struct _2fake *s2;
	// register: 17
	// size: 0x8
	register struct _2fake *s3;
	// register: 9
	// size: 0x10
	register struct _1fake *v;
	// register: 25
	register unsigned long D0;
	// address: 0xFFFFFFD8
	auto long D2;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake bbm1;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake bbm0;
	// register: 7
	register unsigned long cnt0;
	// register: 10
	register unsigned long rgb;
	// register: 5
	register unsigned long Tb_no;
}


// address: 0x8002D990
// line start: 552
// line end:   668
void Bomb_Parts_SortGT4(struct _98fake *pT_head, struct _30fake *pPacket, struct _65fake *pP_ptr) {
	// register: 15
	// size: 0x34
	register struct _30fake *bp;
	// register: 11
	// size: 0x8
	register struct _2fake *sp;
	// register: 18
	// size: 0x8
	register struct _2fake *np;
	// register: 10
	register unsigned long *p_prim;
	// register: 20
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 24
	register unsigned long D0;
	// address: 0xFFFFFFE0
	auto long D2;
	// register: 3
	register long D3;
	// register: 7
	// size: 0x8
	register struct _2fake *s0;
	// register: 25
	// size: 0x8
	register struct _2fake *s1;
	// register: 4
	// size: 0x8
	register struct _2fake *s2;
	// register: 17
	// size: 0x8
	register struct _2fake *s3;
	// register: 9
	// size: 0x10
	register struct _1fake *v;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake bbm0;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake bbm1;
	// register: 3
	register long cnt0;
	// register: 8
	register unsigned long rgb;
	// register: 5
	register unsigned long Tb_no;
}


// address: 0x8002DCF8
// line start: 671
// line end:   788
void Ryu_Parts_SortGT3(struct _98fake *pT_head, struct _29fake *bp, struct _65fake *pP_ptr, unsigned long D0) {
	// register: 6
	// size: 0x8
	register struct _2fake *sp;
	// register: 7
	register short *p_prim;
	// register: 17
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 4
	// size: 0x8
	register struct _2fake *s0;
	// register: 10
	// size: 0x8
	register struct _2fake *s1;
	// register: 8
	// size: 0x8
	register struct _2fake *s2;
	// register: 9
	// size: 0x8
	register struct _2fake *s3;
	// address: 0xFFFFFFE8
	auto long D2;
	// address: 0xFFFFFFE4
	auto long D3;
	// address: 0xFFFFFFE0
	auto unsigned long rgb;
	// address: 0xFFFFFF90
	// size: 0x10
	auto struct _1fake vv;
	// register: 18
	// size: 0x10
	register struct _1fake *v;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake bbm0;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake bbm1;
	// register: 25
	register long Y;
	// register: 24
	register long T;
	// register: 16
	register long g;
	// address: 0x8002DDE4
	bool Loop0;
	// address: 0x8002DDEC
	bool Loop1;
}


// address: 0x8002E068
// line start: 791
// line end:   919
void Ryu_Parts_SortGT4(struct _98fake *pT_head, struct _30fake *bp, struct _65fake *pP_ptr, unsigned long D0) {
	// register: 8
	// size: 0x8
	register struct _2fake *sp;
	// register: 7
	register short *p_prim;
	// register: 18
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// address: 0xFFFFFFE0
	auto long D2;
	// address: 0xFFFFFFDC
	auto long D3;
	// register: 6
	// size: 0x8
	register struct _2fake *s0;
	// register: 10
	// size: 0x8
	register struct _2fake *s1;
	// register: 9
	// size: 0x8
	register struct _2fake *s2;
	// register: 11
	// size: 0x8
	register struct _2fake *s3;
	// address: 0xFFFFFFD8
	auto unsigned long rgb;
	// address: 0xFFFFFF88
	// size: 0x10
	auto struct _1fake vv;
	// register: 19
	// size: 0x10
	register struct _1fake *v;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake bbm0;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake bbm1;
	// register: 16
	register long Y;
	// register: 25
	register long T;
	// register: 17
	register long g;
	// address: 0x8002E158
	bool Loop0;
	// address: 0x8002E160
	bool Loop1;
}


// address: 0x8002E42C
// line start: 933
// line end:   951
void mirror_TMD_GT3(unsigned long *tmd_top) {
	// register: 7
	register unsigned long n;
	// register: 3
	register unsigned long tmp;
	// register: 6
	register unsigned long *p_v;
}


// address: 0x8002E474
// line start: 962
// line end:   982
void mirror_PACKET_GT3(unsigned long *tmd_top, struct _29fake *p_top) {
	// register: 6
	register unsigned long n;
	// register: 3
	register unsigned long tmp;
	// register: 5
	// size: 0x28
	register struct _29fake *gt3;
}


// address: 0x8002E4B8
// line start: 992
// line end:   1011
void mirror_TMD_GT4(unsigned long *tmd_top) {
	// register: 7
	register unsigned long n;
	// register: 3
	register unsigned long tmp;
	// register: 6
	register unsigned long *p_v;
}


// address: 0x8002E500
// line start: 1022
// line end:   1043
void mirror_PACKET_GT4(unsigned long *tmd_top, struct _30fake *p_top) {
	// register: 6
	register unsigned short n;
	// register: 4
	register unsigned short tmp;
	// register: 5
	// size: 0x34
	register struct _30fake *gt4;
}


// address: 0x8002E550
// line start: 1050
// line end:   1149
unsigned long Mirror_model_cp(struct _74fake *pEm, unsigned long Mem) {
	// register: 22
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 21
	// size: 0xAC
	register struct _65fake *pM_ptr;
	// register: 16
	// size: 0xAC
	register struct _65fake *pTmp;
	// register: 30
	register long parts_num;
	// register: 23
	register long i;
	// register: 16
	register long byte;
	// register: 16
	register long off0;
}


// address: 0x8002E770
// line start: 1165
// line end:   1185
unsigned long Init_mirror_weapon(struct _74fake *pEm, unsigned long Mem) {
}


// address: 0x8002E7C0
// line start: 1188
// line end:   1299
void Mirror_weapon_cp(struct _74fake *pEm) {
	// register: 18
	register long parts_num;
	// register: 20
	register long i;
	// register: 3
	register long Weapon_num;
	// register: 17
	register unsigned long byte;
	// register: 19
	register unsigned long off0;
	// register: 18
	register unsigned long Mem;
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 19
	// size: 0xAC
	register struct _65fake *pM_ptr;
}


// address: 0x8002EA00
// line start: 1309
// line end:   1363
void Parts_work_cp(struct _74fake *pEm) {
	// register: 10
	register unsigned long p_num;
	// register: 9
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 8
	// size: 0xAC
	register struct _65fake *pM_ptr;
}


// address: 0x8002EBB4
// line start: 1376
// line end:   1389
void Mirror_view(struct _76fake *pV0, struct _76fake *pV1, unsigned char flg, short mxz);

// address: 0x8002ECB8
// line start: 1410
// line end:   1437
unsigned char Mirror_in_view(struct _76fake *pV0, unsigned char flg, struct _1fake *pos) {
	// register: 2
	register unsigned long ck;
	// register: 2
	register unsigned long D5;
}


// address: 0x8002ED70
// line start: 1447
// line end:   1509
void Mirror_trans(struct _74fake *pEm) {
	// address: 0xFFFFFF90
	// size: 0x20
	auto struct _0fake m;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake T_Wsmatrix;
	// register: 17
	// size: 0xAC
	register struct _65fake *pTmp;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _76fake M_cut;
}


// address: 0x8002EED8
// line start: 1514
// line end:   1541
void Mirror_matrix_set() {
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake m;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake T_Wsmatrix;
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct _76fake M_cut;
}


// address: 0x8002F05C
// line start: 1553
// line end:   1582
void Late_set(struct _60fake *pMw, unsigned short Late) {
	// register: 3
	// size: 0x28
	register struct _29fake *gt3;
	// register: 8
	// size: 0x34
	register struct _30fake *gt4;
	// register: 7
	register unsigned long i;
	// register: 2
	register unsigned long *pT_head;
}


