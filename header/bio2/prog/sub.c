// D:\Bio2\prog\SUB.C

#include "types.h"

// address: 0x8006F908
// line start: 133
// line end:   142
void Vram_clr(unsigned short x, unsigned short y, unsigned short w, unsigned short h) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake Rect;
}


// address: 0x8006F944
// line start: 155
// line end:   161
void Memcpy(void *p, void *q, long r) {
	// register: 3
	register unsigned long end_adr;
}


// address: 0x8006F96C
// line start: 173
// line end:   176
void Memclr(void *p, long r);

// address: 0x8006F984
// line start: 191
// line end:   209
void Mapping_tim(unsigned long *pTim_Adr) {
	// address: 0xFFFFFFD8
	// size: 0x14
	auto struct _52fake Tim_image;
	// register: 16
	// size: 0x14
	register struct _52fake *pTim;
}


// address: 0x8006FAA4
// line start: 224
// line end:   285
unsigned long Mapping_tmd(unsigned long Mode, unsigned long *pTmd_adr, unsigned long Ctp, unsigned long Ccl) {
	// register: 16
	register unsigned long *pPrim;
	// register: 5
	register unsigned long *pPrim2;
	// register: 20
	register unsigned long *pTmd;
	// register: 8
	register unsigned long i;
	// register: 19
	register unsigned long nObj;
	// register: 22
	register unsigned long n;
	// register: 4
	register unsigned long nPoly;
	// register: 3
	register unsigned long Length;
	// register: 6
	register unsigned long Psize;
	{
	}
}


// address: 0x8006FBF4
// line start: 298
// line end:   358
void Set_view(long *pVp, long *pVr) {
	// address: 0xFFFFFFA8
	// size: 0x20
	auto struct _0fake Mat;
	// register: 17
	register short Sx;
	// register: 2
	register short Cx;
	// register: 16
	register long F1;
	// register: 18
	register long F2;
	// register: 22
	register long Dx;
	// register: 17
	register long Dy;
	// register: 20
	register long Dz;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake V;
}


// address: 0x8006FECC
// line start: 369
// line end:   405
void Set_light(struct _1fake *pV) {
	// register: 17
	register long i;
	// register: 5
	register long Dis;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake Vec;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto unsigned char Col[4];
	// register: 18
	// size: 0x28
	register struct _77fake *pLight;
}


// address: 0x80070144
// line start: 418
// line end:   436
void Set_Light_data(unsigned long No, struct _1fake *pLig, unsigned char *pRgb) {
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake v;
	// register: 17
	// size: 0x28
	register struct _77fake *pLight;
	// register: 16
	register short *pLM;
	// register: 18
	register short *pCM;
}


// address: 0x80070250
// line start: 448
// line end:   449
void Flg_on(unsigned long *p, unsigned long x);

// address: 0x80070278
// line start: 462
// line end:   463
void Flg_off(unsigned long *p, unsigned long x);

// address: 0x800702A4
// line start: 477
// line end:   478
unsigned long Flg_ck(unsigned long *p, unsigned long x);

// address: 0x800702C8
// line start: 492
// line end:   499
void Rot_vector(short dir, struct _2fake *p, struct _2fake *q) {
	// address: 0x8009DEA0
	// size: 0x8
	static struct _2fake Svec;
	// address: 0x800B67D0
	// size: 0x20
	static struct _0fake Tmp_matrix;
}


// address: 0x80070330
// line start: 512
// line end:   520
void Rot_vector_super(short dir, struct _0fake *pM, struct _2fake *p, struct _2fake *q) {
	// address: 0x8009DEA8
	// size: 0x8
	static struct _2fake Svec;
	// address: 0x800B67F0
	// size: 0x20
	static struct _0fake Tmp_matrix;
}


// address: 0x800703B0
// line start: 533
// line end:   581
void Rot_add_matrix(long *pPos, short *pDir, struct _0fake *pM, struct _2fake *Add_dir) {
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake Mat;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake Mat2;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Vec;
	// register: 16
	register long sv_y;
}


// address: 0x80070544
// line start: 592
// line end:   600
void Set_front_pos(struct _74fake *pEm) {
	// address: 0x800B6810
	// size: 0x8
	static struct _2fake Svec;
}


// address: 0x800705E0
// line start: 612
// line end:   616
void SetSpadStack();

// address: 0x8007061C
// line start: 628
// line end:   630
void ResetSpadStack();

// address: 0x8007064C
// line start: 642
// line end:   645
void SetSpadStack2();

// address: 0x80070690
// line start: 657
// line end:   659
void ResetSpadStack2();

// address: 0x800706C0
// line start: 673
// line end:   691
unsigned long Get_work(void **p, unsigned long Size) {
	// register: 2
	register void *pEnd_Work;
}


// address: 0x80070738
// line start: 703
// line end:   722
unsigned long Free_work(void **p) {
	// register: 3
	// size: 0x8
	register struct _98fake *pMem;
}


