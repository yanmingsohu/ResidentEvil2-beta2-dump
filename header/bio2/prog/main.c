// D:\Bio2\prog\MAIN.C

#include "types.h"

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


