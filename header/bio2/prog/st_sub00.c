// D:\Bio2\prog\ST_SUB00.C

#include "types.h"

// address: 0x80063FD4
// line start: 50
// line end:   79
void St_init00() {
	// register: 16
	// size: 0x1070
	register struct _113fake *pSt;
	{
	}
}


// address: 0x800640E0
// line start: 82
// line end:   119
void St_main00() {
	// address: 0x8009C854
	// size: 0x18
	static void (*Status_menu0_proc_tbl[6])();
	{
	}
}


// address: 0x80064194
// line start: 124
// line end:   162
void St_menu0_select() {
	// register: 16
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 17
	// size: 0x8728
	register struct _97fake *pG;
	// register: 4
	register unsigned long c_old;
	{
		{
			{
			}
		}
	}
}


// address: 0x800642E4
// line start: 167
// line end:   459
void St_menu0_item() {
	// register: 17
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 18
	// size: 0x8728
	register struct _97fake *pG;
	// register: 16
	register unsigned long c_old;
	// address: 0x800B67C0
	static unsigned char shot;
	// register: 5
	register unsigned long id;
	// address: 0x800B67C4
	static short timer;
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
											// register: 4
											register unsigned long tmp;
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
}


// address: 0x80064E20
// line start: 464
// line end:   615
void St_com_use_equip() {
	// register: 16
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 5
	// size: 0x8728
	register struct _97fake *pG;
	// register: 3
	register unsigned long item_id;
	{
		// address: 0x80064F84
		bool recover;
		// address: 0x80065040
		bool recover_cuer;
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


// address: 0x800651D4
// line start: 620
// line end:   1064
void St_com_mix() {
	// register: 17
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 6
	register unsigned long id_m;
	// register: 5
	register unsigned long id_s;
	// register: 18
	register unsigned long limit;
	// register: 16
	register long sort_no;
	// register: 16
	register long tmp;
	// register: 6
	register unsigned long c_old;
	{
		// address: 0x800656C0
		bool DISP_SORT_END;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x800660A8
// line start: 1069
// line end:   1198
void St_com_inspect() {
	// register: 16
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 17
	register unsigned long id;
	// register: 6
	register unsigned long mess_no;
	{
		{
			{
			}
		}
	}
}


// address: 0x800664DC
// line start: 1203
// line end:   1688
void St_menu0_file() {
	// address: 0x8009C86C
	// size: 0xC
	static unsigned char add[12];
	// register: 16
	// size: 0x74
	register struct _60fake *pOm;
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	// register: 18
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 19
	register unsigned long *pw;
	// register: 4
	register unsigned long page_max;
	// register: 17
	register unsigned long old_file;
	// register: 20
	register unsigned long i;
	// register: 17
	register unsigned long j;
	{
		// address: 0x80066DA8
		bool RTN_8;
		// address: 0x80067184
		bool W_EXIT;
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
						}
					}
				}
			}
		}
	}
}


// address: 0x800671C8
// line start: 1694
// line end:   1717
void file_moji_load() {
	// address: 0x8009C878
	// size: 0x18
	static unsigned char File_offset[24];
	// register: 4
	register unsigned long file_no;
	// register: 2
	register unsigned long tmp;
}


// address: 0x800672D4
// line start: 1721
// line end:   1745
void move_file_tag(unsigned long type) {
	// register: 6
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 3
	register unsigned long i;
	// register: 5
	register unsigned long cnt;
	// register: 7
	register unsigned long book_no;
	// address: 0x80067334
	bool dec;
	// address: 0x80067380
	bool inc;
}


// address: 0x800673D4
// line start: 1767
// line end:   1917
void St_menu0_map() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _16fake rect;
	// register: 16
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 17
	// size: 0x8728
	register struct _97fake *pG;
	// register: 18
	register unsigned long old_map_no;
	// register: 8
	register unsigned long file_no;
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


// address: 0x800678CC
// line start: 1920
// line end:   1987
void St_init_disp_map() {
	// address: 0x8009C8C0
	// size: 0x8
	static unsigned char Map_char_tbl[4][2];
	// register: 19
	// size: 0x14
	register struct _37fake *sp;
	// register: 20
	register unsigned long i;
	// register: 18
	register unsigned long j;
	// register: 3
	// size: 0x10
	register struct _111fake *pMap_data;
	// register: 30
	register unsigned long no;
}


// address: 0x80067B44
// line start: 1991
// line end:   2126
void St_disp_map() {
	// register: 20
	// size: 0x14
	register struct _37fake *sp;
	// register: 22
	register unsigned long *pOt;
	// register: 30
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 23
	// size: 0x10
	register struct _111fake *pMap_data;
	// address: 0xFFFFFFD0
	auto unsigned long now_room;
	// register: 17
	register unsigned long col;
	// register: 17
	register unsigned long i;
	{
		{
			{
				{
					// address: 0x80068128
					bool next;
					{
						// register: 4
						register unsigned long tmp;
					}
				}
			}
		}
	}
}


// address: 0x80068190
// line start: 2130
// line end:   2199
unsigned long Check_map_no(unsigned long stage, unsigned long room) {
	// register: 5
	register unsigned long floor;
	{
	}
}


// address: 0x800683BC
// line start: 2203
// line end:   2281
unsigned long Check_room_no(unsigned long map_no, unsigned long room);

// address: 0x80068554
// line start: 2291
// line end:   2377
void St_menu1_map() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _16fake rect;
	// register: 16
	// size: 0x1070
	register struct _113fake *pSt;
	// register: 17
	// size: 0x8728
	register struct _97fake *pG;
	// register: 18
	register unsigned long old_map_no;
	// register: 6
	register unsigned long file_no;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006887C
// line start: 2380
// line end:   2432
void St_init03() {
	// register: 8
	register unsigned long file_no;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake rect;
	{
	}
}


// address: 0x80068A18
// line start: 2435
// line end:   2446
void St_main03() {
	// address: 0x8009C8D0
	// size: 0xC
	static void (*Status_direct_map_proc_tbl[3])();
}


