// D:\Bio2\prog\TITLE.C

#include "types.h"

// address: 0x80190098
// line start: 110
// line end:   126
void Title() {
	// address: 0x80193310
	// size: 0xC
	static void (*Title_rtn_tbl[3])();
	{
	}
}


// address: 0x80190124
// line start: 132
// line end:   186
void Capcom_logo();

// address: 0x80190174
// line start: 189
// line end:   207
void Title_bg_load() {
}


// address: 0x801901DC
// line start: 209
// line end:   211
void Title_bg_reload() {
}


// address: 0x80190210
// line start: 216
// line end:   274
void Title_init();

// address: 0x80190304
// line start: 280
// line end:   296
void Title_main() {
	// address: 0x8019331C
	// size: 0x14
	static void (*Title_main_tbl[5])();
}


// address: 0x80190340
// line start: 301
// line end:   303
void Title_main_game() {
}


// address: 0x80190368
// line start: 310
// line end:   392
void Title_main_wait();

// address: 0x8019055C
// line start: 427
// line end:   524
void Title_main_select() {
	{
		{
			{
			}
		}
	}
}


// address: 0x8019082C
// line start: 526
// line end:   532
void Moji_Sel();

// address: 0x801908B0
// line start: 538
// line end:   652
void Title_sel_menu();

// address: 0x80190B3C
// line start: 658
// line end:   740
void Title_sel_mode() {
	// address: 0x801933B0
	static unsigned long Flg;
	// address: 0x801933B4
	static unsigned long Easy_flg;
}


// address: 0x80190F78
// line start: 745
// line end:   829
void Title_sel_sound() {
	// address: 0x801933B8
	static unsigned long Flg;
}


// address: 0x80191340
// line start: 834
// line end:   850
void Title_main_load() {
}


// address: 0x801913D8
// line start: 855
// line end:   865
void Title_main_option() {
}


// address: 0x80191448
// line start: 870
// line end:   881
void Title_main_information();

// address: 0x80191450
// line start: 906
// line end:   1051
void Title_info_sel() {
	// register: 18
	register long i;
	// register: 17
	register long j;
	// register: 17
	register long Rno;
	// register: 21
	register long Ofs_x;
	// register: 20
	register long Cnt;
	// register: 22
	register long Cursor;
	// register: 19
	register long Kettei_flg;
	{
	}
}


// address: 0x8019199C
// line start: 1061
// line end:   1226
void Title_game_init() {
	// register: 17
	// size: 0x8728
	register struct _108fake *pG;
}


// address: 0x80191CF0
// line start: 1230
// line end:   1246
void Init_tbl_load() {
	// register: 16
	// size: 0x8728
	register struct _108fake *pG;
	// address: 0xFFFFDD58
	// size: 0x229C
	auto char Init_tbl[1772][5];
	// register: 2
	register unsigned long No;
}


// address: 0x80191D8C
// line start: 1252
// line end:   1285
void Moji_set_work() {
	// register: 23
	register unsigned long i;
	// register: 20
	register unsigned long j;
	// register: 16
	// size: 0xC
	register struct _44fake *pDm;
}


// address: 0x80191F10
// line start: 1290
// line end:   1344
void Moji_SelectMode(unsigned long Mode, unsigned long No, unsigned long Dis, unsigned long Flg) {
	// register: 19
	register unsigned long i;
	// register: 5
	// size: 0x14
	register struct _37fake *pSp;
	// register: 23
	register unsigned long Cnt;
}


// address: 0x80192260
// line start: 1349
// line end:   1403
void Moji_Game_mode(unsigned long Mode) {
	// register: 18
	register unsigned long i;
	// register: 17
	register unsigned long j;
	// register: 5
	register unsigned long k;
	// register: 5
	// size: 0x14
	register struct _37fake *pSp;
}


// address: 0x8019260C
// line start: 1408
// line end:   1462
void Moji_Sound(unsigned long Mode) {
	// register: 18
	register unsigned long i;
	// register: 17
	register unsigned long j;
	// register: 5
	register unsigned long k;
	// register: 5
	// size: 0x14
	register struct _37fake *pSp;
}


// address: 0x801929B4
// line start: 1467
// line end:   1481
void Moji_PressAnyKey(unsigned long Kido) {
	// register: 16
	register unsigned long j;
}


// address: 0x80192A98
// line start: 1486
// line end:   1495
void Moji_License();

// address: 0x80192B24
// line start: 1503
// line end:   1516
void Moji_Sample();

// address: 0x80192BA8
// line start: 1871
// line end:   1933
void Pl_select() {
	// register: 16
	register long Cursor;
	// register: 17
	register long Timer;
	// register: 8
	register long Timer2;
	// register: 20
	register long Timer_flg;
	// address: 0xFFFFFFD8
	// size: 0x2
	auto unsigned char OnOff[2];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto unsigned char Use_flg[4];
	{
	}
}


