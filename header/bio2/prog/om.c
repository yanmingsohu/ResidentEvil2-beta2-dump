// D:\Bio2\prog\OM.C

#include "types.h"

// address: 0x800344EC
// line start: 51
// line end:   70
void Om_init(unsigned long Om_no, unsigned long *pTmd_adr) {
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	{
	}
}


// address: 0x800345B4
// line start: 79
// line end:   111
void Col_chg_init(unsigned long Col_wk_no, struct _98fake *pCcp) {
	// register: 3
	register unsigned long Poly_num;
	// register: 8
	register unsigned long Clut;
	// register: 4
	register unsigned long i;
	// register: 17
	register unsigned long D0;
	// register: 6
	register unsigned long *p;
	// register: 2
	// size: 0x8
	register struct _16fake *pRect;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pMw;
}


// address: 0x800346CC
// line start: 120
// line end:   141
void Tex_chg_init(unsigned long Col_wk_no, struct _98fake *pCcp) {
	// register: 6
	register unsigned long i;
	// register: 2
	// size: 0x8
	register struct _16fake *pRect;
	// register: 7
	// size: 0x1F8
	register struct _71fake *pMw;
}


// address: 0x80034770
// line start: 150
// line end:   177
void Tex_ctr() {
	// register: 17
	// size: 0x4C
	register struct _98fake *pCcp;
	// register: 18
	// size: 0x18
	register struct _48fake *pMove;
	// register: 16
	// size: 0x8
	register struct _16fake *pRect;
	// register: 20
	register unsigned long i;
	// register: 21
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 30
	register unsigned long *pOt;
}


// address: 0x800348AC
// line start: 181
// line end:   211
void Col_chg(struct _98fake *pCcp, struct _16fake *pRect, unsigned long Ctr);

// address: 0x80034A74
// line start: 216
// line end:   252
void Tex_chg(struct _98fake *pCcp, struct _16fake *pRect, unsigned long Ctr);

// address: 0x80034D44
// line start: 265
// line end:   436
void Om_move() {
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm2;
	// register: 21
	// size: 0x1F8
	register struct _71fake *pHit_om;
	// register: 4
	// size: 0x244
	register struct _74fake *pEm;
	// register: 16
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 18
	register short Bak_pos_x;
	// register: 21
	register short Bak_pos_z;
	// register: 20
	register unsigned long Hit_cnt;
	// address: 0x800350F8
	bool no_move;
	{
		// address: 0x80034F24
		bool flr_ck;
		{
			{
				{
					{
						{
							{
								{
									{
										// address: 0x800350C8
										bool no_push;
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800351A4
// line start: 447
// line end:   541
void Om_trans() {
	// register: 18
	register unsigned long Toumei;
	// register: 23
	register unsigned long Cnt;
	// register: 21
	register unsigned long D0;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		// address: 0x80035458
		bool next;
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


// address: 0x800354C4
// line start: 552
// line end:   695
void Om_move_box(struct _71fake *pOm) {
	// address: 0x800B6708
	static short Pos_spd;
	// address: 0x800B670C
	static short Pos_spd_add;
	// address: 0x800B6710
	static short Dir_spd;
	// address: 0x800B6714
	static short Dir_spd_add;
	// address: 0x800B6718
	static short Fall_spd;
	// address: 0x800B671C
	static short Dir_sum;
	// address: 0x800B6720
	static short Ground;
	// address: 0x800B6724
	// size: 0x8
	static struct _2fake Add_dir;
	// address: 0x800B672C
	static unsigned char In_water_flg;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake Water_pos;
	{
	}
}


// address: 0x80035A10
// line start: 706
// line end:   723
void Om_set_fall_dir(struct _71fake *pOm) {
}


// address: 0x80035AAC
// line start: 796
// line end:   882
unsigned long Ob_test_load2() {
	// address: 0xFFFFFFC0
	// size: 0x1F
	auto unsigned char tim_file[31];
	// address: 0xFFFFFFE0
	// size: 0x1F
	auto unsigned char tmd_file[31];
}


// address: 0x80035BE4
// line start: 885
// line end:   900
void Oma_set_ofs(struct _71fake *pOm);

// address: 0x80035C68
// line start: 904
// line end:   915
void Om_explosion_set(struct _71fake *pOm) {
}


