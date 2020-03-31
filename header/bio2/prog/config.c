// D:\Bio2\prog\CONFIG.C

#include "types.h"

// address: 0x801C01AC
// line start: 341
// line end:   354
void Config() {
	{
	}
}


// address: 0x801C0250
// line start: 365
// line end:   369
void Config_main();

// address: 0x801C0278
// line start: 382
// line end:   391
void Config_fade_in_wait();

// address: 0x801C02BC
// line start: 402
// line end:   431
void Config_fade_out_set() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake rect;
}


// address: 0x801C03B0
// line start: 442
// line end:   474
void Config_fade_out_wait() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake rect;
}


// address: 0x801C04AC
// line start: 485
// line end:   599
void Config_init() {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _16fake rect0;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _16fake rect1;
	// address: 0xFFFFFFD8
	// size: 0x14
	auto struct _52fake tim_image;
	// register: 16
	// size: 0x14
	register struct _52fake *ptim;
}


// address: 0x801C06F0
// line start: 610
// line end:   691
void Config_exit() {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _16fake rect0;
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct _52fake tim_image;
}


// address: 0x801C08C0
// line start: 702
// line end:   716
void Config_padd_main();

// address: 0x801C0944
// line start: 727
// line end:   827
void Config_padd_opt();

// address: 0x801C0CEC
// line start: 837
// line end:   920
void Config_padd_con();

// address: 0x801C1058
// line start: 930
// line end:   1126
void Config_padd_snd();

// address: 0x801C1E58
// line start: 1136
// line end:   1180
void Config_padd_clr();

// address: 0x801C2038
// line start: 1190
// line end:   1216
void Config_padd_res();

// address: 0x801C20F4
// line start: 1226
// line end:   1272
void Config_move() {
	// register: 3
	register unsigned long cnt0;
	// register: 6
	register unsigned long r0;
}


// address: 0x801C22A0
// line start: 1282
// line end:   1403
void Config_main_trans() {
	// register: 2
	register unsigned char otz;
	// register: 7
	register unsigned short flg;
	// register: 19
	register short mw;
	// register: 18
	register short mh;
	// register: 21
	register short w;
	// register: 20
	register short h;
	// register: 23
	register short pos_x;
	// register: 6
	register short pos_y;
	// register: 8
	register unsigned long rgb_code;
	// register: 3
	register unsigned long cnt0;
	// register: 22
	register unsigned char *pChars;
	// register: 17
	// size: 0x4
	register struct _119fake *pCnf_char;
	// register: 9
	// size: 0x8
	register struct _121fake *pCnf_work;
	// register: 16
	// size: 0x28
	register struct _26fake *pPoly;
}


// address: 0x801C2678
// line start: 1414
// line end:   1463
void Config_suuji_trans() {
	// register: 20
	register short mw;
	// register: 19
	register short mh;
	// register: 22
	register short w;
	// register: 21
	register short h;
	// register: 23
	register unsigned long cnt0;
	// register: 18
	// size: 0x4
	register struct _119fake *pCnf_char;
	// register: 16
	// size: 0x28
	register struct _26fake *pPoly;
	// address: 0xFFFFFFB8
	// size: 0xC
	auto short pos_x[6];
	// address: 0xFFFFFFC8
	// size: 0xC
	auto short pos_y[6];
}


// address: 0x801C2874
// line start: 1474
// line end:   1490
void Config_lrgb() {
}


// address: 0x801C28CC
// line start: 1502
// line end:   1541
void Config_suuji(unsigned long id, unsigned long vol) {
	// register: 2
	register unsigned long r0;
}


