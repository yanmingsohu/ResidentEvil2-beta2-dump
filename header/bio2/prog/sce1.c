// D:\Bio2\prog\SCE1.C

#include "types.h"

// address: 0x8004FA14
// line start: 92
// line end:   97
unsigned long Break_point(struct _102fake *pSce);

// address: 0x8004FA2C
// line start: 105
// line end:   110
unsigned long Nop(struct _102fake *pSce);

// address: 0x8004FA44
// line start: 115
// line end:   136
unsigned long Evt_end(struct _102fake *pSce) {
	// register: 6
	register unsigned long Sub_ctr;
	// register: 5
	register unsigned char *D0;
	// register: 3
	register unsigned long *D1;
}


// address: 0x8004FAA8
// line start: 140
// line end:   146
unsigned long Evt_next(struct _102fake *pSce);

// address: 0x8004FAC0
// line start: 151
// line end:   157
unsigned long Evt_chain(struct _102fake *pSce);

// address: 0x8004FAEC
// line start: 162
// line end:   175
unsigned long Evt_exec(struct _102fake *pSce) {
	// register: 3
	register unsigned long Task_level;
	// register: 5
	register unsigned long Evt_no;
}


// address: 0x8004FB24
// line start: 179
// line end:   186
unsigned long Evt_kill(struct _102fake *pSce);

// address: 0x8004FB6C
// line start: 191
// line end:   208
unsigned long Ifel_ck(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
}


// address: 0x8004FBAC
// line start: 212
// line end:   220
unsigned long Else_ck(struct _102fake *pSce);

// address: 0x8004FBE8
// line start: 225
// line end:   233
unsigned long Endif(struct _102fake *pSce);

// address: 0x8004FC24
// line start: 238
// line end:   251
unsigned long Sleep(struct _102fake *pSce) {
	// register: 3
	register unsigned long Sub_ctr;
}


// address: 0x8004FC6C
// line start: 255
// line end:   271
unsigned long Sleeping(struct _102fake *pSce) {
	// register: 3
	register unsigned long Sub_ctr;
}


// address: 0x8004FCD4
// line start: 275
// line end:   282
unsigned long Wsleep(struct _102fake *pSce);

// address: 0x8004FD08
// line start: 287
// line end:   299
unsigned long Wsleeping(struct _102fake *pSce);

// address: 0x8004FD64
// line start: 304
// line end:   331
unsigned long For(struct _102fake *pSce) {
	// register: 10
	register unsigned long D0;
	// register: 11
	register unsigned long Sub_ctr;
	// register: 6
	register unsigned long Loop_ctr;
	// register: 8
	register unsigned char *pData;
}


// address: 0x8004FE1C
// line start: 335
// line end:   361
unsigned long For2(struct _102fake *pSce) {
	// register: 10
	register unsigned long D0;
	// register: 11
	register unsigned long Sub_ctr;
	// register: 6
	register unsigned long Loop_ctr;
	// register: 8
	register unsigned char *pData;
}


// address: 0x8004FF04
// line start: 366
// line end:   385
unsigned long Next(struct _102fake *pSce) {
	// register: 7
	register unsigned long D0;
	// register: 5
	register unsigned long Sub_ctr;
}


// address: 0x8004FF84
// line start: 389
// line end:   416
unsigned long While(struct _102fake *pSce) {
	// register: 7
	register unsigned long D0;
	// register: 6
	register unsigned long Loop_ctr;
	// register: 4
	register unsigned long Sub_ctr;
	// register: 5
	register unsigned char *pData;
}


// address: 0x80050054
// line start: 420
// line end:   432
unsigned long Ewhile(struct _102fake *pSce) {
	// register: 5
	register unsigned long Sub_ctr;
}


// address: 0x80050098
// line start: 436
// line end:   458
unsigned long Do(struct _102fake *pSce) {
	// register: 10
	register unsigned long D0;
	// register: 7
	register unsigned long Sub_ctr;
	// register: 8
	register unsigned long Loop_ctr;
	// register: 6
	register unsigned char *pData;
}


// address: 0x8005010C
// line start: 462
// line end:   483
unsigned long Edwhile(struct _102fake *pSce) {
	// register: 17
	register unsigned long Sub_ctr;
}


// address: 0x80050198
// line start: 488
// line end:   511
unsigned long While_main(struct _102fake *pSce, unsigned char *pData, unsigned char Ofs) {
	// register: 17
	register unsigned long D0;
	// register: 16
	register unsigned long D1;
	// register: 2
	register unsigned long D2;
	// register: 19
	register unsigned char *pCk_end;
}


// address: 0x80050268
// line start: 515
// line end:   571
unsigned long Switch(struct _102fake *pSce) {
	// register: 8
	register unsigned long D0;
	// register: 2
	register unsigned long D1;
	// register: 3
	register unsigned long D2;
	// register: 6
	register unsigned long Work_no;
	// register: 10
	register unsigned long Sub_ctr;
	// register: 4
	register unsigned long Loop_ctr;
	// register: 7
	register unsigned char *pData;
}


// address: 0x80050340
// line start: 575
// line end:   581
unsigned long Case(struct _102fake *pSce);

// address: 0x80050358
// line start: 586
// line end:   592
unsigned long Default(struct _102fake *pSce);

// address: 0x80050370
// line start: 597
// line end:   604
unsigned long Eswitch(struct _102fake *pSce);

// address: 0x800503A4
// line start: 609
// line end:   634
unsigned long Goto(struct _102fake *pSce) {
	// register: 3
	register long D0;
	// register: 7
	register long D1;
	// register: 8
	register long D2;
	// register: 2
	register unsigned long Sub_ctr;
	// register: 5
	register unsigned char *pData;
}


// address: 0x800503F0
// line start: 638
// line end:   665
unsigned long Gosub(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 5
	register unsigned long Sub_ctr;
	// register: 3
	register unsigned char *pData;
}


// address: 0x80050458
// line start: 669
// line end:   682
unsigned long Return(struct _102fake *pSce) {
	// register: 3
	register unsigned long Sub_ctr;
}


// address: 0x800504B0
// line start: 686
// line end:   701
unsigned long Break(struct _102fake *pSce) {
	// register: 2
	register unsigned long Sub_ctr;
	// register: 6
	register unsigned long Loop_ctr;
}


// address: 0x800504FC
// line start: 707
// line end:   730
unsigned long Work_copy(struct _102fake *pSce) {
	// register: 3
	register long D0;
	// register: 6
	register long D1;
	// register: 2
	register long D2;
	// register: 5
	register unsigned char *pData;
}


// address: 0x80050558
// line start: 734
// line end:   746
unsigned long Rbj_reset(struct _102fake *pSce) {
}


// address: 0x8005059C
// line start: 750
// line end:   772
unsigned long Ck(struct _102fake *pSce) {
	// register: 3
	register long D0;
	// register: 5
	register long D1;
	// register: 2
	register long D2;
	// register: 3
	register unsigned long *pFlg;
}


// address: 0x800505FC
// line start: 776
// line end:   810
unsigned long Set(struct _102fake *pSce) {
	// register: 3
	register long D0;
	// register: 5
	register long D1;
	// register: 6
	register long D2;
	// register: 5
	register long D3;
	// register: 7
	register unsigned long *pFlg;
	// register: 4
	register unsigned long Bit;
}


// address: 0x800506BC
// line start: 814
// line end:   853
unsigned long Cmp(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 5
	register long D1;
	// register: 4
	register long D2;
}


// address: 0x80050764
// line start: 856
// line end:   872
unsigned long Save(struct _102fake *pSce) {
	// register: 5
	register long D0;
}


// address: 0x80050794
// line start: 876
// line end:   893
unsigned long Copy(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
}


// address: 0x800507D4
// line start: 897
// line end:   914
unsigned long Calc(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 6
	register long D1;
}


// address: 0x80050820
// line start: 918
// line end:   936
unsigned long Calc2(struct _102fake *pSce) {
	// register: 7
	register long D0;
	// register: 5
	register long D1;
	// register: 6
	register long D2;
}


// address: 0x8005087C
// line start: 940
// line end:   955
void Calc_branch(unsigned long Exp, short *Ans, long Num);

// address: 0x800509A8
// line start: 962
// line end:   969
unsigned long Sce_rnd(struct _102fake *pSce);

// address: 0x800509D4
// line start: 977
// line end:   991
unsigned long Cut_chg(struct _102fake *pSce) {
	// register: 16
	register unsigned long D0;
}


// address: 0x80050A50
// line start: 998
// line end:   1007
unsigned long Cut_old(struct _102fake *pSce);

// address: 0x80050AB0
// line start: 1011
// line end:   1015
void Cut_chg_main(unsigned long Cut_no);

// address: 0x80050AF4
// line start: 1022
// line end:   1033
unsigned long Cut_auto(struct _102fake *pSce);

// address: 0x80050B5C
// line start: 1041
// line end:   1076
unsigned long Cut_replace(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 7
	register unsigned long D1;
	// register: 8
	// size: 0x14
	register struct _75fake *pCcut;
}


// address: 0x80050C40
// line start: 1083
// line end:   1101
unsigned long Cut_be_set(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 5
	// size: 0x14
	register struct _75fake *pCcut;
}


// address: 0x80050CB8
// line start: 1109
// line end:   1122
unsigned long Message_on(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
	// register: 7
	register unsigned long D2;
}


// address: 0x80050CFC
// line start: 1129
// line end:   1145
unsigned long Aot_set(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
}


// address: 0x80050D68
// line start: 1149
// line end:   1167
unsigned long Aot_set_4p(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
}


// address: 0x80050DEC
// line start: 1174
// line end:   1190
unsigned long Door_aot_set(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
}


// address: 0x80050E58
// line start: 1194
// line end:   1212
unsigned long Door_aot_set_4p(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
}


// address: 0x80050EDC
// line start: 1219
// line end:   1260
unsigned long Item_aot_set(struct _102fake *pSce) {
	// register: 17
	register unsigned long D0;
	// register: 5
	register unsigned long Flg_no;
	// register: 18
	register unsigned long Om_no;
	// register: 4
	register unsigned long *A0;
	// register: 16
	register unsigned char *pData;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80051008
// line start: 1264
// line end:   1304
unsigned long Item_aot_set_4p(struct _102fake *pSce) {
	// register: 17
	register unsigned long D0;
	// register: 5
	register unsigned long Flg_no;
	// register: 18
	register unsigned long Om_no;
	// register: 4
	register unsigned long *A0;
	// register: 16
	register unsigned char *pData;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80051140
// line start: 1311
// line end:   1344
unsigned long Aot_reset(struct _102fake *pSce) {
	// register: 7
	register unsigned long D0;
	// register: 2
	register unsigned long D1;
	// register: 3
	register unsigned long D2;
	// register: 5
	register short *A0;
	// register: 5
	// size: 0xC
	register struct _82fake *pAot;
	// register: 6
	register char *pData;
}


// address: 0x800511B4
// line start: 1355
// line end:   1377
unsigned long Aot_on(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
	// register: 4
	register short *A0;
	// register: 3
	// size: 0xC
	register struct _82fake *pAot;
}


// address: 0x8005124C
// line start: 1384
// line end:   1510
unsigned long Obj_model_set(struct _102fake *pSce) {
	// register: 17
	// size: 0x1F8
	register struct _71fake *A0;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 9
	register unsigned long D0;
	// register: 8
	register unsigned long D1;
	// register: 5
	register unsigned long *pTmd;
	// register: 18
	register unsigned char *pData;
	// register: 5
	register long S0;
	// register: 6
	register long S1;
	// register: 7
	register long S2;
	// register: 2
	register long S3;
	// register: 2
	// size: 0x4C
	register struct _113fake *pCcp;
}


// address: 0x80051534
// line start: 1518
// line end:   1575
unsigned long Super_set(struct _102fake *pSce) {
	// register: 4
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 6
	// size: 0x244
	register struct _74fake *A0;
	// register: 4
	// size: 0x244
	register struct _74fake *A1;
	// register: 7
	register unsigned char *pData;
	// register: 8
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	register long S0;
	// register: 3
	register long S1;
	// register: 4
	register long S2;
}


// address: 0x800516A8
// line start: 1583
// line end:   1653
unsigned long Super_on(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 2
	register long S0;
	// register: 3
	register long S1;
	// register: 6
	register long S2;
	// register: 18
	// size: 0x244
	register struct _74fake *A0;
	// register: 19
	register unsigned char *pData;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake Workm;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake Workm2;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec2;
}


// address: 0x800518D8
// line start: 1659
// line end:   1686
unsigned long Super_reset(struct _102fake *pSce) {
	// register: 2
	// size: 0x244
	register struct _74fake *A0;
	// register: 5
	register char *pData;
	// register: 3
	register long S0;
	// register: 6
	register long S1;
	// register: 7
	register long S2;
}


// address: 0x8005192C
// line start: 1694
// line end:   1733
unsigned long Work_set(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 5
	register long D1;
}


// address: 0x800519F8
// line start: 1741
// line end:   1770
unsigned long Parts_set(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
	// register: 4
	register unsigned long D2;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP;
	// register: 4
	register char *pData;
}


// address: 0x80051AAC
// line start: 1778
// line end:   1792
unsigned long Speed_set(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
}


// address: 0x80051AD8
// line start: 1798
// line end:   1821
unsigned long Add_speed(struct _102fake *pSce) {
	// register: 3
	register unsigned long S0;
	// register: 6
	register unsigned long S1;
	// register: 7
	register unsigned long S2;
	// register: 5
	// size: 0x244
	register struct _74fake *A0;
}


// address: 0x80051B54
// line start: 1827
// line end:   1841
unsigned long Add_aspeed(struct _102fake *pSce);

// address: 0x80051BC8
// line start: 1850
// line end:   1869
unsigned long Pos_set(struct _102fake *pSce) {
	// register: 5
	register long S0;
	// register: 6
	register long S1;
	// register: 7
	register long S2;
	// register: 2
	register char *pData;
	// register: 3
	// size: 0x244
	register struct _74fake *pW;
}


// address: 0x80051BF8
// line start: 1877
// line end:   1896
unsigned long Dir_set(struct _102fake *pSce) {
	// register: 2
	register char *pData;
	// register: 3
	// size: 0x244
	register struct _74fake *pW;
	// register: 5
	register long S0;
	// register: 6
	register long S1;
	// register: 7
	register long S2;
}


// address: 0x80051C28
// line start: 1904
// line end:   1911
unsigned long Member_set(struct _102fake *pSce);

// address: 0x80051C78
// line start: 1920
// line end:   1927
unsigned long Member_set2(struct _102fake *pSce);

// address: 0x80051CD8
// line start: 1932
// line end:   1975
void Member_set_branch(struct _74fake *pW, unsigned long Member, long D0);

// address: 0x80051E48
// line start: 1984
// line end:   2000
unsigned long Member_copy(struct _102fake *pSce) {
	// register: 16
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
	// register: 2
	register char *pData;
}


// address: 0x80051E9C
// line start: 2009
// line end:   2048
unsigned long Member_cmp(struct _102fake *pSce) {
	// register: 16
	register long D0;
	// register: 17
	register long D1;
	// register: 3
	register long D2;
	// register: 2
	register char *pData;
}


// address: 0x80051F60
// line start: 2052
// line end:   2096
long Load_member_branch(struct _74fake *pW, unsigned long Member);

// address: 0x80052174
// line start: 2104
// line end:   2118
unsigned long Member_calc(struct _102fake *pSce) {
	// register: 17
	register long D0;
	// register: 18
	register long D1;
}


// address: 0x800521E0
// line start: 2126
// line end:   2142
unsigned long Member_calc2(struct _102fake *pSce) {
}


// address: 0x80052250
// line start: 2147
// line end:   2191
short *Load_member_addr_branch(struct _74fake *pW, unsigned long Member);

// address: 0x800523BC
// line start: 2198
// line end:   2210
unsigned long Dir_ck(struct _102fake *pSce) {
}


