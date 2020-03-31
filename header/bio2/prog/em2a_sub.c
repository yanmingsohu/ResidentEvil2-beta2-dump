// D:\Bio2\prog\EM2A_SUB.C

#include "types.h"

// address: 0x80100180
// line start: 209
// line end:   215
unsigned long Ty_Jh_init(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x8010021C
// line start: 222
// line end:   253
void Ty_Jh_move(struct _74fake *pEm) {
}


// address: 0x801002C0
// line start: 299
// line end:   317
unsigned long Em2a_Att_ck(struct _74fake *pEm, unsigned long Parts_no, unsigned short Start, unsigned short End, unsigned long At_dis) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 4
	register unsigned long Dis;
}


// address: 0x801003DC
// line start: 322
// line end:   371
unsigned long Att_ck2(struct _74fake *pEm, unsigned long Parts_no, unsigned short Start, unsigned short End, unsigned long At_dis, unsigned long At_w) {
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
	// register: 19
	register short Old_z;
}


// address: 0x801005FC
// line start: 377
// line end:   388
void Em2a_add_dm(unsigned long Att) {
}


// address: 0x80100630
// line start: 398
// line end:   412
unsigned long S_rnd(unsigned char N, unsigned long *pBuf, unsigned long *pBuf2) {
	// register: 3
	register long Ck;
}


// address: 0x801006BC
// line start: 417
// line end:   426
long Get_dir_pl(struct _74fake *pEm) {
	// register: 3
	register short Dir;
}


// address: 0x80100728
// line start: 427
// line end:   435
long Pl_dm_set_normal(struct _74fake *pEm) {
}


// address: 0x80100784
// line start: 437
// line end:   468
long Pl_dm_set(struct _74fake *pEm, struct _2fake *pSv, unsigned long Parts_no) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 19
	// size: 0x244
	register struct _74fake *pPl;
}


// address: 0x80100914
// line start: 475
// line end:   526
unsigned long Dm_eff(struct _74fake *pEm);

// address: 0x80100AA8
// line start: 538
// line end:   567
void Dm_eff_blood(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Atr) {
	// register: 7
	// size: 0xC
	register struct _107fake *pEsp;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 23
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	register unsigned long Ofs;
	// register: 17
	register unsigned long Mask;
	// register: 3
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x80100C34
// line start: 572
// line end:   595
void Dm_eff_0f(struct _74fake *pEm) {
	// address: 0x80104D20
	static int Damage_no;
	// address: 0x80104D24
	static int Damage_old;
}


// address: 0x80100D5C
// line start: 600
// line end:   609
void Dm_eff_disp(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, struct _107fake *pEsp) {
	// register: 22
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	{
	}
}


// address: 0x80100E50
// line start: 611
// line end:   623
void Dm_eff_flame(struct _74fake *pEm) {
	// register: 17
	// size: 0xC
	register struct _107fake *pEsp;
	// register: 20
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	register unsigned long No;
	{
	}
}


// address: 0x80100F08
// line start: 626
// line end:   654
void Dm_eff_spark(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0x80104D28
	// size: 0xC
	static struct _108fake *pEsp2;
	{
	}
}


// address: 0x80101034
// line start: 814
// line end:   840
void Goto00_r(struct _74fake *pEm, long Vec_x, long Vec_z, short Add_dir) {
	// register: 4
	register short Dir;
}


// address: 0x801010F8
// line start: 843
// line end:   856
long Sca_escape(struct _74fake *pEm) {
	// register: 3
	register short Dir;
	// register: 3
	// size: 0x10
	register struct _57fake *pSca;
}


// address: 0x8010D180
// line start: 209
// line end:   215
unsigned long Ty_Jh_init_addr_8010D180(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x8010D21C
// line start: 222
// line end:   253
void Ty_Jh_move_addr_8010D21C(struct _74fake *pEm) {
}


// address: 0x8010D2C0
// line start: 299
// line end:   317
unsigned long Em2a_Att_ck_addr_8010D2C0(struct _74fake *pEm, unsigned long Parts_no, unsigned short Start, unsigned short End, unsigned long At_dis) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 4
	register unsigned long Dis;
}


// address: 0x8010D3DC
// line start: 322
// line end:   371
unsigned long Att_ck2_addr_8010D3DC(struct _74fake *pEm, unsigned long Parts_no, unsigned short Start, unsigned short End, unsigned long At_dis, unsigned long At_w) {
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
	// register: 19
	register short Old_z;
}


// address: 0x8010D5FC
// line start: 377
// line end:   388
void Em2a_add_dm_addr_8010D5FC(unsigned long Att) {
}


// address: 0x8010D630
// line start: 398
// line end:   412
unsigned long S_rnd_addr_8010D630(unsigned char N, unsigned long *pBuf, unsigned long *pBuf2) {
	// register: 3
	register long Ck;
}


// address: 0x8010D6BC
// line start: 417
// line end:   426
long Get_dir_pl_addr_8010D6BC(struct _74fake *pEm) {
	// register: 3
	register short Dir;
}


// address: 0x8010D728
// line start: 427
// line end:   435
long Pl_dm_set_normal_addr_8010D728(struct _74fake *pEm) {
}


// address: 0x8010D784
// line start: 437
// line end:   468
long Pl_dm_set_addr_8010D784(struct _74fake *pEm, struct _2fake *pSv, unsigned long Parts_no) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 19
	// size: 0x244
	register struct _74fake *pPl;
}


// address: 0x8010D914
// line start: 475
// line end:   526
unsigned long Dm_eff_addr_8010D914(struct _74fake *pEm);

// address: 0x8010DAA8
// line start: 538
// line end:   567
void Dm_eff_blood_addr_8010DAA8(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, unsigned long Atr) {
	// register: 7
	// size: 0xC
	register struct _107fake *pEsp;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 23
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	register unsigned long Ofs;
	// register: 17
	register unsigned long Mask;
	// register: 3
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x8010DC34
// line start: 572
// line end:   595
void Dm_eff_0f_addr_8010DC34(struct _74fake *pEm) {
	// address: 0x80111D20
	static int Damage_no;
	// address: 0x80111D24
	static int Damage_old;
}


// address: 0x8010DD5C
// line start: 600
// line end:   609
void Dm_eff_disp_addr_8010DD5C(struct _74fake *pEm, unsigned long No, unsigned long Id, unsigned long Type, unsigned long Zoom, struct _107fake *pEsp) {
	// register: 22
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	{
	}
}


// address: 0x8010DE50
// line start: 611
// line end:   623
void Dm_eff_flame_addr_8010DE50(struct _74fake *pEm) {
	// register: 17
	// size: 0xC
	register struct _107fake *pEsp;
	// register: 20
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 18
	register unsigned long No;
	{
	}
}


// address: 0x8010DF08
// line start: 626
// line end:   654
void Dm_eff_spark_addr_8010DF08(struct _74fake *pEm) {
	// register: 18
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0x80111D28
	// size: 0xC
	static struct _108fake *pEsp2;
	{
	}
}


// address: 0x8010E034
// line start: 814
// line end:   840
void Goto00_r_addr_8010E034(struct _74fake *pEm, long Vec_x, long Vec_z, short Add_dir) {
	// register: 4
	register short Dir;
}


// address: 0x8010E0F8
// line start: 843
// line end:   856
long Sca_escape_addr_8010E0F8(struct _74fake *pEm) {
	// register: 3
	register short Dir;
	// register: 3
	// size: 0x10
	register struct _57fake *pSca;
}


