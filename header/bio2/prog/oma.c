// D:\Bio2\prog\OMA.C

#include "types.h"

// address: 0x80035CAC
// line start: 191
// line end:   309
unsigned long Oma_ck_oba(struct _74fake *pEm, struct _71fake *pOm, unsigned long Flg) {
	// register: 13
	register long Dx;
	// register: 5
	register long Dy;
	// register: 12
	register long Dz;
	// register: 10
	register long Wx;
	// register: 4
	register long Wy;
	// register: 9
	register long Wz;
	// register: 2
	register long Dy2;
	// register: 11
	register long Y_flg;
	// register: 2
	register long Dold;
	// address: 0x800B6730
	static unsigned long Y_flg_old;
	{
		// register: 4
		register long Bak;
	}
}


// address: 0x8003600C
// line start: 395
// line end:   449
unsigned long Oma_ck_om(struct _71fake *pOm, struct _71fake *pOm2) {
	// register: 15
	register long a;
	// register: 14
	register long b;
	// register: 10
	register long c;
	// register: 9
	register long d;
	// register: 5
	register long e;
	// register: 4
	register long f;
	// register: 3
	register long e2;
	// register: 7
	register long Flg;
	// register: 2
	register long Flg_old;
	{
		// register: 4
		register long Bak;
	}
}


// address: 0x80036204
// line start: 462
// line end:   503
unsigned long Oma_ck_front(struct _74fake *pEm, struct _71fake *pOm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 5
	register long X;
	// register: 4
	register long Z;
	// register: 6
	register long W;
	// register: 7
	register long D;
}


// address: 0x80036364
// line start: 513
// line end:   624
unsigned long Oma_pl_updown_ck(unsigned long Id) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Add_pos;
	// register: 21
	register short Cdir_y;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOn_om;
	// register: 18
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0x800364F4
	bool down_ck;
	// address: 0x800365CC
	bool down;
	{
	}
}


// address: 0x800366DC
// line start: 634
// line end:   784
unsigned long Oma_Spl_updown_ck(struct _74fake *pEm) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Add_pos;
	// register: 18
	register short Cdir_y;
	// register: 4
	register unsigned short Type;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm;
	// address: 0x8003689C
	bool down_ck;
	{
		{
			{
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x80036AE4
// line start: 795
// line end:   833
unsigned long Oma_front_ck(struct _74fake *pEm, struct _71fake *pOm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 5
	register long X;
	// register: 4
	register long Z;
	// register: 6
	register long W;
	// register: 7
	register long D;
}


// address: 0x80036C48
// size: 0x1F8
// line start: 843
// line end:   857
struct _71fake *Oma_on_check(struct _74fake *pEm) {
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm;
}


// address: 0x80036CFC
// line start: 872
// line end:   1158
void Oma_pull(struct _74fake *pEm, struct _71fake *pOm) {
	// register: 3
	register long X;
	// register: 4
	register long Z;
	// register: 15
	register long W;
	// register: 22
	register long D;
	// register: 30
	register long X2;
	// register: 23
	register long Z2;
	// register: 21
	register long Now_at;
	// register: 14
	register long Old_at;
	// register: 18
	// size: 0x20
	register struct _56fake *pOat;
	// register: 24
	// size: 0x20
	register struct _56fake *pOat2;
	// register: 20
	// size: 0x20
	register struct _56fake *pEat;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm2;
	// register: 4
	register long Bak;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct _1fake Jump_pos;
	{
		// register: 2
		register long WW;
		// register: 6
		register long DD1;
		// register: 7
		register long DD2;
		// register: 5
		register long Flg;
		{
			// register: 2
			register long DD;
			// register: 4
			register long WW1;
			// register: 6
			register long WW2;
			// register: 5
			register long Flg;
		}
	}
}


// address: 0x80037400
// line start: 1159
// line end:   1167
void Oma_pull_hosei_x(struct _74fake *pEm, struct _56fake *pOat, long X2, long W) {
	// register: 4
	register long Bak;
	// register: 5
	// size: 0x20
	register struct _56fake *pEat;
}


// address: 0x8003746C
// line start: 1168
// line end:   1176
void Oma_pull_hosei_z(struct _74fake *pEm, struct _56fake *pOat, long Z2, long D) {
	// register: 4
	register long Bak;
	// register: 5
	// size: 0x20
	register struct _56fake *pEat;
}


// address: 0x800374D8
// size: 0x1F8
// line start: 1178
// line end:   1205
struct _71fake *Oma_get_on_om(struct _74fake *pEm, struct _56fake *pEat) {
	// register: 8
	// size: 0x1F8
	register struct _71fake *pOm2;
	// register: 5
	register long W;
	// register: 3
	register long D;
	// register: 6
	register long Flg;
}


// address: 0x800375B4
// line start: 1320
// line end:   1356
void Oma_ob_pull2(struct _74fake *pEm, struct _71fake *pOm, unsigned long Id, unsigned long Spd) {
	// register: 10
	register long X;
	// register: 4
	register long Z;
	// register: 8
	register long W;
	// register: 11
	register long D;
	// register: 5
	register long Flg;
	// register: 9
	register long Spd_x;
}


// address: 0x800376EC
// line start: 1372
// line end:   1391
unsigned long Omd_in_check(struct _1fake *pVec, struct _71fake *pOm, long R, unsigned long Flg) {
	// register: 3
	register long a;
	// register: 5
	register long b;
	// register: 2
	register long c;
	// register: 4
	register long d;
	// register: 3
	register long e;
	// register: 2
	register long f;
}


// address: 0x80037784
// line start: 1403
// line end:   1419
unsigned long Oma_obj_ck_all(struct _1fake *pPos, struct _74fake *pEm) {
	// register: 6
	// size: 0x244
	register struct _74fake *pEm2;
	// register: 16
	// size: 0x244
	register struct _74fake **ppEm;
	{
	}
}


// address: 0x80037834
// size: 0x1F8
// line start: 1432
// line end:   1466
struct _71fake *Oma_hit_ck_all(struct _1fake *pV, struct _74fake *pEm) {
	// register: 7
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 11
	// size: 0x20
	register struct _56fake *pEat;
	// register: 3
	register long X;
	// register: 2
	register long Y;
	// register: 8
	register long Z;
	// register: 2
	register long W;
	// register: 3
	register long H;
	// register: 4
	register long D;
	// register: 5
	register long R;
}


// address: 0x80037920
// line start: 1475
// line end:   1520
void Om_Jump_ck(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFF0
	// size: 0x10
	auto struct _1fake Jump_pos;
}


