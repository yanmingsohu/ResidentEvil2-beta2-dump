// D:\Bio2\prog\SCA.C

#include "types.h"

// address: 0x80048620
// line start: 73
// line end:   80
unsigned long Sca_get_area(long X, long Z, long Sx, long Sz) {
	// register: 2
	register unsigned long Fbit;
}


// address: 0x80048644
// line start: 100
// line end:   265
unsigned long Sca_ck_hit(struct _1fake *pPos, long R, unsigned long Floor, unsigned long Flg) {
	// address: 0x800B6758
	static short Hit_flg;
	// address: 0x800B675C
	// size: 0x10
	static struct _57fake **pSca_data;
	// address: 0x800B6760
	static long Old_x;
	// address: 0x800B6764
	static long Old_z;
	// register: 16
	// size: 0x10
	register struct _57fake *pT_xz;
	// register: 23
	// size: 0x10
	register struct _57fake *pT_xz_end;
	// register: 19
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFFD0
	auto unsigned long Att;
	// register: 30
	register unsigned long Area;
	// register: 20
	register long Pos_x;
	// register: 18
	register long Pos_z;
	// address: 0x800486F8
	bool loop2;
	{
		// register: 2
		// size: 0x8728
		register struct _97fake *pG;
		{
			// register: 4
			register short sc_dirY;
			{
				// register: 6
				register long Dif;
			}
		}
	}
}


// address: 0x80048AE0
// line start: 280
// line end:   362
unsigned long Sca_ck_hit_om(struct _71fake *pOm, unsigned long Att, unsigned long Flg) {
	// address: 0x800B6768
	static short Hit_flg;
	// register: 17
	// size: 0x10
	register struct _57fake *pT_xz;
	// register: 22
	// size: 0x10
	register struct _57fake *pT_xz_end;
	// register: 20
	register long Rx;
	// register: 19
	register long Rz;
	// register: 23
	register unsigned long Floor;
	// address: 0xFFFFFFD0
	auto unsigned short Area;
	// register: 21
	register long Pos_x;
	// register: 16
	register long Pos_z;
	// address: 0x80048BA4
	bool loop2;
	{
	}
}


// address: 0x80048CE0
// line start: 376
// line end:   392
unsigned long Sca_hit_box2(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 9
	register long Tmp_x;
	// register: 7
	register long Tmp_z;
	// register: 3
	register long Tmp;
}


// address: 0x80048D88
// line start: 407
// line end:   447
unsigned long Sca_hit_box(struct _74fake *pEm, long R, struct _57fake *pScd) {
	// register: 4
	register long Dx;
	// register: 5
	register long Dz;
	// register: 10
	register long Wx;
	// register: 9
	register long Wz;
	// register: 2
	register long Cx;
	// register: 2
	register long Cz;
	// register: 8
	register unsigned long Old_flg;
	// register: 5
	register long Dold;
}


// address: 0x80048EF0
// line start: 448
// line end:   491
unsigned long Sca_hosei_box(struct _74fake *pEm, struct _2fake *pOld, long X, long Z) {
	// register: 4
	register unsigned long Pm;
	// address: 0x80048F9C
	bool sai;
	// address: 0x80049038
	bool old;
}


// address: 0x80049058
// line start: 506
// line end:   577
unsigned long Sca_hit_naname_a(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 6
	register long ZZ;
	// register: 4
	register long X1;
	// register: 5
	register long X0;
	// register: 3
	register long Y1;
	// register: 10
	register long Y0;
	// register: 2
	register long Tmp;
	// register: 16
	register long Pos_x;
	// register: 18
	register long Pos_z;
	// address: 0x80049400
	bool old2;
}


// address: 0x80049450
// line start: 592
// line end:   599
unsigned long Sca_ck_naname_a(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
}


// address: 0x800494D0
// line start: 614
// line end:   686
unsigned long Sca_hit_naname_b(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 5
	register long ZZ;
	// register: 3
	register long X1;
	// register: 6
	register long X0;
	// register: 4
	register long Y1;
	// register: 12
	register long Y0;
	// register: 2
	register long Tmp;
	// register: 15
	register long Pos_x;
	// register: 24
	register long Pos_z;
	// address: 0x800498A8
	bool old2;
}


// address: 0x800498F8
// line start: 701
// line end:   708
unsigned long Sca_ck_naname_b(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
}


// address: 0x8004997C
// line start: 723
// line end:   799
unsigned long Sca_hit_naname_c(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 5
	register long ZZ;
	// register: 2
	register long Tmp;
	// register: 3
	register long X1;
	// register: 6
	register long X0;
	// register: 4
	register long Y1;
	// register: 11
	register long Y0;
	// register: 15
	register long Pos_x;
	// register: 25
	register long Pos_z;
	// address: 0x80049D54
	bool old2;
}


// address: 0x80049DA4
// line start: 814
// line end:   821
unsigned long Sca_ck_naname_c(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
}


// address: 0x80049E18
// line start: 836
// line end:   909
unsigned long Sca_hit_naname_d(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 5
	register long ZZ;
	// register: 3
	register long X1;
	// register: 6
	register long X0;
	// register: 4
	register long Y1;
	// register: 12
	register long Y0;
	// register: 2
	register long Tmp;
	// register: 24
	register long Pos_x;
	// register: 25
	register long Pos_z;
	// address: 0x8004A1F0
	bool old2;
}


// address: 0x8004A240
// line start: 924
// line end:   931
unsigned long Sca_ck_naname_d(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
}


// address: 0x8004A2BC
// line start: 945
// line end:   1099
unsigned long Sca_hit_hishi(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 7
	register long ZZ;
	// register: 3
	register long XX;
	// register: 2
	register long Tmp;
	// register: 5
	register long Tmp_x;
	// register: 9
	register long Tmp_z;
	// register: 3
	register long X1;
	// register: 8
	register long X0;
	// register: 3
	register long Y1;
	// register: 9
	register long Y0;
	// address: 0x8004AE38
	bool old;
}


// address: 0x8004AE6C
// line start: 1113
// line end:   1155
unsigned long Sca_ck_hishi(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
	// register: 4
	register long ZZ;
}


// address: 0x8004B0A8
// line start: 1169
// line end:   1201
unsigned long Sca_hit_circle(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 18
	register long x;
	// register: 17
	register long z;
	// register: 16
	register long r;
	// register: 3
	register long r1;
	// register: 3
	register long r2;
}


// address: 0x8004B1DC
// line start: 1215
// line end:   1230
unsigned long Sca_ck_circle(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 16
	register long r;
	// register: 16
	register long r1;
}


// address: 0x8004B248
// line start: 1245
// line end:   1281
unsigned long Sca_hit_koban_x(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 6
	register unsigned long Id;
}


// address: 0x8004B364
// line start: 1294
// line end:   1327
unsigned long Sca_ck_koban_x(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
	// register: 6
	register unsigned long Id;
}


// address: 0x8004B49C
// line start: 1340
// line end:   1379
unsigned long Sca_hit_koban_z(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 7
	register unsigned long Id;
}


// address: 0x8004B5D4
// line start: 1392
// line end:   1428
unsigned long Sca_ck_koban_z(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
	// register: 7
	register unsigned long Id;
}


// address: 0x8004B704
// line start: 1447
// line end:   1511
unsigned long Sca_hit_slope(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
}


// address: 0x8004B8FC
// line start: 1531
// line end:   1601
unsigned long Sca_hit_stairs(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 16
	register unsigned long Diff_floor;
	// register: 19
	register unsigned long Stairs;
}


// address: 0x8004BB58
// line start: 1614
// line end:   1640
unsigned long Sca_hit_curve(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 19
	register long z;
	// register: 18
	register long y;
	// register: 16
	register long r;
	// register: 3
	register long r2;
	// register: 3
	register long Z;
}


// address: 0x8004BD18
// line start: 1653
// line end:   1673
long Sca_get_slope_high(long Pos_x, long Pos_z, long R, struct _57fake *pT_xz) {
	// register: 6
	register long Pos_y;
}


// address: 0x8004BE88
// line start: 1686
// line end:   1706
long Sca_get_stairs_high(struct _1fake *pPos, long Low_y, long High_y, struct _57fake *pT_xz) {
	// register: 8
	register long Pos_y;
}


// address: 0x8004BF98
// line start: 1718
// line end:   1727
long Sca_get_curve_high(struct _1fake *pPos, long Low_y, long High_y, struct _57fake *pT_xz) {
	// register: 2
	register long Z;
	// register: 16
	register long R;
}


// address: 0x8004C000
// line start: 1749
// line end:   1914
long Sca_get_ground(struct _1fake *pPos, long R, unsigned long Att, unsigned long Flg) {
	// address: 0x800B676C
	static short Gnd_y;
	// register: 18
	// size: 0x10
	register struct _57fake *pT_xz;
	// register: 23
	// size: 0x10
	register struct _57fake *pT_xz_end;
	// register: 30
	register unsigned long Area;
	// register: 22
	register long Pos_x;
	// register: 21
	register long Pos_z;
	// register: 16
	register long High_y;
	// register: 17
	register long Low_y;
	// register: 4
	register long Tmp_floor;
	// address: 0x8004C1D4
	bool loop2;
	// address: 0x8004C410
	bool normal;
	// address: 0x8004C434
	bool ground;
	// address: 0x8004C4BC
	bool ceiling;
	{
		// register: 16
		// size: 0x1F8
		register struct _71fake *pOm;
		{
		}
	}
}


// address: 0x8004C570
// line start: 1939
// line end:   1952
unsigned short Sca_get_dir(struct _1fake *pPos, struct _57fake *pT_xz) {
	// register: 6
	register unsigned long Flg;
}


// address: 0x8004C61C
// line start: 1954
// line end:   1992
long Sca_get_dir_super(struct _1fake *pPos, struct _57fake *pSca_dat, struct _0fake *pSuper, unsigned long Flg) {
	// register: 23
	register long X;
	// register: 19
	register long Y;
	// register: 22
	register long Z;
	// register: 21
	register long W;
	// register: 20
	register long H;
	// register: 16
	register long D;
}


// address: 0x8004C81C
// line start: 1994
// line end:   2005
unsigned short Sca_get_dir_super_tmp(long X, long Z, long Sx, long Sz, long Sw, long Sd) {
	// register: 4
	register long Dir;
}


// address: 0x8004C8B4
// line start: 2018
// line end:   2026
unsigned long Get_axis(struct _0fake *pM) {
	// register: 2
	register unsigned long Axis;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x8004C93C
// line start: 2028
// line end:   2039
unsigned long Get_axis2(struct _0fake *pM) {
	// register: 3
	register unsigned long Axis;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x8004C9DC
// line start: 2061
// line end:   2072
long Sca_get_pos(long Dir, struct _57fake *pSca_dat);

// address: 0x8004CA5C
// line start: 2074
// line end:   2102
void Sca_get_pos_super(struct _1fake *pPos, struct _57fake *pSca_dat, struct _0fake *pSuper, struct _1fake *pVec) {
	// register: 22
	register long X;
	// register: 19
	register long Y;
	// register: 23
	register long Z;
	// register: 21
	register long W;
	// register: 17
	register long H;
	// register: 16
	register long D;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 3
	register unsigned long Axis;
}


// address: 0x8004CBBC
// line start: 2104
// line end:   2125
unsigned short Sca_get_pos_super_tmp(long X, long Z, long Sx, long Sz, long Sw, long Sd, long *pX, long *pZ) {
	// register: 4
	register long Dir;
}


// address: 0x8004CCB8
// line start: 2142
// line end:   2350
unsigned long Sca_ck_line(struct _1fake *pV1, struct _1fake *pV2, unsigned long Att, unsigned long Flg) {
	// address: 0x800B6770
	static unsigned long In_flg;
	// register: 9
	// size: 0x10
	register struct _57fake *pSca_dat;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _57fake *pSca_dat_end;
	// register: 2
	register long X;
	// register: 2
	register long Z;
	// register: 3
	register long X2;
	// register: 3
	register long Z2;
	// register: 4
	register long Ck_work;
	// address: 0x8004CD0C
	bool loop;
	// address: 0x8004CF60
	bool zy_ck;
	// address: 0x8004D3AC
	bool hit;
	// address: 0x8004D3B0
	bool loop_end;
	{
		// register: 13
		register long Low_y;
		// register: 12
		register long High_y;
		// register: 3
		register long Tmp_floor;
		// address: 0x8004D1C4
		bool xy_ck;
	}
}


// address: 0x8004D3E0
// line start: 2360
// line end:   2361
long Sca_get_high(struct _57fake *pSca_dat);

// address: 0x8004D428
// line start: 2372
// line end:   2380
long Sca_get_low(struct _57fake *pSca_dat) {
	// register: 4
	register long Low;
	// register: 3
	register long Floor;
}


// address: 0x8004D454
// line start: 2395
// line end:   2430
void Sca_search(unsigned long Area, long Att, unsigned long Floor) {
	// register: 3
	// size: 0x10
	register struct _57fake **pSca_data;
	// register: 7
	// size: 0x10
	register struct _57fake *pT_xz;
	// register: 9
	// size: 0x10
	register struct _57fake *pT_xz_end;
	// register: 8
	register unsigned long Hit_num;
	// address: 0x8004D484
	bool loop2;
	// address: 0x8004D4E0
	bool loop_end;
	{
		// register: 3
		// size: 0x8728
		register struct _97fake *pG;
	}
}


