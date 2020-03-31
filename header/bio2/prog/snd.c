// D:\Bio2\prog\SND.C

#include "types.h"

// address: 0x800547CC
// line start: 204
// line end:   239
void Snd_sys_init();

// address: 0x80054868
// line start: 253
// line end:   290
void Snd_sys_init2() {
}


// address: 0x80054988
// line start: 293
// line end:   295
void Snd_sys_Allvoff();

// address: 0x800549A8
// line start: 309
// line end:   347
void Snd_sys_init_sub() {
	// register: 6
	register unsigned long cnt0;
}


// address: 0x80054AAC
// line start: 358
// line end:   375
void Snd_sys_init_sub2() {
	// register: 5
	register unsigned long cnt0;
}


// address: 0x80054B10
// line start: 388
// line end:   402
void Snd_sys_start(unsigned char ck);

// address: 0x80054B90
// line start: 416
// line end:   438
void Snd_sys_stereo(unsigned char sorm) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct _111fake volume;
}


// address: 0x80054C04
// line start: 450
// line end:   604
void Snd_sys_core_set(unsigned char core_type_no, unsigned char sw) {
	// register: 16
	register unsigned long VbSize;
	// register: 17
	register unsigned char *pData;
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


// address: 0x80054ED4
// line start: 617
// line end:   704
void Snd_sys_arms_set(unsigned char arms_type_no) {
	// register: 16
	register unsigned long VbSize;
	// register: 17
	register unsigned char *pData;
	{
		{
		}
	}
}


// address: 0x80055048
// line start: 716
// line end:   793
void Snd_sys_room_set() {
	{
	}
}


// address: 0x800551F0
// line start: 809
// line end:   902
void Snd_sys_enem_set() {
	// register: 20
	register unsigned long snd_buf;
	// register: 21
	register unsigned long enem_type_no;
	// register: 17
	register unsigned char *pData;
	{
	}
}


// address: 0x8005541C
// line start: 909
// line end:   922
void Snd_sys_pset();

// address: 0x800554F8
// line start: 936
// line end:   944
void Snd_bgm_data(unsigned short *pTbl) {
	// register: 5
	register unsigned long cnt0;
}


// address: 0x80055528
// line start: 956
// line end:   1034
void Snd_bgm_set() {
	// register: 16
	register unsigned short bgm_Main;
	// register: 17
	register unsigned short bgm_Sub;
	// register: 2
	// size: 0x20
	register struct VabHdr *pVh;
	{
	}
}


// address: 0x80055764
// line start: 1045
// line end:   1059
void Snd_bgm_ck();

// address: 0x800557F0
// line start: 1071
// line end:   1104
void Snd_bgm_play_ck();

// address: 0x800558E0
// line start: 1116
// line end:   1269
char Snd_bgm_main() {
	// register: 7
	register unsigned char *pDatam;
	// register: 16
	register unsigned char *pDatam2;
	// register: 18
	register unsigned char *pVhm;
	// register: 17
	register unsigned char *pVbm;
	// register: 19
	register unsigned long *pSeqm;
	{
	}
}


// address: 0x80055CEC
// line start: 1280
// line end:   1427
char Snd_bgm_sub() {
	// register: 16
	register unsigned long snd_buf;
	// register: 7
	register unsigned char *pData;
	// register: 16
	register unsigned char *pData2;
	// register: 18
	register unsigned char *pVh;
	// register: 17
	register unsigned char *pVb;
	// register: 20
	register unsigned long *pSeq0;
	// register: 19
	register unsigned long *pSeq1;
	{
	}
}


// address: 0x800560D0
// line start: 1440
// line end:   1469
void Snd_bgm_fade_ON(unsigned char time, unsigned char mode) {
	// register: 2
	// size: 0x20
	register struct VabHdr *pVh;
}


// address: 0x800561C0
// line start: 1481
// line end:   1577
void Snd_bgm_fade() {
	// register: 18
	register unsigned long cnt0;
}


// address: 0x80056300
// line start: 1596
// line end:   1685
void Snd_bgm_ctr(unsigned long code) {
	// register: 16
	register unsigned char id;
	// register: 5
	register unsigned char play;
	// register: 20
	register unsigned char num;
	// register: 17
	register unsigned char vol;
	// register: 19
	register unsigned char pan;
	// register: 18
	// size: 0x20
	register struct VabHdr *pVh;
	// register: 3
	// size: 0x10
	register struct ProgAtr *pVh_prog;
}


// address: 0x800565F0
// line start: 1701
// line end:   1708
void Snd_bgm_tbl_set(unsigned long code) {
	// register: 3
	// size: 0x2
	register struct _117fake *pBgmtbl;
}


// address: 0x80056624
// line start: 1726
// line end:   1838
void Snd_se_stad(unsigned long bits, struct _1fake *pVec) {
	// register: 6
	register unsigned long EDTNo;
	// address: 0xFFFFFFB8
	auto unsigned long SENo;
	// address: 0xFFFFFFC0
	auto unsigned long flg;
	// address: 0xFFFFFFC8
	auto unsigned long Pno;
	// register: 19
	register unsigned long Tno;
	// register: 21
	register unsigned long Pol;
	// register: 18
	register unsigned long Sch;
	// address: 0xFFFFFFD0
	auto unsigned long Pri;
	// register: 20
	register long Vid;
	// address: 0xFFFFFF88
	// size: 0x20
	auto struct VagAtr Vag;
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct ProgAtr Prog;
	// register: 5
	// size: 0x4
	register struct _115fake *pSseff;
	// register: 3
	// size: 0x20
	register struct _119fake *pReq;
}


// address: 0x800569C0
// line start: 1851
// line end:   1940
void Snd_se_enem(unsigned char SENo, struct _85fake *pEm) {
	// address: 0xFFFFFFC8
	auto unsigned long Pno;
	// register: 19
	register unsigned long Tno;
	// register: 21
	register unsigned long Pol;
	// register: 18
	register unsigned long Sch;
	// address: 0xFFFFFFD0
	auto unsigned long Pri;
	// register: 30
	register long Vid;
	// address: 0xFFFFFF90
	// size: 0x20
	auto struct VagAtr Vag;
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct ProgAtr Prog;
	// register: 16
	// size: 0x4
	register struct _115fake *pSseff;
	// register: 4
	// size: 0x20
	register struct _119fake *pReq;
}


// address: 0x80056CD4
// line start: 1953
// line end:   2081
void Snd_se_walk(unsigned short no, unsigned short lr, struct _85fake *pEm) {
	// register: 20
	register unsigned short kutu;
	// register: 17
	register unsigned long Pno;
	// register: 18
	register unsigned long Tno;
	// register: 20
	register unsigned long Sch;
	// register: 23
	register unsigned long Pri;
	// register: 19
	register long Vid;
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake stsvec;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct VagAtr Vag;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct ProgAtr Prog;
	// register: 18
	// size: 0x4
	register struct _115fake *pSseff;
	// register: 16
	// size: 0x20
	register struct _119fake *pReq;
	// register: 16
	// size: 0xAC
	register struct _76fake *pParts;
	{
		{
			{
			}
		}
	}
}


// address: 0x80056FE0
// line start: 2093
// line end:   2146
void Snd_se_call() {
	// register: 20
	register unsigned long cnt;
	// register: 19
	// size: 0x20
	register struct _119fake *pR;
}


// address: 0x8005724C
// line start: 2159
// line end:   2177
unsigned char Snd_se_pri_ck(unsigned char Sv_ch, unsigned char Sv_pri) {
}


// address: 0x80057304
// line start: 2242
// line end:   2323
void Snd_se_3D(struct _1fake *pVec) {
	// register: 4
	register long ck_flg0;
	// register: 5
	register long ck_flg1;
	// register: 16
	register long vol0;
	// register: 17
	register long vol1;
	// register: 18
	// size: 0x20
	register struct _87fake *pView;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Pos;
}


// address: 0x80057744
// line start: 2338
// line end:   2349
short Snd_se_dir_ck(long B_x, long B_z, long T_x, long T_z) {
	// register: 3
	register long kakudo;
}


