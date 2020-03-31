// D:\Bio2\prog\STATUS.C

#include "types.h"

// address: 0x80062080
// line start: 56
// line end:   154
void Status_init() {
	// address: 0x8009C334
	// size: 0x21
	static unsigned char init_item_tbl[3][11];
	// register: 7
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 6
	// size: 0x4
	register struct _59fake *i_work;
	// register: 3
	register unsigned long i;
}


// address: 0x800621A4
// line start: 167
// line end:   281
void Status_init_m() {
	// register: 19
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 16
	register unsigned long i;
}


// address: 0x800624C0
// line start: 294
// line end:   436
void Status() {
	// address: 0x8009C358
	// size: 0x30
	static void (*Status_proc_tbl[3][4])();
	// address: 0x8009C388
	// size: 0x28
	static struct _77fake st_light;
	// register: 18
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 22
	// size: 0x8728
	register struct _97fake *pG;
	// register: 17
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x800628A4
// line start: 449
// line end:   517
void St_exit() {
	// register: 17
	// size: 0x1070
	register struct _113fake *pSt;
	{
		{
			{
			}
		}
	}
}


// address: 0x80062AA4
// line start: 520
// line end:   522
void St_fade_out_set();

// address: 0x80062ADC
// line start: 526
// line end:   532
void St_fade_out_wait();

// address: 0x80062B38
// line start: 540
// line end:   637
void St_chenge_pl(unsigned long pl_id) {
	// address: 0x8009C3B0
	// size: 0x42
	static unsigned char init_item_tbl[3][22];
	// register: 17
	// size: 0x8728
	register struct _97fake *pG;
	// register: 19
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 16
	register unsigned long i;
	// register: 6
	register unsigned long offset;
	{
		{
		}
	}
}


// address: 0x80062D94
// line start: 640
// line end:   682
void pl_tim_load(struct _74fake *pEm) {
	// register: 17
	register unsigned long Mem;
	// address: 0xFFFFFFD8
	// size: 0x14
	auto struct _52fake Tim_image;
}


// address: 0x80062E60
// line start: 687
// line end:   698
unsigned long St_file_set(unsigned long file_no) {
	// register: 5
	register unsigned long i;
}


// address: 0x80062EA0
// line start: 703
// line end:   722
void St_room_set() {
	// register: 3
	register unsigned long flag;
}


// address: 0x80062F54
// line start: 725
// line end:   734
void St_disp_name(long x, long y, unsigned long at, unsigned long id) {
	// register: 17
	register unsigned long item_at;
}


// address: 0x80063000
// line start: 739
// line end:   745
void Set_iwork(unsigned long no, unsigned long id, unsigned long num, unsigned long size) {
	// register: 2
	// size: 0x8728
	register struct _97fake *pG;
}


// address: 0x8006303C
// line start: 748
// line end:   755
void Set_iwork_num(unsigned long no, unsigned long num) {
	// register: 7
	// size: 0x8728
	register struct _97fake *pG;
}


// address: 0x800630BC
// line start: 760
// line end:   774
unsigned long Check_pl_life() {
	// register: 3
	register unsigned long now_life;
	// register: 4
	register unsigned long max_life;
}


// address: 0x80063114
// line start: 779
// line end:   780
unsigned long Check_item_space(unsigned long id);

// address: 0x80063120
// line start: 789
// line end:   821
unsigned long Check_item_mix() {
	// register: 8
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 3
	// size: 0x4
	register struct _108fake *im_data;
	// register: 2
	register unsigned long id_m;
	// register: 7
	register unsigned long id_s;
	// register: 4
	register unsigned long mix_max;
	// register: 6
	register unsigned long ctr;
}


// address: 0x800631D8
// line start: 830
// line end:   847
long Search_item(unsigned long type) {
	// register: 3
	register unsigned long ctr;
	// register: 6
	register unsigned long rt;
}


// address: 0x8006323C
// line start: 853
// line end:   862
long Search_item_id(unsigned long id) {
	// register: 3
	register unsigned long ctr;
}


// address: 0x80063284
// line start: 867
// line end:   899
void Sort_item() {
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 20
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 3
	register long no;
	// register: 17
	register unsigned long ctr;
}


// address: 0x8006340C
// line start: 906
// line end:   953
void Shift_item(unsigned long type) {
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 20
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 16
	register unsigned long i;
}


// address: 0x80063634
// line start: 959
// line end:   977
void Set_item(unsigned long id, unsigned long num, unsigned long *adr) {
	// register: 16
	register unsigned long work_no;
}


// address: 0x80063700
// line start: 982
// line end:   994
void Pix_trans(unsigned long set_no, unsigned long *data_addr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake rect;
}


// address: 0x8006378C
// line start: 999
// line end:   1027
void Pix_trans_pl(unsigned long set_no, unsigned long id, unsigned long *data_addr) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _16fake rect;
}


// address: 0x800638CC
// line start: 1032
// line end:   1050
void Pix_move(unsigned long base, unsigned long object) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake rect;
}


// address: 0x80063998
// line start: 1055
// line end:   1071
void Pix_clear(unsigned long set_no) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake rect;
}


// address: 0x80063A30
// line start: 1076
// line end:   1090
void St_pltex_operation(unsigned long type) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake rect;
}


// address: 0x80063A98
// line start: 1097
// line end:   1116
unsigned long Tama_ck_i(unsigned long id) {
}


// address: 0x80063B50
// line start: 1122
// line end:   1171
unsigned long Tama_decrease_i(unsigned long id, unsigned long flag) {
	// register: 18
	register unsigned long item_no;
	// register: 16
	register unsigned long num;
}


// address: 0x80063CBC
// line start: 1177
// line end:   1186
unsigned char Tama_reload_ck() {
	// register: 2
	// size: 0x4
	register struct _108fake *tbl_ptr;
}


// address: 0x80063D14
// line start: 1192
// line end:   1208
void Tama_reload() {
	// register: 3
	// size: 0x4
	register struct _108fake *tbl_ptr;
	// register: 16
	register unsigned long max;
}


// address: 0x80063DEC
// line start: 1213
// line end:   1297
void Check_cursol_distance(unsigned long type) {
	// register: 5
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 3
	register unsigned long size;
}


