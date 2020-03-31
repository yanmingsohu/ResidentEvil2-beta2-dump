// D:\Bio2\prog\EM2B_SUB.C

#include "types.h"

// address: 0x80100108
// line start: 41
// line end:   75
void Em2b_parts_fly_init(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 17
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 19
	register unsigned long i;
	{
	}
}


// address: 0x8010024C
// line start: 80
// line end:   158
void Em2b_parts_fly_move(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 20
	register unsigned long i;
	{
	}
}


// address: 0x801005AC
// line start: 163
// line end:   178
void Em2b_parts_smoke(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 4
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 18
	register unsigned long i;
	{
	}
}


// address: 0x80100668
// line start: 183
// line end:   205
void Em2b_parts_fly_end(struct _74fake *pEm, short x, short z) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 17
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Vec;
	// register: 20
	register unsigned long i;
	{
	}
}


// address: 0x80100790
// line start: 211
// line end:   287
unsigned long Em2b_att_ck2(struct _74fake *pEm, unsigned long Parts_no, unsigned short Start, unsigned short End, unsigned long At_dis, unsigned long At_w) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	register unsigned long Dis;
	// register: 17
	register long Dir0;
	// register: 16
	register long Dir1;
	// register: 2
	register long Dir2;
	// register: 16
	register short Old_x;
	// register: 17
	register short Old_z;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x801009EC
// line start: 292
// line end:   301
long Get_dir_pl(struct _74fake *pEm) {
	// register: 3
	register short Dir;
}


// address: 0x80100A58
// line start: 306
// line end:   321
void Set_tri(struct _2fake *pP1, struct _2fake *pP2, struct _2fake *pP3) {
	// address: 0x80104550
	// size: 0x28
	static struct _23fake Tri[2];
	// register: 16
	// size: 0x14
	register struct _23fake *pTri;
	// address: 0xFFFFFFE0
	auto long p;
	// address: 0xFFFFFFE4
	auto long flg;
}


// address: 0x80100B08
// line start: 333
// line end:   355
void Foot_set(struct _74fake *pEm, unsigned long Foot_no) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80100BF8
// line start: 360
// line end:   367
unsigned long Em2b_add_dm(unsigned long Att) {
}


// address: 0x80100C30
// line start: 378
// line end:   422
void Breast_move(struct _74fake *pEm) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0x80104964
	static unsigned long Time;
	{
	}
}


// address: 0x80100E1C
// line start: 432
// line end:   446
unsigned long S_rnd(unsigned char N, unsigned long *pBuf, unsigned long *pBuf2) {
	// register: 3
	register long Ck;
}


// address: 0x80100EA8
// line start: 451
// line end:   460
void Set_esp_w(struct _74fake *pEm, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Cdir_y, unsigned long Parts_no, struct _2fake *pSvec) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80100F84
// line start: 465
// line end:   469
void Set_esp_s(struct _74fake *pEm, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Cdir_y, unsigned long Parts_no, struct _2fake *pSvec) {
	// register: 6
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x80100FE4
// line start: 480
// line end:   508
void Dm_eff_blood(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Atr) {
	// register: 8
	// size: 0xC
	register struct _107fake *pEsp;
	// register: 19
	register unsigned long Ofs;
	// register: 18
	register unsigned long Mask;
	// register: 3
	register unsigned long i;
	{
	}
}


// address: 0x80101184
// line start: 568
// line end:   591
void Dm_eff_0f(struct _74fake *pEm) {
	// address: 0x80104968
	static int Damage_no;
	// address: 0x8010496C
	static int Damage_old;
}


// address: 0x801012AC
// line start: 593
// line end:   601
void Pl_dm_set(struct _74fake *pEm) {
}


// address: 0x80101300
// line start: 603
// line end:   627
long Pl_dm_set_push(struct _74fake *pEm, short Old_x, short Old_z, unsigned long Parts_no) {
	// register: 17
	// size: 0x244
	register struct _74fake *pPl;
}


// address: 0x801013B0
// line start: 660
// line end:   688
void Dm_eff_spark(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0x80104970
	// size: 0xC
	static struct _108fake *pEsp2;
	{
	}
}


// address: 0x801014DC
// line start: 716
// line end:   725
void Set_flame(struct _74fake *pEm) {
	// register: 16
	register unsigned long i;
	// register: 7
	// size: 0xC
	register struct _107fake *pEsp;
	// register: 19
	// size: 0xAC
	register struct _65fake *pParts;
	{
	}
}


// address: 0x8010158C
// line start: 730
// line end:   741
void Em_explosion_set(struct _74fake *pEm, unsigned long Parts_no) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x801015F4
// line start: 747
// line end:   753
void Bomb_tbl_set() {
	// register: 5
	register unsigned long i;
}


// address: 0x8010162C
// line start: 759
// line end:   765
void Bomb_tbl_reset() {
	// register: 5
	register unsigned long i;
}


// address: 0x8010167C
// line start: 769
// line end:   773
void Color_chg(struct _74fake *pEm, unsigned long Num, unsigned long r, unsigned long g, unsigned long b) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x801016CC
// line start: 778
// line end:   793
void Pl_launcher_set(struct _74fake *pEm, unsigned long Dis) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80101768
// line start: 798
// line end:   809
void Add_spdXZ(struct _74fake *pEm, long Dir) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010D108
// line start: 41
// line end:   75
void Em2b_parts_fly_init_addr_8010D108(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 17
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 19
	register unsigned long i;
	{
	}
}


// address: 0x8010D24C
// line start: 80
// line end:   158
void Em2b_parts_fly_move_addr_8010D24C(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 20
	register unsigned long i;
	{
	}
}


// address: 0x8010D5AC
// line start: 163
// line end:   178
void Em2b_parts_smoke_addr_8010D5AC(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 4
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 18
	register unsigned long i;
	{
	}
}


// address: 0x8010D668
// line start: 183
// line end:   205
void Em2b_parts_fly_end_addr_8010D668(struct _74fake *pEm, short x, short z) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 17
	// size: 0x14
	register struct _110fake *pP_fly;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Vec;
	// register: 20
	register unsigned long i;
	{
	}
}


// address: 0x8010D790
// line start: 211
// line end:   287
unsigned long Em2b_att_ck2_addr_8010D790(struct _74fake *pEm, unsigned long Parts_no, unsigned short Start, unsigned short End, unsigned long At_dis, unsigned long At_w) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	register unsigned long Dis;
	// register: 17
	register long Dir0;
	// register: 16
	register long Dir1;
	// register: 2
	register long Dir2;
	// register: 16
	register short Old_x;
	// register: 17
	register short Old_z;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	{
	}
}


// address: 0x8010D9EC
// line start: 292
// line end:   301
long Get_dir_pl_addr_8010D9EC(struct _74fake *pEm) {
	// register: 3
	register short Dir;
}


// address: 0x8010DA58
// line start: 306
// line end:   321
void Set_tri_addr_8010DA58(struct _2fake *pP1, struct _2fake *pP2, struct _2fake *pP3) {
	// address: 0x80111550
	// size: 0x28
	static struct _23fake Tri[2];
	// register: 16
	// size: 0x14
	register struct _23fake *pTri;
	// address: 0xFFFFFFE0
	auto long p;
	// address: 0xFFFFFFE4
	auto long flg;
}


// address: 0x8010DB08
// line start: 333
// line end:   355
void Foot_set_addr_8010DB08(struct _74fake *pEm, unsigned long Foot_no) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010DBF8
// line start: 360
// line end:   367
unsigned long Em2b_add_dm_addr_8010DBF8(unsigned long Att) {
}


// address: 0x8010DC30
// line start: 378
// line end:   422
void Breast_move_addr_8010DC30(struct _74fake *pEm) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0x80111964
	static unsigned long Time;
	{
	}
}


// address: 0x8010DE1C
// line start: 432
// line end:   446
unsigned long S_rnd_addr_8010DE1C(unsigned char N, unsigned long *pBuf, unsigned long *pBuf2) {
	// register: 3
	register long Ck;
}


// address: 0x8010DEA8
// line start: 451
// line end:   460
void Set_esp_w_addr_8010DEA8(struct _74fake *pEm, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Cdir_y, unsigned long Parts_no, struct _2fake *pSvec) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pParts;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x8010DF84
// line start: 465
// line end:   469
void Set_esp_s_addr_8010DF84(struct _74fake *pEm, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Cdir_y, unsigned long Parts_no, struct _2fake *pSvec) {
	// register: 6
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x8010DFE4
// line start: 480
// line end:   508
void Dm_eff_blood_addr_8010DFE4(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Atr) {
	// register: 8
	// size: 0xC
	register struct _107fake *pEsp;
	// register: 19
	register unsigned long Ofs;
	// register: 18
	register unsigned long Mask;
	// register: 3
	register unsigned long i;
	{
	}
}


// address: 0x8010E184
// line start: 568
// line end:   591
void Dm_eff_0f_addr_8010E184(struct _74fake *pEm) {
	// address: 0x80111968
	static int Damage_no;
	// address: 0x8011196C
	static int Damage_old;
}


// address: 0x8010E2AC
// line start: 593
// line end:   601
void Pl_dm_set_addr_8010E2AC(struct _74fake *pEm) {
}


// address: 0x8010E300
// line start: 603
// line end:   627
long Pl_dm_set_push_addr_8010E300(struct _74fake *pEm, short Old_x, short Old_z, unsigned long Parts_no) {
	// register: 17
	// size: 0x244
	register struct _74fake *pPl;
}


// address: 0x8010E3B0
// line start: 660
// line end:   688
void Dm_eff_spark_addr_8010E3B0(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0x80111970
	// size: 0xC
	static struct _108fake *pEsp2;
	{
	}
}


// address: 0x8010E4DC
// line start: 716
// line end:   725
void Set_flame_addr_8010E4DC(struct _74fake *pEm) {
	// register: 16
	register unsigned long i;
	// register: 7
	// size: 0xC
	register struct _107fake *pEsp;
	// register: 19
	// size: 0xAC
	register struct _65fake *pParts;
	{
	}
}


// address: 0x8010E58C
// line start: 730
// line end:   741
void Em_explosion_set_addr_8010E58C(struct _74fake *pEm, unsigned long Parts_no) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010E5F4
// line start: 747
// line end:   753
void Bomb_tbl_set_addr_8010E5F4() {
	// register: 5
	register unsigned long i;
}


// address: 0x8010E62C
// line start: 759
// line end:   765
void Bomb_tbl_reset_addr_8010E62C() {
	// register: 5
	register unsigned long i;
}


// address: 0x8010E67C
// line start: 769
// line end:   773
void Color_chg_addr_8010E67C(struct _74fake *pEm, unsigned long Num, unsigned long r, unsigned long g, unsigned long b) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pParts;
}


// address: 0x8010E6CC
// line start: 778
// line end:   793
void Pl_launcher_set_addr_8010E6CC(struct _74fake *pEm, unsigned long Dis) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x8010E768
// line start: 798
// line end:   809
void Add_spdXZ_addr_8010E768(struct _74fake *pEm, long Dir) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


