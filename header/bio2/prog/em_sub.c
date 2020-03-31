// D:\Bio2\prog\EM_SUB.C

#include "types.h"

// address: 0x80015684
// line start: 31
// line end:   38
unsigned long Hani_ck(struct _1fake *pV, short *pPxzhw);

// address: 0x800156CC
// line start: 51
// line end:   63
void Add_speedXZ(struct _74fake *pEm, long muki) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80015754
// line start: 75
// line end:   88
void Add_speedXYZ(struct _74fake *pEm, long muki_y, long muki_z) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x800157F8
// line start: 100
// line end:   114
void Add_speedXYZsuper(struct _74fake *pEm, long muki_y, long muki_z) {
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake Tm;
}


// address: 0x800158B0
// line start: 128
// line end:   144
short Direction_ck(short Hontai_x, short Hontai_z, short Target_x, short Target_z) {
	// register: 2
	register short Kakudo;
	// register: 16
	register long XX;
	// register: 4
	register long ZZ;
}


// address: 0x8001595C
// line start: 157
// line end:   183
void Goto00(struct _74fake *pEm, long Vec_x, long Vec_z, short Add_dir) {
	// register: 3
	register short Dir;
}


// address: 0x80015A18
// line start: 187
// line end:   206
long Goto00_ck(struct _74fake *pEm, long Vec_x, long Vec_z, short Add_dir) {
}


// address: 0x80015AA0
// line start: 218
// line end:   240
void Goto01(struct _74fake *pEm, short Dir, short Add_dir) {
}


// address: 0x80015B18
// line start: 244
// line end:   259
long Goto01_ck(struct _74fake *pEm, short Dir, short Add_dir) {
}


// address: 0x80015B5C
// line start: 272
// line end:   287
long Dir_pos_ck(struct _1fake *pV, struct _1fake *pP, short Hed_dir, short Hani_dir) {
	// register: 2
	register unsigned long Rot;
	// register: 2
	register long Dir;
}


// address: 0x80015BD8
// line start: 299
// line end:   312
long L_pos_ckXZ(struct _1fake *pV, struct _1fake *pP, unsigned long Ll) {
	// register: 2
	register unsigned long x;
	// register: 2
	register unsigned long z;
}


// address: 0x80015C38
// line start: 325
// line end:   352
long L_pos_ckXZM(struct _0fake *pM, struct _1fake *pP, unsigned long Ll, struct _2fake *pSv) {
	// register: 4
	register unsigned long x;
	// register: 2
	register unsigned long z;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake V;
}


// address: 0x80015D14
// line start: 363
// line end:   365
unsigned char Cdir_ck(struct _74fake *pEm, struct _74fake *pT);

// address: 0x80015D34
// line start: 375
// line end:   387
unsigned char Cdir_ck2(struct _74fake *pEm, struct _74fake *pT) {
	// register: 3
	register long Dir;
}


// address: 0x80015D90
// line start: 397
// line end:   399
unsigned long Gacha_ch();

// address: 0x80015DA8
// line start: 421
// line end:   480
unsigned long Sikai_ck(struct _74fake *pEm, struct _1fake *pTa, long Han, struct _1fake *pAi) {
	// register: 16
	register long Dir;
	// register: 3
	register unsigned long x;
	// register: 3
	register unsigned long z;
	// register: 16
	register unsigned long L;
	// address: 0xFFFFFF68
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFF70
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFF90
	// size: 0x20
	auto struct _0fake M1;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Sck0;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Sck1;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Tp0;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Tp1;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Tp2;
}


// address: 0x80015F98
// line start: 493
// line end:   516
void Set_base_pos(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long R_flg) {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake m;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake sv;
	// register: 16
	// size: 0x244
	register struct _74fake *pPm;
}


// address: 0x800160BC
// line start: 529
// line end:   546
void Null_pos_set(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long R_flg) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake m;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake sv;
}


// address: 0x800161B4
// line start: 559
// line end:   608
void get_null_pos(struct _2fake *pSv, unsigned long R_flg, unsigned long Kan, unsigned long Seq) {
	// register: 5
	register unsigned long *pData_ptr;
	// register: 8
	register unsigned long *pSeq_ptr;
	// register: 3
	register unsigned long no;
	// register: 8
	register unsigned long f_num;
	// register: 9
	// size: 0x244
	register struct _74fake *pEm;
}


// address: 0x80016280
// line start: 623
// line end:   692
void Spd_get(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long R_flg) {
	// register: 4
	register unsigned long *pData_ptr;
	// register: 2
	register unsigned long *pSeq_ptr;
	// register: 6
	register unsigned long *pSeq_t_ptr;
	// register: 4
	register unsigned long f_num;
	// register: 9
	register short Spd_x;
	// register: 10
	register short Spd_y;
	// register: 11
	register short Spd_z;
}


// address: 0x800163EC
// line start: 704
// line end:   714
unsigned char Rnd() {
	// register: 2
	// size: 0x2
	register // size: 0x2
		union {
			unsigned short l;
			// offset: 0000 (2 bytes)
			struct byte_lh hi;
		} Work0;
}


// address: 0x8001642C
// line start: 720
// line end:   732
void Em_seq_sound(struct _74fake *pEm) {
	// register: 4
	register unsigned long Seq;
}


// address: 0x8001646C
// line start: 895
// line end:   903
int move_kuchi();

// address: 0x80016514
// line start: 911
// line end:   957
void Tex_Ani_move(struct _100fake *T_data, struct _99fake *T_seq, struct _48fake *Prim, unsigned char *Set_timer, unsigned char *Set_seq_no) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _16fake Rect;
	// register: 2
	register unsigned long Tbl_no;
	// register: 8
	register unsigned long Tpage;
	// register: 9
	register unsigned long Off_v;
	// register: 7
	// size: 0x8
	register struct _100fake *Td;
}


// address: 0x800166AC
// line start: 969
// line end:   997
void Foot_set_pl(struct _74fake *pEm, unsigned long Mode, unsigned long Foot_no) {
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
	// register: 2
	register long x;
	// register: 2
	register long z;
}


// address: 0x800167E8
// line start: 1014
// line end:   1044
void Kage_work_init() {
	// register: 18
	// size: 0x68
	register struct _61fake *pK;
	// register: 19
	register unsigned long i;
	{
	}
}


// address: 0x80016908
// line start: 1049
// line end:   1060
void Kage_work9_init() {
	// register: 3
	// size: 0x1C
	register struct _62fake *pK;
	// register: 2
	register unsigned long i;
}


// address: 0x8001692C
// line start: 1099
// line end:   1141
void Kage_work_set(unsigned long *pK, unsigned long Off, unsigned long Half, unsigned long Color, struct _1fake *pPos) {
	// register: 8
	// size: 0x68
	register struct _61fake *pKw;
	// register: 3
	register unsigned long i;
}


// address: 0x800169E8
// line start: 1147
// line end:   1264
void Kage_work9_set(unsigned long *pK, unsigned long Off, unsigned long Half, unsigned long Color, struct _1fake *pPos) {
	// register: 8
	// size: 0x68
	register struct _61fake *pKw;
	// register: 3
	// size: 0x1C
	register struct _62fake *pKw9;
	// register: 10
	register unsigned long i;
}


// address: 0x80016D60
// line start: 1278
// line end:   1309
void MulKage(struct _61fake *pKw, short Grand, short Dir_y, unsigned long Flg) {
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake Tm;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake P0;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake P1;
}


// address: 0x80016E48
// line start: 1319
// line end:   1401
void Kage_work_sort() {
	// address: 0xFFFFFF60
	// size: 0x20
	auto struct _0fake Tm;
	// address: 0xFFFFFF80
	// size: 0x20
	auto struct _0fake Tm1;
	// address: 0xFFFFFFA0
	// size: 0x8
	auto struct _2fake P0;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake P1;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake P2;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake P3;
	// address: 0xFFFFFFD0
	auto unsigned long otz;
	// register: 23
	register unsigned long *ot;
	// register: 4
	register unsigned long *x0;
	// register: 3
	register unsigned long *x1;
	// register: 2
	register unsigned long *x2;
	// register: 21
	register unsigned long i;
	// register: 18
	// size: 0x68
	register struct _61fake *pKw;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _1fake Tv0;
	// register: 16
	// size: 0x28
	register struct _26fake *pFt4;
	// register: 30
	// size: 0x14
	register struct _75fake *Vc;
	{
	}
}


// address: 0x800170C0
// line start: 1406
// line end:   1526
void Kage_work9_sort() {
	// address: 0xFFFFFF38
	// size: 0x20
	auto struct _0fake Tm;
	// address: 0xFFFFFF58
	// size: 0x20
	auto struct _0fake Tm1;
	// address: 0xFFFFFF78
	// size: 0x8
	auto struct _2fake P0;
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct _2fake P1;
	// address: 0xFFFFFF88
	// size: 0x8
	auto struct _2fake P2;
	// address: 0xFFFFFF90
	// size: 0x8
	auto struct _2fake P3;
	// register: 7
	register short Half_x;
	// register: 19
	register long x0;
	// register: 18
	register long x1;
	// register: 17
	register long x2;
	// register: 20
	register long x3;
	// register: 11
	register long z0;
	// register: 30
	register long z1;
	// register: 23
	register long z2;
	// register: 12
	register long z3;
	// register: 4
	register unsigned long otz;
	// address: 0xFFFFFFA8
	auto unsigned long p;
	// address: 0xFFFFFFB0
	auto unsigned long *ot;
	// address: 0xFFFFFFB8
	auto unsigned long i;
	// register: 22
	register unsigned long j;
	// register: 2
	// size: 0x1C
	register struct _62fake *pKw;
	// address: 0xFFFFFF98
	// size: 0x10
	auto struct _1fake Tv0;
	// register: 8
	// size: 0x68
	register struct _61fake *pK;
	// register: 16
	// size: 0x28
	register struct _26fake *pFt4;
	{
	}
}


// address: 0x80017480
// line start: 1530
// line end:   1540
void Kage_work_color_set(unsigned long *pK, unsigned long Color) {
}


// address: 0x800174A8
// line start: 1543
// line end:   1561
void Kage_work9_color_set(unsigned long *pK, unsigned long Color) {
	// register: 2
	// size: 0x68
	register struct _61fake *pKw;
	// register: 6
	register unsigned char i;
}


// address: 0x800174F0
// line start: 1572
// line end:   1625
void Texture_Move(struct _60fake *pMw, unsigned short tex_page, unsigned long mvmu, short clut_plus) {
	// register: 3
	// size: 0x28
	register struct _29fake *gt3;
	// register: 12
	// size: 0x34
	register struct _30fake *gt4;
	// register: 9
	register unsigned long i;
	// register: 2
	register unsigned long *pT_head;
}


// address: 0x8001766C
// line start: 1632
// line end:   1677
void Texture_Move_GT3(struct _60fake *pMw, unsigned short tex_page, unsigned long mvmu, short clut_plus, unsigned char *pPoly_no) {
	// register: 12
	// size: 0x28
	register struct _29fake *gt3;
	// register: 2
	// size: 0x28
	register struct _29fake *pP;
	// register: 9
	register unsigned long i;
}


// address: 0x80017794
// line start: 1681
// line end:   1732
void Texture_Move_GT4(struct _60fake *pMw, unsigned short tex_page, unsigned long mvmu, short clut_plus, unsigned char *pPoly_no) {
	// register: 12
	// size: 0x34
	register struct _30fake *gt4;
	// register: 2
	// size: 0x34
	register struct _30fake *pP;
	// register: 9
	register unsigned long i;
}


// address: 0x800178F8
// line start: 1738
// line end:   1784
void Texture_Move_GT4_up(struct _60fake *pMw, long Late, unsigned long Ouv, unsigned char *pPoly_no) {
	// register: 25
	// size: 0x34
	register struct _30fake *gt4;
	// register: 3
	// size: 0x34
	register struct _30fake *pP;
	// register: 15
	register unsigned long i;
	// register: 7
	register unsigned long Ov;
	// register: 6
	register unsigned long Ou;
	// register: 14
	register unsigned long Ovm;
	// register: 13
	register unsigned long Oum;
}


// address: 0x80017C5C
// line start: 1804
// line end:   1991
void Rot_neck(struct _74fake *pPm, short Cdir_y) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 8
	// size: 0xAC
	register struct _65fake *pEm_p_ptr;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Rot;
	// register: 5
	register short Add_dir;
	// register: 4
	register short Hani;
	// register: 20
	register short *pNow_rot;
	// register: 18
	register short Sin_y;
	// register: 20
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake V_point;
}


// address: 0x80018234
// line start: 1997
// line end:   2071
void Rot_neck_em(struct _74fake *pPm, short Cdir_y) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 3
	// size: 0xAC
	register struct _65fake *pEm_p_ptr;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Rot;
	// register: 6
	register short Add_dir;
	// register: 4
	register short Hani;
	// register: 20
	register short Sin_y;
	// register: 18
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake V_point;
}


// address: 0x80018478
// line start: 2077
// line end:   2152
void Rot_neck_em_n(struct _74fake *pPm, short Cdir_y, short *pDir) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 3
	// size: 0xAC
	register struct _65fake *pEm_p_ptr;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Rot;
	// register: 6
	register short Add_dir;
	// register: 4
	register short Hani;
	// register: 21
	register short Sin_y;
	// register: 19
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake V_point;
}


// address: 0x800186A8
// line start: 2164
// line end:   2204
unsigned long Neck_Dir_ZY(struct _1fake *pSv0, struct _1fake *pSv1, struct _2fake *pRot, short Front_dir_y) {
	// register: 18
	register long F2;
	// register: 17
	register long x;
	// register: 19
	register long y;
	// register: 16
	register long z;
}


// address: 0x80018814
// line start: 2214
// line end:   2235
void Op_PartsSort00(struct _74fake *pEm) {
	// address: 0xFFFFFF68
	// size: 0x20
	auto struct _0fake m_ls;
	// address: 0xFFFFFF88
	// size: 0x20
	auto struct _0fake m_w;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto struct _0fake tmp_m;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake s_newpos;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake j_newpos;
}


// address: 0x800188E8
// line start: 2240
// line end:   2284
void Op_PartsSort05(struct _74fake *pEm) {
	// address: 0xFFFFFF58
	// size: 0x20
	auto struct _0fake m_ls;
	// address: 0xFFFFFF78
	// size: 0x20
	auto struct _0fake m_w;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake tmp_m;
	// register: 23
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 19
	// size: 0xAC
	register struct _65fake *o_ptr;
	// address: 0xFFFFFFB8
	// size: 0x10
	auto struct _1fake s_newpos;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake j_newpos;
	// register: 17
	register short rot_y;
}


// address: 0x80018AE4
// line start: 2288
// line end:   2315
void Op_PartsSort06(struct _74fake *pEm) {
	// address: 0xFFFFFF68
	// size: 0x20
	auto struct _0fake m_ls;
	// address: 0xFFFFFF88
	// size: 0x20
	auto struct _0fake m_w;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto struct _0fake tmp_m;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake s_newpos;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake j_newpos;
}


// address: 0x80018BC4
// line start: 2323
// line end:   2533
void Kami_rot05(struct _65fake *pP_ptr, struct _0fake *opw, short jyu, short mg, int ow, int air_u, int z_under, int jyu_x, int mg_x, int ow_x, int air_u_x, int x_under, int now_y) {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake *Wm;
	// address: 0xFFFFFEF0
	// size: 0x20
	auto struct _0fake work_m;
	// address: 0xFFFFFF10
	// size: 0x8
	auto struct _2fake work_sv;
	// address: 0xFFFFFF18
	// size: 0x10
	auto struct _1fake j_newpos;
	// address: 0xFFFFFF28
	// size: 0x10
	auto struct _1fake j_newpos_x;
	// address: 0xFFFFFF38
	// size: 0x10
	auto struct _1fake work_v;
	// register: 17
	register short new_z;
	// register: 16
	register short new_x;
	// address: 0xFFFFFF48
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFF68
	// size: 0x20
	auto struct _0fake M1;
}


// address: 0x80019164
// line start: 2538
// line end:   2558
short W_rot(short rxz, short ry) {
	// register: 4
	register long x;
	// register: 16
	register long y;
	// register: 2
	register short rot;
}


// address: 0x80019200
// line start: 2561
// line end:   2581
short W_rot_x(short rxz, short ry) {
	// register: 4
	register long x;
	// register: 16
	register long y;
	// register: 2
	register short rot;
}


// address: 0x800192A4
// line start: 2597
// line end:   2649
void Rbj_set() {
	// register: 11
	register unsigned char i;
	// register: 6
	register unsigned char j;
	// register: 8
	register unsigned long Top_p;
	// register: 9
	register unsigned long *Head;
	// register: 3
	register unsigned long *H;
	// register: 5
	register unsigned long Bit;
}


// address: 0x80019394
// line start: 2655
// line end:   2661
void Em_dead_flg_on(struct _74fake *pEm) {
	{
		{
		}
	}
}


// address: 0x800193E4
// line start: 2944
// line end:   2951
unsigned long Aida_Jh_init(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x80019480
// line start: 2959
// line end:   3019
void Aida_Jh_move(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 17
	// size: 0xAC
	register struct _65fake *pTmp;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M;
	{
		{
		}
	}
}


// address: 0x800197C0
// line start: 3101
// line end:   3103
unsigned long Kg_Jh_init(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x800197F0
// line start: 3108
// line end:   3119
void Kg_Jh_move(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80019840
// line start: 3127
// line end:   3220
unsigned long Jh_set(struct _74fake *pEm, struct _65fake *pH_parts, struct _102fake *pJhh, unsigned long Mem_top) {
	// register: 13
	register unsigned long *pTmd;
	// register: 9
	register unsigned long i;
	// register: 12
	register unsigned long Num;
	// register: 5
	// size: 0x8
	register struct _2fake *pSv0;
	// register: 8
	// size: 0x8
	register struct _2fake *pSv1;
	// register: 11
	// size: 0x8
	register struct _2fake *pOff;
	// register: 4
	// size: 0x4
	register struct _101fake *pJt;
}


// address: 0x80019A0C
// line start: 3223
// line end:   3384
void MulJh(struct _74fake *pEm, struct _65fake *pH_parts, struct _102fake *pJhh) {
	// register: 9
	// size: 0x20
	register struct _0fake *pWm;
	// register: 11
	register unsigned long i;
	// register: 16
	register unsigned long j;
	// register: 3
	register unsigned long no;
	// register: 17
	register unsigned long *pTmd;
	// register: 4
	register unsigned long Per;
	// register: 2
	register unsigned long Per2;
	// register: 10
	// size: 0x8
	register struct _2fake *pSv0;
	// register: 7
	// size: 0x8
	register struct _2fake *pSv1;
	// register: 15
	// size: 0x8
	register struct _2fake *pSv2;
	// register: 8
	// size: 0x8
	register struct _2fake *pSv3;
	// register: 9
	// size: 0x8
	register struct _2fake *pSv4;
	// register: 24
	// size: 0x8
	register struct _2fake *pSv5;
	// register: 5
	// size: 0x8
	register struct _2fake *pTmp;
	// register: 6
	// size: 0x4
	register struct _101fake *pJt;
	// register: 25
	register long vx;
	// register: 24
	register long vy;
	// register: 9
	register long vz;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Tmp;
}


// address: 0x80019E00
// line start: 3387
// line end:   3429
void Aida_Jh_sort(struct _74fake *pEm) {
	// register: 16
	// size: 0x34
	register struct _30fake *p4;
	// register: 17
	register unsigned long *tmd2;
	// register: 19
	register unsigned long rgb;
	// register: 18
	register unsigned long Att;
	// register: 8
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M1;
}


// address: 0x80019F94
// line start: 3432
// line end:   3527
void Jh_sort(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// register: 16
	// size: 0x34
	register struct _30fake *p4;
	// register: 17
	register unsigned long *tmd2;
	// register: 19
	register unsigned long rgb;
	// register: 18
	register unsigned long Att;
	// address: 0xFFFFFEF0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFF10
	// size: 0x20
	auto struct _0fake M1;
	// address: 0xFFFFFF30
	// size: 0x20
	auto struct _0fake M2;
	// address: 0xFFFFFF50
	// size: 0x20
	auto struct _0fake M3;
	// address: 0xFFFFFF70
	// size: 0x20
	auto struct _0fake M4;
	// address: 0xFFFFFF90
	// size: 0x20
	auto struct _0fake M5;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M6;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake V;
}


