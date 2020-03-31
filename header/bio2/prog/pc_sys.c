// D:\Bio2\prog\PC_SYS.C

#include "types.h"

// address: 0x80037CA8
// line start: 424
// line end:   449
void Windows() {
	// address: 0x80037D18
	bool exit;
	{
		{
		}
	}
}


// address: 0x80037D3C
// line start: 469
// line end:   565
unsigned long Keyboard_Input(unsigned long Length, unsigned long Flg) {
	// register: 18
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 17
	register unsigned long i;
	// address: 0xFFFFFFE0
	auto unsigned long Mend;
	// address: 0x80037EB0
	bool exit;
}


// address: 0x80037FC0
// line start: 578
// line end:   597
void Keyboard_set(unsigned long Be_flg, unsigned long W, unsigned long H, unsigned long Col) {
	// register: 3
	// size: 0x53E0
	register struct _99fake *pCom;
}


// address: 0x80038018
// line start: 612
// line end:   704
unsigned long Keyboard() {
	// register: 16
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 17
	register unsigned long Key_flg;
	{
		{
		}
	}
}


// address: 0x80038348
// line start: 715
// line end:   752
unsigned long Wframe_in_out() {
	{
	}
}


// address: 0x800384A8
// line start: 765
// line end:   799
void Wframe_set(unsigned long X, unsigned long Y, unsigned long X2, unsigned long Y2) {
	// register: 18
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 2
	// size: 0x10
	register struct _31fake *pLine;
	// register: 17
	register long i;
}


// address: 0x800385BC
// line start: 812
// line end:   844
unsigned long Wframe_move(unsigned long X, unsigned long Y, unsigned long W, unsigned long H) {
	// register: 16
	// size: 0x53E0
	register struct _99fake *pCom;
}


// address: 0x80038700
// line start: 854
// line end:   855
unsigned long Get_moji_code(unsigned char Moji);

// address: 0x8003870C
// line start: 868
// line end:   955
unsigned long Cprint(unsigned long Speed, unsigned char *pMess, unsigned long *Mend) {
	// register: 2
	register unsigned char *pBuf;
	// register: 17
	register unsigned char Ret_flg;
	// register: 16
	// size: 0x53E0
	register struct _99fake *pCom;
	// address: 0x800389B0
	bool exit;
	{
	}
}


// address: 0x800389E0
// line start: 965
// line end:   969
void Console_put(unsigned char Moji) {
	// register: 5
	// size: 0x53E0
	register struct _99fake *pCom;
}


// address: 0x80038A18
// line start: 979
// line end:   994
void Console_roll_up() {
	// register: 16
	register unsigned long i;
	// register: 17
	// size: 0x53E0
	register struct _99fake *pCom;
	{
	}
}


// address: 0x80038ADC
// line start: 1004
// line end:   1022
void Console_clr() {
	// register: 5
	register unsigned long i;
	// register: 6
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 4
	register unsigned char *pCon;
	// register: 3
	register unsigned char *pCol;
}


// address: 0x80038B20
// line start: 1032
// line end:   1074
void Console_trans(unsigned long Be_flg) {
	// register: 7
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 9
	register unsigned char *pCon;
	// register: 8
	register unsigned char *pCol;
	// register: 2
	register unsigned short Uv;
}


// address: 0x80038C08
// line start: 1084
// line end:   1117
void Sprite_Trans(unsigned long nPacket) {
	// register: 19
	// size: 0x14
	register struct _37fake *pP;
	// register: 18
	// size: 0x10
	register struct _98fake *pSp;
	// register: 21
	// size: 0x10
	register struct _98fake *pSp_end;
	// register: 3
	// size: 0x53E0
	register struct _99fake *pCom;
}


// address: 0x80038D40
// line start: 1128
// line end:   1133
void Set_sp_work(struct _98fake *pSp, struct _98fake *pSw);

// address: 0x80038DA0
// line start: 1145
// line end:   1156
unsigned long Dr_mode_set() {
	// register: 19
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 18
	register unsigned long i;
}


