// D:\Bio2\prog\CD.C

#include "types.h"

// address: 0x80012540
// line start: 51
// line end:   89
void Cd_init() {
	// address: 0x8008E777
	static unsigned char cdmode;
	// register: 16
	// size: 0x880
	register struct tagCD *pCd;
	// register: 3
	register unsigned long i;
}


// address: 0x800125F8
// line start: 102
// line end:   120
void Cd_system_control() {
	// address: 0x800B66A0
	static unsigned long Xa_bak;
}


// address: 0x80012628
// line start: 133
// line end:   195
void Xa_play(unsigned long mode, unsigned long no) {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto unsigned short Xa_file[8];
	// register: 17
	// size: 0x880
	register struct tagCD *pCd;
	// register: 3
	register unsigned long file_no;
	// register: 7
	register unsigned short *pwd;
}


// address: 0x800127A4
// line start: 208
// line end:   234
void Xa_control() {
	// address: 0x8008E778
	// size: 0x10
	static void (*xa_control_tbl[4])();
}


// address: 0x8001280C
// line start: 242
// line end:   247
void Xa_control_stop();

// address: 0x80012840
// line start: 256
// line end:   275
void Xa_control_init() {
	// address: 0x8008E788
	static unsigned char cdmode;
}


// address: 0x8001292C
// line start: 283
// line end:   296
void Xa_control_play();

// address: 0x800129B0
// line start: 305
// line end:   311
void Xa_control_end();

// address: 0x80012A24
// line start: 332
// line end:   417
unsigned long Cd_read(unsigned long File_no, unsigned long *Address, unsigned long Mode, unsigned char *Mess) {
	// register: 16
	// size: 0x880
	register struct tagCD *pCd;
	// register: 20
	register unsigned long Old_mode;
	// address: 0x80012A58
	bool retry;
	{
		{
		}
	}
}


// address: 0x80012C28
// line start: 437
// line end:   524
unsigned long Cd_read_s(unsigned long File_no, unsigned long Mode, unsigned long *Address, unsigned long Vab_id, unsigned char *Mess) {
	// register: 16
	// size: 0x880
	register struct tagCD *pCd;
	// register: 3
	register unsigned long i;
	// register: 20
	register unsigned long Old_mode;
	// address: 0x80012C60
	bool retry;
	{
	}
}


// address: 0x80012F04
// line start: 527
// line end:   564
void Cd_seek(unsigned long File_no, unsigned long Mode, unsigned char *Mess) {
	// register: 6
	// size: 0x880
	register struct tagCD *pCd;
}


// address: 0x80012FC0
// line start: 567
// line end:   583
void Cd_cdsync_cb(unsigned char intr, unsigned char *result) {
}


// address: 0x8001305C
// line start: 586
// line end:   699
void Cd_ready_cb(unsigned char intr, unsigned char *result) {
	// register: 17
	// size: 0x880
	register struct tagCD *pCd;
	// register: 16
	register unsigned long read_num;
	// register: 16
	register unsigned long *sum_ck;
	// register: 19
	register unsigned long i;
	{
	}
}


// address: 0x8001336C
// line start: 707
// line end:   713
void Cd_set_stereo(unsigned long mode);

// address: 0x800133B8
// line start: 722
// line end:   737
void Set_volume(unsigned long vol);

// address: 0x8001343C
// line start: 747
// line end:   760
void Change_volume(unsigned long mode) {
	// register: 16
	register long i;
}


