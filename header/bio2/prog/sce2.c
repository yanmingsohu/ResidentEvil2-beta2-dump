// D:\Bio2\prog\SCE2.C

#include "types.h"

// address: 0x800523FC
// line start: 55
// line end:   104
unsigned long Se_on(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
	// register: 7
	register unsigned long D0;
	// register: 4
	register unsigned long D1;
	// register: 5
	register unsigned long D2;
	// register: 5
	register unsigned long Pos_x;
	// register: 6
	register unsigned long Pos_y;
	// register: 3
	register unsigned long Pos_z;
	// register: 3
	// size: 0x244
	register struct _74fake *pW;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Vec;
	// address: 0x800524C0
	bool step0;
}


// address: 0x80052530
// line start: 112
// line end:   130
unsigned long Sca_id_set(struct _102fake *pSce) {
	// register: 6
	register unsigned char *pData;
	// register: 2
	register unsigned long D0;
	// register: 2
	register unsigned long D1;
}


// address: 0x80052578
// line start: 138
// line end:   165
unsigned long Sce_espr_on(struct _102fake *pSce) {
	// register: 17
	register unsigned char *pData;
	// register: 16
	register unsigned long D0;
	// register: 5
	register long D1;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80052614
// line start: 173
// line end:   200
unsigned long Sce_espr_on2(struct _102fake *pSce) {
	// register: 17
	register unsigned char *pData;
	// register: 16
	register unsigned long D0;
	// register: 5
	register unsigned long D2;
	// register: 5
	register long D1;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x800526BC
// line start: 209
// line end:   239
unsigned long Sce_espr3d_on(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
	// register: 17
	register unsigned long D0;
	// register: 5
	register unsigned long D2;
	// register: 5
	register long D1;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec2;
}


// address: 0x8005277C
// line start: 247
// line end:   277
unsigned long Sce_espr3d_on2(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
	// register: 17
	register unsigned long D0;
	// register: 5
	register unsigned long D2;
	// register: 5
	register long D1;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec2;
}


// address: 0x80052848
// line start: 285
// line end:   298
unsigned long Sce_espr_kill(struct _102fake *pSce) {
}


// address: 0x800528AC
// line start: 307
// line end:   318
unsigned long Sce_espr_kill2(struct _102fake *pSce) {
}


// address: 0x800528F4
// line start: 326
// line end:   340
unsigned long Sce_espr_control(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
}


// address: 0x80052958
// size: 0x20
// line start: 344
// line end:   365
struct _0fake *Get_matrix(long Work_kind, long Work_no) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 6
	// size: 0x244
	register struct _74fake *pEm;
}


// address: 0x80052A8C
// line start: 373
// line end:   393
unsigned long Plc_motion(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 6
	register unsigned long D1;
	// register: 3
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x80052AD8
// line start: 401
// line end:   472
unsigned long Plc_dest(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEw;
	// register: 7
	register unsigned char *pData;
	// register: 6
	register unsigned long Type;
	// register: 3
	register unsigned long Id;
}


// address: 0x80052CC0
// line start: 480
// line end:   496
unsigned long Plc_gun(struct _102fake *pSce) {
	// register: 3
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x80052CF8
// line start: 503
// line end:   531
unsigned long Plc_gun_eff(struct _102fake *pSce) {
	// address: 0xFFFFFFF0
	// size: 0x10
	auto struct _1fake tvec;
}


// address: 0x80052D5C
// line start: 539
// line end:   610
unsigned long Plc_neck(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 10
	register unsigned long D1;
	// register: 7
	register long S0;
	// register: 8
	register long S1;
	// register: 9
	register long S2;
	// register: 5
	// size: 0x244
	register struct _74fake *pEw;
	// register: 11
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80052E9C
// line start: 617
// line end:   634
unsigned long Plc_ret(struct _102fake *pSce) {
	// register: 3
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x80052ED4
// line start: 641
// line end:   654
unsigned long Plc_stop(struct _102fake *pSce);

// address: 0x80052F1C
// line start: 663
// line end:   686
unsigned long Plc_flg(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 6
	register unsigned long D1;
}


// address: 0x80052FA0
// line start: 693
// line end:   708
unsigned long Plc_rot(struct _102fake *pSce);

// address: 0x80053004
// line start: 716
// line end:   723
unsigned long Plc_cnt(struct _102fake *pSce);

// address: 0x80053030
// line start: 735
// line end:   948
unsigned long Sce_em_set(struct _102fake *pSce) {
	// register: 20
	// size: 0x8728
	register struct _97fake *pG;
	// register: 6
	register long Em_no;
	// register: 19
	register unsigned long Mem_top;
	// register: 7
	register unsigned long Kind;
	// register: 16
	// size: 0x244
	register struct _74fake *pEm;
	// register: 17
	// size: 0x244
	register struct _74fake *pT;
	// register: 4
	register unsigned long *A0;
	// address: 0x80053600
	bool exit;
	{
		{
		}
	}
}


// address: 0x80053638
// line start: 955
// line end:   982
unsigned long Sce_key_ck(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
}


// address: 0x80053674
// line start: 989
// line end:   1016
unsigned long Sce_trg_ck(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
}


// address: 0x800536B0
// line start: 1023
// line end:   1034
unsigned long Sce_bgm_control(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
}


// address: 0x80053728
// line start: 1041
// line end:   1055
unsigned long Sce_bgmtbl_set(struct _102fake *pSce) {
	// register: 4
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 2
	register unsigned long D2;
}


// address: 0x80053780
// line start: 1063
// line end:   1089
unsigned long Sce_fade_set(struct _102fake *pSce) {
	// register: 17
	register unsigned char *pData;
	// register: 19
	register short Add;
	// register: 16
	register unsigned long No;
	// register: 3
	// size: 0x44
	register struct _98fake *pF;
}


// address: 0x80053844
// line start: 1096
// line end:   1108
unsigned long Sce_fade_adjust(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
}


// address: 0x80053894
// line start: 1115
// line end:   1129
unsigned long Xa_on(struct _102fake *pSce);

// address: 0x800538FC
// line start: 1137
// line end:   1148
unsigned long Xa_vol(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
}


// address: 0x80053938
// line start: 1157
// line end:   1171
unsigned long Se_vol(struct _102fake *pSce);

// address: 0x800539A8
// line start: 1179
// line end:   1202
unsigned long Weapon_chg(struct _102fake *pSce) {
	// register: 5
	register unsigned long Id;
	// register: 17
	// size: 0x244
	register struct _74fake *pEm;
}


// address: 0x80053A34
// line start: 1209
// line end:   1233
unsigned long Sce_shake_on(struct _102fake *pSce) {
	// register: 16
	register long i;
	// register: 20
	register long D0;
	// register: 19
	register long D1;
	// register: 18
	register long Ofs;
	{
	}
}


// address: 0x80053AE4
// line start: 1240
// line end:   1249
unsigned long Sce_line_start(struct _102fake *pSce) {
}


// address: 0x80053B30
// line start: 1257
// line end:   1275
unsigned long Sce_line_main(struct _102fake *pSce) {
}


// address: 0x80053B88
// line start: 1282
// line end:   1291
unsigned long Sce_line_end(struct _102fake *pSce) {
}


// address: 0x80053BC0
// line start: 1300
// line end:   1344
unsigned long Mizu_div_set(struct _102fake *pSce) {
	// register: 10
	register long i;
	// register: 9
	register long j;
	// register: 12
	register long Div_num;
	// register: 7
	// size: 0x34
	register struct _30fake *pPrim0;
}


// address: 0x80053DC0
// line start: 1351
// line end:   1364
unsigned long Keep_Item_ck(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
}


// address: 0x80053DF8
// line start: 1371
// line end:   1390
unsigned long Sce_Item_lost(struct _102fake *pSce) {
	// register: 2
	register long D0;
}


// address: 0x80053E74
// line start: 1397
// line end:   1429
unsigned long Sce_Item_get(struct _102fake *pSce) {
	// register: 16
	register unsigned long Id;
}


// address: 0x80053F54
// line start: 1436
// line end:   1472
unsigned long Kage_set(struct _102fake *pSce) {
	// register: 16
	// size: 0x68
	register struct _61fake *pKage;
	// register: 6
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
	// register: 2
	register unsigned long D2;
	{
		{
		}
	}
}


// address: 0x80054090
// line start: 1479
// line end:   1504
unsigned long Light_pos_set(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
	// register: 3
	register unsigned short *pPos_work;
}


// address: 0x80054148
// line start: 1511
// line end:   1525
unsigned long Light_kido_set(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
}


// address: 0x80054194
// line start: 1532
// line end:   1549
unsigned long Light_color_set(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
	// register: 3
	register unsigned char *pCol;
}


// address: 0x800541FC
// line start: 1556
// line end:   1581
unsigned long Light_pos_set2(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
	// register: 3
	register unsigned short *pPos_work;
}


// address: 0x800542B8
// line start: 1588
// line end:   1602
unsigned long Light_kido_set2(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
}


// address: 0x80054308
// line start: 1609
// line end:   1626
unsigned long Light_color_set2(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
	// register: 3
	register unsigned char *pCol;
}


// address: 0x80054374
// line start: 1635
// line end:   1643
unsigned long Sce_scr_move(struct _102fake *pSce);

// address: 0x800543A0
// line start: 1651
// line end:   1672
unsigned long Flr_set(struct _102fake *pSce) {
	// register: 5
	register unsigned short *A0;
	// register: 3
	register unsigned long D0;
}


// address: 0x80054420
// line start: 1679
// line end:   1688
unsigned long Movie_on(struct _102fake *pSce) {
}


// address: 0x80054468
// line start: 1694
// line end:   1727
unsigned long Splc_ret(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x800544D0
// line start: 1733
// line end:   1767
unsigned long Splc_sce(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x80054538
// line start: 1774
// line end:   1788
unsigned long Mirror_set(struct _102fake *pSce);

// address: 0x800545B8
// line start: 1797
// line end:   1822
unsigned long Sce_parts_bomb(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEm;
	// register: 7
	register unsigned char *pData;
	// register: 5
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80054670
// line start: 1829
// line end:   1855
unsigned long Sce_parts_down(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEm;
	// register: 6
	register unsigned char *pData;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80054720
// line start: 1863
// line end:   1894
unsigned long Col_chg_set(struct _102fake *pSce) {
	// register: 3
	// size: 0x4C
	register struct _126fake *pCcp;
	// register: 6
	register unsigned long D0;
	// register: 4
	register unsigned long i;
	// register: 4
	register unsigned char *pData;
	// address: 0x80054770
	bool step;
	// address: 0x800547AC
	bool end;
}


