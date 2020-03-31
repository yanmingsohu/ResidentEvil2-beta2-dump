// D:\Bio2\prog\PSP.C

#include "types.h"

// address: 0x80046134
// line start: 40
// line end:   45
void Psp_init0();

// address: 0x80046168
// line start: 59
// line end:   62
void Psp_init1();

// address: 0x800461B4
// line start: 76
// line end:   159
void Psp_set() {
	// register: 9
	// size: 0x4
	register struct _PSP *pSprite;
	// register: 8
	register unsigned char *pSpg;
	// register: 14
	register unsigned char *pSeq;
	// register: 7
	register unsigned long cnt;
	// register: 4
	register unsigned long xy;
	// register: 11
	register unsigned long uvc;
	// register: 5
	register unsigned long wh;
	// register: 15
	register unsigned long max;
	// register: 13
	register unsigned long nspgp;
}


// address: 0x80046340
// line start: 172
// line end:   226
void Psp_trans() {
	// register: 19
	register unsigned long nsp;
	// register: 16
	// size: 0xC
	register struct _44fake *mode;
	// register: 17
	// size: 0x14
	register struct _37fake *sprt;
	// register: 20
	// size: 0x4
	register struct _PSP *pSprite;
	// register: 22
	register unsigned long *Flg;
	{
	}
}


// address: 0x80046488
// line start: 240
// line end:   256
void Psp_ctr(unsigned char psp_id, unsigned char st) {
	// register: 6
	register unsigned long sp_out;
	// register: 7
	register unsigned long nsp;
	// register: 3
	// size: 0x4
	register struct _PSP *pSprite;
}


