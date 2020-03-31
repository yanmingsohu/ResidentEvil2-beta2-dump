// D:\Bio2\prog\MOJIDISP.C

#include "types.h"

// address: 0x8002FBA8
// line start: 64
// line end:   65
long Print8(unsigned long x, unsigned long y, unsigned long c, unsigned long p, unsigned char *pPtr);

// address: 0x8002FBD0
// line start: 69
// line end:   70
long Print14(unsigned long x, unsigned long y, unsigned long c, unsigned long p, unsigned char *pPtr);

// address: 0x8002FBFC
// line start: 74
// line end:   223
long Print_main(unsigned long x, unsigned long y, unsigned long attr, unsigned char **pSave) {
	// register: 9
	register unsigned char *pBp;
	// register: 13
	register unsigned char *tp;
	// register: 11
	register unsigned char *pPtr;
	// register: 6
	register long i;
	// register: 3
	register long j;
	// register: 5
	register long Hikisu;
	// register: 15
	register long H_ctr;
	// register: 10
	register long Keta;
	// register: 8
	register long Loop_ctr;
	// register: 12
	register long pm;
	// register: 14
	register void *ap;
	// address: 0x80030044
	bool skip;
}


// address: 0x800300A4
// line start: 257
// line end:   357
long Mess_set(unsigned long Pos_xy, unsigned short Attr, unsigned long Mess_no, unsigned long Stop_data) {
	// register: 9
	// size: 0x3BB4
	register struct _108fake *pMoji;
	// register: 11
	// size: 0x8728
	register struct _97fake *pG;
}


// address: 0x800303C4
// line start: 380
// line end:   423
void Moji_trans_main() {
	// register: 16
	// size: 0x3BB4
	register struct _108fake *pMoji;
	{
		// register: 5
		register unsigned long D0;
		// register: 3
		register unsigned long D1;
		// register: 4
		register unsigned long D2;
	}
}


// address: 0x800304D8
// line start: 432
// line end:   661
void Mess_disp(struct _108fake *pMoji) {
	// register: 4
	register unsigned long Item_id;
	// register: 18
	register unsigned long Vloop_ck;
	// register: 16
	register unsigned char *pMess_end;
	// register: 19
	register unsigned long Loop_ctr;
	// register: 6
	register unsigned long D0;
	// address: 0x80030828
	bool mess_end_inc;
}


// address: 0x80030AA4
// line start: 666
// line end:   738
void Branch_disp(struct _108fake *pMoji, struct _109fake *pBtbl, unsigned long Flg, unsigned long Mode) {
	// register: 2
	register unsigned long D0;
	// register: 16
	register unsigned long i;
	// address: 0xFFFFFFA8
	auto unsigned long M_ofs;
	// register: 21
	register unsigned long Num;
	// register: 30
	register unsigned long Skip;
	// address: 0xFFFFFFB0
	auto unsigned long Pos_x;
	// address: 0xFFFFFFB8
	auto unsigned long Pos_y;
	// register: 20
	register unsigned long Sel_no;
	{
		{
			{
			}
		}
	}
}


// address: 0x80030DB8
// line start: 747
// line end:   759
unsigned char *name_ptr_set(unsigned char Item_id) {
	// register: 2
	register unsigned char *name_ptr;
	// register: 16
	register unsigned long item_at;
}


// address: 0x80030E50
// line start: 768
// line end:   900
void mess_trans(struct _108fake *pMoji) {
	// register: 16
	register unsigned char *pMp;
	// address: 0xFFFFFFC0
	auto unsigned char *pMp_keep;
	// register: 4
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 20
	register unsigned long Size;
	// register: 30
	register unsigned long Attr;
	// address: 0xFFFFFFC8
	auto unsigned long Clt;
	// register: 4
	register unsigned long Prio;
	// register: 19
	register unsigned long Pos_xy;
	// register: 5
	register unsigned long *pOt;
	// register: 22
	// size: 0x14
	register struct _37fake *pP;
	// address: 0xFFFFFFD0
	// size: 0x14
	auto struct _37fake *pP_limit;
	// register: 23
	// size: 0xC
	register struct _44fake *pDr_mode;
	// address: 0x800310C8
	bool moji_touroku;
	// address: 0x800311CC
	bool pointer_next;
	// address: 0x800311E4
	bool message_exit;
}


// address: 0x80031224
// line start: 917
// line end:   999
void Name_disp(long Pos_x, long Pos_y, unsigned long Attr, unsigned long Item_id) {
	// register: 16
	register unsigned char *Name_ptr;
	// register: 4
	register unsigned long *pOt;
	// register: 22
	register unsigned long *pOt_keep0;
	// register: 30
	register unsigned long *pOt_keep1;
	// address: 0xFFFFFFC0
	auto unsigned long Clt;
	// register: 8
	register unsigned long Prio;
	// register: 3
	register unsigned long D0;
	// register: 21
	register unsigned long Size;
	// register: 19
	// size: 0x14
	register struct _37fake *pP;
	// address: 0xFFFFFFC8
	// size: 0x14
	auto struct _37fake *pP_limit;
	// address: 0x800314DC
	bool p_inc;
	// address: 0x800314F4
	bool name_disp_exit;
}


// address: 0x80031530
// line start: 1015
// line end:   1106
void Mess_print(unsigned long Pos_x, unsigned long Pos_y, unsigned char *pMess, unsigned long Attr) {
	// register: 6
	register unsigned long *pOt;
	// register: 24
	register unsigned long *pOt_keep0;
	// register: 25
	register unsigned long *pOt_keep1;
	// register: 3
	register unsigned long D0;
	// register: 13
	register unsigned long Size;
	// register: 17
	register unsigned long Clt;
	// register: 11
	// size: 0x14
	register struct _37fake *pP;
	// register: 18
	// size: 0x14
	register struct _37fake *pP_limit;
	// address: 0x800317F4
	bool moji_next;
	// address: 0x8003180C
	bool name_disp_exit;
}


// address: 0x80031834
// line start: 1115
// line end:   1135
void moji_trans_main(struct _108fake *pMoji) {
	// register: 5
	register long Pos;
	// register: 4
	register unsigned char *pBuff0;
	// register: 17
	register unsigned char *pBuff1;
}


// address: 0x800318C0
// line start: 1145
// line end:   1195
unsigned char *moji_trans_8(unsigned char *pBuff0, unsigned long Pos, struct _108fake *pMoji) {
	// register: 2
	register long i;
	// register: 6
	register unsigned long *pOld_prim;
	// register: 5
	register unsigned long Moji_back;
	// register: 4
	register unsigned long Clt;
	// register: 11
	register unsigned long Keep_tag;
	// register: 4
	register unsigned long D0;
	// register: 10
	// size: 0x10
	register struct _39fake *pP;
	// register: 13
	// size: 0x10
	register struct _39fake *pP_limit;
}


// address: 0x80031A30
// line start: 1205
// line end:   1279
unsigned char *moji_trans_14(unsigned char *pBuff0, unsigned long Pos, struct _108fake *pMoji) {
	// register: 4
	register long i;
	// register: 3
	register long D0;
	// register: 10
	register long Size;
	// register: 8
	register unsigned long *pOld_prim;
	// register: 5
	register unsigned long Moji_back;
	// register: 25
	register unsigned long Clt;
	// register: 16
	register unsigned long Keep_tag;
	// register: 13
	register unsigned long Prop;
	// register: 4
	register unsigned long D1;
	// register: 12
	// size: 0x14
	register struct _37fake *pP;
	// register: 14
	// size: 0x14
	register struct _37fake *pP_limit;
}


// address: 0x80031C50
// line start: 1288
// line end:   1296
void Moji_buff_init() {
	// register: 3
	register unsigned long *pBuff1;
	// register: 2
	register long i;
}


// address: 0x80031C80
// line start: 1305
// line end:   1343
void Moji_init() {
	// register: 17
	register long i;
	// register: 16
	// size: 0xC
	register struct _44fake *pDr_mode;
	// register: 2
	register unsigned long *pP0;
	// register: 3
	register unsigned long *pP1;
	// register: 4
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
}


// address: 0x80031D7C
// line start: 1353
// line end:   1371
void Moji_mode_init() {
	// register: 18
	register unsigned long i;
	// register: 17
	// size: 0xC
	register struct _44fake *pDr_mode;
	// register: 16
	register unsigned long *pOt;
}


