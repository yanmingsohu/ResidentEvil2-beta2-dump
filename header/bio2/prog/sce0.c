// D:\Bio2\prog\SCE0.C

#include "types.h"

// address: 0x8004ED24
// line start: 191
// line end:   214
void Sce_test_init() {
	// register: 3
	register unsigned long i;
}


// address: 0x8004ED6C
// line start: 418
// line end:   427
unsigned long Em_kind_search(unsigned long Id) {
	// register: 3
	register unsigned char *p;
}


// address: 0x8004EDB0
// line start: 436
// line end:   491
void Sce_se_set() {
	// register: 6
	register unsigned char *A0;
	// register: 7
	register unsigned long i;
	// register: 9
	register unsigned long j;
	// register: 8
	register unsigned long D0;
	// register: 11
	register unsigned long Flg;
	// register: 4
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0x8004EE78
	bool step1;
	// address: 0x8004EE7C
	bool step0;
}


// address: 0x8004EF30
// line start: 499
// line end:   510
void Sce_rnd_set() {
	// register: 2
	register unsigned long D0;
	// register: 4
	register unsigned long D1;
}


// address: 0x8004EF70
// line start: 519
// line end:   564
void Sce_model_init() {
	// register: 18
	register unsigned long i;
	// register: 4
	register unsigned long *pTim;
	// register: 3
	register unsigned long S0;
	// register: 2
	register unsigned long S1;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 20
	// size: 0x8
	register struct _78fake *pMi;
	{
	}
}


// address: 0x8004F07C
// line start: 573
// line end:   586
void Sce_work_clr() {
}


// address: 0x8004F0D8
// line start: 590
// line end:   615
void Sce_work_clr_at() {
	// register: 4
	register unsigned long i;
	// register: 6
	register unsigned long D0;
	// register: 3
	// size: 0x244
	register struct _74fake *pEw;
	// register: 4
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 3
	// size: 0x1F8
	register struct _71fake *pOm2;
}


// address: 0x8004F19C
// line start: 624
// line end:   688
void Sce_work_clr_set() {
	// register: 4
	register unsigned long i;
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	// register: 5
	register long *A0;
}


// address: 0x8004F31C
// line start: 697
// line end:   708
void Sce_aot_init() {
	// register: 2
	register unsigned long i;
	// register: 3
	register unsigned long *pAot;
}


// address: 0x8004F348
// line start: 716
// line end:   730
void Event_init(struct _102fake *pSce, unsigned long Evt_no) {
	// register: 6
	register unsigned char *pScd;
	// register: 5
	register unsigned long D0;
}


// address: 0x8004F394
// line start: 739
// line end:   777
void Event_exec(unsigned long Task_level, unsigned long Evt_no) {
	// register: 4
	register unsigned long *pSpd;
	// register: 2
	register unsigned long i;
	// register: 7
	// size: 0x1474
	register struct _103fake *pSce;
	// register: 3
	// size: 0x174
	register struct _102fake *pTask;
}


// address: 0x8004F4A0
// line start: 783
// line end:   797
void Sce_col_chg_init() {
	// register: 18
	register unsigned long D0;
	// register: 17
	register unsigned long i;
}


// address: 0x8004F534
// line start: 808
// line end:   840
void Sce_mirror_init() {
	// register: 16
	// size: 0x244
	register struct _74fake *pEm;
	{
	}
}


// address: 0x8004F5F0
// line start: 846
// line end:   870
void Sce_kirakira_set() {
	// register: 18
	register unsigned long Cnt;
	// register: 16
	register unsigned long i;
	// register: 4
	register unsigned long D0;
	// register: 4
	register unsigned long D1;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 6
	// size: 0x1F8
	register struct _71fake *pOm;
	{
	}
}


// address: 0x8004F6CC
// line start: 884
// line end:   941
void Sce_scheduler_set() {
	// register: 16
	register long i;
	// register: 17
	// size: 0x174
	register struct _102fake *pSce;
}


// address: 0x8004F894
// line start: 950
// line end:   969
void Sce_scheduler() {
}


// address: 0x8004F90C
// line start: 978
// line end:   1034
void Sce_scheduler_main() {
	// register: 3
	register unsigned long D0;
	// register: 18
	register unsigned long Level;
	// register: 16
	// size: 0x174
	register struct _102fake *pSce;
	// address: 0x8004F944
	bool loop;
}


