// D:\Bio2\prog\EM2F.C

#include "types.h"

// address: 0x80100034
// line start: 55
// line end:   91
void Em12f(struct _74fake *pEm) {
	{
	}
}


// address: 0x8010010C
// line start: 101
// line end:   102
void Em2f_after(struct _74fake *pEm);

// address: 0x8010012C
// line start: 106
// line end:   189
void Em2f_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x8010033C
// line start: 200
// line end:   206
void Em2f_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010037C
// line start: 215
// line end:   216
void Em2f_Mv_dummy(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100384
// line start: 239
// line end:   268
void Em2f_Mv_move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register unsigned char req;
}


// address: 0x8010044C
// line start: 275
// line end:   285
void Em2f_move_taiki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801004D0
// line start: 300
// line end:   316
void Em2f_move_atck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0x244
	register struct _74fake *pIv;
	// register: 2
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x8010056C
// line start: 327
// line end:   333
void move_atck00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801005E4
// line start: 340
// line end:   369
void move_atck10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x244
	register struct _74fake *pIv;
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x80100708
// line start: 377
// line end:   413
void move_atck20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x244
	register struct _74fake *pIv;
	// register: 17
	register unsigned long chr_type;
	// register: 18
	register unsigned long eos;
}


// address: 0x801007F4
// line start: 416
// line end:   426
void move_atck20_0(struct _74fake *pEm);

// address: 0x80100820
// line start: 434
// line end:   436
void move_atck30(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100828
// line start: 445
// line end:   495
void Em2f_move_neck(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x244
	register struct _74fake *pIv;
	// register: 19
	// size: 0x28
	register struct _106fake *pIvf;
	// register: 2
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x80100A14
// line start: 507
// line end:   519
void Em2f_move_dmg(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100ABC
// line start: 528
// line end:   548
void Em2f_move_color(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100B18
// line start: 555
// line end:   565
void Em2f_move_ivyfall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100B58
// line start: 573
// line end:   590
void Em2f_move_gas(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100C18
// line start: 602
// line end:   616
void Em2f_move_hole(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100CA0
// line start: 623
// line end:   636
void Em2f_move_hole00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100D84
// line start: 644
// line end:   666
void Em2f_move_hole10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80100E44
// line start: 686
// line end:   687
void Em2f_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80100E80
// line start: 696
// line end:   762
void Em2f_dmg_down(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0x244
	register struct _74fake *pIv;
}


// address: 0x80101090
// line start: 769
// line end:   791
void Em2f_dmg_fall(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801011B8
// line start: 806
// line end:   832
void Em2f_dmg_omake(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x80101290
// line start: 838
// line end:   867
void Em2f_dmg_omake00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x28
	register struct _106fake *pIvf;
}


// address: 0x801013B0
// line start: 873
// line end:   948
void Em2f_dmg_omake10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned long chr_type;
	{
	}
}


// address: 0x80101610
// line start: 958
// line end:   984
void Em2f_dmg_oki(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0x18
	register struct _107fake *pFp;
}


// address: 0x801016B8
// line start: 992
// line end:   1040
void Em2f_dmg_H2SO4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x80101840
// line start: 1078
// line end:   1081
void Em2f_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010188C
// line start: 1090
// line end:   1093
void Em2f_Die_nml(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x801018CC
// line start: 1102
// line end:   1135
void Em2f_Die_fire(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long i;
}


// address: 0x80101A48
// line start: 1149
// line end:   1150
void Em2f_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101A50
// line start: 1160
// line end:   1161
void Em2f_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80101A64
// size: 0xAC
// line start: 1179
// line end:   1189
struct _65fake *Get_parts_pos(struct _74fake *pTg, struct _2fake *pSv, unsigned long no) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80101AAC
// line start: 1201
// line end:   1239
void On_Ivyparts(struct _74fake *pEm, unsigned long mode) {
	// register: 20
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	// size: 0x244
	register struct _74fake *pTg;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake sv;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake sv2;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x80101C08
// line start: 1254
// line end:   1300
long hit_ck_main(struct _74fake *pEm, long pl, short dmg) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pPt;
	// register: 16
	// size: 0x218
	register struct _72fake *pTg;
	// register: 3
	register long ck;
	// register: 18
	register long i;
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


// address: 0x80101DB0
// line start: 1303
// line end:   1317
long Atck_hit_ck(struct _74fake *pEm, short dmg) {
	// register: 2
	register long rep;
}


// address: 0x80101E28
// line start: 1328
// line end:   1334
void Em2f_Pl_to_dmg(struct _72fake *pPl, unsigned char dir);

// address: 0x80101E4C
// line start: 1345
// line end:   1349
void Em2f_Pl_to_die(struct _72fake *pPl);

// address: 0x80101E64
// line start: 1358
// line end:   1365
void Set_req(struct _74fake *pEm, unsigned char req);

// address: 0x80101E94
// line start: 1374
// line end:   1396
void Pcolor_dec(struct _74fake *pEm) {
	// register: 6
	register unsigned long p0;
	// register: 5
	register unsigned long p1;
	// register: 3
	register unsigned long p2;
	// register: 9
	register unsigned long i;
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80101F08
// line start: 1418
// line end:   1440
void Set_blood(struct _74fake *pEm, unsigned char parts, unsigned char type) {
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 8
	register long dir;
	// register: 3
	// size: 0x6
	register struct _108fake *tbl;
}


// address: 0x80101FA0
// line start: 1521
// line end:   1524
unsigned long Iv_Jh_init(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x80101FF4
// line start: 1538
// line end:   1565
void Iv_Jh_move(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010D034
// line start: 55
// line end:   91
void Em22f(struct _74fake *pEm) {
	{
	}
}


// address: 0x8010D10C
// line start: 101
// line end:   102
void Em2f_after_addr_8010D10C(struct _74fake *pEm);

// address: 0x8010D12C
// line start: 106
// line end:   189
void Em2f_Init_addr_8010D12C(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x8010D33C
// line start: 200
// line end:   206
void Em2f_Move_addr_8010D33C(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D37C
// line start: 215
// line end:   216
void Em2f_Mv_dummy_addr_8010D37C(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D384
// line start: 239
// line end:   268
void Em2f_Mv_move_addr_8010D384(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	register unsigned char req;
}


// address: 0x8010D44C
// line start: 275
// line end:   285
void Em2f_move_taiki_addr_8010D44C(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D4D0
// line start: 300
// line end:   316
void Em2f_move_atck_addr_8010D4D0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0x244
	register struct _74fake *pIv;
	// register: 2
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x8010D56C
// line start: 327
// line end:   333
void move_atck00_addr_8010D56C(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D5E4
// line start: 340
// line end:   369
void move_atck10_addr_8010D5E4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x244
	register struct _74fake *pIv;
	// register: 17
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x8010D708
// line start: 377
// line end:   413
void move_atck20_addr_8010D708(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0x244
	register struct _74fake *pIv;
	// register: 17
	register unsigned long chr_type;
	// register: 18
	register unsigned long eos;
}


// address: 0x8010D7F4
// line start: 416
// line end:   426
void move_atck20_0_addr_8010D7F4(struct _74fake *pEm);

// address: 0x8010D820
// line start: 434
// line end:   436
void move_atck30_addr_8010D820(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010D828
// line start: 445
// line end:   495
void Em2f_move_neck_addr_8010D828(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 18
	// size: 0x244
	register struct _74fake *pIv;
	// register: 19
	// size: 0x28
	register struct _106fake *pIvf;
	// register: 2
	// size: 0x218
	register struct _72fake *pTg;
}


// address: 0x8010DA14
// line start: 507
// line end:   519
void Em2f_move_dmg_addr_8010DA14(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DABC
// line start: 528
// line end:   548
void Em2f_move_color_addr_8010DABC(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010DB18
// line start: 555
// line end:   565
void Em2f_move_ivyfall_addr_8010DB18(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010DB58
// line start: 573
// line end:   590
void Em2f_move_gas_addr_8010DB58(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DC18
// line start: 602
// line end:   616
void Em2f_move_hole_addr_8010DC18(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DCA0
// line start: 623
// line end:   636
void Em2f_move_hole00_addr_8010DCA0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DD84
// line start: 644
// line end:   666
void Em2f_move_hole10_addr_8010DD84(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010DE44
// line start: 686
// line end:   687
void Em2f_Damage_addr_8010DE44(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010DE80
// line start: 696
// line end:   762
void Em2f_dmg_down_addr_8010DE80(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0x244
	register struct _74fake *pIv;
}


// address: 0x8010E090
// line start: 769
// line end:   791
void Em2f_dmg_fall_addr_8010E090(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E1B8
// line start: 806
// line end:   832
void Em2f_dmg_omake_addr_8010E1B8(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8010E290
// line start: 838
// line end:   867
void Em2f_dmg_omake00_addr_8010E290(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x28
	register struct _106fake *pIvf;
}


// address: 0x8010E3B0
// line start: 873
// line end:   948
void Em2f_dmg_omake10_addr_8010E3B0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned long chr_type;
	{
	}
}


// address: 0x8010E610
// line start: 958
// line end:   984
void Em2f_dmg_oki_addr_8010E610(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0x18
	register struct _107fake *pFp;
}


// address: 0x8010E6B8
// line start: 992
// line end:   1040
void Em2f_dmg_H2SO4_addr_8010E6B8(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	register unsigned long i;
}


// address: 0x8010E840
// line start: 1078
// line end:   1081
void Em2f_Die_addr_8010E840(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E88C
// line start: 1090
// line end:   1093
void Em2f_Die_nml_addr_8010E88C(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010E8CC
// line start: 1102
// line end:   1135
void Em2f_Die_fire_addr_8010E8CC(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned long i;
}


// address: 0x8010EA48
// line start: 1149
// line end:   1150
void Em2f_Scenario_addr_8010EA48(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010EA50
// line start: 1160
// line end:   1161
void Em2f_Dead_addr_8010EA50(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8010EA64
// size: 0xAC
// line start: 1179
// line end:   1189
struct _65fake *Get_parts_pos_addr_8010EA64(struct _74fake *pTg, struct _2fake *pSv, unsigned long no) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010EAAC
// line start: 1201
// line end:   1239
void On_Ivyparts_addr_8010EAAC(struct _74fake *pEm, unsigned long mode) {
	// register: 20
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 16
	// size: 0x244
	register struct _74fake *pTg;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct _2fake sv;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct _2fake sv2;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct _0fake M;
}


// address: 0x8010EC08
// line start: 1254
// line end:   1300
long hit_ck_main_addr_8010EC08(struct _74fake *pEm, long pl, short dmg) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pPt;
	// register: 16
	// size: 0x218
	register struct _72fake *pTg;
	// register: 3
	register long ck;
	// register: 18
	register long i;
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


// address: 0x8010EDB0
// line start: 1303
// line end:   1317
long Atck_hit_ck_addr_8010EDB0(struct _74fake *pEm, short dmg) {
	// register: 2
	register long rep;
}


// address: 0x8010EE28
// line start: 1328
// line end:   1334
void Em2f_Pl_to_dmg_addr_8010EE28(struct _72fake *pPl, unsigned char dir);

// address: 0x8010EE4C
// line start: 1345
// line end:   1349
void Em2f_Pl_to_die_addr_8010EE4C(struct _72fake *pPl);

// address: 0x8010EE64
// line start: 1358
// line end:   1365
void Set_req_addr_8010EE64(struct _74fake *pEm, unsigned char req);

// address: 0x8010EE94
// line start: 1374
// line end:   1396
void Pcolor_dec_addr_8010EE94(struct _74fake *pEm) {
	// register: 6
	register unsigned long p0;
	// register: 5
	register unsigned long p1;
	// register: 3
	register unsigned long p2;
	// register: 9
	register unsigned long i;
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8010EF08
// line start: 1418
// line end:   1440
void Set_blood_addr_8010EF08(struct _74fake *pEm, unsigned char parts, unsigned char type) {
	// register: 7
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 8
	register long dir;
	// register: 3
	// size: 0x6
	register struct _108fake *tbl;
}


// address: 0x8010EFA0
// line start: 1521
// line end:   1524
unsigned long Iv_Jh_init_addr_8010EFA0(struct _74fake *pEm, unsigned long Mem_top);

// address: 0x8010EFF4
// line start: 1538
// line end:   1565
void Iv_Jh_move_addr_8010EFF4(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


