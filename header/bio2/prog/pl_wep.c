// D:\Bio2\prog\PL_WEP.C

#include "types.h"

// address: 0x8003DC70
// line start: 115
// line end:   278
void Pl_weapon_ch(struct _74fake *pEm) {
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD0
	// size: 0xAC
	auto struct _65fake *pO_ptr;
	// register: 16
	register unsigned long Mem;
	// register: 5
	register unsigned long Pac;
	// register: 17
	register unsigned long *Head;
	// address: 0xFFFFFFB8
	// size: 0x14
	auto struct _52fake Tim_image;
	// register: 16
	// size: 0x14
	register struct _52fake *pTim;
	// register: 17
	register unsigned long *pT_head;
	// register: 20
	register unsigned long Emd_top;
	// register: 23
	register unsigned long Wparts_num;
	// register: 30
	register unsigned long Parts_no;
	{
	}
}


// address: 0x8003DFB0
// line start: 285
// line end:   286
void Non_init(struct _74fake *pEm);

// address: 0x8003DFB8
// line start: 290
// line end:   313
void Plw02_init(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 6
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E00C
// line start: 317
// line end:   340
void Plw09_init(struct _74fake *pEm) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E068
// line start: 344
// line end:   447
void Plw0c_init(struct _74fake *pEm) {
	// register: 11
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 8
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E1CC
// line start: 451
// line end:   469
void Plw0f_init(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E20C
// line start: 473
// line end:   507
void Plw12_init(struct _74fake *pEm) {
	// register: 8
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 3
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E2DC
// line start: 512
// line end:   520
void Weapon_cls(struct _74fake *pEm) {
	// register: 2
	register unsigned long M_num;
}


// address: 0x8003E304
// line start: 1173
// line end:   1177
void Init_W_Tool();

// address: 0x8003E30C
// line start: 1180
// line end:   1184
void W_Tool();

// address: 0x8003E314
// line start: 1195
// line end:   1207
void init_Weapon_at(struct _74fake *pEm, struct _109fake *At_tbl_top);

// address: 0x8003E348
// line start: 1235
// line end:   1739
unsigned long Weapon_at_ck(struct _74fake *pEm, unsigned long W_no, struct _109fake *At_tbl_top) {
	// register: 2
	register unsigned long Em_num;
	// register: 5
	register unsigned long Tbl_no;
	// register: 20
	register unsigned long At_flg;
	// address: 0xFFFFFFA0
	auto unsigned long Ba_at_flg;
	// register: 19
	// size: 0x1C
	register struct _107fake *pAtw3;
	// address: 0xFFFFFFA8
	// size: 0x244
	auto struct _74fake **ppEm;
	// register: 3
	register long Dir;
	// register: 2
	register long x;
	// register: 2
	register long z;
	// address: 0xFFFFFFB0
	// size: 0x14
	auto struct _111fake *pAwe;
	// address: 0xFFFFFFB8
	// size: 0x14
	auto struct _111fake *pMa;
	// address: 0xFFFFFFC0
	auto unsigned long L_max;
	// register: 3
	register unsigned long L;
	// register: 16
	register unsigned long Off;
	// register: 30
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	// register: 23
	register long Jtg_no;
	// address: 0xFFFFFFC8
	auto long L_Jtg_no;
	// register: 2
	register unsigned long MinMax_ck;
	// address: 0xFFFFFF8C
	auto long Min;
	// address: 0xFFFFFF88
	auto long Max;
	// register: 4
	register long MM_sa;
	// register: 18
	register unsigned long B0;
	// register: 17
	register unsigned long B1;
	// register: 22
	register unsigned long Jtg_flg;
	// register: 21
	register long Pos_y;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake *pV;
	// address: 0xFFFFFF68
	// size: 0x10
	auto struct _1fake V_pos;
	// address: 0xFFFFFF78
	// size: 0x10
	auto struct _1fake Tmp_v;
	{
		{
		}
	}
}


// address: 0x8003ED24
// line start: 1743
// line end:   1807
long Set_MinMax(struct _111fake *pAwe, unsigned char Ck_flg, long *pMax, long *pMin) {
	// register: 3
	register unsigned long Mode_no;
	// register: 9
	register long Sa;
}


// address: 0x8003EEE8
// line start: 1819
// line end:   1895
unsigned long Attack_r_ck0(struct _60fake *pOm, struct _60fake *pPm, struct _106fake *pAt) {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct _2fake Tsvm;
	// address: 0xFFFFFF78
	// size: 0x8
	auto struct _2fake Tsvck0;
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct _2fake Tsvck1;
	// address: 0xFFFFFF88
	// size: 0x8
	auto struct _2fake Tsvp0;
	// address: 0xFFFFFF90
	// size: 0x8
	auto struct _2fake Tsvp1;
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake Tsvp2;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake Tm1;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake Tm2;
}


// address: 0x8003F0FC
// line start: 1900
// line end:   1978
unsigned long Attack_r_ck1(struct _1fake *pH, short Cdir_y, struct _1fake *pT, struct _106fake *pAt) {
	// address: 0xFFFFFF40
	// size: 0x8
	auto struct _2fake Tsvm;
	// address: 0xFFFFFF48
	// size: 0x8
	auto struct _2fake Tsvck0;
	// address: 0xFFFFFF50
	// size: 0x8
	auto struct _2fake Tsvck1;
	// address: 0xFFFFFF58
	// size: 0x8
	auto struct _2fake Tsvp0;
	// address: 0xFFFFFF60
	// size: 0x8
	auto struct _2fake Tsvp1;
	// address: 0xFFFFFF68
	// size: 0x8
	auto struct _2fake Tsvp2;
	// address: 0xFFFFFF70
	// size: 0x20
	auto struct _0fake Tm1;
	// address: 0xFFFFFF90
	// size: 0x20
	auto struct _0fake Tm2;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x8003F348
// line start: 1989
// line end:   2083
unsigned long Em_ck(struct _74fake *pEm, unsigned long LL) {
	// register: 30
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	register unsigned long Em_num;
	// register: 18
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 20
	register unsigned long L_max;
	// register: 17
	register unsigned long L;
	// register: 23
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake V;
	// register: 21
	register unsigned long DL_max;
	// register: 22
	// size: 0x244
	register struct _74fake *pDLm;
	{
	}
}


// address: 0x8003F56C
// line start: 2119
// line end:   2182
void Hand_ck(struct _74fake *pEm, long Ck_pos_y, short Type) {
	// register: 4
	register long Base_pos_y;
}


// address: 0x8003F624
// line start: 2212
// line end:   2255
void Mag_set(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake Tm;
	// register: 3
	register unsigned long Type;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Ts;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Ts0;
}


// address: 0x8003F7BC
// line start: 2258
// line end:   2315
void Mag_down(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 3
	register unsigned long Type;
	{
	}
}


// address: 0x8003F9F0
// line start: 2336
// line end:   2344
void G_rot_st(struct _74fake *pEm) {
}


// address: 0x8003FA08
// line start: 2347
// line end:   2372
void G_rot(struct _74fake *pEm) {
}


// address: 0x8003FAA8
// line start: 2377
// line end:   2388
void Gat_lp_st(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8003FAD0
// line start: 2391
// line end:   2419
void Gat_rot(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8003FB9C
// line start: 2424
// line end:   2447
void Pl_water(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8003FCF0
// line start: 2508
// line end:   2509
void pl_mv05_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg);

// address: 0x8003FCF8
// line start: 2572
// line end:   2574
void pl_mv05_w0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key);

// address: 0x8003FD34
// line start: 2579
// line end:   2744
void pl_mv05_w0_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// address: 0xFFFFFFA8
	// size: 0xA
	auto short Gun_at_mot[5];
	// register: 16
	register unsigned long Ck;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 7
	register unsigned long Flg;
	// register: 2
	// size: 0x244
	register struct _74fake *pAt;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _106fake Aw;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x800401B4
// line start: 2748
// line end:   2761
void pl_mv05_w0_t6(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
}


// address: 0x800401EC
// line start: 2783
// line end:   2785
void pl_mv05_w1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key);

// address: 0x80040228
// line start: 2790
// line end:   2914
void pl_mv05_w1_t0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// register: 2
	// size: 0x244
	register struct _74fake *pTa;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80040574
// line start: 2918
// line end:   3050
void pl_mv05_w1_t1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// register: 4
	register unsigned short Jtg_no;
	// address: 0xFFFFFFD8
	// size: 0xA
	auto short Gun_taiki_mot[5];
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80040834
// line start: 3054
// line end:   3153
void pl_mv05_w1_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// address: 0xFFFFFFD0
	// size: 0xA
	auto short Gun_at_mot[5];
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
			}
		}
	}
}


