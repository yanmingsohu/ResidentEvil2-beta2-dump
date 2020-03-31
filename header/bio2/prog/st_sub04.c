// D:\Bio2\prog\ST_SUB04.C

#include "types.h"

// address: 0x8006BCEC
// line start: 55
// line end:   68
void St_init_disp_num() {
	// register: 3
	register unsigned long i;
}


// address: 0x8006BD3C
// line start: 71
// line end:   179
void St_disp_num() {
	// address: 0x8009DA98
	// size: 0x48
	static short N_pos[2][18];
	// register: 6
	// size: 0x14
	register struct _37fake *sp;
	// register: 19
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 17
	// size: 0x4
	register struct _59fake *i_work;
	// register: 21
	// size: 0x8
	register struct _106fake *i_data;
	// register: 18
	register unsigned long i;
	// register: 20
	register unsigned long pps;
	// register: 7
	register unsigned long per;
	// register: 23
	register long add;
}


// address: 0x8006C0DC
// line start: 182
// line end:   236
unsigned long print_num(struct _37fake *sp, unsigned long in, unsigned long pos, unsigned long mode) {
	// address: 0x800B67C8
	// size: 0x4
	static unsigned char num[4];
	// register: 30
	register unsigned long *pOt;
	// register: 17
	register unsigned long j;
	// register: 20
	register unsigned long offset_x;
	// address: 0x8006C2D4
	bool next;
}


// address: 0x8006C318
// line start: 244
// line end:   277
void St_init_disp_cursol0() {
	// address: 0x8009DAE0
	// size: 0xC
	static unsigned char Cursol0_char_tbl[4][3];
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 17
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 7
	register unsigned long clut;
	// register: 5
	register unsigned long j;
}


// address: 0x8006C418
// line start: 280
// line end:   342
void St_disp_cursol0(unsigned long type) {
	// address: 0x8009DAEC
	// size: 0x24
	static short Cursol0_pos_tbl[2][9];
	// register: 17
	// size: 0x14
	register struct _37fake *sp;
	// register: 23
	register unsigned long *pOt;
	// register: 22
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 21
	register unsigned long x;
	// register: 19
	register unsigned long y;
	// register: 18
	register unsigned long i;
}


// address: 0x8006C640
// line start: 347
// line end:   380
void St_init_disp_cursol1() {
	// address: 0x8009DB10
	// size: 0xC
	static unsigned char Cursol1_char_tbl[4][3];
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 8
	register unsigned long clut;
	// register: 7
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 5
	register unsigned long j;
}


// address: 0x8006C73C
// line start: 383
// line end:   440
void St_disp_cursol1(unsigned long type) {
	// address: 0x8009DB1C
	// size: 0x24
	static short Cursol1_pos_tbl[2][9];
	// register: 17
	// size: 0x14
	register struct _37fake *sp;
	// register: 23
	register unsigned long *pOt;
	// register: 22
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 21
	register unsigned long x;
	// register: 19
	register unsigned long y;
	// register: 18
	register unsigned long i;
}


// address: 0x8006C948
// line start: 445
// line end:   529
void St_init_disp_face() {
	// address: 0x8009DB40
	// size: 0x30
	static unsigned char Face_char_tbl[4][12];
	// address: 0x8009DB70
	// size: 0x28
	static unsigned char Face_subchar_tbl[4][10];
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 7
	register unsigned long clut;
	// register: 3
	register unsigned long i;
	// register: 5
	register unsigned long j;
}


// address: 0x8006CAF4
// line start: 532
// line end:   623
void St_disp_face() {
	// address: 0x8009DB98
	// size: 0x30
	static short Face_pos_tbl[2][12];
	// address: 0x8009DBC8
	// size: 0x28
	static short Face_subpos_tbl[2][10];
	// register: 18
	// size: 0x14
	register struct _37fake *sp;
	// register: 20
	// size: 0x14
	register struct _37fake *sps;
	// register: 21
	register unsigned long *pOt;
	// register: 30
	register unsigned long x;
	// register: 23
	register unsigned long y;
	// address: 0xFFFFFFC8
	auto unsigned long x1;
	// address: 0xFFFFFFD0
	auto unsigned long y1;
	// register: 19
	register unsigned long i;
	// register: 22
	register unsigned long j;
}


// address: 0x8006CDE4
// line start: 628
// line end:   681
void St_init_disp_message() {
	// address: 0x8009DBF0
	// size: 0x44
	static unsigned char Message_char_tbl[4][17];
	// register: 17
	// size: 0x18
	register struct _24fake *pf4;
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 18
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 7
	register unsigned long clut;
	// register: 3
	register unsigned long i;
	// register: 5
	register unsigned long j;
}


// address: 0x8006CF14
// line start: 684
// line end:   728
void St_disp_message() {
	// address: 0x8009DC34
	// size: 0x44
	static short Message_pos_tbl[2][17];
	// register: 22
	// size: 0x18
	register struct _24fake *pf4;
	// register: 18
	// size: 0x14
	register struct _37fake *sp;
	// register: 21
	register unsigned long *pOt;
	// register: 19
	register unsigned long x;
	// register: 20
	register unsigned long y;
}


// address: 0x8006D058
// line start: 733
// line end:   789
void St_init_disp_frame(unsigned long type) {
	// address: 0x8009DC78
	// size: 0x44
	static unsigned char Frame_char_tbl[4][17];
	// register: 18
	// size: 0x18
	register struct _24fake *pf4;
	// register: 17
	// size: 0x14
	register struct _37fake *sp;
	// register: 19
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 7
	register unsigned long clut;
	// register: 3
	register unsigned long i;
	// register: 5
	register unsigned long j;
}


// address: 0x8006D1A4
// line start: 792
// line end:   852
void St_disp_frame(unsigned long type) {
	// address: 0x8009DCBC
	// size: 0x44
	static short Frame_pos_tbl[2][17];
	// register: 20
	// size: 0x18
	register struct _24fake *pf4;
	// register: 18
	// size: 0x14
	register struct _37fake *sp;
	// register: 23
	register unsigned long *pOt;
	// register: 21
	register unsigned long x;
	// register: 22
	register unsigned long y;
	// register: 19
	register unsigned long i;
	// register: 30
	register unsigned long h;
}


// address: 0x8006D344
// line start: 857
// line end:   893
void St_init_disp_menu0() {
	// address: 0x8009DD00
	// size: 0x20
	static unsigned char Menu0_char_tbl[4][8];
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 17
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 7
	register unsigned long clut;
	// register: 5
	register unsigned long j;
}


// address: 0x8006D43C
// line start: 896
// line end:   947
void St_disp_menu0() {
	// address: 0x8009DD20
	// size: 0x20
	static short Menu0_pos_tbl[2][8];
	// register: 19
	// size: 0x14
	register struct _37fake *sp;
	// register: 22
	register unsigned long *pOt;
	// address: 0xFFFFFFD0
	auto unsigned long x;
	// register: 30
	register unsigned long y;
	// register: 18
	register unsigned long i;
}


// address: 0x8006D654
// line start: 952
// line end:   1011
void St_init_disp_menu1(unsigned long ctype, unsigned long wtype) {
	// address: 0x8009DD40
	// size: 0x24
	static unsigned char Menu1_char_tbl[4][9];
	// register: 17
	// size: 0x14
	register struct _37fake *sp;
	// register: 19
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 7
	register unsigned long clut;
	// register: 3
	register unsigned long i;
	// register: 5
	register unsigned long j;
}


// address: 0x8006D7C8
// line start: 1014
// line end:   1067
void St_disp_menu1(unsigned long wtype) {
	// address: 0x8009DD64
	// size: 0x24
	static short Menu1_pos_tbl[2][9];
	// register: 19
	// size: 0x14
	register struct _37fake *sp;
	// register: 21
	register unsigned long *pOt;
	// register: 23
	register unsigned long x;
	// register: 22
	register unsigned long y;
	// address: 0xFFFFFFD0
	auto unsigned long cursol;
	// register: 18
	register unsigned long i;
}


// address: 0x8006D9D4
// line start: 1072
// line end:   1111
void St_init_disp_itemlist() {
	// address: 0x8009DD88
	// size: 0x1C
	static unsigned char Itemlist_char_tbl[4][7];
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 17
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 7
	register unsigned long clut;
	// register: 3
	register unsigned long i;
	// register: 5
	register unsigned long j;
}


// address: 0x8006DAF0
// line start: 1114
// line end:   1168
void St_disp_itemlist() {
	// address: 0x8009DDA4
	// size: 0x1C
	static short Itemlist_pos_tbl[2][7];
	// register: 19
	// size: 0x14
	register struct _37fake *sp;
	// register: 20
	register unsigned long *pOt;
	// register: 22
	register unsigned long x;
	// register: 21
	register unsigned long y;
	// register: 30
	register unsigned long max;
	// register: 18
	register unsigned long i;
}


// address: 0x8006DD90
// line start: 1173
// line end:   1215
void St_init_disp_equip() {
	// address: 0x8009DDC0
	// size: 0x1C
	static unsigned char Equip_char_tbl[4][7];
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 7
	register unsigned long clut;
	// register: 5
	register unsigned long j;
}


// address: 0x8006DE5C
// line start: 1218
// line end:   1289
void St_disp_equip() {
	// address: 0x8009DDDC
	// size: 0x1C
	static short Equip_pos_tbl[2][7];
	// register: 18
	// size: 0x14
	register struct _37fake *sp;
	// register: 22
	register unsigned long *pOt;
	// register: 20
	register unsigned long x;
	// register: 23
	register unsigned long y;
	// register: 21
	register unsigned long equip_no;
	// register: 30
	register unsigned long size;
	// register: 19
	register unsigned long i;
}


// address: 0x8006E0FC
// line start: 1294
// line end:   1309
void St_init_disp_wall() {
	// register: 2
	register unsigned long clut;
	// register: 4
	register unsigned long i;
}


// address: 0x8006E17C
// line start: 1312
// line end:   1329
void St_disp_wall() {
	// register: 20
	// size: 0x14
	register struct _37fake *sp;
	// register: 22
	register unsigned long *pOt;
	// register: 21
	register unsigned long i;
	// register: 18
	register unsigned long j;
}


// address: 0x8006E270
// line start: 1351
// line end:   1392
void St_init_disp_ECG() {
	// address: 0x8009DE2C
	// size: 0x8
	static unsigned char ECG_char_tbl[4][2];
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 18
	// size: 0x10
	register struct _31fake *lf2;
	// register: 17
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 7
	register unsigned long clut;
	// register: 3
	register unsigned long i;
	// register: 5
	register unsigned long j;
}


// address: 0x8006E3BC
// line start: 1395
// line end:   1570
void St_disp_ECG(unsigned long type) {
	// register: 22
	// size: 0x14
	register struct _37fake *sp;
	// register: 30
	// size: 0x2
	register struct _104fake *pTbl;
	// register: 19
	// size: 0x10
	register struct _31fake *lf2;
	// register: 20
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 21
	register unsigned long *pOt;
	// register: 17
	register unsigned long i;
	// register: 6
	register long tbl;
	// register: 7
	register long tbl1;
	// address: 0x8006E590
	bool NEXT_0;
	// address: 0x8006E648
	bool NEXT_1;
	// address: 0x8006E6EC
	bool NEXT_2;
	// address: 0x8006E808
	bool NEXT_3;
}


// address: 0x8006E944
// line start: 1575
// line end:   1638
void St_init_disp_itp(unsigned long type) {
	// address: 0x8009DE34
	// size: 0x20
	static unsigned char Itemget_char[4][8];
	// register: 20
	// size: 0x14
	register struct _37fake *sp;
	// register: 17
	// size: 0x28
	register struct _26fake *pft4;
	// register: 21
	register long i;
	// register: 18
	register long j;
}


// address: 0x8006EB6C
// line start: 1641
// line end:   1700
void St_disp_itp(unsigned long type) {
	// address: 0x8009DE54
	// size: 0x20
	static short Itemget_pos_tbl[2][8];
	// register: 19
	register unsigned long *pOt;
	// register: 8
	// size: 0x14
	register struct _37fake *sp;
	// register: 16
	// size: 0x28
	register struct _26fake *pft4;
	// register: 17
	register unsigned long x;
	// register: 18
	register unsigned long y;
}


// address: 0x8006ED08
// line start: 1708
// line end:   1725
void St_init_disp_filesel() {
	// register: 19
	// size: 0x14
	register struct _37fake *sp;
	// register: 21
	register unsigned long i;
	// register: 17
	register unsigned long j;
}


// address: 0x8006EDDC
// line start: 1728
// line end:   1747
void St_disp_filesel() {
	// register: 18
	// size: 0x14
	register struct _37fake *sp;
	// register: 22
	register unsigned long *pOt;
	// register: 17
	register unsigned long i;
}


// address: 0x8006EF14
// line start: 1750
// line end:   1794
void St_init_disp_file() {
	// register: 20
	// size: 0x14
	register struct _37fake *sp;
	// register: 19
	register unsigned long h;
	// register: 18
	register unsigned long i;
	// register: 17
	register unsigned long j;
}


// address: 0x8006F0FC
// line start: 1797
// line end:   1861
void St_disp_file() {
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 17
	register unsigned long *pOt;
	// register: 19
	// size: 0x1070
	register struct _110fake *pSt;
	// register: 20
	register unsigned long page_max;
	// register: 2
	register unsigned long i;
}


// address: 0x8006F3DC
// line start: 1866
// line end:   1907
void ST_Om_trans() {
	// address: 0x8009DE74
	// size: 0xC
	static long v_p[3];
	// address: 0x8009DE80
	// size: 0xC
	static long v_r[3];
	// register: 18
	register unsigned long i;
	// register: 17
	register unsigned long j;
	{
	}
}


// address: 0x8006F584
// line start: 1910
// line end:   1999
void model_disp(struct _60fake *pOm, unsigned long type, unsigned long no) {
	// address: 0x8009DE8C
	// size: 0x10
	static struct _1fake pp;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake Mx;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake sv;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake rot;
}


