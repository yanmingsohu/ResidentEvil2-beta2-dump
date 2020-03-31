// D:\Bio2\prog\LINE_SCR.C

#include "types.h"

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

