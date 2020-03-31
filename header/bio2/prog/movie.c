// D:\Bio2\prog\MOVIE.C

#include "types.h"

// address: 0x800322D4
// line start: 103
// line end:   150
void Init_movie_work(unsigned long Id) {
	// register: 5
	register unsigned long *pBuff;
	// register: 7
	// size: 0x20
	register struct _109fake *pMovie_tbl;
}


// address: 0x80032478
// line start: 167
// line end:   188
void Movie() {
	// address: 0x80095F6C
	// size: 0x14
	static void (*pMovie_proc_tbl[5])();
}


// address: 0x8003256C
// line start: 191
// line end:   276
void Movie_init() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake Rect;
	{
	}
}


// address: 0x800327DC
// line start: 279
// line end:   305
void Movie_main() {
	// register: 5
	register short Eom;
}


// address: 0x800328E0
// line start: 308
// line end:   352
void Movie_end() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake Rect;
}


// address: 0x80032A58
// line start: 355
// line end:   400
void Movie_exit() {
	// address: 0xFFFFFFF8
	// size: 0x8
	auto struct _16fake Rect;
}


// address: 0x80032B2C
// line start: 412
// line end:   521
unsigned long Open_movie(unsigned long Movie_id) {
	// address: 0xFFFFFFEC
	// size: 0x20
	auto struct _125fake *pRead_header;
	// address: 0xFFFFFFE8
	auto unsigned long *pBs_buff;
	// register: 16
	register unsigned long Time_out;
	// register: 4
	register unsigned long Sector;
	// register: 3
	// size: 0x8
	register struct _126fake *pFpos;
	{
	}
}


// address: 0x80032E90
// line start: 535
// line end:   577
unsigned long Play_movie() {
	// address: 0xFFFFFFE8
	auto unsigned long *pBs_buff;
	// address: 0xFFFFFFEC
	// size: 0x20
	auto struct _125fake *pRead_header;
	// register: 16
	register unsigned long Ret;
	// register: 16
	register unsigned long Time_out;
	{
	}
}


// address: 0x80032FA4
// line start: 591
// line end:   621
void Close_movie() {
}


// address: 0x8003306C
// line start: 633
// line end:   653
void RuntoImage() {
	// address: 0x80095F80
	static short Time;
}


// address: 0x8003315C
// line start: 662
// line end:   686
void Mdec_callback() {
	{
	}
}


// address: 0x80033224
// line start: 689
// line end:   719
void Movie_cinesco_init() {
	// register: 19
	register short Offset_y;
}


// address: 0x80033344
// line start: 722
// line end:   728
void Movie_cinesco_set();

// address: 0x800333CC
// line start: 733
// line end:   753
void Fwd_movie(unsigned long Frame) {
}


// address: 0x80033474
// line start: 763
// line end:   773
void Movie_xa_start() {
	// register: 16
	register long Ctr;
}


// address: 0x800334C8
// line start: 776
// line end:   786
void Movie_xa_stop() {
	// register: 16
	register long Ctr;
}


// address: 0x80033514
// line start: 799
// line end:   809
void Set_movie_volume2(unsigned long Volume);

// address: 0x80033590
// line start: 826
// line end:   892
long CdReset2(long Mode) {
	// address: 0xFFFFFFF0
	auto unsigned char Param;
	// register: 3
	register unsigned char Status;
	// register: 16
	register unsigned long Time_out;
	{
		{
		}
	}
}


// address: 0x80033710
// line start: 913
// line end:   944
void Caption_set(unsigned short Caption_tbl_no) {
	// register: 3
	register unsigned long *pCaption_buff;
}


// address: 0x8003381C
// line start: 956
// line end:   1013
void Caption_print(unsigned long Frame_no) {
	// register: 7
	// size: 0xC
	register struct _113fake *pTemp;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake Rect;
	// register: 6
	register short Tempy;
}


// address: 0x80033A0C
// line start: 1016
// line end:   1062
void Decomp_caption(unsigned char *pAdr, unsigned long Size) {
	// register: 9
	register unsigned short Ctr;
	// register: 3
	register unsigned char *pTemp_adr;
	// register: 7
	register unsigned char Zero_Ctr;
}


