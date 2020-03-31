// D:\Bio2\prog\MD_SUB.C

#include "types.h"

// address: 0x8002CE40
// line start: 33
// line end:   75
unsigned long PresetObjectGT3_neo(struct _60fake *pMw, unsigned long *G_packet, unsigned long Flg) {
	// register: 12
	register unsigned long *p;
	// register: 10
	register unsigned long Poly_num;
	// register: 11
	register unsigned long *pPrim_ptr;
	// register: 15
	register unsigned long Late;
	// address: 0x8002CEC0
	bool label;
	{
	}
}


// address: 0x8002CFA0
// line start: 87
// line end:   131
unsigned long PresetObjectGT4_neo(struct _60fake *pMw, unsigned long *G_packet, unsigned long Flg) {
	// register: 12
	register unsigned long *p;
	// register: 10
	register unsigned long Poly_num;
	// register: 11
	register unsigned long *pPrim_ptr;
	// register: 15
	register unsigned long Late;
	// address: 0x8002D028
	bool label;
	{
	}
}


// address: 0x8002D110
// line start: 145
// line end:   181
void CompM(struct _0fake *m0, struct _0fake *m1, struct _0fake *m2) {
	// register: 5
	register unsigned long *v;
	// register: 4
	register unsigned char *c0;
	// register: 3
	register unsigned char *c1;
	// register: 2
	register unsigned char *c2;
}


// address: 0x8002D254
// line start: 193
// line end:   209
void mapModelingData(unsigned long *pHead) {
	// register: 7
	register unsigned long nPoly;
	// register: 5
	register unsigned long *pT_head;
	// register: 6
	register unsigned long ad_head;
}


// address: 0x8002D2AC
// line start: 221
// line end:   238
void MulLMatrix(struct _0fake *lwm, struct _0fake *klwm, struct _0fake *nlm) {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake tmp;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake vec;
}


// address: 0x8002D364
// line start: 242
// line end:   322
void SortGT3_lno(struct _98fake *pT_head, struct _29fake *bp, unsigned long Cv, unsigned long D0) {
	// register: 10
	// size: 0x8
	register struct _2fake *sp;
	// register: 9
	register short *p_prim;
	// register: 12
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 11
	// size: 0x8
	register struct _2fake *s1;
	// register: 5
	// size: 0x8
	register struct _2fake *s2;
	// register: 7
	// size: 0x8
	register struct _2fake *s3;
	// address: 0xFFFFFFF8
	auto long D2;
	// address: 0x8002D3C4
	bool Loop0;
	// address: 0x8002D3CC
	bool Loop1;
}


// address: 0x8002D4C0
// line start: 336
// line end:   422
void SortGT4_lno(struct _98fake *pT_head, struct _30fake *bp, unsigned long Cv, unsigned long D0) {
	// register: 6
	// size: 0x8
	register struct _2fake *sp;
	// register: 9
	register short *p_prim;
	// register: 12
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// address: 0xFFFFFFF8
	auto long D2;
	// register: 3
	// size: 0x8
	register struct _2fake *s0;
	// register: 10
	// size: 0x8
	register struct _2fake *s1;
	// register: 5
	// size: 0x8
	register struct _2fake *s2;
	// register: 11
	// size: 0x8
	register struct _2fake *s3;
	// address: 0x8002D520
	bool Loop0;
	// address: 0x8002D528
	bool Loop1;
}


// address: 0x8002D644
// line start: 437
// line end:   549
void Bomb_Parts_SortGT3(struct _98fake *pT_head, struct _29fake *pPacket, struct _65fake *pP_ptr) {
	// register: 15
	// size: 0x28
	register struct _29fake *bp;
	// register: 24
	// size: 0x8
	register struct _2fake *sp;
	// register: 19
	// size: 0x8
	register struct _2fake *np;
	// register: 11
	register unsigned long *p_prim;
	// register: 21
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 8
	// size: 0x8
	register struct _2fake *s0;
	// register: 16
	// size: 0x8
	register struct _2fake *s1;
	// register: 7
	// size: 0x8
	register struct _2fake *s2;
	// register: 17
	// size: 0x8
	register struct _2fake *s3;
	// register: 9
	// size: 0x10
	register struct _1fake *v;
	// register: 25
	register unsigned long D0;
	// address: 0xFFFFFFD8
	auto long D2;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake bbm1;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake bbm0;
	// register: 7
	register unsigned long cnt0;
	// register: 10
	register unsigned long rgb;
	// register: 5
	register unsigned long Tb_no;
}


// address: 0x8002D990
// line start: 552
// line end:   668
void Bomb_Parts_SortGT4(struct _98fake *pT_head, struct _30fake *pPacket, struct _65fake *pP_ptr) {
	// register: 15
	// size: 0x34
	register struct _30fake *bp;
	// register: 11
	// size: 0x8
	register struct _2fake *sp;
	// register: 18
	// size: 0x8
	register struct _2fake *np;
	// register: 10
	register unsigned long *p_prim;
	// register: 20
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 24
	register unsigned long D0;
	// address: 0xFFFFFFE0
	auto long D2;
	// register: 3
	register long D3;
	// register: 7
	// size: 0x8
	register struct _2fake *s0;
	// register: 25
	// size: 0x8
	register struct _2fake *s1;
	// register: 4
	// size: 0x8
	register struct _2fake *s2;
	// register: 17
	// size: 0x8
	register struct _2fake *s3;
	// register: 9
	// size: 0x10
	register struct _1fake *v;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake bbm0;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake bbm1;
	// register: 3
	register long cnt0;
	// register: 8
	register unsigned long rgb;
	// register: 5
	register unsigned long Tb_no;
}


// address: 0x8002DCF8
// line start: 671
// line end:   788
void Ryu_Parts_SortGT3(struct _98fake *pT_head, struct _29fake *bp, struct _65fake *pP_ptr, unsigned long D0) {
	// register: 6
	// size: 0x8
	register struct _2fake *sp;
	// register: 7
	register short *p_prim;
	// register: 17
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 4
	// size: 0x8
	register struct _2fake *s0;
	// register: 10
	// size: 0x8
	register struct _2fake *s1;
	// register: 8
	// size: 0x8
	register struct _2fake *s2;
	// register: 9
	// size: 0x8
	register struct _2fake *s3;
	// address: 0xFFFFFFE8
	auto long D2;
	// address: 0xFFFFFFE4
	auto long D3;
	// address: 0xFFFFFFE0
	auto unsigned long rgb;
	// address: 0xFFFFFF90
	// size: 0x10
	auto struct _1fake vv;
	// register: 18
	// size: 0x10
	register struct _1fake *v;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake bbm0;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake bbm1;
	// register: 25
	register long Y;
	// register: 24
	register long T;
	// register: 16
	register long g;
	// address: 0x8002DDE4
	bool Loop0;
	// address: 0x8002DDEC
	bool Loop1;
}


// address: 0x8002E068
// line start: 791
// line end:   919
void Ryu_Parts_SortGT4(struct _98fake *pT_head, struct _30fake *bp, struct _65fake *pP_ptr, unsigned long D0) {
	// register: 8
	// size: 0x8
	register struct _2fake *sp;
	// register: 7
	register short *p_prim;
	// register: 18
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// address: 0xFFFFFFE0
	auto long D2;
	// address: 0xFFFFFFDC
	auto long D3;
	// register: 6
	// size: 0x8
	register struct _2fake *s0;
	// register: 10
	// size: 0x8
	register struct _2fake *s1;
	// register: 9
	// size: 0x8
	register struct _2fake *s2;
	// register: 11
	// size: 0x8
	register struct _2fake *s3;
	// address: 0xFFFFFFD8
	auto unsigned long rgb;
	// address: 0xFFFFFF88
	// size: 0x10
	auto struct _1fake vv;
	// register: 19
	// size: 0x10
	register struct _1fake *v;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake bbm0;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake bbm1;
	// register: 16
	register long Y;
	// register: 25
	register long T;
	// register: 17
	register long g;
	// address: 0x8002E158
	bool Loop0;
	// address: 0x8002E160
	bool Loop1;
}


// address: 0x8002E42C
// line start: 933
// line end:   951
void mirror_TMD_GT3(unsigned long *tmd_top) {
	// register: 7
	register unsigned long n;
	// register: 3
	register unsigned long tmp;
	// register: 6
	register unsigned long *p_v;
}


// address: 0x8002E474
// line start: 962
// line end:   982
void mirror_PACKET_GT3(unsigned long *tmd_top, struct _29fake *p_top) {
	// register: 6
	register unsigned long n;
	// register: 3
	register unsigned long tmp;
	// register: 5
	// size: 0x28
	register struct _29fake *gt3;
}


// address: 0x8002E4B8
// line start: 992
// line end:   1011
void mirror_TMD_GT4(unsigned long *tmd_top) {
	// register: 7
	register unsigned long n;
	// register: 3
	register unsigned long tmp;
	// register: 6
	register unsigned long *p_v;
}


// address: 0x8002E500
// line start: 1022
// line end:   1043
void mirror_PACKET_GT4(unsigned long *tmd_top, struct _30fake *p_top) {
	// register: 6
	register unsigned short n;
	// register: 4
	register unsigned short tmp;
	// register: 5
	// size: 0x34
	register struct _30fake *gt4;
}


// address: 0x8002E550
// line start: 1050
// line end:   1149
unsigned long Mirror_model_cp(struct _74fake *pEm, unsigned long Mem) {
	// register: 22
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 21
	// size: 0xAC
	register struct _65fake *pM_ptr;
	// register: 16
	// size: 0xAC
	register struct _65fake *pTmp;
	// register: 30
	register long parts_num;
	// register: 23
	register long i;
	// register: 16
	register long byte;
	// register: 16
	register long off0;
}


// address: 0x8002E770
// line start: 1165
// line end:   1185
unsigned long Init_mirror_weapon(struct _74fake *pEm, unsigned long Mem) {
}


// address: 0x8002E7C0
// line start: 1188
// line end:   1299
void Mirror_weapon_cp(struct _74fake *pEm) {
	// register: 18
	register long parts_num;
	// register: 20
	register long i;
	// register: 3
	register long Weapon_num;
	// register: 17
	register unsigned long byte;
	// register: 19
	register unsigned long off0;
	// register: 18
	register unsigned long Mem;
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 19
	// size: 0xAC
	register struct _65fake *pM_ptr;
}


// address: 0x8002EA00
// line start: 1309
// line end:   1363
void Parts_work_cp(struct _74fake *pEm) {
	// register: 10
	register unsigned long p_num;
	// register: 9
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 8
	// size: 0xAC
	register struct _65fake *pM_ptr;
}


// address: 0x8002EBB4
// line start: 1376
// line end:   1389
void Mirror_view(struct _76fake *pV0, struct _76fake *pV1, unsigned char flg, short mxz);

// address: 0x8002ECB8
// line start: 1410
// line end:   1437
unsigned char Mirror_in_view(struct _76fake *pV0, unsigned char flg, struct _1fake *pos) {
	// register: 2
	register unsigned long ck;
	// register: 2
	register unsigned long D5;
}


// address: 0x8002ED70
// line start: 1447
// line end:   1509
void Mirror_trans(struct _74fake *pEm) {
	// address: 0xFFFFFF90
	// size: 0x20
	auto struct _0fake m;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake T_Wsmatrix;
	// register: 17
	// size: 0xAC
	register struct _65fake *pTmp;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _76fake M_cut;
}


// address: 0x8002EED8
// line start: 1514
// line end:   1541
void Mirror_matrix_set() {
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake m;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake T_Wsmatrix;
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct _76fake M_cut;
}


// address: 0x8002F05C
// line start: 1553
// line end:   1582
void Late_set(struct _60fake *pMw, unsigned short Late) {
	// register: 3
	// size: 0x28
	register struct _29fake *gt3;
	// register: 8
	// size: 0x34
	register struct _30fake *gt4;
	// register: 7
	register unsigned long i;
	// register: 2
	register unsigned long *pT_head;
}


