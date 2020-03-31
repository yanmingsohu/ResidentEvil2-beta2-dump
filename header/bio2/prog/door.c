// D:\Bio2\prog\DOOR.C

#include "types.h"

// address: 0x80014238
// line start: 171
// line end:   185
void Door_main() {
	// address: 0x80090D5C
	// size: 0x10
	static void (*pDoor_proc_tbl[4])();
}


// address: 0x80014290
// line start: 188
// line end:   275
void Door_init() {
	// register: 6
	register long Ctr;
	// register: 3
	register short *a0;
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct _87fake Camera;
	{
		{
		}
	}
}


// address: 0x80014548
// line start: 278
// line end:   368
void Door_move();

// address: 0x80014648
// line start: 381
// line end:   425
void Door_scheduler_main() {
	// register: 3
	register unsigned long D0;
	// register: 18
	register unsigned long Level;
	// register: 16
	// size: 0x174
	register struct _119fake *pSce;
	// address: 0x800146A8
	bool loop;
}


// address: 0x8001476C
// line start: 428
// line end:   439
void Door_exit();

// address: 0x800147FC
// line start: 443
// line end:   533
void Door_Trans() {
	// register: 16
	// size: 0x14C
	register struct _122fake *pCdwork;
	// register: 18
	register long Ctr;
	// register: 4
	// size: 0x20
	register struct _0fake *r1;
	// register: 5
	// size: 0x20
	register struct _0fake *r2;
	// register: 3
	// size: 0x20
	register struct _0fake *r3;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake Temp_matrix;
}


// address: 0x80014C54
// line start: 546
// line end:   708
void DoorSort(struct _71fake *mw, struct _122fake *pDoorwork, struct _113fake *Tmd) {
	// register: 16
	// size: 0x28
	register struct _29fake *bp;
	// register: 21
	// size: 0x8
	register struct _2fake *sp;
	// register: 30
	register short *p_prim;
	// register: 9
	// size: 0x8
	register struct _2fake *np;
	// register: 8
	register unsigned long D0;
	// address: 0xFFFFFFC4
	auto unsigned long D1;
	// register: 20
	register unsigned long *ot;
	// register: 3
	// size: 0x8
	register struct _2fake *s0;
	// register: 19
	// size: 0x8
	register struct _2fake *s1;
	// register: 17
	// size: 0x8
	register struct _2fake *s2;
	// register: 22
	// size: 0x8
	register struct _2fake *s3;
	// register: 10
	register unsigned long ff;
	// address: 0xFFFFFFC0
	auto long D2;
	// register: 3
	register unsigned long v_temp;
	{
	}
}


// address: 0x80015108
// line start: 711
// line end:   724
void Door_model_init(struct _122fake *pTmpDwork, unsigned long Model_no) {
	// register: 3
	register unsigned long *Tmd_adr;
}


// address: 0x8001516C
// line start: 742
// line end:   807
unsigned long Door_model_set(struct _119fake *pSce) {
	// register: 3
	register unsigned long D1;
	// register: 4
	// size: 0x14C
	register struct _122fake *A0;
	// register: 5
	register unsigned char *pData;
}


// address: 0x80015298
// line start: 819
// line end:   915
void Door_snd_trans() {
	// register: 18
	register short Bg_clr_sw;
	// register: 17
	register unsigned long Sound_size;
	// register: 19
	// size: 0xC
	register struct _124fake *pDoor_info;
	// register: 17
	register unsigned long Door_no;
	// register: 3
	register unsigned long Sector;
	// register: 4
	register unsigned long File_no;
	// register: 20
	// size: 0x880
	register struct tagCD *pCd;
}


// address: 0x800155A4
// line start: 926
// line end:   944
void Door_texture_load() {
	// register: 6
	register unsigned long Sector;
	// register: 4
	register unsigned long File_no;
	// register: 3
	// size: 0xC
	register struct _124fake *pDoor_info;
}


