// D:\Bio2\prog\MONITOR.C

#include "types.h"

// address: 0x80031E44
// line start: 189
// line end:   215
void Init_scheduler() {
	// register: 18
	register long i;
	// register: 20
	// size: 0x8
	register struct ToT *pToT;
}


// address: 0x80031F10
// line start: 226
// line end:   257
void Scheduler() {
	// register: 17
	// size: 0x80
	register struct _99fake *pCt;
}


// address: 0x80032004
// line start: 269
// line end:   282
unsigned long Task_lexecute(unsigned long Level, unsigned long Task_no) {
	// register: 16
	register unsigned long Size;
}


// address: 0x80032084
// line start: 293
// line end:   301
void Task_lchain(unsigned long Task_no);

// address: 0x800320F0
// line start: 314
// line end:   316
void Task_execute(unsigned long Level, void *pFuncall);

// address: 0x80032118
// line start: 329
// line end:   339
void Task_sleep(unsigned long Sleep_counter) {
	// register: 2
	// size: 0x80
	register struct _99fake *pCt;
}


// address: 0x80032168
// line start: 350
// line end:   360
void Task_exit() {
	// register: 16
	// size: 0x80
	register struct _99fake *pCt;
}


// address: 0x800321B4
// line start: 371
// line end:   380
void Task_kill(unsigned long Level) {
	// register: 16
	// size: 0x80
	register struct _99fake *pT;
}


// address: 0x80032210
// line start: 391
// line end:   402
void Task_chain(void *pFuncall) {
	// register: 16
	// size: 0x80
	register struct _99fake *pCt;
}


// address: 0x80032264
// line start: 413
// line end:   414
void Task_suspend(unsigned long Level);

// address: 0x80032290
// line start: 426
// line end:   427
void Task_signal(unsigned long Level);

// address: 0x800322BC
// line start: 439
// line end:   440
unsigned long Task_status(unsigned long Level);

