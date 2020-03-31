// D:\Bio2\prog\ST_SUB01.C

#include "types.h"

// address: 0x80068A78
// line start: 39
// line end:   90
void St_init01() {
	// register: 19
	// size: 0x1070
	register struct _107fake *pSt;
	// register: 17
	// size: 0x8728
	register struct _97fake *pG;
	// register: 16
	register unsigned long i;
	{
	}
}


// address: 0x80068CDC
// line start: 93
// line end:   137
void St_main01() {
	// address: 0x8009C8DC
	// size: 0x10
	static void (*St_itembox_proc_tbl[4])();
	{
	}
}


// address: 0x80068D84
// line start: 140
// line end:   152
void St_select_menu_m() {
	{
		{
		}
	}
}


// address: 0x80068E00
// line start: 155
// line end:   365
void St_select_item_m() {
	// register: 17
	// size: 0x1070
	register struct _107fake *pSt;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 6
	register unsigned long c_old;
	// register: 16
	register long i;
	// address: 0x80069514
	bool no_name_disp;
	{
		{
			{
				{
					{
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
				}
			}
		}
	}
}


// address: 0x8006955C
// line start: 368
// line end:   607
void Exchange_item() {
	// register: 16
	// size: 0x1070
	register struct _107fake *pSt;
	// register: 20
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto struct _59fake bk_work;
	// register: 18
	register long space_num;
	// register: 21
	register unsigned long sel;
	// register: 19
	register unsigned long main;
	// register: 7
	register unsigned long type;
	// register: 6
	register unsigned long sel_id;
	// register: 8
	register unsigned long sel_num;
	// address: 0x80069EB4
	bool num_add;
	{
		// register: 5
		register unsigned long i;
		{
		}
	}
}


// address: 0x80069F60
// line start: 612
// line end:   705
void St_init_itembox() {
	// address: 0x8009C8EC
	// size: 0x64
	static unsigned char Ibox_char_tbl[4][25];
	// register: 21
	// size: 0x28
	register struct _26fake *pft4;
	// register: 22
	// size: 0x18
	register struct _24fake *pf4;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _31fake *lf2;
	// register: 16
	// size: 0x14
	register struct _37fake *sp;
	// register: 6
	register unsigned long clut;
	// register: 18
	register unsigned long i;
	// register: 17
	register unsigned long j;
}


// address: 0x8006A1E4
// line start: 708
// line end:   936
void St_disp_itembox() {
	// address: 0x8009C950
	// size: 0x10
	static unsigned char f4_tbl[4][4];
	// address: 0x8009C960
	// size: 0x64
	static short Ibox_pos_tbl[2][25];
	// register: 20
	// size: 0x28
	register struct _26fake *pft4;
	// register: 21
	// size: 0x18
	register struct _24fake *pf4;
	// address: 0xFFFFFF90
	// size: 0x10
	auto struct _31fake *lf2;
	// register: 18
	// size: 0x14
	register struct _37fake *sp;
	// address: 0xFFFFFF98
	auto unsigned long *pOt;
	// address: 0xFFFFFFA0
	auto unsigned long *pOt2;
	// address: 0xFFFFFFA8
	auto unsigned long x;
	// register: 30
	register unsigned long y;
	// register: 19
	register unsigned long i;
	// register: 7
	register long add_x;
	// address: 0xFFFFFFB0
	auto long add_y;
	// address: 0xFFFFFFB8
	auto long sel;
}


