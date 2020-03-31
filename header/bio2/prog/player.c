// D:\Bio2\prog\PLAYER.C

#include "types.h"

// address: 0x80039EEC
// line start: 99
// line end:   268
void Player_set(struct _74fake *pEm) {
	// register: 19
	register unsigned long Mem;
	// register: 20
	register unsigned long Aida;
	// register: 2
	register unsigned long *Head;
	{
	}
}


// address: 0x8003A220
// line start: 271
// line end:   288
void Pl_before(struct _74fake *pEm) {
	{
	}
}


// address: 0x8003A2B0
// line start: 292
// line end:   295
void Pl_after(struct _74fake *pEm);

// address: 0x8003A2B8
// line start: 345
// line end:   461
void Player_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x8003A414
// line start: 472
// line end:   607
void Pl_init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8003A6C4
// line start: 641
// line end:   661
void Pl_move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003A740
// line start: 707
// line end:   920
void pl_mv00_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// register: 3
	register long Ck;
	// register: 4
	register long Tmp;
	{
		{
		}
	}
}


// address: 0x8003A8C8
// line start: 923
// line end:   941
void pl_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto unsigned short Pl_taiki_mot[3];
	{
	}
}


// address: 0x8003A984
// line start: 947
// line end:   1015
void pl_mv01_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// address: 0xFFFFFFE0
	// size: 0x3
	auto unsigned char Pl_walk_spd[3];
	{
		{
		}
	}
}


// address: 0x8003AB3C
// line start: 1020
// line end:   1083
void pl_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x6
	auto short Pl_walk_mot[3];
	// address: 0xFFFFFFE8
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


// address: 0x8003AD84
// line start: 1089
// line end:   1155
void pl_mv02_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto unsigned char Pl_run_spd[3];
	{
		{
		}
	}
}


// address: 0x8003AF34
// line start: 1158
// line end:   1232
void pl_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x3
	auto unsigned char Pl_run_mot[3];
	// address: 0xFFFFFFE8
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


// address: 0x8003B19C
// line start: 1238
// line end:   1282
void pl_mv03_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// address: 0xFFFFFFF8
	// size: 0x3
	auto unsigned char Pl_backwalk_spd[3];
}


// address: 0x8003B2A8
// line start: 1285
// line end:   1379
void pl_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned char Tmp;
	// address: 0xFFFFFFD8
	// size: 0x3
	auto unsigned char Pl_backwalk_mot[3];
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	{
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
}


// address: 0x8003B620
// line start: 1384
// line end:   1458
unsigned long Lim_dir_ck(struct _74fake *pEm, unsigned long Lim, short Dir) {
	// register: 22
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	register unsigned long Em_num;
	// register: 17
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 20
	register unsigned long L_max;
	// register: 19
	register unsigned long L;
	// register: 21
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	{
	}
}


// address: 0x8003B7EC
// line start: 1462
// line end:   1554
void Pl_neck(struct _74fake *pEm, unsigned long Lim, short Dir) {
	// register: 3
	register unsigned long Em_num;
	// register: 18
	// size: 0x244
	register struct _74fake **ppEm;
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
	// register: 21
	register unsigned long DL_max;
	// register: 22
	// size: 0x244
	register struct _74fake *pDLm;
	{
	}
}


// address: 0x8003B9FC
// line start: 1559
// line end:   1618
void pl_mv04_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto unsigned char Pl_rot_spd[3];
	{
		{
		}
	}
}


// address: 0x8003BB8C
// line start: 1621
// line end:   1667
void pl_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x6
	auto short Pl_rot_mot[3];
	// address: 0xFFFFFFE8
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


// address: 0x8003BD6C
// line start: 1672
// line end:   1673
void pl_mv06_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg);

// address: 0x8003BD74
// line start: 1675
// line end:   1719
void pl_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8003BEAC
// line start: 1725
// line end:   1726
void pl_mv07_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg);

// address: 0x8003BEB4
// line start: 1731
// line end:   1929
void pl_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x2
	auto unsigned char pl_mv07_mot[2];
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
		}
	}
}


// address: 0x8003C44C
// line start: 1935
// line end:   2003
void pl_mv08_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	{
	}
}


// address: 0x8003C45C
// line start: 2006
// line end:   2142
void pl_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
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
		}
	}
}


// address: 0x8003C7C8
// line start: 2148
// line end:   2192
void pl_mv09_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	{
	}
}


// address: 0x8003C7D8
// line start: 2196
// line end:   2343
void pl_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	{
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
}


// address: 0x8003CC28
// line start: 2348
// line end:   2363
void pl_mv0a_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	{
	}
}


// address: 0x8003CC98
// line start: 2365
// line end:   2444
void pl_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x6
	auto short Pl_walk_mot[3];
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


// address: 0x8003CF14
// line start: 2450
// line end:   2451
void pl_mv0b_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg);

// address: 0x8003CF1C
// line start: 2453
// line end:   2515
void pl_mv0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x2
	auto unsigned char pl_mv07_mot[2];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
		}
	}
}


// address: 0x8003D0F4
// line start: 2531
// line end:   2536
void Pl_damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003D14C
// line start: 2545
// line end:   2576
void pl_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8003D250
// line start: 2581
// line end:   2614
void pl_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8003D3A0
// line start: 2619
// line end:   2733
void pl_dm02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8003D65C
// line start: 2739
// line end:   2818
void pl_dm03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8003D88C
// line start: 2834
// line end:   2839
void Pl_die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003D8E4
// line start: 2847
// line end:   2875
void pl_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8003D9E4
// line start: 2898
// line end:   2907
void Pl_Em_damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003DA3C
// line start: 2921
// line end:   2930
void Pl_Em_die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003DA94
// line start: 2945
// line end:   2977
void Pl_dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x1C
	register struct _62fake *pKage;
	{
	}
}


// address: 0x8003DB34
// line start: 2993
// line end:   3030
unsigned long Pl_life_down(long Down_life, unsigned long Mode) {
	// register: 4
	// size: 0x244
	register struct _74fake *pPl;
}


// address: 0x8003DC14
// line start: 3040
// line end:   3050
unsigned long Pl_life_up(long Up_life) {
}


