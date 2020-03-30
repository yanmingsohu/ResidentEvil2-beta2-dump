#include "types.h"

// === [ Overlay ID 54 ] ===

// address: 0x80200013
extern unsigned char Seid;

// address: 0x80200014
extern unsigned char Seno;

// address: 0x80200016
extern unsigned char arms;

// address: 0x80200015
extern unsigned char mode;

// address: 0x80200012
extern unsigned char snd_ut_stat;

// address: 0x80200010
extern unsigned char Pnum_m;

// address: 0x80200011
extern unsigned char Pnum_s;

// address: 0x80200020
// size: 0x20
extern struct VabHdr *pVh_m;

// address: 0x8020000C
// size: 0x20
extern struct VabHdr *pVh_s;

// address: 0x80200018
// size: 0x10
extern struct ProgAtr *pPa_m;

// address: 0x8020001C
// size: 0x10
extern struct ProgAtr *pPa_s;

// address: 0x807097B8
// size: 0x70
extern struct _100fake MAKER;

// address: 0x807095F0
// size: 0x48
extern struct _101fake MAKER_LINE;

// address: 0x80709658
// size: 0x48
extern struct _101fake MAKER_LINE2;

// address: 0x807096A0
// size: 0x48
extern struct _101fake MAKER_LINE3;

// address: 0x807096E8
// size: 0x48
extern struct _101fake MAKER_LINE4;

// address: 0x80709738
// size: 0x48
extern struct _101fake MAKER_LINE5;

// address: 0x807065C4
// size: 0x244
extern struct _74fake *EM_tool;

// address: 0x807098F0
// size: 0x48
extern struct _101fake EMCK_PE_LINE;

// address: 0x80709860
// size: 0x48
extern struct _101fake EMCK_DE_LINE;

// address: 0x80709938
// size: 0x48
extern struct _101fake EMCK_DIR_LINE;

// address: 0x807065C0
extern unsigned long Old_routine;

// address: 0x80709980
extern char Em_no;

// address: 0x80709828
extern unsigned char R_no;

// address: 0x80709982
extern short Speed;

// address: 0x80709730
extern unsigned char M1_motion_loop_flg;

// address: 0x807095E0
extern char EMCK_in_timer;

// address: 0x80704198
extern char EMCK_in_cnt;

// address: 0x80709638
// size: 0x20
extern struct _76fake EMCK_Rcut;

// address: 0x807065D8
// size: 0x8
extern struct _2fake EMCK_Rot;

// address: 0x807095E8
// size: 0x8
extern struct _2fake EMCK_Rot2;

// address: 0x807065C8
// size: 0x10
extern struct _1fake EMCK_Pos;

// address: 0x807041A0
// size: 0x20
extern struct _0fake EMCK_Tm;

// address: 0x80709788
// size: 0x30
extern struct _24fake EMCK_Backg[2];

// address: 0x80709830
// size: 0x30
extern struct _24fake EMCK_Backg2[2];

// address: 0x807098A8
// size: 0x48
extern struct _101fake WEAPON_MAKER;

// address: 0x80704180
// size: 0x244
extern struct _74fake *EMCK;

// address: 0x80704184
extern char Color_timer;

// address: 0x80704185
extern char Color_plus;

// address: 0x80704186
extern char Maker_p;

// address: 0x80704187
extern char Maker_plus;

// address: 0x80704188
extern char Maker_timer;

// address: 0x80704189
extern char Main_mode;

// address: 0x8070418A
extern char Main_mode_in_timer;

// address: 0x8070418B
extern char Main_mode_in_cnt;

// address: 0x8070418D
extern char M1_mode0;

// address: 0x8070418E
extern unsigned char M1_move_cnt_max;

// address: 0x8070418F
extern unsigned char M1_routine_0;

// address: 0x80704190
extern unsigned char M1_routine_1;

// address: 0x80704191
extern char Back_id;

// address: 0x80704192
extern unsigned char EMCK_On;

// address: 0x80704193
extern unsigned char EMCK_routine_0;

// address: 0x80704194
extern unsigned char EMCK_routine_1;

// address: 0x80704195
extern unsigned char Weapon_r;

// address: 0x80704196
extern char Weapon_timer;

// address: 0x80200004
// line start: 404
// line end:   404
void T_Snd();

// address: 0x80700B6C
// line start: 27
// line end:   65
int init_KI2(struct _100fake *ki2, unsigned long color) {
}


// address: 0x80700CA8
// line start: 70
// line end:   91
int init_KI2_LINE_F3(struct _101fake *kil, unsigned long color) {
}


// address: 0x80700D9C
// line start: 98
// line end:   127
int color_plus_KI2_LINE_F3() {
}


// address: 0x80700ED4
// line start: 134
// line end:   149
int ki2_set(struct _100fake *ki2, struct _101fake *kil, struct _101fake *kil2, unsigned long color) {
}


// address: 0x80700F30
// line start: 155
// line end:   225
int ki_sort(struct _100fake *ki2, struct _101fake *kil, struct _101fake *kil2, unsigned long *sxy) {
	// register: 13
	// size: 0x48
	register struct _101fake *top1;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80701494
// line start: 231
// line end:   331
int Maker_line_sort(struct _101fake *kil, struct _101fake *kil2, struct _1fake *pos) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake Tsv0;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake Tsv1;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake Tsv2;
	// register: 17
	// size: 0x48
	register struct _101fake *top1;
	// address: 0xFFFFFFC8
	auto unsigned long p;
	// address: 0xFFFFFFCC
	auto unsigned long flg;
	// register: 6
	register unsigned long otz;
}


// address: 0x807019C4
// line start: 343
// line end:   588
void Enemy_move_tool(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake TS0;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _2fake TS1;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake TM;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFDC
	auto unsigned long p;
	// address: 0xFFFFFFE0
	auto unsigned long flg;
	// address: 0xFFFFFFD8
	auto unsigned long sxy;
	// address: 0x8070418C
	static unsigned char maker_mode;
	// register: 5
	// size: 0x244
	register struct _74fake **ppEm;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x807024D0
// line start: 601
// line end:   815
void Enemy_motion_view(struct _74fake *pEm) {
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake TS0;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake TS1;
	// address: 0xFFFFFFD0
	// size: 0x20
	auto struct _0fake TM;
	// register: 5
	register unsigned long *Tmp;
	// register: 4
	// size: 0x244
	register struct _74fake **ppEm;
	{
	}
}


// address: 0x80702C80
// line start: 826
// line end:   967
void Enemy_st_view(struct _74fake *pEm) {
	// register: 16
	register short Dir;
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct _2fake Tsv0;
	// address: 0xFFFFFF88
	// size: 0x8
	auto struct _2fake Tsv1;
	// address: 0xFFFFFF90
	// size: 0x8
	auto struct _2fake Tsv2;
	// register: 16
	// size: 0x48
	register struct _101fake *top1;
	// address: 0xFFFFFFB8
	auto unsigned long p;
	// register: 6
	register unsigned long otz;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake Tm;
}


// address: 0x80703440
// line start: 994
// line end:   1055
void init_Enemy_tool_sitenn() {
	// address: 0xFFFFFFB8
	// size: 0x10
	auto struct _1fake Tv;
	// register: 16
	register long xx;
	// register: 17
	register long zz;
	// register: 18
	register long yy;
	// register: 16
	register long ll;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake Tm;
}


// address: 0x80703834
// line start: 1060
// line end:   1227
void Enemy_tool_sitenn() {
	// address: 0xFFFFFF60
	// size: 0x10
	auto struct _1fake Tv;
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct _2fake Tsv0;
	// address: 0xFFFFFF78
	// size: 0x8
	auto struct _2fake Tsv1;
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct _2fake Rot2;
	// address: 0xFFFFFF88
	// size: 0x20
	auto struct _0fake Tm;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto struct _0fake Tm1;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake Tm2;
	// register: 8
	// size: 0x18
	register struct _24fake *Top0;
}


// address: 0x80703F1C
// line start: 1239
// line end:   1277
int Weapon_maker_sort() {
	// register: 9
	// size: 0x48
	register struct _101fake *top1;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Tsv0;
	// address: 0xFFFFFFB0
	auto unsigned long sxy;
	// address: 0xFFFFFFB4
	auto unsigned long p;
	// address: 0xFFFFFFB8
	auto unsigned long flg;
}


