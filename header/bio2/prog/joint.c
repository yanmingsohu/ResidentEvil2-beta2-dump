// D:\Bio2\prog\JOINT.C

#include "types.h"

// address: 0x80026740
// line start: 40
// line end:   107
void Joint_trans2(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// register: 19
	register unsigned char i;
	// address: 0xFFFFFFB8
	// size: 0x10
	auto struct _1fake v;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
	{
	}
}


// address: 0x80026A14
// line start: 123
// line end:   303
void ko_joint_trans2(struct _74fake *pEm, struct _65fake *pP_ptr, unsigned long be_flg, struct _0fake *wm) {
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake m;
	// register: 6
	// size: 0x20
	register struct _0fake *owm;
	// register: 4
	// size: 0x20
	register struct _0fake *pm;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _1fake v;
	// register: 5
	// size: 0x10
	register struct _1fake *v1;
	// register: 30
	register unsigned long rgb;
	// address: 0xFFFFFFD0
	auto unsigned long Att;
	// register: 2
	register unsigned char *c0;
	// register: 4
	register unsigned char *c1;
	// register: 3
	register unsigned char *c2;
	// register: 20
	// size: 0x28
	register struct _29fake *p3;
	// register: 21
	// size: 0x34
	register struct _30fake *p4;
	// register: 22
	// size: 0x1C
	register struct _98fake *tmd;
	// register: 23
	// size: 0x1C
	register struct _98fake *tmd2;
	// register: 2
	// size: 0xAC
	register struct _65fake *pO;
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


// address: 0x800271B8
// line start: 316
// line end:   422
void SortGT3_neo(struct _98fake *pT_head, struct _29fake *bp, unsigned long Cv, unsigned long D0) {
	// register: 6
	// size: 0x8
	register struct _2fake *sp;
	// register: 8
	register short *p_prim;
	// register: 13
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// register: 4
	// size: 0x8
	register struct _2fake *s0;
	// register: 9
	// size: 0x8
	register struct _2fake *s1;
	// register: 7
	// size: 0x8
	register struct _2fake *s2;
	// register: 12
	// size: 0x8
	register struct _2fake *s3;
	// address: 0xFFFFFFF8
	auto long D2;
	// address: 0x80027220
	bool Loop0;
	// address: 0x80027228
	bool Loop1;
}


// address: 0x80027388
// line start: 435
// line end:   547
void SortGT4_neo(struct _98fake *pT_head, struct _30fake *bp, unsigned long Cv, unsigned long D0) {
	// register: 10
	// size: 0x8
	register struct _2fake *sp;
	// register: 8
	register short *p_prim;
	// register: 5
	register unsigned long *ot;
	// register: 2
	register unsigned long *tmp;
	// address: 0xFFFFFFF8
	auto long D2;
	// register: 6
	// size: 0x8
	register struct _2fake *s0;
	// register: 11
	// size: 0x8
	register struct _2fake *s1;
	// register: 7
	// size: 0x8
	register struct _2fake *s2;
	// register: 14
	// size: 0x8
	register struct _2fake *s3;
	// address: 0x800273F4
	bool Loop0;
	// address: 0x800273FC
	bool Loop1;
}


// address: 0x800275BC
// line start: 561
// line end:   654
void ko_joint_trans3(struct _74fake *pEm, struct _65fake *pP_ptr, unsigned long be_flg, struct _0fake *wm) {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake m;
	// register: 4
	// size: 0x20
	register struct _0fake *owm;
	// register: 5
	// size: 0x20
	register struct _0fake *pm;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake v;
	// register: 2
	// size: 0x10
	register struct _1fake *v1;
	// register: 3
	register unsigned char *c0;
	// register: 5
	register unsigned char *c1;
	// register: 4
	register unsigned char *c2;
	// register: 2
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x800278F8
// line start: 665
// line end:   668
unsigned long PartsWork_set(struct _74fake *pEm, unsigned long work_top);

// address: 0x8002793C
// line start: 684
// line end:   789
unsigned long PartsWork_link(struct _74fake *pEm, unsigned long Packet_top, unsigned long *pKan_t_ptr, unsigned long Flg) {
	// register: 20
	register unsigned long parts_num;
	// address: 0xFFFFFFB8
	auto unsigned long joi_num;
	// address: 0xFFFFFFC0
	auto unsigned long parts_no;
	// address: 0xFFFFFFC8
	auto unsigned long *ko_link_ptr;
	// register: 22
	register unsigned long *link_ptr;
	// register: 5
	register unsigned long i;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 30
	// size: 0xAC
	register struct _65fake *oya;
	// register: 21
	// size: 0x1C
	register struct _98fake *t_head;
	// address: 0xFFFFFF38
	// size: 0x74
	auto struct _60fake mw;
	// address: 0xFFFFFFD0
	auto short *data_ptr;
	// register: 6
	register unsigned char *kodata;
	{
	}
}


// address: 0x80027C1C
// line start: 800
// line end:   863
void Init_Parts_work(struct _74fake *pEm) {
	// register: 8
	register unsigned long parts_num;
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF88
	// size: 0x74
	auto struct _60fake mw;
	// register: 9
	register short *data_ptr;
}


// address: 0x80027D68
// line start: 874
// line end:   894
unsigned long Mem_ck_Parts_work(struct _74fake *pEm) {
	// register: 8
	register unsigned long parts_num;
	// register: 6
	register unsigned long Mem;
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80027DD8
// line start: 905
// line end:   931
void Joint_pos_trans(struct _74fake *pEm) {
	// register: 18
	register unsigned char i;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake v;
}


// address: 0x80027E8C
// line start: 935
// line end:   1033
void Parts_down(struct _65fake *pP_ptr, struct _0fake *wm) {
	// address: 0xFFFFFF60
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct _2fake Sv;
	// register: 19
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFF88
	// size: 0x20
	auto struct _0fake M0;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto struct _0fake M1;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M2;
	// register: 16
	register long Ground;
	{
		{
		}
	}
}


// address: 0x80028160
// line start: 1037
// line end:   1068
void Parts_bomb(struct _65fake *pP_ptr) {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv1;
}


// address: 0x80028254
// line start: 1072
// line end:   1112
void Parts_ryu(struct _65fake *pP_ptr);

// address: 0x800282F8
// line start: 1119
// line end:   1159
void HMatrix(struct _0fake *pM0, struct _0fake *pM1, struct _0fake *pM2, unsigned long Late) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv0;
}


// address: 0x800284D0
// line start: 1163
// line end:   1222
void HMatrix1(struct _0fake *pM0, struct _0fake *pM1, struct _0fake *pM2, unsigned long Late) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv0;
}


// address: 0x800287BC
// line start: 1226
// line end:   1265
void Model_color_plus(struct _60fake *pMw, unsigned long Pluscolor_1, unsigned long Pluscolor_2) {
	// register: 3
	// size: 0x28
	register struct _29fake *pGt3;
	// register: 3
	// size: 0x34
	register struct _30fake *pGt4;
	// register: 10
	register unsigned long i;
}


// address: 0x8002894C
// line start: 1280
// line end:   1311
unsigned long Joint_move(struct _74fake *pEm, unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long Late_flg) {
	// register: 6
	register unsigned long *seq_ptr;
	// register: 6
	register unsigned long f_num;
}


// address: 0x800289F0
// line start: 1324
// line end:   1497
unsigned long J_seq(unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long *pSeq_ptr, unsigned long Late_flg) {
	// register: 6
	register unsigned long *data_ptr;
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr1;
	// register: 7
	register unsigned long i;
	// register: 19
	register unsigned long j;
	// register: 11
	register unsigned long hokan;
	// address: 0xFFFFFF88
	// size: 0x10
	auto struct _1fake TV0;
	// register: 20
	register long Pos_y;
	// register: 7
	register unsigned long ck;
	// register: 3
	register unsigned long ck1;
	// register: 5
	register unsigned long ck2;
	// register: 23
	register unsigned long f_num;
	// register: 21
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake M0;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M1;
}


// address: 0x80028FBC
// line start: 1827
// line end:   1972
unsigned long J_seq_hokan(unsigned long kan_t_ptr, unsigned long seq_t_ptr, unsigned long r_flg, short late) {
	// register: 11
	register unsigned long *data_ptr;
	// register: 15
	register unsigned long no;
	// register: 14
	register unsigned long *bdata;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 24
	register unsigned char i;
	// register: 9
	register unsigned long *seq_ptr;
	// register: 10
	register unsigned long *seq_ptr2;
	// register: 17
	register unsigned long f_num;
	// register: 7
	register unsigned long hokan_late;
	// register: 6
	register unsigned long *bseq;
	// register: 4
	register short f_cnt;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake r;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake q;
	// register: 5
	register long Pos_y;
}


// address: 0x80029420
// line start: 1976
// line end:   2069
void rot_data_set02(unsigned long i, struct _65fake *pP_ptr, unsigned long *data_ptr, unsigned long hokan_late) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake w_sv;
}


// address: 0x8002985C
// line start: 2074
// line end:   2187
void rot_data_set03(unsigned long i, struct _65fake *pP_ptr, unsigned long *data_ptr, unsigned long hokan_late, int late) {
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake w_sv;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake w_sv1;
	// address: 0xFFFFFFD0
	auto unsigned char hokan;
}


// address: 0x80029D88
// line start: 2202
// line end:   2233
void hokan_svec(struct _2fake *sv0, struct _2fake *sv1, struct _2fake *sv2, unsigned long late) {
	// register: 10
	register unsigned long ck;
	// register: 3
	register unsigned long ck1;
	// register: 5
	register unsigned long ck2;
}


// address: 0x80029EAC
// line start: 2243
// line end:   2290
void Pl_set_packet2() {
	// register: 17
	register unsigned long Parts_num;
	// register: 8
	register unsigned long Packet;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 19
	register unsigned long *pWep_tmd;
	// register: 20
	register unsigned long *pWep_tmd2;
	// register: 21
	register unsigned long *pWep_packet;
	// register: 22
	register unsigned long *pWep_packet2;
	{
	}
}


// address: 0x80029FF4
// line start: 2292
// line end:   2332
void Pl_set_packet() {
	// register: 19
	register unsigned long Parts_num;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 20
	register unsigned long *pWep_tmd;
	// register: 21
	register unsigned long *pWep_tmd2;
	// register: 22
	register unsigned long *pWep_packet;
	// register: 23
	register unsigned long *pWep_packet2;
	{
	}
}


// address: 0x8002A108
// line start: 2347
// line end:   2561
unsigned long Joint_move_p(struct _100fake *pJp, unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long Late_flg) {
	// register: 16
	register unsigned long *data_ptr;
	// register: 22
	// size: 0xAC
	register struct _65fake *pP_ptr1;
	// register: 19
	register unsigned long i;
	// register: 23
	register unsigned long j;
	// address: 0xFFFFFFB8
	auto unsigned long hokan;
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct _1fake TV0;
	// address: 0xFFFFFFC0
	auto long Pos_y;
	// register: 7
	register unsigned long ck;
	// register: 3
	register unsigned long ck1;
	// register: 5
	register unsigned long ck2;
	// address: 0xFFFFFFC8
	auto unsigned long f_num;
	// register: 3
	// size: 0x244
	register struct _74fake *pEm;
	// register: 2
	register unsigned long *pSeq_ptr;
	// register: 8
	register unsigned long k;
	// register: 20
	register unsigned long Jp_flg;
}


// address: 0x8002A788
// line start: 2576
// line end:   2598
unsigned long Joint_move2(struct _74fake *pEm, unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long Late_flg) {
	// register: 6
	register unsigned long *seq_ptr;
	// register: 6
	register unsigned long f_num;
}


// address: 0x8002A800
// line start: 2611
// line end:   2754
unsigned long J_seq2(unsigned long Kan_t_ptr, unsigned long Seq_t_ptr, unsigned long *pSeq_ptr, unsigned long Late_flg) {
	// register: 6
	register unsigned long *data_ptr;
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr1;
	// register: 7
	register unsigned long i;
	// register: 19
	register unsigned long j;
	// register: 11
	register unsigned long hokan;
	// address: 0xFFFFFF90
	// size: 0x10
	auto struct _1fake TV0;
	// register: 21
	register long Pos_y;
	// register: 22
	register unsigned long f_num;
	// register: 20
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake M0;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M1;
}


