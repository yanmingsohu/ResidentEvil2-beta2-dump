// D:\Bio2\prog\MEM_CARD.C

#include "types.h"

// address: 0x801C0344
// line start: 248
// line end:   252
void Mem_card();

// address: 0x801C037C
// line start: 266
// line end:   911
void Card_access() {
	// register: 16
	register unsigned char Rno0;
	// address: 0xFFFFFF90
	auto unsigned char Key_wait;
	// address: 0xFFFFFF98
	auto unsigned char Ccnt;
	// register: 18
	// size: 0x11D4
	register struct _102fake *p;
	// register: 21
	register unsigned char Err_code;
	// address: 0xFFFFFD70
	// size: 0x18C
	auto struct _99fake Finfo;
	// register: 19
	register unsigned char Cursor;
	// register: 23
	register unsigned char Cursor_range;
	// address: 0xFFFFFFA0
	auto unsigned char Cursor_old;
	// address: 0xFFFFFF00
	// size: 0x41
	auto unsigned char Card_mess[65];
	// address: 0xFFFFFF48
	// size: 0x2C
	auto struct _59fake Item_work_bak[11];
	// address: 0xFFFFFFA8
	auto unsigned char Equip_no_bak;
	// address: 0xFFFFFFB0
	auto unsigned char Mode;
	// register: 5
	register unsigned char i;
	// address: 0xFFFFFFB8
	auto unsigned char Dcursor;
	// address: 0xFFFFFF78
	// size: 0x16
	auto unsigned char Fname_bak[22];
	// register: 2
	// size: 0x4EC
	register struct _96fake *pSave_info;
	// address: 0x801C0438
	bool move;
	// address: 0x801C0664
	bool pnext;
	// address: 0x801C0698
	bool next;
	// address: 0x801C11F8
	bool disp;
	// address: 0x801C121C
	bool err;
	// address: 0x801C1250
	bool exit;
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
											// register: 3
											register unsigned long X;
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
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801C1290
// line start: 920
// line end:   969
void Cardaccess_init() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _16fake Rect;
}


// address: 0x801C1458
// line start: 978
// line end:   990
void Cardaccess_exit(unsigned long Mode) {
}


// address: 0x801C1504
// line start: 1000
// line end:   1322
void Mess_disp(unsigned long Rno, unsigned long Mode, unsigned long Cursor, unsigned long Err_code) {
	// register: 23
	register unsigned long i;
	// register: 17
	register unsigned long Kido_flg;
	// register: 16
	register unsigned long No;
	// address: 0xFFFFFFC8
	auto unsigned long Col;
	// register: 20
	// size: 0x11D4
	register struct _102fake *p;
	// address: 0xFFFFFF68
	// size: 0x43
	auto unsigned char Mess_work[67];
	// register: 19
	// size: 0x4EC
	register struct _96fake *pSave_info;
	// register: 21
	register unsigned char Disp_ofs;
	// register: 4
	register unsigned char *pMes;
	// register: 16
	register unsigned char End_flg;
	// address: 0x801C33F0
	static unsigned char Cursor_x_old;
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


// address: 0x801C201C
// line start: 1333
// line end:   1335
void Cursor_disp(unsigned long X, unsigned long Y) {
}


// address: 0x801C2064
// line start: 1346
// line end:   1355
void Search_f_num(unsigned char *F_num) {
	// register: 5
	register unsigned long i;
	// register: 2
	register unsigned long W;
}


// address: 0x801C20F0
// line start: 1368
// line end:   1404
unsigned long Check_card(unsigned char *F_num) {
	// register: 3
	register unsigned long Status;
	// register: 19
	register unsigned long i;
	// register: 16
	// size: 0x11D4
	register struct _102fake *p;
	// address: 0x801C21B4
	bool exit;
	{
	}
}


// address: 0x801C2210
// line start: 1465
// line end:   1482
unsigned long Wslot_check() {
	// register: 16
	register unsigned long Ret;
}


// address: 0x801C2288
// line start: 1492
// line end:   1546
void Card_mess_make(unsigned char *Mess, struct _96fake *Save_data, unsigned char Cursor) {
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


// address: 0x801C2448
// line start: 1555
// line end:   1581
void Save_push() {
}


// address: 0x801C2594
// line start: 1583
// line end:   1602
void Load_pop() {
	// register: 5
	// size: 0x11D4
	register struct _102fake *p;
}


// address: 0x801C26A0
// line start: 1646
// line end:   1650
void Clear_event();

// address: 0x801C26F8
// line start: 1660
// line end:   1663
void Clear_event2();

// address: 0x801C2740
// line start: 1680
// line end:   1721
unsigned long Card_write(struct _92fake *Head, unsigned char Port, unsigned char *Name, unsigned char *Title, unsigned long Cap) {
	// register: 17
	register long Fd;
	// register: 16
	register long i;
	// register: 16
	register unsigned long Timer;
	// register: 19
	register unsigned long Cnt;
	// address: 0xFFFFFDC0
	// size: 0x200
	auto struct _92fake Cardinf;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto unsigned char Filename[32];
	// address: 0x801C2848
	bool open_ok;
	// address: 0x801C2874
	bool write_ok;
}


// address: 0x801C28F4
// line start: 1735
// line end:   1754
unsigned long Card_read(unsigned long *Head, unsigned char *Name, unsigned long Cap, unsigned long Offset) {
	// register: 16
	register long Fd;
	// register: 17
	register unsigned long Cnt;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto unsigned char Filename[32];
}


// address: 0x801C2A14
// line start: 1765
// line end:   1799
void Card_search(unsigned long Port, struct _99fake *Buff, unsigned char *Str) {
	// address: 0xFFFFFFA8
	// size: 0x28
	auto struct DIRENTRY Dir;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto unsigned char Key[32];
	// register: 4
	register unsigned long i;
	{
	}
}


// address: 0x801C2B7C
// line start: 1814
// line end:   1841
unsigned long Card_check(unsigned long Port) {
	// register: 17
	register unsigned long Cnt;
	// register: 16
	register unsigned long Ret;
	// register: 18
	register unsigned long Old_ret;
	{
	}
}


// address: 0x801C2C54
// line start: 1853
// line end:   1866
unsigned long Card_format_check(unsigned long Port) {
	// register: 16
	register unsigned long Cnt;
	// register: 17
	register unsigned long Ret;
}


// address: 0x801C2CC8
// line start: 1876
// line end:   1881
long Card_format(unsigned long Port) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto unsigned char Key[6];
}


// address: 0x801C2D20
// line start: 1890
// line end:   1905
unsigned long Get_card_event() {
	// register: 16
	register unsigned long Cnt;
}


// address: 0x801C2DC8
// line start: 1914
// line end:   1928
unsigned long Get_card_event2() {
	// register: 16
	register unsigned long Cnt;
}


// address: 0x801C2E5C
// line start: 1939
// line end:   1953
unsigned long Card_clear(unsigned long Port) {
	// register: 16
	register unsigned long Cnt;
	// register: 17
	register unsigned long Ret;
}


