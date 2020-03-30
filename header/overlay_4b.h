#include "types.h"

// === [ Overlay ID 4b ] ===

// address: 0x801C33DA
extern unsigned char Cnf_debug;

// address: 0x801C2FC2
extern unsigned char Cnf_status;

// address: 0x801C2FCC
// size: 0x4
extern unsigned char Cnf_cur[4];

// address: 0x801C33D8
extern unsigned char Cnf_r_no;

// address: 0x801C2FD1
extern unsigned char Cnf_kido;

// address: 0x801C2FB8
extern unsigned char Cnf_stereo;

// address: 0x801C2FD0
extern unsigned char Cnf_mode_naw;

// address: 0x801C33D9
extern unsigned char Cnf_mode_next;

// address: 0x801C2FC8
extern unsigned char Bak_cut;

// address: 0x801C62C0
extern unsigned long B_rgb;

// address: 0x801C62C4
// size: 0x28
extern struct _88fake *pBak_light;

// address: 0x801C2FC4
// size: 0x28
extern struct _120fake *pOprim;

// address: 0x801C2FBC
// size: 0x6
extern unsigned char Suuji[6];

// address: 0x801C2FD8
// size: 0x400
extern unsigned short Cnf_eclt[512];

// address: 0x801C33E0
// size: 0x2EE0
extern struct _120fake Cnf_Oprim[150][2];

// address: 0x801C2A74
// size: 0x14
extern void (*Config_tblj[5])();

// address: 0x801C2A88
// size: 0x14
extern void (*Config_padd[5])();

// address: 0x801C2A9C
// size: 0xA
extern struct _118fake Cnf_st[5];

// address: 0x801C2AA8
// size: 0x118
extern struct _119fake Cnf_char[70];

// address: 0x801C2BC0
// size: 0x2D0
extern struct _121fake Cnf_work[90];

// address: 0x801C2E90
// size: 0x115
extern unsigned char Mojiretu[277];

// address: 0x801C2FA8
// size: 0xC
extern unsigned long Botan_offset[3];

// address: 0x800DA828
// size: 0xC8
extern struct _101fake Dmenu;

// address: 0x800D9E60
extern unsigned long Padd2_mode;

// address: 0x800CF150
extern unsigned long Xa_timer;

// address: 0x8008E78C
// size: 0x22D6
extern struct _100fake Room_pos[49][7];

// address: 0x800C73D8
// size: 0x28
extern struct _122fake *pDwork[10];

// address: 0x800B66B8
// size: 0x24C
static struct _123fake *pDoor;

// address: 0x80090A6C
// size: 0x20
extern struct _0fake D_LIGHTMATRIX;

// address: 0x80090A8C
// size: 0x20
extern struct _0fake D_COLORMATRIX;

// address: 0x80090AAC
// size: 0x64
static unsigned short Dtex_file[50];

// address: 0x80090B10
// size: 0x24C
extern struct _124fake Dinfo[49];

// address: 0x801C01AC
// line start: 341
// line end:   354
void Config() {
	{
	}
}


// address: 0x801C0250
// line start: 365
// line end:   369
void Config_main();

// address: 0x801C0278
// line start: 382
// line end:   391
void Config_fade_in_wait();

// address: 0x801C02BC
// line start: 402
// line end:   431
void Config_fade_out_set() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake rect;
}


// address: 0x801C03B0
// line start: 442
// line end:   474
void Config_fade_out_wait() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake rect;
}


// address: 0x801C04AC
// line start: 485
// line end:   599
void Config_init() {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _16fake rect0;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _16fake rect1;
	// address: 0xFFFFFFD8
	// size: 0x14
	auto struct _52fake tim_image;
	// register: 16
	// size: 0x14
	register struct _52fake *ptim;
}


// address: 0x801C06F0
// line start: 610
// line end:   691
void Config_exit() {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _16fake rect0;
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct _52fake tim_image;
}


// address: 0x801C08C0
// line start: 702
// line end:   716
void Config_padd_main();

// address: 0x801C0944
// line start: 727
// line end:   827
void Config_padd_opt();

// address: 0x801C0CEC
// line start: 837
// line end:   920
void Config_padd_con();

// address: 0x801C1058
// line start: 930
// line end:   1126
void Config_padd_snd();

// address: 0x801C1E58
// line start: 1136
// line end:   1180
void Config_padd_clr();

// address: 0x801C2038
// line start: 1190
// line end:   1216
void Config_padd_res();

// address: 0x801C20F4
// line start: 1226
// line end:   1272
void Config_move() {
	// register: 3
	register unsigned long cnt0;
	// register: 6
	register unsigned long r0;
}


// address: 0x801C22A0
// line start: 1282
// line end:   1403
void Config_main_trans() {
	// register: 2
	register unsigned char otz;
	// register: 7
	register unsigned short flg;
	// register: 19
	register short mw;
	// register: 18
	register short mh;
	// register: 21
	register short w;
	// register: 20
	register short h;
	// register: 23
	register short pos_x;
	// register: 6
	register short pos_y;
	// register: 8
	register unsigned long rgb_code;
	// register: 3
	register unsigned long cnt0;
	// register: 22
	register unsigned char *pChars;
	// register: 17
	// size: 0x4
	register struct _119fake *pCnf_char;
	// register: 9
	// size: 0x8
	register struct _121fake *pCnf_work;
	// register: 16
	// size: 0x28
	register struct _26fake *pPoly;
}


// address: 0x801C2678
// line start: 1414
// line end:   1463
void Config_suuji_trans() {
	// register: 20
	register short mw;
	// register: 19
	register short mh;
	// register: 22
	register short w;
	// register: 21
	register short h;
	// register: 23
	register unsigned long cnt0;
	// register: 18
	// size: 0x4
	register struct _119fake *pCnf_char;
	// register: 16
	// size: 0x28
	register struct _26fake *pPoly;
	// address: 0xFFFFFFB8
	// size: 0xC
	auto short pos_x[6];
	// address: 0xFFFFFFC8
	// size: 0xC
	auto short pos_y[6];
}


// address: 0x801C2874
// line start: 1474
// line end:   1490
void Config_lrgb() {
}


// address: 0x801C28CC
// line start: 1502
// line end:   1541
void Config_suuji(unsigned long id, unsigned long vol) {
	// register: 2
	register unsigned long r0;
}


// address: 0x800134B4
// line start: 220
// line end:   586
void Debug_menu() {
	// address: 0x800B66A8
	// size: 0x8
	static struct _16fake Rect;
	// address: 0x800B66B0
	static void (*Func_call)();
	// address: 0x80090A64
	// size: 0x8
	static unsigned char OnOff[4][2];
	{
		// address: 0x80013860
		bool jp_room_up;
		// address: 0x8001392C
		bool jp_room_down;
		// address: 0x800139F8
		bool jp_stage_up;
		// address: 0x80013AC0
		bool kettei;
		{
			// register: 17
			register unsigned long Time;
		}
	}
}


// address: 0x80014088
// line start: 597
// line end:   611
void Back_tile_trans();

// address: 0x80014230
// line start: 772
// line end:   772
void Padd2_menu();

// address: 0x80014238
// line start: 171
// line end:   185
void Door_main() {
	// address: 0x80090D5C
	// size: 0x10
	static void (*pDoor_proc_tbl[4])();
}


// address: 0x80014290
// line start: 188
// line end:   275
void Door_init() {
	// register: 6
	register long Ctr;
	// register: 3
	register short *a0;
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct _87fake Camera;
	{
		{
		}
	}
}


// address: 0x80014548
// line start: 278
// line end:   368
void Door_move();

// address: 0x80014648
// line start: 381
// line end:   425
void Door_scheduler_main() {
	// register: 3
	register unsigned long D0;
	// register: 18
	register unsigned long Level;
	// register: 16
	// size: 0x174
	register struct _119fake *pSce;
	// address: 0x800146A8
	bool loop;
}


// address: 0x8001476C
// line start: 428
// line end:   439
void Door_exit();

// address: 0x800147FC
// line start: 443
// line end:   533
void Door_Trans() {
	// register: 16
	// size: 0x14C
	register struct _122fake *pCdwork;
	// register: 18
	register long Ctr;
	// register: 4
	// size: 0x20
	register struct _0fake *r1;
	// register: 5
	// size: 0x20
	register struct _0fake *r2;
	// register: 3
	// size: 0x20
	register struct _0fake *r3;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake Temp_matrix;
}


// address: 0x80014C54
// line start: 546
// line end:   708
void DoorSort(struct _71fake *mw, struct _122fake *pDoorwork, struct _113fake *Tmd) {
	// register: 16
	// size: 0x28
	register struct _29fake *bp;
	// register: 21
	// size: 0x8
	register struct _2fake *sp;
	// register: 30
	register short *p_prim;
	// register: 9
	// size: 0x8
	register struct _2fake *np;
	// register: 8
	register unsigned long D0;
	// address: 0xFFFFFFC4
	auto unsigned long D1;
	// register: 20
	register unsigned long *ot;
	// register: 3
	// size: 0x8
	register struct _2fake *s0;
	// register: 19
	// size: 0x8
	register struct _2fake *s1;
	// register: 17
	// size: 0x8
	register struct _2fake *s2;
	// register: 22
	// size: 0x8
	register struct _2fake *s3;
	// register: 10
	register unsigned long ff;
	// address: 0xFFFFFFC0
	auto long D2;
	// register: 3
	register unsigned long v_temp;
	{
	}
}


// address: 0x80015108
// line start: 711
// line end:   724
void Door_model_init(struct _122fake *pTmpDwork, unsigned long Model_no) {
	// register: 3
	register unsigned long *Tmd_adr;
}


// address: 0x8001516C
// line start: 742
// line end:   807
unsigned long Door_model_set(struct _119fake *pSce) {
	// register: 3
	register unsigned long D1;
	// register: 4
	// size: 0x14C
	register struct _122fake *A0;
	// register: 5
	register unsigned char *pData;
}


// address: 0x80015298
// line start: 819
// line end:   915
void Door_snd_trans() {
	// register: 18
	register short Bg_clr_sw;
	// register: 17
	register unsigned long Sound_size;
	// register: 19
	// size: 0xC
	register struct _124fake *pDoor_info;
	// register: 17
	register unsigned long Door_no;
	// register: 3
	register unsigned long Sector;
	// register: 4
	register unsigned long File_no;
	// register: 20
	// size: 0x880
	register struct tagCD *pCd;
}


// address: 0x800155A4
// line start: 926
// line end:   944
void Door_texture_load() {
	// register: 6
	register unsigned long Sector;
	// register: 4
	register unsigned long File_no;
	// register: 3
	// size: 0xC
	register struct _124fake *pDoor_info;
}


