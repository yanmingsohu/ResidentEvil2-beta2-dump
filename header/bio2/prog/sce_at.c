// D:\Bio2\prog\SCE_AT.C

#include "types.h"

// address: 0x8004D4E8
// line start: 69
// line end:   201
unsigned long Sce_at_check(struct _74fake *pEm, unsigned long attribute, unsigned long auto_flg) {
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFA0
	// size: 0x10
	auto struct _1fake Vec;
	// register: 2
	register unsigned long Hit_flg;
	// register: 19
	register unsigned long i;
	// register: 23
	register unsigned long D0;
	// address: 0xFFFFFFB0
	// size: 0x14
	auto short Work[10];
	// register: 16
	// size: 0xC
	register struct _82fake *pAot;
	// address: 0x8004D830
	bool hit;
}


// address: 0x8004D94C
// line start: 207
// line end:   209
unsigned long Nothing(void *pAot);

// address: 0x8004D974
// line start: 217
// line end:   270
unsigned long Sce_Door(void *pAot) {
	// register: 18
	// size: 0x12
	register struct _85fake *pDoor;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 16
	register unsigned long Key_type;
	// register: 17
	register long Key_work;
	// address: 0x8004DAC8
	bool door_in;
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


// address: 0x8004DB18
// line start: 275
// line end:   309
void Key_lost() {
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0x800B6788
	static long Key_work;
	{
	}
}


// address: 0x8004DC84
// line start: 315
// line end:   333
unsigned long Sce_Item(void *pAot) {
}


// address: 0x8004DD0C
// line start: 339
// line end:   340
unsigned long Sce_Normal(void *pAot);

// address: 0x8004DD14
// line start: 347
// line end:   351
unsigned long Sce_Message(void *pAot) {
}


// address: 0x8004DD4C
// line start: 357
// line end:   360
unsigned long Sce_Event(void *pAot) {
}


// address: 0x8004DD78
// line start: 368
// line end:   385
unsigned long Sce_Flg_chg(void *pAot) {
	// register: 6
	register unsigned long *pFlg;
}


// address: 0x8004DDE4
// line start: 391
// line end:   394
unsigned long Sce_Water(void *pAot);

// address: 0x8004DE00
// line start: 401
// line end:   413
unsigned long Sce_Move(void *pAot) {
}


// address: 0x8004DE68
// line start: 419
// line end:   430
unsigned long Sce_Save(void *pAot) {
	// register: 3
	// size: 0xC
	register struct _82fake *pAot2;
}


// address: 0x8004DEB4
// line start: 435
// line end:   466
void Save_entrance() {
	// register: 4
	// size: 0x8728
	register struct _97fake *pG;
	{
		{
		}
	}
}


// address: 0x8004DFEC
// line start: 471
// line end:   481
unsigned long Sce_Itembox(void *pAot) {
	// register: 3
	// size: 0xC
	register struct _82fake *pAot2;
}


// address: 0x8004E030
// line start: 486
// line end:   531
void Item_box_entrance() {
	// address: 0x800B678C
	static short Dir_spd;
	// address: 0x800B6790
	static short Spd_add;
	// address: 0x800B6794
	// size: 0x1F8
	static struct _71fake *pOwork;
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	{
	}
}


// address: 0x8004E240
// line start: 537
// line end:   562
unsigned long Sce_Damage(void *pAot) {
	{
	}
}


// address: 0x8004E3A0
// line start: 568
// line end:   573
unsigned long Sce_Status(void *pAot);

// address: 0x8004E3E0
// line start: 581
// line end:   645
unsigned long Sce_Hikidashi(void *pAot) {
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	// register: 17
	register unsigned short *pDat;
	// register: 4
	register unsigned long *Flg_addr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8004E64C
// line start: 650
// line end:   729
void Hikidashi_entrance() {
	// address: 0x800B6798
	static long Key_work;
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0x800B679C
	// size: 0x8
	static struct _88fake *pItem_dat;
	// register: 5
	register unsigned short *pDat;
	// address: 0x800B67A0
	// size: 0xC
	static struct _82fake *pAot;
	{
		{
		}
	}
}


// address: 0x8004E984
// line start: 734
// line end:   739
unsigned long Sce_Windows(void *pAot);

// address: 0x8004E9B0
// line start: 746
// line end:   785
void Sce_at() {
	// register: 17
	register unsigned long i;
	// register: 19
	register unsigned long D0;
	// register: 16
	// size: 0x244
	register struct _74fake *pEw;
	// register: 17
	// size: 0x244
	register struct _74fake *pEw2;
}


// address: 0x8004EB24
// line start: 792
// line end:   834
long Water_ck(long Pos_x, long Pos_z) {
	// address: 0xFFFFFFB8
	// size: 0x10
	auto struct _1fake Vec;
	// register: 17
	register unsigned long i;
	// register: 19
	register unsigned long D0;
	// register: 16
	// size: 0xC
	register struct _82fake *pAot;
	// address: 0xFFFFFFC8
	// size: 0x14
	auto short Work[10];
}


// address: 0x8004EC58
// line start: 1069
// line end:   1087
unsigned char Floor_check(long check_x, long check_z, unsigned long nfloor) {
	// register: 17
	register short *A0;
	// register: 18
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Vec;
}


