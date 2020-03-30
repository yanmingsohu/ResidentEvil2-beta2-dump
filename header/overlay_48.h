#include "types.h"

// === [ Overlay ID 48 ] ===

// address: 0x80193420
// size: 0x594
extern struct _109fake Ti;

// address: 0x800D9E60
extern unsigned long Padd2_mode;

// address: 0x801933C0
// size: 0x60
extern struct _44fake Frame_d[4][2];

// address: 0x80192EB8
// size: 0x40
static unsigned char Subpl_walk[2][32];

// address: 0x80192EF8
// size: 0x40
static unsigned char Subpl_back[2][32];

// address: 0x80192F38
// size: 0x40
static unsigned char Subpl_dir[2][32];

// address: 0x80192F78
// size: 0x40
static unsigned char Subpl_ato[2][32];

// address: 0x80192FB8
// size: 0x40
static unsigned char Subpl_run[2][32];

// address: 0x80192FF8
// size: 0xE
static unsigned char Em4a_zobiparts_tbl[2][7];

// address: 0x80193008
// size: 0x200
extern unsigned long Card_head[128];

// address: 0x80193208
// size: 0x108
extern struct _110fake Moji_work_tbl[22];

// address: 0x80193330
// size: 0x80
extern struct _40fake Frame[4][2];

// address: 0x800D9E60
extern unsigned long Padd2_mode_addr_800D9E60;

// address: 0x807041C0
// size: 0x2400
extern struct _101fake Disp_at_box[6][32][2];

// address: 0x807095E4
// size: 0x18
extern struct _101fake *pDisp_at_box;

// address: 0x807065E0
// size: 0x3000
extern struct _100fake Disp_at_line[16][24][2];

// address: 0x80709780
// size: 0x10
extern struct _100fake *pDisp_at_line;

// address: 0x80709984
extern short Disp_at_id;

// address: 0x8070419A
extern short Disp_at_no;

// address: 0x8070415C
extern unsigned char Disp_at_col;

// address: 0x8070415D
extern unsigned char Disp_at_col_add;

// address: 0x80190098
// line start: 110
// line end:   126
void Title() {
	// address: 0x80193310
	// size: 0xC
	static void (*Title_rtn_tbl[3])();
	{
	}
}


// address: 0x80190124
// line start: 132
// line end:   186
void Capcom_logo();

// address: 0x80190174
// line start: 189
// line end:   207
void Title_bg_load() {
}


// address: 0x801901DC
// line start: 209
// line end:   211
void Title_bg_reload() {
}


// address: 0x80190210
// line start: 216
// line end:   274
void Title_init();

// address: 0x80190304
// line start: 280
// line end:   296
void Title_main() {
	// address: 0x8019331C
	// size: 0x14
	static void (*Title_main_tbl[5])();
}


// address: 0x80190340
// line start: 301
// line end:   303
void Title_main_game() {
}


// address: 0x80190368
// line start: 310
// line end:   392
void Title_main_wait();

// address: 0x8019055C
// line start: 427
// line end:   524
void Title_main_select() {
	{
		{
			{
			}
		}
	}
}


// address: 0x8019082C
// line start: 526
// line end:   532
void Moji_Sel();

// address: 0x801908B0
// line start: 538
// line end:   652
void Title_sel_menu();

// address: 0x80190B3C
// line start: 658
// line end:   740
void Title_sel_mode() {
	// address: 0x801933B0
	static unsigned long Flg;
	// address: 0x801933B4
	static unsigned long Easy_flg;
}


// address: 0x80190F78
// line start: 745
// line end:   829
void Title_sel_sound() {
	// address: 0x801933B8
	static unsigned long Flg;
}


// address: 0x80191340
// line start: 834
// line end:   850
void Title_main_load() {
}


// address: 0x801913D8
// line start: 855
// line end:   865
void Title_main_option() {
}


// address: 0x80191448
// line start: 870
// line end:   881
void Title_main_information();

// address: 0x80191450
// line start: 906
// line end:   1051
void Title_info_sel() {
	// register: 18
	register long i;
	// register: 17
	register long j;
	// register: 17
	register long Rno;
	// register: 21
	register long Ofs_x;
	// register: 20
	register long Cnt;
	// register: 22
	register long Cursor;
	// register: 19
	register long Kettei_flg;
	{
	}
}


// address: 0x8019199C
// line start: 1061
// line end:   1226
void Title_game_init() {
	// register: 17
	// size: 0x8728
	register struct _108fake *pG;
}


// address: 0x80191CF0
// line start: 1230
// line end:   1246
void Init_tbl_load() {
	// register: 16
	// size: 0x8728
	register struct _108fake *pG;
	// address: 0xFFFFDD58
	// size: 0x229C
	auto char Init_tbl[1772][5];
	// register: 2
	register unsigned long No;
}


// address: 0x80191D8C
// line start: 1252
// line end:   1285
void Moji_set_work() {
	// register: 23
	register unsigned long i;
	// register: 20
	register unsigned long j;
	// register: 16
	// size: 0xC
	register struct _44fake *pDm;
}


// address: 0x80191F10
// line start: 1290
// line end:   1344
void Moji_SelectMode(unsigned long Mode, unsigned long No, unsigned long Dis, unsigned long Flg) {
	// register: 19
	register unsigned long i;
	// register: 5
	// size: 0x14
	register struct _37fake *pSp;
	// register: 23
	register unsigned long Cnt;
}


// address: 0x80192260
// line start: 1349
// line end:   1403
void Moji_Game_mode(unsigned long Mode) {
	// register: 18
	register unsigned long i;
	// register: 17
	register unsigned long j;
	// register: 5
	register unsigned long k;
	// register: 5
	// size: 0x14
	register struct _37fake *pSp;
}


// address: 0x8019260C
// line start: 1408
// line end:   1462
void Moji_Sound(unsigned long Mode) {
	// register: 18
	register unsigned long i;
	// register: 17
	register unsigned long j;
	// register: 5
	register unsigned long k;
	// register: 5
	// size: 0x14
	register struct _37fake *pSp;
}


// address: 0x801929B4
// line start: 1467
// line end:   1481
void Moji_PressAnyKey(unsigned long Kido) {
	// register: 16
	register unsigned long j;
}


// address: 0x80192A98
// line start: 1486
// line end:   1495
void Moji_License();

// address: 0x80192B24
// line start: 1503
// line end:   1516
void Moji_Sample();

// address: 0x80192BA8
// line start: 1871
// line end:   1933
void Pl_select() {
	// register: 16
	register long Cursor;
	// register: 17
	register long Timer;
	// register: 8
	register long Timer2;
	// register: 20
	register long Timer_flg;
	// address: 0xFFFFFFD8
	// size: 0x2
	auto unsigned char OnOff[2];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto unsigned char Use_flg[4];
	{
	}
}


// address: 0x80700160
// line start: 38
// line end:   91
void Disp_atari() {
	// register: 16
	register long i;
	// register: 16
	// size: 0x244
	register struct _74fake **ppEm;
}


// address: 0x8070041C
// line start: 97
// line end:   131
void Disp_atari_id_inc();

// address: 0x807005CC
// line start: 137
// line end:   174
void Disp_atari_id_dec();

// address: 0x8070079C
// line start: 180
// line end:   230
void Disp_atari_trans(struct _74fake *pEwork) {
	// address: 0x80704160
	// size: 0x8
	static struct _2fake Dir;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Pos;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Tmp_vec;
	// address: 0xFFFFFFC0
	auto unsigned long P;
	// address: 0xFFFFFFC4
	auto unsigned long Flg;
	// register: 20
	register unsigned long Otz;
	// register: 21
	register unsigned long i;
	// register: 16
	register unsigned long j;
	// register: 22
	register unsigned long k;
	// register: 30
	// size: 0x20
	register struct _56fake *pAtd;
	// register: 17
	// size: 0x10
	register struct _100fake *pLine;
	{
	}
}


// address: 0x80700984
// line start: 236
// line end:   287
void Disp_atari_trans2(struct _74fake *pEwork) {
	// register: 22
	register unsigned long j;
	// register: 19
	register unsigned long k;
	// address: 0xFFFFFF90
	// size: 0x40
	auto struct _2fake Pos[8];
	// address: 0xFFFFFFD0
	auto unsigned long P;
	// address: 0xFFFFFFD4
	auto unsigned long Flg;
	// register: 20
	register unsigned long Otz;
	// register: 17
	// size: 0x18
	register struct _101fake *pF4;
	// address: 0x80704168
	// size: 0x18
	static unsigned char Ptbl[4][6];
}


