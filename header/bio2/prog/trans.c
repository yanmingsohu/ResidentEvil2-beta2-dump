// D:\Bio2\prog\TRANS.C

#include "types.h"

// address: 0x800707B8
// line start: 61
// line end:   107
void Prim_trans() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
	{
		// register: 3
		register unsigned long D0;
		// register: 2
		register unsigned long D1;
		// register: 4
		register unsigned long D2;
	}
}


// address: 0x8007083C
// line start: 110
// line end:   112
void Trans_pointer_set();

// address: 0x80070868
// line start: 296
// line end:   429
void Eff_sprt_trans() {
	// register: 20
	// size: 0x28
	register struct _26fake *pP;
	// address: 0xFFFFFFA8
	// size: 0x28
	auto struct _26fake *pP_limit;
	// register: 16
	// size: 0x7C
	register struct _106fake *pEff;
	// register: 17
	// size: 0x8
	register struct _102fake *pAseq;
	// address: 0xFFFFFFB0
	// size: 0x14
	auto struct _75fake *pCcut;
	// register: 19
	register unsigned long nSpr;
	// address: 0xFFFFFFB8
	auto unsigned long *pOt;
	// address: 0xFFFFFFC0
	auto long Proj;
	// register: 21
	register unsigned long D0;
	// register: 22
	register unsigned long D1;
	// register: 23
	register unsigned long D2;
	// register: 18
	register unsigned long Be_flg;
	// address: 0xFFFFFFC8
	auto unsigned long Flg;
	// address: 0xFFFFFF38
	// size: 0x20
	auto struct _0fake m;
	// address: 0xFFFFFF58
	// size: 0x20
	auto struct _0fake workm;
	// address: 0xFFFFFF78
	// size: 0x20
	auto struct _0fake workm2;
	// address: 0xFFFFFF98
	// size: 0x10
	auto struct _1fake Vec;
	// address: 0x8007092C
	bool loop_start;
	// address: 0x80070DC8
	bool loop_check;
	{
		{
			{
			}
		}
	}
}


// address: 0x80070E14
// line start: 440
// line end:   528
void Esp_trans_main(struct _26fake *pP, struct _106fake *pEff, unsigned long Def_size, unsigned long nSpr, long Projection, unsigned long *pOt, unsigned long H_clarity, unsigned long pG_offset) {
	// register: 12
	// size: 0x4
	register struct _103fake *pSpGp;
	// register: 11
	register long Xsize;
	// register: 5
	register long Ysize;
	// register: 13
	register long Def_size_s;
	// address: 0xFFFFFFEC
	auto long D0;
	// address: 0xFFFFFFE8
	auto long D1;
	// register: 9
	register long D2;
	// register: 8
	register long D3;
	// register: 17
	register unsigned long Clut;
	// register: 16
	register unsigned long Tpage;
	// register: 25
	register long Hot_x;
	// register: 24
	register long Hot_y;
	// register: 15
	register unsigned long Mag_x;
	// register: 14
	register unsigned long Mag_y;
	// register: 11
	register unsigned long *pOld_prim;
	// address: 0x80070ED0
	bool loop_addprim;
	// address: 0x80070FD0
	bool loop_start;
}


// address: 0x800710B8
// line start: 539
// line end:   616
void Esp_trans_3d(struct _26fake *pP, struct _106fake *pEff, unsigned long Def_size, unsigned long nSpr, long Projection, unsigned long *pOt, unsigned long H_clarity, unsigned long pG_offset) {
	// register: 14
	// size: 0x4
	register struct _103fake *pSpGp;
	// register: 9
	register long D0;
	// register: 8
	register long D1;
	// register: 13
	register long D2;
	// register: 11
	register long D3;
	// register: 18
	register unsigned long Clut;
	// register: 17
	register unsigned long Tpage;
	// address: 0xFFFFFFE0
	auto unsigned long Otz;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _2fake Svec[4];
	// register: 3
	register unsigned long *A0;
	// register: 24
	register long Mag_x;
	// register: 15
	register long Mag_y;
	// register: 16
	register long Size_x;
	// register: 25
	register long Size_y;
	// address: 0x8007116C
	bool loop_start;
}


// address: 0x800712F8
// line start: 626
// line end:   643
void Trans_work_init() {
	// register: 2
	register unsigned long *pP2;
	// register: 3
	register unsigned long D2;
}


