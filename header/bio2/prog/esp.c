// D:\Bio2\prog\ESP.C

#include "types.h"

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


