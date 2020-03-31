// D:\Bio2\prog\ROOT_CK.C

#include "types.h"

// address: 0x80046E94
// line start: 41
// line end:   130
unsigned char Root_ck(struct _74fake *pEm, struct _1fake *Dest, unsigned char Dest_area, unsigned char Mode) {
	// register: 19
	register unsigned long P_area_no;
	// register: 5
	register unsigned long T_area_no;
	// register: 17
	register long T_x;
	// register: 18
	register long T_z;
	{
	}
}


// address: 0x800470DC
// line start: 141
// line end:   154
unsigned char Rnd_area() {
	// register: 16
	register unsigned long atari_ctr;
}


// address: 0x80047144
// line start: 165
// line end:   190
unsigned char Guide_check(short target_x, short target_z) {
	// register: 7
	register unsigned short atari_ctr;
	// register: 2
	register unsigned short atari_size;
	// register: 8
	register unsigned short *atari_ptr;
}


// address: 0x800471EC
// line start: 204
// line end:   536
void kara_rootck2(unsigned char hontai_area, unsigned char target_area, short target_x, short target_z) {
	// address: 0xFFFFFDC8
	// size: 0x20
	auto unsigned short tnari_st[16];
	// register: 21
	register unsigned short *tnari_pt;
	// address: 0xFFFFFDE8
	// size: 0x20
	auto unsigned short tuuka_st[16];
	// register: 13
	register unsigned short *tuuka_pt;
	// address: 0xFFFFFF58
	auto unsigned short target_bit;
	// address: 0xFFFFFE08
	// size: 0x20
	auto unsigned short ll_st[16];
	// register: 23
	register unsigned short *ll_pt;
	// address: 0xFFFFFE28
	// size: 0x44
	auto short poxz_st[34];
	// register: 12
	register short *poxz_pt;
	// register: 18
	register unsigned char area_no;
	// address: 0xFFFFFF60
	auto long D6;
	// register: 6
	register long D7;
	// register: 17
	register short D0;
	// register: 16
	register short D1;
	// address: 0xFFFFFE70
	// size: 0x10
	auto unsigned char root[16];
	// register: 22
	register unsigned char deep;
	// register: 14
	register short *pBlock;
	// address: 0xFFFFFE80
	// size: 0x10
	auto struct _1fake Tv;
	// address: 0xFFFFFE90
	// size: 0x10
	auto struct _1fake Tv0;
	// address: 0xFFFFFEA0
	// size: 0x10
	auto struct _1fake Tv1;
	// register: 7
	register long Min_x;
	// register: 6
	register long Min_z;
	// register: 4
	register long Max_x;
	// register: 5
	register long Max_z;
	// address: 0xFFFFFEB0
	// size: 0x10
	auto unsigned char Sflg[16];
	// register: 2
	register unsigned char flg;
	// register: 30
	register unsigned char *pSf;
	// address: 0xFFFFFF68
	auto unsigned char CkSf;
	// address: 0xFFFFFEC0
	// size: 0x80
	auto short MinMax[64];
	// register: 15
	register short *pMM;
	// address: 0xFFFFFF70
	auto long dest_x;
	// address: 0xFFFFFF78
	auto long dest_z;
	// address: 0xFFFFFF80
	auto long next_x;
	// address: 0xFFFFFF88
	auto long next_z;
	// address: 0xFFFFFF90
	// size: 0x244
	auto struct _74fake *pEm;
	// register: 3
	register long Ck;
	// register: 7
	register long Em_r_x;
	// register: 8
	register long Em_r_z;
}


