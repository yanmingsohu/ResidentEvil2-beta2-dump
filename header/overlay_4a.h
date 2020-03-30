#include "types.h"

// === [ Overlay ID 4a ] ===

// address: 0x801C33F8
// size: 0x11D4
extern struct _102fake Mcard;

// address: 0x801C2F58
// size: 0x291
extern unsigned char card_mes_data[657];

// address: 0x801C31EC
// size: 0x66
extern unsigned short card_mes_ofs[51];

// address: 0x801C3254
// size: 0x13
extern unsigned char Input_wait_tbl[19];

// address: 0x801C3268
// size: 0x11
extern unsigned char Keypunch_wait[17];

// address: 0x801C327C
// size: 0x11D4
extern struct _102fake *pMwork;

// address: 0x801C3280
// size: 0x12
extern unsigned short Emess_pos[9];

// address: 0x801C3294
// size: 0x156
extern unsigned char Save_area[19][18];

// address: 0x80093A8C
// size: 0x1E
extern unsigned char Mizu_size_tbl[2][15];

// address: 0x80093AAC
// size: 0xF
extern unsigned char Mizu_tbl[15];

// address: 0x80093ABC
// size: 0xFA
extern unsigned short Mizu_struct_tbl[125];

// address: 0x80093BB8
// size: 0x68
extern unsigned char Div_prim_coord[8][13];

// address: 0x800D4880
// size: 0x3BB4
extern struct _108fake Moji;

// address: 0x80093C20
// size: 0x4D1
extern unsigned char namelist_data[1233];

// address: 0x800940F4
// size: 0x112
extern unsigned short namelist_ofs[137];

// address: 0x80094208
// size: 0x2A6
extern unsigned char mess_tbl_data[678];

// address: 0x800944B0
// size: 0x2C
extern unsigned short mess_tbl_ofs[22];

// address: 0x800944DC
// size: 0x308
extern unsigned char mess_u_data[776];

// address: 0x800947E4
// size: 0x1E
extern unsigned short mess_u_ofs[15];

// address: 0x80094804
// size: 0x124D
extern unsigned char mess_sub_data[4685];

// address: 0x80095A54
// size: 0xE8
extern unsigned short mess_sub_ofs[116];

// address: 0x80095B3C
// size: 0x78
extern unsigned char mess_etc_data[120];

// address: 0x80095BB4
// size: 0x24
extern unsigned short mess_etc_ofs[18];

// address: 0x80095BD8
// size: 0x68
extern unsigned char branch_data[104];

// address: 0x80095C40
// size: 0x34
extern unsigned short branch_ofs[26];

// address: 0x80095C74
// size: 0xAE
extern char Prop_tbl[174];

// address: 0x80095D24
// size: 0x18
extern struct _109fake Branch_tbl[4];

// address: 0x80095D3C
// size: 0x18
extern struct _109fake Branch_u_tbl[4];

// address: 0x80095D54
// size: 0x22
static unsigned char ascii_tbl[17][2];

// address: 0x80095D78
static unsigned long Moji_count;

// address: 0x80095D7C
static unsigned long Sprt_count;

// address: 0x80095D80
static unsigned long Sprt8_count;

// address: 0x800C9C48
// size: 0x188
extern struct _100fake Monitor;

// address: 0x800B66F0
static unsigned long *pPc;

// address: 0x80095D84
// size: 0x90
static struct _101fake Ld_task_tbl[12];

// address: 0x800CF190
// size: 0x20
extern struct _110fake *pVm_work;

// address: 0x800CF17C
// size: 0x5C
extern struct _111fake *pVm_disp;

// address: 0x800C9BF8
// size: 0x8
extern struct _112fake *pVm_frm;

// address: 0x800CF178
// size: 0x18
extern struct _115fake *pCaption;

// address: 0x800C9C20
// size: 0x20
extern struct _110fake Vm_work;

// address: 0x800C9B98
// size: 0x5C
extern struct _111fake Vm_disp;

// address: 0x800C8180
// size: 0x4
extern struct _122fake Channel;

// address: 0x800CB280
// size: 0x4
extern struct _121fake Loc;

// address: 0x800D4840
// size: 0x8
extern unsigned char Ret_Value[8];

// address: 0x800DA7BC
// size: 0x18
extern struct _124fake *pFile;

// address: 0x800D8644
// size: 0x4
extern struct _123fake *pAtv;

// address: 0x800D186C
extern unsigned char *pMovie_result;

// address: 0x80095E8C
// size: 0xE0
extern struct _109fake Movie_tbl[7];

// address: 0x80095E14
// size: 0x6C
extern struct _113fake Caption00[9];

// address: 0x80095E80
// size: 0xC
extern struct _114fake Caption_list[1];

// address: 0x800C9270
// size: 0x8EC
extern struct _99fake Cc_work;

// address: 0x800CF140
extern short Om_fall_dir_x;

// address: 0x800CF148
extern short Om_fall_dir_y;

// address: 0x800CF14A
extern short Om_fall_dir_z;

// address: 0x800C72D8
extern short Om_fall_dir;

// address: 0x800C9BF4
extern short Om_fall_old_dir_x;

// address: 0x800C9BFC
extern short Om_fall_old_dir_y;

// address: 0x800C9BFE
extern short Om_fall_old_dir_z;

// address: 0x80095F84
// size: 0x40
static unsigned char Subpl_walk[2][32];

// address: 0x80095FC4
// size: 0x40
static unsigned char Subpl_back[2][32];

// address: 0x80096004
// size: 0x40
static unsigned char Subpl_dir[2][32];

// address: 0x80096044
// size: 0x40
static unsigned char Subpl_ato[2][32];

// address: 0x80096084
// size: 0x40
static unsigned char Subpl_run[2][32];

// address: 0x800960C4
// size: 0xE
static unsigned char Em4a_zobiparts_tbl[2][7];

// address: 0x800960D4
// size: 0x28
extern unsigned short Up_add_tbl[20];

// address: 0x800960FC
// size: 0x28
extern unsigned short Down_add_tbl[20];

// address: 0x80096124
// size: 0x28
extern short Box_sub_tbl[20];

// address: 0x8009614C
// size: 0x40
extern unsigned short Up_add_Spl_tbl[32];

// address: 0x8009618C
// size: 0x40
extern unsigned short Down_add_Spl_tbl[32];

// address: 0x800BE54C
// size: 0x40
extern struct _93fake *pDemo_moji;

// address: 0x800961CC
// size: 0x80
static unsigned short Key_type[16][4];

// address: 0x800D9E6C
// size: 0x53E0
extern struct _99fake *pCom_work;

// address: 0x80096254
// size: 0x16C0
extern struct _98fake Init_work_tbl[364];

// address: 0x80097914
// size: 0x9D
extern unsigned char pc_mes_data[157];

// address: 0x800979B4
// size: 0x12
extern unsigned short pc_mes_ofs[9];

// address: 0x800C9DE8
extern unsigned long *gpPl_tmd_ptr;

// address: 0x800CB298
extern unsigned long *gpPl_tmd2_ptr;

// address: 0x800C9C14
extern unsigned long *gpPl_pac_ptr;

// address: 0x800C9E00
extern unsigned long *gpPl_pac2_ptr;

// address: 0x800979E0
// size: 0x40
static unsigned char Subpl_walk_addr_800979E0[2][32];

// address: 0x80097A20
// size: 0x40
static unsigned char Subpl_back_addr_80097A20[2][32];

// address: 0x80097A60
// size: 0x40
static unsigned char Subpl_dir_addr_80097A60[2][32];

// address: 0x80097AA0
// size: 0x40
static unsigned char Subpl_ato_addr_80097AA0[2][32];

// address: 0x80097AE0
// size: 0x40
static unsigned char Subpl_run_addr_80097AE0[2][32];

// address: 0x80097B20
// size: 0xE
static unsigned char Em4a_zobiparts_tbl_addr_80097B20[2][7];

// address: 0x80097B30
// size: 0x20
extern unsigned short Pld_no[16];

// address: 0x80097B50
extern unsigned char No_death;

// address: 0x80097B54
// size: 0x24
extern void (*Pl_routine_0[9])();

// address: 0x80097B78
// size: 0x30
extern void (*Pl_mv_pad[12])();

// address: 0x80097BA8
// size: 0x30
extern void (*Pl_mv[12])();

// address: 0x80097BD8
extern unsigned char Pl_neck_timer;

// address: 0x80097BDC
// size: 0x10
extern struct _1fake Pl_kage_pos;

// address: 0x80097BEC
// size: 0x10
static struct _1fake pl_water;

// address: 0x80097BFC
// size: 0x10
static struct _1fake Wat_vec00;

// address: 0x80097C0C
// size: 0x18
extern void (*Pl_dm[6])();

// address: 0x80097C24
// size: 0x4
extern void (*Pl_die_t[1])();

// address: 0x80097C28
// size: 0x54
extern struct _107fake Pl_w00[3];

// address: 0x80097C7C
// size: 0x4
extern struct _108fake Pl_w00_s[2];

// address: 0x80097C80
// size: 0x8C
extern struct _107fake Pl_w011[5];

// address: 0x80097D0C
// size: 0xE
extern struct _108fake Pl_w01_s1[7];

// address: 0x80097D1C
// size: 0x8C
extern struct _107fake Pl_w0111[5];

// address: 0x80097DA8
// size: 0xE
extern struct _108fake Pl_w0111_s1[7];

// address: 0x80097DB8
// size: 0x8C
extern struct _107fake Pl_w010[5];

// address: 0x80097E44
// size: 0xE
extern struct _108fake Pl_w01_s0[7];

// address: 0x80097E54
// size: 0x8C
extern struct _107fake Pl_w012[5];

// address: 0x80097EE0
// size: 0xE
extern struct _108fake Pl_w01_s2[7];

// address: 0x80097EF0
// size: 0x54
extern struct _107fake Pl_w02[3];

// address: 0x80097F44
// size: 0x4
extern struct _108fake Pl_w02_s[2];

// address: 0x80097F48
// size: 0x54
extern struct _107fake Pl_w05[3];

// address: 0x80097F9C
// size: 0x4
extern struct _108fake Pl_w05_s[2];

// address: 0x80097FA0
// size: 0x54
extern struct _107fake Pl_w07[3];

// address: 0x80097FF4
// size: 0xE
extern struct _108fake Pl_w07_s[7];

// address: 0x80098004
// size: 0x54
extern struct _107fake Pl_w08[3];

// address: 0x80098058
// size: 0x12
extern struct _108fake Pl_w08_s[9];

// address: 0x8009806C
// size: 0x54
extern struct _107fake Pl_w0e[3];

// address: 0x800980C0
// size: 0x4
extern struct _108fake Pl_w0e_s[2];

// address: 0x800980C4
// size: 0x54
extern struct _107fake Pl_w0f[3];

// address: 0x80098118
// size: 0x6
extern struct _108fake Pl_w0f_s[3];

// address: 0x80098120
// size: 0x54
extern struct _107fake Pl_w12[3];

// address: 0x80098174
// size: 0x6
extern struct _108fake Pl_w12_s[3];

// address: 0x8009817C
// size: 0x1B0
extern struct _109fake Pl_weapon_tbl[3][18];

// address: 0x8009832C
// size: 0x168
extern struct _111fake Em10_damage_tbl[18];

// address: 0x80098494
// size: 0x168
extern struct _111fake Em20_damage_tbl[18];

// address: 0x800985FC
// size: 0x168
extern struct _111fake Em21_damage_tbl[18];

// address: 0x80098764
// size: 0x168
extern struct _111fake Em22_damage_tbl[18];

// address: 0x800988CC
// size: 0x168
extern struct _111fake Em23_damage_tbl[18];

// address: 0x80098A34
// size: 0x168
extern struct _111fake Em25_damage_tbl[18];

// address: 0x80098B9C
// size: 0x168
extern struct _111fake Em28_damage_tbl[18];

// address: 0x80098D04
// size: 0x168
extern struct _111fake Em29_damage_tbl[18];

// address: 0x80098E6C
// size: 0x168
extern struct _111fake Em2d_damage_tbl[18];

// address: 0x80098FD4
// size: 0x168
extern struct _111fake Em2a_damage_tbl[18];

// address: 0x8009913C
// size: 0x168
extern struct _111fake Em2e_damage_tbl[18];

// address: 0x800992A4
// size: 0x168
extern struct _111fake Em30_damage_tbl[18];

// address: 0x8009940C
// size: 0x168
extern struct _111fake Em31_damage_tbl[18];

// address: 0x80099574
// size: 0x168
extern struct _111fake Em33_damage_tbl[18];

// address: 0x800996DC
// size: 0x168
extern struct _111fake Em34_damage_tbl0[18];

// address: 0x80099844
// size: 0x168
extern struct _111fake Em34_damage_tbl1[18];

// address: 0x800999AC
// size: 0x168
extern struct _111fake Em36_damage_tbl[18];

// address: 0x80099B14
// size: 0x168
extern struct _111fake Em3a_damage_tbl[18];

// address: 0x80099C7C
// size: 0x168
extern struct _111fake Em3b_damage_tbl[18];

// address: 0x80099DE4
// size: 0xC0
extern struct _111fake *pEnemy_damage_tbl[48];

// address: 0x80099EA4
// size: 0x180
extern struct _116fake Pl_bow_hit_parts[48];

// address: 0x8009A024
// size: 0x20
extern unsigned short Plw_no[16];

// address: 0x8009A044
// size: 0x50
extern void (*Pl_weapon_init[20])();

// address: 0x8009A094
// size: 0x1B
extern unsigned char W_at_ck[9][3];

// address: 0x8009A0B0
// size: 0x88
extern short Ghand_len[4][17];

// address: 0x8009A138
// size: 0x10
extern char Mw_ck[16];

// address: 0x8009A148
// size: 0x15
extern unsigned char Pl_wep_mag_type[21];

// address: 0x8009A160
// size: 0x12
extern struct _112fake Pl_mag[3];

// address: 0x8009A174
// size: 0x3C
extern short G_rot_data_z[30];

// address: 0x8009A1B0
// size: 0x39
extern unsigned char Pl_weapon_kyan[3][19];

// address: 0x8009A1EC
// size: 0x4C
extern void (*pl_mv05_w_tbl[19])();

// address: 0x8009A238
// size: 0x5
extern unsigned char Gun_jtg_bit[5];

// address: 0x8009A240
// size: 0x4C
extern void (*pl_mv05_t2_init[19])();

// address: 0x8009A28C
// size: 0x4C
extern void (*pl_mv05_t2_spr[19])();

// address: 0x8009A2D8
// size: 0x1C
extern void (*pl_mv05_w0_tbl[7])();

// address: 0x8009A2F4
// size: 0x18
extern void (*pl_mv05_w1_tbl[6])();

// address: 0x8009A30C
// size: 0x8
extern short Bow_Room509[4];

// address: 0x8009A314
// size: 0x18
extern void (*pl_mv05_w2_tbl[6])();

// address: 0x8009A32C
// size: 0x18
extern void (*pl_mv05_w3_tbl[6])();

// address: 0x8009A344
// size: 0x18
extern void (*pl_mv05_w4_tbl[6])();

// address: 0x8009A35C
// size: 0x18
extern void (*pl_mv05_w5_tbl[6])();

// address: 0x800CE140
// size: 0x1000
extern struct _101fake Poly_eff[32];

// address: 0x800CF360
// size: 0x2500
extern struct _102fake Poly_eff2[32];

// address: 0x800B6C78
// size: 0xC0
extern struct _103fake Poly2_work[16];

// address: 0x8009A374
// size: 0x20
extern struct _2fake Poly_test4[4];

// address: 0x800DA700
// size: 0x4
extern struct _PSP *pPsp_work;

// address: 0x800D9E70
// size: 0x8
extern struct _98fake *pPsp_prim[2];

// address: 0x800D9E60
extern unsigned long Padd2_mode;

// address: 0x8009A4A8
// size: 0x1C
extern unsigned short *Rdt_tbl[7];

// address: 0x8009A394
// size: 0x3C
extern unsigned short Rdt_tbl1[30];

// address: 0x8009A3D0
// size: 0x38
extern unsigned short Rdt_tbl2[28];

// address: 0x8009A408
// size: 0x20
extern unsigned short Rdt_tbl3[16];

// address: 0x8009A428
// size: 0x28
extern unsigned short Rdt_tbl4[20];

// address: 0x8009A450
// size: 0x18
extern unsigned short Rdt_tbl5[12];

// address: 0x8009A468
// size: 0x30
extern unsigned short Rdt_tbl6[24];

// address: 0x8009A498
// size: 0x10
extern unsigned short Rdt_tbl7[8];

// address: 0x800C81E4
extern long Ceiling;

// address: 0x800CF180
extern long Ground_in_flg;

// address: 0x800CF198
extern long Ground_in_pos;

// address: 0x800D9E50
extern long Ceiling_in_pos;

// address: 0x800C9C40
// size: 0x10
extern struct _57fake *pStairs;

// address: 0x800B6774
// size: 0x10
static struct _57fake Tmp_Scd;

// address: 0x8009A4C4
// size: 0x40
static unsigned char Subpl_walk_addr_8009A4C4[2][32];

// address: 0x8009A504
// size: 0x40
static unsigned char Subpl_back_addr_8009A504[2][32];

// address: 0x8009A544
// size: 0x40
static unsigned char Subpl_dir_addr_8009A544[2][32];

// address: 0x8009A584
// size: 0x40
static unsigned char Subpl_ato_addr_8009A584[2][32];

// address: 0x8009A5C4
// size: 0x40
static unsigned char Subpl_run_addr_8009A5C4[2][32];

// address: 0x8009A604
// size: 0xE
static unsigned char Em4a_zobiparts_tbl_addr_8009A604[2][7];

// address: 0x8009A614
// size: 0x38
extern unsigned long (*Sca_rtn_tbl[14])();

// address: 0x8009A64C
// size: 0xE
extern unsigned char Sca_no_ck_tbl[14];

// address: 0x800DA718
// size: 0xC
extern struct _82fake *pCAot;

// address: 0x800DA768
extern unsigned long Old_Fatari;

// address: 0x800DA7B8
extern unsigned long Old_Uatari;

// address: 0x8009A65C
// size: 0x3C
extern unsigned long (*Sce_at_jump_tbl[15])();

// address: 0x800C9E08
// size: 0x1474
extern struct _103fake Sce;

// address: 0x800D9E60
extern unsigned long Padd2_mode_addr_800D9E60;

// address: 0x8009A698
// size: 0x71
extern unsigned char em_se_tbl[113];

// address: 0x8009A70C
// size: 0x204
extern unsigned long (*Sce_jmp_tbl[129])();

// address: 0x8009A910
// size: 0x6F
extern unsigned char Em_kind_tbl[111];

// address: 0x800C9E08
// size: 0x1474
extern struct _103fake Sce_addr_800C9E08;

// address: 0x800D9E60
extern unsigned long Padd2_mode_addr_800D9E60;

// address: 0x8009A980
// size: 0x40
static unsigned char Subpl_walk_addr_8009A980[2][32];

// address: 0x8009A9C0
// size: 0x40
static unsigned char Subpl_back_addr_8009A9C0[2][32];

// address: 0x8009AA00
// size: 0x40
static unsigned char Subpl_dir_addr_8009AA00[2][32];

// address: 0x8009AA40
// size: 0x40
static unsigned char Subpl_ato_addr_8009AA40[2][32];

// address: 0x8009AA80
// size: 0x40
static unsigned char Subpl_run_addr_8009AA80[2][32];

// address: 0x8009AAC0
// size: 0xE
static unsigned char Em4a_zobiparts_tbl_addr_8009AAC0[2][7];

// address: 0x8009AAD0
// size: 0x8C
extern unsigned long *Flg_addr[35];

// address: 0x800D9E60
extern unsigned long Padd2_mode_addr_800D9E60;

// address: 0x800C81E8
// size: 0x16
extern struct _104fake *pSce_em;

// address: 0x8009AB5C
// size: 0x40
static unsigned char Subpl_walk_addr_8009AB5C[2][32];

// address: 0x8009AB9C
// size: 0x40
static unsigned char Subpl_back_addr_8009AB9C[2][32];

// address: 0x8009ABDC
// size: 0x40
static unsigned char Subpl_dir_addr_8009ABDC[2][32];

// address: 0x8009AC1C
// size: 0x40
static unsigned char Subpl_ato_addr_8009AC1C[2][32];

// address: 0x8009AC5C
// size: 0x40
static unsigned char Subpl_run_addr_8009AC5C[2][32];

// address: 0x8009AC9C
// size: 0xE
static unsigned char Em4a_zobiparts_tbl_addr_8009AC9C[2][7];

// address: 0x8009ACAC
// size: 0x64
extern unsigned char Itp_check_sum[100];

// address: 0x800DA820
extern short Sedir;

// address: 0x800D8648
extern long Sesz;

// address: 0x800CB290
extern unsigned char Fade_rtn;

// address: 0x800D18C7
extern unsigned char Fade_time;

// address: 0x800D1874
extern unsigned char Fade_mode;

// address: 0x800D8438
extern unsigned char Volume_Se;

// address: 0x800DA7C4
extern unsigned char Volume_Bgm;

// address: 0x800DA76C
extern unsigned long MainVbSize;

// address: 0x800CF144
// size: 0x4
extern struct _53fake Main_vol;

// address: 0x800C9C10
// size: 0x4
extern struct _53fake Rev_vol;

// address: 0x800CB28C
// size: 0x4
extern struct _53fake RevD_vol;

// address: 0x800C72B8
// size: 0x4
extern struct _53fake Cd_vol;

// address: 0x800C9B5C
// size: 0x4
extern struct _53fake Pan_vol;

// address: 0x800C7408
// size: 0xC
extern struct _53fake Seqvol[3];

// address: 0x800C9DFE
// size: 0x2
extern struct _117fake Bgm;

// address: 0x800D1B24
// size: 0x2
extern struct _117fake *pBgm;

// address: 0x800C78F8
extern unsigned char *BgmSadr;

// address: 0x800C7288
// size: 0x7
extern char Vab_id[7];

// address: 0x800C9B60
// size: 0x1C
extern unsigned long *pVh_tbl[7];

// address: 0x800CE120
// size: 0x18
extern struct _115fake *pEdt_adr[6];

// address: 0x800C9B80
// size: 0x18
extern struct _116fake Seq_ctr[3];

// address: 0x800C72E0
// size: 0x30
extern struct _118fake Se_pri[24];

// address: 0x800C74E0
// size: 0x300
extern struct _119fake Entory[24];

// address: 0x800D8440
// size: 0x204
extern char Seq_table[516];

// address: 0x800C72DA
extern unsigned char Bgm_sw;

// address: 0x800BE5DE
extern short Sedir2;

// address: 0x800D1864
extern long D_ck;

// address: 0x800B6D40
extern unsigned char Reverb_flg;

// address: 0x800DA7C8
extern unsigned long RoomVbSize;

// address: 0x8009AD10
// size: 0x380
extern struct _114fake EnemSE_floc[112];

// address: 0x8009B090
// size: 0x80
extern unsigned char LRVT[128];

// address: 0x8009B110
// size: 0x80
extern unsigned char PANVT[128];

// address: 0x8009B190
// size: 0x6
extern unsigned char nroom[6];

// address: 0x8009B198
// size: 0x28
extern unsigned short Core_edh[20];

// address: 0x8009B1C0
// size: 0x28
extern unsigned short Core_vbd[20];

// address: 0x8009B1E8
// size: 0x26
extern unsigned short Arms_edh[19];

// address: 0x8009B210
// size: 0x26
extern unsigned short Arms_vbd[19];

// address: 0x8009B238
// size: 0x80
extern unsigned short Main_bgm[64];

// address: 0x8009B2B8
// size: 0x80
extern unsigned short Sub_bgm[64];

// address: 0x800C9C00
// size: 0xC
extern struct _74fake *pSpl_near_em[3];

// address: 0x800C72B0
// size: 0x6
extern short Em_dir[3];

// address: 0x800D18C0
// size: 0x6
extern unsigned short Em_l[3];

// address: 0x8009B338
// size: 0x40
static unsigned char Subpl_walk_addr_8009B338[2][32];

// address: 0x8009B378
// size: 0x40
static unsigned char Subpl_back_addr_8009B378[2][32];

// address: 0x8009B3B8
// size: 0x40
static unsigned char Subpl_dir_addr_8009B3B8[2][32];

// address: 0x8009B3F8
// size: 0x40
static unsigned char Subpl_ato_addr_8009B3F8[2][32];

// address: 0x8009B438
// size: 0x40
static unsigned char Subpl_run_addr_8009B438[2][32];

// address: 0x8009B478
// size: 0xE
static unsigned char Em4a_zobiparts_tbl_addr_8009B478[2][7];

// address: 0x8009B488
// size: 0x24
static void (*Spl_routine_0[9])();

// address: 0x8009B4AC
// size: 0x70
static void (*Spl_mv[28])();

// address: 0x8009B51C
// size: 0x70
static void (*Spl_in[28])();

// address: 0x8009B58C
// size: 0x10
static void (*Spl_dm[4])();

// address: 0x8009B59C
// size: 0x4
static void (*Spl_die[1])();

// address: 0x8009B5A0
// size: 0x4
static void (*Spl_dead[1])();

// address: 0x800C9C00
// size: 0xC
extern struct _74fake *pSpl_near_em_addr_800C9C00[3];

// address: 0x800C72B0
// size: 0x6
extern short Em_dir_addr_800C72B0[3];

// address: 0x800D18C0
// size: 0x6
extern unsigned short Em_l_addr_800D18C0[3];

// address: 0x8009B5A4
// size: 0x40
static unsigned char Subpl_walk_addr_8009B5A4[2][32];

// address: 0x8009B5E4
// size: 0x40
static unsigned char Subpl_back_addr_8009B5E4[2][32];

// address: 0x8009B624
// size: 0x40
static unsigned char Subpl_dir_addr_8009B624[2][32];

// address: 0x8009B664
// size: 0x40
static unsigned char Subpl_ato_addr_8009B664[2][32];

// address: 0x8009B6A4
// size: 0x40
static unsigned char Subpl_run_addr_8009B6A4[2][32];

// address: 0x8009B6E4
// size: 0xE
static unsigned char Em4a_zobiparts_tbl_addr_8009B6E4[2][7];

// address: 0x8009B6F4
// size: 0x18
extern short Spl_r_pos[6][2];

// address: 0x8009B70C
// size: 0x2C
static void (*Aida_Move_type[11])();

// address: 0x8009B738
// size: 0xB
extern unsigned char Aida_St_pos[11];

// address: 0x8009B743
extern unsigned char Spl_pos_ck_timer;

// address: 0x8009B744
// size: 0x38
static void (*Aida_mv_br_type00[14])();

// address: 0x8009B77C
// size: 0x38
static void (*Aida_mv_type00[14])();

// address: 0x8009B7B4
// size: 0x38
static void (*Aida_mv_br_type01[14])();

// address: 0x8009B7EC
// size: 0x38
static void (*Aida_mv_br_type02[14])();

// address: 0x8009B824
// size: 0x38
static void (*Aida_mv_br_type03[14])();

// address: 0x8009B85C
// size: 0x38
static void (*Aida_mv_br_type04[14])();

// address: 0x8009B894
// size: 0x38
static void (*Aida_mv_br_type05[14])();

// address: 0x8009B8CC
// size: 0x38
static void (*Aida_mv_br_type06[14])();

// address: 0x8009B904
// size: 0x38
static void (*Aida_mv_br_type07[14])();

// address: 0x8009B93C
// size: 0x38
static void (*Aida_mv_br_type08[14])();

// address: 0x8009B974
// size: 0x38
static void (*Aida_mv_br_type09[14])();

// address: 0x8009B9AC
// size: 0x38
static void (*Aida_mv_br_type0a[14])();

// address: 0x8009B9E4
// size: 0x30
extern unsigned char E_A_at_tbl[48];

// address: 0x8009BA14
// size: 0xC
extern void (*Aida_em_at00_pl[3])();

// address: 0x8009BA20
// size: 0xC
extern void (*Aida_em_at00_spl[3])();

// address: 0x8009BA2C
// size: 0xC
extern void (*Aida_em_at01[3])();

// address: 0x8009BA38
// size: 0x18
extern void (*Aida_mv05_w1_br_tbl[6])();

// address: 0x8009BA50
// size: 0x18
extern void (*Aida_mv05_w1_tbl[6])();

// address: 0x8009BA68
// size: 0x8
extern void (*Aida_em_at05[2])();

// address: 0x8009BA70
// size: 0x2C
static void (*Sherry_Move_type[11])();

// address: 0x8009BA9C
// size: 0xB
extern unsigned char Sherry_St_pos[11];

// address: 0x8009BAA8
// size: 0x38
static void (*Sherry_mv_br_type00[14])();

// address: 0x8009BAE0
// size: 0x38
static void (*Sherry_mv_br_type01[14])();

// address: 0x8009BB18
// size: 0x38
static void (*Sherry_mv_br_type02[14])();

// address: 0x8009BB50
// size: 0x38
static void (*Sherry_mv_br_type03[14])();

// address: 0x8009BB88
// size: 0x38
static void (*Sherry_mv_br_type04[14])();

// address: 0x8009BBC0
// size: 0x38
static void (*Sherry_mv_br_type05[14])();

// address: 0x8009BBF8
// size: 0x38
static void (*Sherry_mv_br_type06[14])();

// address: 0x8009BC30
// size: 0x38
static void (*Sherry_mv_br_type07[14])();

// address: 0x8009BC68
// size: 0x38
static void (*Sherry_mv_br_type08[14])();

// address: 0x8009BCA0
// size: 0x38
static void (*Sherry_mv_br_type09[14])();

// address: 0x8009BCD8
// size: 0x38
static void (*Sherry_mv_br_type0a[14])();

// address: 0x800C9C00
// size: 0xC
extern struct _74fake *pSpl_near_em_addr_800C9C00[3];

// address: 0x800C72B0
// size: 0x6
extern short Em_dir_addr_800C72B0[3];

// address: 0x800D18C0
// size: 0x6
extern unsigned short Em_l_addr_800D18C0[3];

// address: 0x8009BD10
// size: 0x40
static unsigned char Subpl_walk_addr_8009BD10[2][32];

// address: 0x8009BD50
// size: 0x40
static unsigned char Subpl_back_addr_8009BD50[2][32];

// address: 0x8009BD90
// size: 0x40
static unsigned char Subpl_dir_addr_8009BD90[2][32];

// address: 0x8009BDD0
// size: 0x40
static unsigned char Subpl_ato_addr_8009BDD0[2][32];

// address: 0x8009BE10
// size: 0x40
static unsigned char Subpl_run_addr_8009BE10[2][32];

// address: 0x8009BE50
// size: 0xE
static unsigned char Em4a_zobiparts_tbl_addr_8009BE50[2][7];

// address: 0x8009BE60
// size: 0x84
static void (*Spl_sce[33])();

// address: 0x8009BEE4
// size: 0x40
static unsigned char Subpl_walk_addr_8009BEE4[2][32];

// address: 0x8009BF24
// size: 0x40
static unsigned char Subpl_back_addr_8009BF24[2][32];

// address: 0x8009BF64
// size: 0x40
static unsigned char Subpl_dir_addr_8009BF64[2][32];

// address: 0x8009BFA4
// size: 0x40
static unsigned char Subpl_ato_addr_8009BFA4[2][32];

// address: 0x8009BFE4
// size: 0x40
static unsigned char Subpl_run_addr_8009BFE4[2][32];

// address: 0x8009C024
// size: 0xE
static unsigned char Em4a_zobiparts_tbl_addr_8009C024[2][7];

// address: 0x8009C034
// size: 0x300
static void (*Spl_sp[8][24])();

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


// address: 0x8002F0F8
// line start: 61
// line end:   149
void Mizu_trans(struct _71fake *pOwork, unsigned long toumei) {
	// register: 18
	register unsigned long i;
	// register: 16
	register unsigned long j;
	// register: 16
	register unsigned long D0;
	// register: 19
	register unsigned long Dx;
	// register: 22
	register unsigned long Dz;
	// register: 30
	register long XX;
	// register: 23
	register long ZZ;
	// register: 17
	// size: 0x34
	register struct _30fake *pP;
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct _1fake Vec;
	// register: 20
	register unsigned short *A0;
}


// address: 0x8002F444
// line start: 155
// line end:   190
void Mizu_div_ck(struct _71fake *pOwork, unsigned long Size_x, unsigned long Size_z) {
	// register: 17
	register unsigned long i;
	// register: 19
	register unsigned long D0;
	// register: 16
	// size: 0x244
	register struct _74fake *pEw;
	// register: 17
	// size: 0x244
	register struct _74fake *pEw2;
}


// address: 0x8002F5AC
// line start: 194
// line end:   308
void Mizu_div_main(struct _71fake *pOwork, unsigned long Size_x, unsigned long Size_z, struct _74fake *pEwork) {
	// register: 30
	register long D0;
	// register: 19
	register long D1;
	// register: 6
	register long D2;
	// register: 20
	register long Dx;
	// register: 22
	register long Dz;
	// address: 0xFFFFFFC0
	auto long otz0;
	// address: 0xFFFFFFC4
	auto long otz1;
	// register: 7
	register unsigned long i;
	// register: 17
	register unsigned long j;
	// address: 0xFFFFFF48
	// size: 0x8
	auto struct _55fake Box;
	// address: 0xFFFFFF50
	// size: 0x10
	auto struct _1fake Vec1;
	// address: 0xFFFFFF60
	// size: 0x20
	auto struct _2fake Svec[4];
	// address: 0xFFFFFF80
	// size: 0x20
	auto struct _0fake m;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake workm;
	// register: 17
	// size: 0x34
	register struct _30fake *pP0;
	// register: 5
	register unsigned short *A0;
	// register: 8
	register unsigned char *A1;
	// register: 11
	register unsigned long *A2;
	// address: 0x8002F78C
	bool loop_out;
	{
	}
}


// address: 0x8002FBA8
// line start: 64
// line end:   65
long Print8(unsigned long x, unsigned long y, unsigned long c, unsigned long p, unsigned char *pPtr);

// address: 0x8002FBD0
// line start: 69
// line end:   70
long Print14(unsigned long x, unsigned long y, unsigned long c, unsigned long p, unsigned char *pPtr);

// address: 0x8002FBFC
// line start: 74
// line end:   223
long Print_main(unsigned long x, unsigned long y, unsigned long attr, unsigned char **pSave) {
	// register: 9
	register unsigned char *pBp;
	// register: 13
	register unsigned char *tp;
	// register: 11
	register unsigned char *pPtr;
	// register: 6
	register long i;
	// register: 3
	register long j;
	// register: 5
	register long Hikisu;
	// register: 15
	register long H_ctr;
	// register: 10
	register long Keta;
	// register: 8
	register long Loop_ctr;
	// register: 12
	register long pm;
	// register: 14
	register void *ap;
	// address: 0x80030044
	bool skip;
}


// address: 0x800300A4
// line start: 257
// line end:   357
long Mess_set(unsigned long Pos_xy, unsigned short Attr, unsigned long Mess_no, unsigned long Stop_data) {
	// register: 9
	// size: 0x3BB4
	register struct _108fake *pMoji;
	// register: 11
	// size: 0x8728
	register struct _97fake *pG;
}


// address: 0x800303C4
// line start: 380
// line end:   423
void Moji_trans_main() {
	// register: 16
	// size: 0x3BB4
	register struct _108fake *pMoji;
	{
		// register: 5
		register unsigned long D0;
		// register: 3
		register unsigned long D1;
		// register: 4
		register unsigned long D2;
	}
}


// address: 0x800304D8
// line start: 432
// line end:   661
void Mess_disp_addr_800304D8(struct _108fake *pMoji) {
	// register: 4
	register unsigned long Item_id;
	// register: 18
	register unsigned long Vloop_ck;
	// register: 16
	register unsigned char *pMess_end;
	// register: 19
	register unsigned long Loop_ctr;
	// register: 6
	register unsigned long D0;
	// address: 0x80030828
	bool mess_end_inc;
}


// address: 0x80030AA4
// line start: 666
// line end:   738
void Branch_disp(struct _108fake *pMoji, struct _109fake *pBtbl, unsigned long Flg, unsigned long Mode) {
	// register: 2
	register unsigned long D0;
	// register: 16
	register unsigned long i;
	// address: 0xFFFFFFA8
	auto unsigned long M_ofs;
	// register: 21
	register unsigned long Num;
	// register: 30
	register unsigned long Skip;
	// address: 0xFFFFFFB0
	auto unsigned long Pos_x;
	// address: 0xFFFFFFB8
	auto unsigned long Pos_y;
	// register: 20
	register unsigned long Sel_no;
	{
		{
			{
			}
		}
	}
}


// address: 0x80030DB8
// line start: 747
// line end:   759
unsigned char *name_ptr_set(unsigned char Item_id) {
	// register: 2
	register unsigned char *name_ptr;
	// register: 16
	register unsigned long item_at;
}


// address: 0x80030E50
// line start: 768
// line end:   900
void mess_trans(struct _108fake *pMoji) {
	// register: 16
	register unsigned char *pMp;
	// address: 0xFFFFFFC0
	auto unsigned char *pMp_keep;
	// register: 4
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 20
	register unsigned long Size;
	// register: 30
	register unsigned long Attr;
	// address: 0xFFFFFFC8
	auto unsigned long Clt;
	// register: 4
	register unsigned long Prio;
	// register: 19
	register unsigned long Pos_xy;
	// register: 5
	register unsigned long *pOt;
	// register: 22
	// size: 0x14
	register struct _37fake *pP;
	// address: 0xFFFFFFD0
	// size: 0x14
	auto struct _37fake *pP_limit;
	// register: 23
	// size: 0xC
	register struct _44fake *pDr_mode;
	// address: 0x800310C8
	bool moji_touroku;
	// address: 0x800311CC
	bool pointer_next;
	// address: 0x800311E4
	bool message_exit;
}


// address: 0x80031224
// line start: 917
// line end:   999
void Name_disp(long Pos_x, long Pos_y, unsigned long Attr, unsigned long Item_id) {
	// register: 16
	register unsigned char *Name_ptr;
	// register: 4
	register unsigned long *pOt;
	// register: 22
	register unsigned long *pOt_keep0;
	// register: 30
	register unsigned long *pOt_keep1;
	// address: 0xFFFFFFC0
	auto unsigned long Clt;
	// register: 8
	register unsigned long Prio;
	// register: 3
	register unsigned long D0;
	// register: 21
	register unsigned long Size;
	// register: 19
	// size: 0x14
	register struct _37fake *pP;
	// address: 0xFFFFFFC8
	// size: 0x14
	auto struct _37fake *pP_limit;
	// address: 0x800314DC
	bool p_inc;
	// address: 0x800314F4
	bool name_disp_exit;
}


// address: 0x80031530
// line start: 1015
// line end:   1106
void Mess_print(unsigned long Pos_x, unsigned long Pos_y, unsigned char *pMess, unsigned long Attr) {
	// register: 6
	register unsigned long *pOt;
	// register: 24
	register unsigned long *pOt_keep0;
	// register: 25
	register unsigned long *pOt_keep1;
	// register: 3
	register unsigned long D0;
	// register: 13
	register unsigned long Size;
	// register: 17
	register unsigned long Clt;
	// register: 11
	// size: 0x14
	register struct _37fake *pP;
	// register: 18
	// size: 0x14
	register struct _37fake *pP_limit;
	// address: 0x800317F4
	bool moji_next;
	// address: 0x8003180C
	bool name_disp_exit;
}


// address: 0x80031834
// line start: 1115
// line end:   1135
void moji_trans_main(struct _108fake *pMoji) {
	// register: 5
	register long Pos;
	// register: 4
	register unsigned char *pBuff0;
	// register: 17
	register unsigned char *pBuff1;
}


// address: 0x800318C0
// line start: 1145
// line end:   1195
unsigned char *moji_trans_8(unsigned char *pBuff0, unsigned long Pos, struct _108fake *pMoji) {
	// register: 2
	register long i;
	// register: 6
	register unsigned long *pOld_prim;
	// register: 5
	register unsigned long Moji_back;
	// register: 4
	register unsigned long Clt;
	// register: 11
	register unsigned long Keep_tag;
	// register: 4
	register unsigned long D0;
	// register: 10
	// size: 0x10
	register struct _39fake *pP;
	// register: 13
	// size: 0x10
	register struct _39fake *pP_limit;
}


// address: 0x80031A30
// line start: 1205
// line end:   1279
unsigned char *moji_trans_14(unsigned char *pBuff0, unsigned long Pos, struct _108fake *pMoji) {
	// register: 4
	register long i;
	// register: 3
	register long D0;
	// register: 10
	register long Size;
	// register: 8
	register unsigned long *pOld_prim;
	// register: 5
	register unsigned long Moji_back;
	// register: 25
	register unsigned long Clt;
	// register: 16
	register unsigned long Keep_tag;
	// register: 13
	register unsigned long Prop;
	// register: 4
	register unsigned long D1;
	// register: 12
	// size: 0x14
	register struct _37fake *pP;
	// register: 14
	// size: 0x14
	register struct _37fake *pP_limit;
}


// address: 0x80031C50
// line start: 1288
// line end:   1296
void Moji_buff_init() {
	// register: 3
	register unsigned long *pBuff1;
	// register: 2
	register long i;
}


// address: 0x80031C80
// line start: 1305
// line end:   1343
void Moji_init() {
	// register: 17
	register long i;
	// register: 16
	// size: 0xC
	register struct _44fake *pDr_mode;
	// register: 2
	register unsigned long *pP0;
	// register: 3
	register unsigned long *pP1;
	// register: 4
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
}


// address: 0x80031D7C
// line start: 1353
// line end:   1371
void Moji_mode_init() {
	// register: 18
	register unsigned long i;
	// register: 17
	// size: 0xC
	register struct _44fake *pDr_mode;
	// register: 16
	register unsigned long *pOt;
}


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

// address: 0x800322D4
// line start: 103
// line end:   150
void Init_movie_work(unsigned long Id) {
	// register: 5
	register unsigned long *pBuff;
	// register: 7
	// size: 0x20
	register struct _109fake *pMovie_tbl;
}


// address: 0x80032478
// line start: 167
// line end:   188
void Movie() {
	// address: 0x80095F6C
	// size: 0x14
	static void (*pMovie_proc_tbl[5])();
}


// address: 0x8003256C
// line start: 191
// line end:   276
void Movie_init() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake Rect;
	{
	}
}


// address: 0x800327DC
// line start: 279
// line end:   305
void Movie_main() {
	// register: 5
	register short Eom;
}


// address: 0x800328E0
// line start: 308
// line end:   352
void Movie_end() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake Rect;
}


// address: 0x80032A58
// line start: 355
// line end:   400
void Movie_exit() {
	// address: 0xFFFFFFF8
	// size: 0x8
	auto struct _16fake Rect;
}


// address: 0x80032B2C
// line start: 412
// line end:   521
unsigned long Open_movie(unsigned long Movie_id) {
	// address: 0xFFFFFFEC
	// size: 0x20
	auto struct _125fake *pRead_header;
	// address: 0xFFFFFFE8
	auto unsigned long *pBs_buff;
	// register: 16
	register unsigned long Time_out;
	// register: 4
	register unsigned long Sector;
	// register: 3
	// size: 0x8
	register struct _126fake *pFpos;
	{
	}
}


// address: 0x80032E90
// line start: 535
// line end:   577
unsigned long Play_movie() {
	// address: 0xFFFFFFE8
	auto unsigned long *pBs_buff;
	// address: 0xFFFFFFEC
	// size: 0x20
	auto struct _125fake *pRead_header;
	// register: 16
	register unsigned long Ret;
	// register: 16
	register unsigned long Time_out;
	{
	}
}


// address: 0x80032FA4
// line start: 591
// line end:   621
void Close_movie() {
}


// address: 0x8003306C
// line start: 633
// line end:   653
void RuntoImage() {
	// address: 0x80095F80
	static short Time;
}


// address: 0x8003315C
// line start: 662
// line end:   686
void Mdec_callback() {
	{
	}
}


// address: 0x80033224
// line start: 689
// line end:   719
void Movie_cinesco_init() {
	// register: 19
	register short Offset_y;
}


// address: 0x80033344
// line start: 722
// line end:   728
void Movie_cinesco_set();

// address: 0x800333CC
// line start: 733
// line end:   753
void Fwd_movie(unsigned long Frame) {
}


// address: 0x80033474
// line start: 763
// line end:   773
void Movie_xa_start() {
	// register: 16
	register long Ctr;
}


// address: 0x800334C8
// line start: 776
// line end:   786
void Movie_xa_stop() {
	// register: 16
	register long Ctr;
}


// address: 0x80033514
// line start: 799
// line end:   809
void Set_movie_volume2(unsigned long Volume);

// address: 0x80033590
// line start: 826
// line end:   892
long CdReset2(long Mode) {
	// address: 0xFFFFFFF0
	auto unsigned char Param;
	// register: 3
	register unsigned char Status;
	// register: 16
	register unsigned long Time_out;
	{
		{
		}
	}
}


// address: 0x80033710
// line start: 913
// line end:   944
void Caption_set(unsigned short Caption_tbl_no) {
	// register: 3
	register unsigned long *pCaption_buff;
}


// address: 0x8003381C
// line start: 956
// line end:   1013
void Caption_print(unsigned long Frame_no) {
	// register: 7
	// size: 0xC
	register struct _113fake *pTemp;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake Rect;
	// register: 6
	register short Tempy;
}


// address: 0x80033A0C
// line start: 1016
// line end:   1062
void Decomp_caption(unsigned char *pAdr, unsigned long Size) {
	// register: 9
	register unsigned short Ctr;
	// register: 3
	register unsigned char *pTemp_adr;
	// register: 7
	register unsigned char Zero_Ctr;
}


// address: 0x80033B2C
// line start: 29
// line end:   201
unsigned long Oba_ck_hit(struct _74fake *pEm1, struct _74fake *pEm2) {
	// address: 0x800B66F8
	static long Hit_flg;
	// address: 0x800B66FC
	static long nOb1;
	// address: 0x800B6700
	static long nOb2;
	// register: 17
	register long x;
	// register: 21
	register long z;
	// register: 16
	register long r;
	// register: 5
	register long r2;
	// register: 4
	register long h;
	// register: 3
	register long y;
	// register: 7
	register long hosei_x;
	// register: 6
	register long hosei_z;
	// register: 19
	// size: 0x20
	register struct _56fake *pAtd1;
	// register: 18
	// size: 0x20
	register struct _56fake *pAtd2;
	// register: 22
	register long At1_r;
	// register: 23
	register long At2_r;
	// address: 0x80033BB0
	bool loop1;
	// address: 0x80033BE0
	bool loop2;
	// address: 0x80034068
	bool next;
	// address: 0x80034070
	bool exit2;
	// address: 0x80034078
	bool exit1;
	{
		// register: 17
		register unsigned short OJR_max;
		// register: 16
		register unsigned short OJR_min;
		// register: 5
		register short sc_dirY;
		{
			// register: 17
			register unsigned short OJR_max;
			// register: 16
			register unsigned short OJR_min;
			// register: 5
			register short sc_dirY;
		}
	}
}


// address: 0x800340B4
// line start: 215
// line end:   251
unsigned long Oba_ck_only(struct _1fake *pV, struct _74fake *pEm1, struct _74fake *pEm2) {
	// register: 5
	register long x;
	// register: 3
	register long z;
	// register: 16
	register long r;
	// register: 5
	register long h;
	// register: 3
	register long y;
}


// address: 0x800341E4
// line start: 262
// line end:   292
void Oba_set_ofs(struct _74fake *pEm, struct _1fake *pPos) {
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake ATsvec;
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct _1fake ATvec;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake ATmp_m;
	// register: 18
	register unsigned long nOba;
	// register: 20
	// size: 0x20
	register struct _56fake *pAtd;
}


// address: 0x8003430C
// line start: 303
// line end:   322
void Oba_ck_em(struct _74fake *pEm) {
	// register: 4
	// size: 0x244
	register struct _74fake *pEm2;
	// register: 16
	// size: 0x244
	register struct _74fake **ppEm;
}


// address: 0x800343A0
// line start: 333
// line end:   359
void Oba_ck_em2(struct _74fake *pEm) {
	// register: 4
	// size: 0x244
	register struct _74fake *pEm2;
	// register: 16
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 18
	register unsigned long Set_bit;
	// register: 19
	register unsigned long Ck_bit;
}


// address: 0x80034458
// line start: 370
// line end:   384
void Sca_ck_em(struct _74fake *pEm, unsigned long Sc_id) {
	{
	}
}


// address: 0x800344EC
// line start: 51
// line end:   70
void Om_init(unsigned long Om_no, unsigned long *pTmd_adr) {
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	{
	}
}


// address: 0x800345B4
// line start: 79
// line end:   111
void Col_chg_init(unsigned long Col_wk_no, struct _98fake *pCcp) {
	// register: 3
	register unsigned long Poly_num;
	// register: 8
	register unsigned long Clut;
	// register: 4
	register unsigned long i;
	// register: 17
	register unsigned long D0;
	// register: 6
	register unsigned long *p;
	// register: 2
	// size: 0x8
	register struct _16fake *pRect;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pMw;
}


// address: 0x800346CC
// line start: 120
// line end:   141
void Tex_chg_init(unsigned long Col_wk_no, struct _98fake *pCcp) {
	// register: 6
	register unsigned long i;
	// register: 2
	// size: 0x8
	register struct _16fake *pRect;
	// register: 7
	// size: 0x1F8
	register struct _71fake *pMw;
}


// address: 0x80034770
// line start: 150
// line end:   177
void Tex_ctr() {
	// register: 17
	// size: 0x4C
	register struct _98fake *pCcp;
	// register: 18
	// size: 0x18
	register struct _48fake *pMove;
	// register: 16
	// size: 0x8
	register struct _16fake *pRect;
	// register: 20
	register unsigned long i;
	// register: 21
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 30
	register unsigned long *pOt;
}


// address: 0x800348AC
// line start: 181
// line end:   211
void Col_chg(struct _98fake *pCcp, struct _16fake *pRect, unsigned long Ctr);

// address: 0x80034A74
// line start: 216
// line end:   252
void Tex_chg(struct _98fake *pCcp, struct _16fake *pRect, unsigned long Ctr);

// address: 0x80034D44
// line start: 265
// line end:   436
void Om_move() {
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm2;
	// register: 21
	// size: 0x1F8
	register struct _71fake *pHit_om;
	// register: 4
	// size: 0x244
	register struct _74fake *pEm;
	// register: 16
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 18
	register short Bak_pos_x;
	// register: 21
	register short Bak_pos_z;
	// register: 20
	register unsigned long Hit_cnt;
	// address: 0x800350F8
	bool no_move;
	{
		// address: 0x80034F24
		bool flr_ck;
		{
			{
				{
					{
						{
							{
								{
									{
										// address: 0x800350C8
										bool no_push;
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


// address: 0x800351A4
// line start: 447
// line end:   541
void Om_trans() {
	// register: 18
	register unsigned long Toumei;
	// register: 23
	register unsigned long Cnt;
	// register: 21
	register unsigned long D0;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		// address: 0x80035458
		bool next;
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


// address: 0x800354C4
// line start: 552
// line end:   695
void Om_move_box(struct _71fake *pOm) {
	// address: 0x800B6708
	static short Pos_spd;
	// address: 0x800B670C
	static short Pos_spd_add;
	// address: 0x800B6710
	static short Dir_spd;
	// address: 0x800B6714
	static short Dir_spd_add;
	// address: 0x800B6718
	static short Fall_spd;
	// address: 0x800B671C
	static short Dir_sum;
	// address: 0x800B6720
	static short Ground;
	// address: 0x800B6724
	// size: 0x8
	static struct _2fake Add_dir;
	// address: 0x800B672C
	static unsigned char In_water_flg;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake Water_pos;
	{
	}
}


// address: 0x80035A10
// line start: 706
// line end:   723
void Om_set_fall_dir(struct _71fake *pOm) {
}


// address: 0x80035AAC
// line start: 796
// line end:   882
unsigned long Ob_test_load2() {
	// address: 0xFFFFFFC0
	// size: 0x1F
	auto unsigned char tim_file[31];
	// address: 0xFFFFFFE0
	// size: 0x1F
	auto unsigned char tmd_file[31];
}


// address: 0x80035BE4
// line start: 885
// line end:   900
void Oma_set_ofs(struct _71fake *pOm);

// address: 0x80035C68
// line start: 904
// line end:   915
void Om_explosion_set(struct _71fake *pOm) {
}


// address: 0x80035CAC
// line start: 191
// line end:   309
unsigned long Oma_ck_oba(struct _74fake *pEm, struct _71fake *pOm, unsigned long Flg) {
	// register: 13
	register long Dx;
	// register: 5
	register long Dy;
	// register: 12
	register long Dz;
	// register: 10
	register long Wx;
	// register: 4
	register long Wy;
	// register: 9
	register long Wz;
	// register: 2
	register long Dy2;
	// register: 11
	register long Y_flg;
	// register: 2
	register long Dold;
	// address: 0x800B6730
	static unsigned long Y_flg_old;
	{
		// register: 4
		register long Bak;
	}
}


// address: 0x8003600C
// line start: 395
// line end:   449
unsigned long Oma_ck_om(struct _71fake *pOm, struct _71fake *pOm2) {
	// register: 15
	register long a;
	// register: 14
	register long b;
	// register: 10
	register long c;
	// register: 9
	register long d;
	// register: 5
	register long e;
	// register: 4
	register long f;
	// register: 3
	register long e2;
	// register: 7
	register long Flg;
	// register: 2
	register long Flg_old;
	{
		// register: 4
		register long Bak;
	}
}


// address: 0x80036204
// line start: 462
// line end:   503
unsigned long Oma_ck_front(struct _74fake *pEm, struct _71fake *pOm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 5
	register long X;
	// register: 4
	register long Z;
	// register: 6
	register long W;
	// register: 7
	register long D;
}


// address: 0x80036364
// line start: 513
// line end:   624
unsigned long Oma_pl_updown_ck(unsigned long Id) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Add_pos;
	// register: 21
	register short Cdir_y;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOn_om;
	// register: 18
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0x800364F4
	bool down_ck;
	// address: 0x800365CC
	bool down;
	{
	}
}


// address: 0x800366DC
// line start: 634
// line end:   784
unsigned long Oma_Spl_updown_ck(struct _74fake *pEm) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Add_pos;
	// register: 18
	register short Cdir_y;
	// register: 4
	register unsigned short Type;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm;
	// address: 0x8003689C
	bool down_ck;
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


// address: 0x80036AE4
// line start: 795
// line end:   833
unsigned long Oma_front_ck(struct _74fake *pEm, struct _71fake *pOm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
	// register: 5
	register long X;
	// register: 4
	register long Z;
	// register: 6
	register long W;
	// register: 7
	register long D;
}


// address: 0x80036C48
// size: 0x1F8
// line start: 843
// line end:   857
struct _71fake *Oma_on_check(struct _74fake *pEm) {
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm;
}


// address: 0x80036CFC
// line start: 872
// line end:   1158
void Oma_pull(struct _74fake *pEm, struct _71fake *pOm) {
	// register: 3
	register long X;
	// register: 4
	register long Z;
	// register: 15
	register long W;
	// register: 22
	register long D;
	// register: 30
	register long X2;
	// register: 23
	register long Z2;
	// register: 21
	register long Now_at;
	// register: 14
	register long Old_at;
	// register: 18
	// size: 0x20
	register struct _56fake *pOat;
	// register: 24
	// size: 0x20
	register struct _56fake *pOat2;
	// register: 20
	// size: 0x20
	register struct _56fake *pEat;
	// register: 16
	// size: 0x1F8
	register struct _71fake *pOm2;
	// register: 4
	register long Bak;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct _1fake Jump_pos;
	{
		// register: 2
		register long WW;
		// register: 6
		register long DD1;
		// register: 7
		register long DD2;
		// register: 5
		register long Flg;
		{
			// register: 2
			register long DD;
			// register: 4
			register long WW1;
			// register: 6
			register long WW2;
			// register: 5
			register long Flg;
		}
	}
}


// address: 0x80037400
// line start: 1159
// line end:   1167
void Oma_pull_hosei_x(struct _74fake *pEm, struct _56fake *pOat, long X2, long W) {
	// register: 4
	register long Bak;
	// register: 5
	// size: 0x20
	register struct _56fake *pEat;
}


// address: 0x8003746C
// line start: 1168
// line end:   1176
void Oma_pull_hosei_z(struct _74fake *pEm, struct _56fake *pOat, long Z2, long D) {
	// register: 4
	register long Bak;
	// register: 5
	// size: 0x20
	register struct _56fake *pEat;
}


// address: 0x800374D8
// size: 0x1F8
// line start: 1178
// line end:   1205
struct _71fake *Oma_get_on_om(struct _74fake *pEm, struct _56fake *pEat) {
	// register: 8
	// size: 0x1F8
	register struct _71fake *pOm2;
	// register: 5
	register long W;
	// register: 3
	register long D;
	// register: 6
	register long Flg;
}


// address: 0x800375B4
// line start: 1320
// line end:   1356
void Oma_ob_pull2(struct _74fake *pEm, struct _71fake *pOm, unsigned long Id, unsigned long Spd) {
	// register: 10
	register long X;
	// register: 4
	register long Z;
	// register: 8
	register long W;
	// register: 11
	register long D;
	// register: 5
	register long Flg;
	// register: 9
	register long Spd_x;
}


// address: 0x800376EC
// line start: 1372
// line end:   1391
unsigned long Omd_in_check(struct _1fake *pVec, struct _71fake *pOm, long R, unsigned long Flg) {
	// register: 3
	register long a;
	// register: 5
	register long b;
	// register: 2
	register long c;
	// register: 4
	register long d;
	// register: 3
	register long e;
	// register: 2
	register long f;
}


// address: 0x80037784
// line start: 1403
// line end:   1419
unsigned long Oma_obj_ck_all(struct _1fake *pPos, struct _74fake *pEm) {
	// register: 6
	// size: 0x244
	register struct _74fake *pEm2;
	// register: 16
	// size: 0x244
	register struct _74fake **ppEm;
	{
	}
}


// address: 0x80037834
// size: 0x1F8
// line start: 1432
// line end:   1466
struct _71fake *Oma_hit_ck_all(struct _1fake *pV, struct _74fake *pEm) {
	// register: 7
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 11
	// size: 0x20
	register struct _56fake *pEat;
	// register: 3
	register long X;
	// register: 2
	register long Y;
	// register: 8
	register long Z;
	// register: 2
	register long W;
	// register: 3
	register long H;
	// register: 4
	register long D;
	// register: 5
	register long R;
}


// address: 0x80037920
// line start: 1475
// line end:   1520
void Om_Jump_ck(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFF0
	// size: 0x10
	auto struct _1fake Jump_pos;
}


// address: 0x80037958
// line start: 270
// line end:   453
void Pad_set() {
	// address: 0x8009624C
	static int Stp_bak;
	// register: 7
	register unsigned char Cnt;
	{
		// address: 0x80096250
		static unsigned char Key_wait;
	}
}


// address: 0x80037B94
// line start: 465
// line end:   467
void Pad_rep_set(unsigned long Mask, unsigned short Data);

// address: 0x80037BAC
// line start: 474
// line end:   483
void Init_demo_moji() {
}


// address: 0x80037C34
// line start: 489
// line end:   495
void Set_moji_work(struct _37fake *pSp);

// address: 0x80037C80
// line start: 502
// line end:   504
void Free_demo_moji() {
}


// address: 0x80037CA8
// line start: 424
// line end:   449
void Windows() {
	// address: 0x80037D18
	bool exit;
	{
		{
		}
	}
}


// address: 0x80037D3C
// line start: 469
// line end:   565
unsigned long Keyboard_Input(unsigned long Length, unsigned long Flg) {
	// register: 18
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 17
	register unsigned long i;
	// address: 0xFFFFFFE0
	auto unsigned long Mend;
	// address: 0x80037EB0
	bool exit;
}


// address: 0x80037FC0
// line start: 578
// line end:   597
void Keyboard_set(unsigned long Be_flg, unsigned long W, unsigned long H, unsigned long Col) {
	// register: 3
	// size: 0x53E0
	register struct _99fake *pCom;
}


// address: 0x80038018
// line start: 612
// line end:   704
unsigned long Keyboard() {
	// register: 16
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 17
	register unsigned long Key_flg;
	{
		{
		}
	}
}


// address: 0x80038348
// line start: 715
// line end:   752
unsigned long Wframe_in_out() {
	{
	}
}


// address: 0x800384A8
// line start: 765
// line end:   799
void Wframe_set(unsigned long X, unsigned long Y, unsigned long X2, unsigned long Y2) {
	// register: 18
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 2
	// size: 0x10
	register struct _31fake *pLine;
	// register: 17
	register long i;
}


// address: 0x800385BC
// line start: 812
// line end:   844
unsigned long Wframe_move(unsigned long X, unsigned long Y, unsigned long W, unsigned long H) {
	// register: 16
	// size: 0x53E0
	register struct _99fake *pCom;
}


// address: 0x80038700
// line start: 854
// line end:   855
unsigned long Get_moji_code(unsigned char Moji);

// address: 0x8003870C
// line start: 868
// line end:   955
unsigned long Cprint(unsigned long Speed, unsigned char *pMess, unsigned long *Mend) {
	// register: 2
	register unsigned char *pBuf;
	// register: 17
	register unsigned char Ret_flg;
	// register: 16
	// size: 0x53E0
	register struct _99fake *pCom;
	// address: 0x800389B0
	bool exit;
	{
	}
}


// address: 0x800389E0
// line start: 965
// line end:   969
void Console_put(unsigned char Moji) {
	// register: 5
	// size: 0x53E0
	register struct _99fake *pCom;
}


// address: 0x80038A18
// line start: 979
// line end:   994
void Console_roll_up() {
	// register: 16
	register unsigned long i;
	// register: 17
	// size: 0x53E0
	register struct _99fake *pCom;
	{
	}
}


// address: 0x80038ADC
// line start: 1004
// line end:   1022
void Console_clr() {
	// register: 5
	register unsigned long i;
	// register: 6
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 4
	register unsigned char *pCon;
	// register: 3
	register unsigned char *pCol;
}


// address: 0x80038B20
// line start: 1032
// line end:   1074
void Console_trans(unsigned long Be_flg) {
	// register: 7
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 9
	register unsigned char *pCon;
	// register: 8
	register unsigned char *pCol;
	// register: 2
	register unsigned short Uv;
}


// address: 0x80038C08
// line start: 1084
// line end:   1117
void Sprite_Trans(unsigned long nPacket) {
	// register: 19
	// size: 0x14
	register struct _37fake *pP;
	// register: 18
	// size: 0x10
	register struct _98fake *pSp;
	// register: 21
	// size: 0x10
	register struct _98fake *pSp_end;
	// register: 3
	// size: 0x53E0
	register struct _99fake *pCom;
}


// address: 0x80038D40
// line start: 1128
// line end:   1133
void Set_sp_work(struct _98fake *pSp, struct _98fake *pSw);

// address: 0x80038DA0
// line start: 1145
// line end:   1156
unsigned long Dr_mode_set() {
	// register: 19
	// size: 0x53E0
	register struct _99fake *pCom;
	// register: 18
	register unsigned long i;
}


// address: 0x80038E68
// line start: 57
// line end:   258
void Computer200() {
	// register: 18
	// size: 0x53E0
	register struct _102fake *pCom;
	// address: 0x800B6738
	static char Id_card_work;
	// address: 0x800B673C
	static char Wait;
	// address: 0x800979C8
	static unsigned long Kend;
	// address: 0x800979CC
	static unsigned long Mend;
	// address: 0x800B6740
	static unsigned char *pM1;
	// address: 0x800B6744
	static unsigned char *pM2;
	// address: 0x800979D0
	static unsigned char Key_type;
	// register: 16
	register long i;
	// register: 19
	register long Rtn_bak;
	// register: 17
	register long Cut_old;
	// address: 0x800395DC
	bool trans;
	{
		// address: 0x800395B0
		bool exit;
		{
			{
			}
		}
	}
}


// address: 0x800396A0
// line start: 278
// line end:   454
void Computer613() {
	// register: 17
	// size: 0x53E0
	register struct _102fake *pCom;
	// address: 0x800B6748
	static char Id_card_work;
	// address: 0x800B674C
	static char Wait;
	// address: 0x800979D4
	static unsigned long Kend;
	// address: 0x800979D8
	static unsigned long Mend;
	// address: 0x800B6750
	static unsigned char M1;
	// address: 0x800B6754
	static unsigned char M2;
	// address: 0x800979DC
	static unsigned char Key_type;
	// register: 18
	register long Rtn_bak;
	// address: 0x80039BA8
	bool exit;
	// address: 0x80039C04
	bool trans;
	{
		{
			{
			}
		}
	}
}


// address: 0x80039CFC
// line start: 459
// line end:   491
void Computer_init(unsigned long Cut_no, unsigned long Open_flg) {
	// register: 18
	// size: 0x53E0
	register struct _102fake *pCom;
	// register: 19
	register unsigned long i;
	{
		{
		}
	}
}


// address: 0x80039E24
// line start: 496
// line end:   522
void Computer_exit(unsigned long Close_flg) {
	// register: 16
	// size: 0x53E0
	register struct _102fake *pCom;
	{
		{
		}
	}
}


// address: 0x80039EEC
// line start: 99
// line end:   268
void Player_set(struct _74fake *pEm) {
	// register: 19
	register unsigned long Mem;
	// register: 20
	register unsigned long Aida;
	// register: 2
	register unsigned long *Head;
	{
	}
}


// address: 0x8003A220
// line start: 271
// line end:   288
void Pl_before(struct _74fake *pEm) {
	{
	}
}


// address: 0x8003A2B0
// line start: 292
// line end:   295
void Pl_after(struct _74fake *pEm);

// address: 0x8003A2B8
// line start: 345
// line end:   461
void Player_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x8003A414
// line start: 472
// line end:   607
void Pl_init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8003A6C4
// line start: 641
// line end:   661
void Pl_move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003A740
// line start: 707
// line end:   920
void pl_mv00_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// register: 3
	register long Ck;
	// register: 4
	register long Tmp;
	{
		{
		}
	}
}


// address: 0x8003A8C8
// line start: 923
// line end:   941
void pl_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto unsigned short Pl_taiki_mot[3];
	{
	}
}


// address: 0x8003A984
// line start: 947
// line end:   1015
void pl_mv01_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// address: 0xFFFFFFE0
	// size: 0x3
	auto unsigned char Pl_walk_spd[3];
	{
		{
		}
	}
}


// address: 0x8003AB3C
// line start: 1020
// line end:   1083
void pl_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x6
	auto short Pl_walk_mot[3];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8003AD84
// line start: 1089
// line end:   1155
void pl_mv02_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto unsigned char Pl_run_spd[3];
	{
		{
		}
	}
}


// address: 0x8003AF34
// line start: 1158
// line end:   1232
void pl_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x3
	auto unsigned char Pl_run_mot[3];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8003B19C
// line start: 1238
// line end:   1282
void pl_mv03_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// address: 0xFFFFFFF8
	// size: 0x3
	auto unsigned char Pl_backwalk_spd[3];
}


// address: 0x8003B2A8
// line start: 1285
// line end:   1379
void pl_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	register unsigned char Tmp;
	// address: 0xFFFFFFD8
	// size: 0x3
	auto unsigned char Pl_backwalk_mot[3];
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
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


// address: 0x8003B620
// line start: 1384
// line end:   1458
unsigned long Lim_dir_ck(struct _74fake *pEm, unsigned long Lim, short Dir) {
	// register: 22
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	register unsigned long Em_num;
	// register: 17
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 20
	register unsigned long L_max;
	// register: 19
	register unsigned long L;
	// register: 21
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	{
	}
}


// address: 0x8003B7EC
// line start: 1462
// line end:   1554
void Pl_neck(struct _74fake *pEm, unsigned long Lim, short Dir) {
	// register: 3
	register unsigned long Em_num;
	// register: 18
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 20
	register unsigned long L_max;
	// register: 17
	register unsigned long L;
	// register: 23
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	// register: 21
	register unsigned long DL_max;
	// register: 22
	// size: 0x244
	register struct _74fake *pDLm;
	{
	}
}


// address: 0x8003B9FC
// line start: 1559
// line end:   1618
void pl_mv04_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto unsigned char Pl_rot_spd[3];
	{
		{
		}
	}
}


// address: 0x8003BB8C
// line start: 1621
// line end:   1667
void pl_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x6
	auto short Pl_rot_mot[3];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8003BD6C
// line start: 1672
// line end:   1673
void pl_mv06_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg);

// address: 0x8003BD74
// line start: 1675
// line end:   1719
void pl_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8003BEAC
// line start: 1725
// line end:   1726
void pl_mv07_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg);

// address: 0x8003BEB4
// line start: 1731
// line end:   1929
void pl_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x2
	auto unsigned char pl_mv07_mot[2];
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	{
		{
		}
	}
}


// address: 0x8003C44C
// line start: 1935
// line end:   2003
void pl_mv08_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	{
	}
}


// address: 0x8003C45C
// line start: 2006
// line end:   2142
void pl_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
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


// address: 0x8003C7C8
// line start: 2148
// line end:   2192
void pl_mv09_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	{
	}
}


// address: 0x8003C7D8
// line start: 2196
// line end:   2343
void pl_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
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


// address: 0x8003CC28
// line start: 2348
// line end:   2363
void pl_mv0a_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg) {
	{
	}
}


// address: 0x8003CC98
// line start: 2365
// line end:   2444
void pl_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x6
	auto short Pl_walk_mot[3];
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


// address: 0x8003CF14
// line start: 2450
// line end:   2451
void pl_mv0b_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg);

// address: 0x8003CF1C
// line start: 2453
// line end:   2515
void pl_mv0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x2
	auto unsigned char pl_mv07_mot[2];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
		}
	}
}


// address: 0x8003D0F4
// line start: 2531
// line end:   2536
void Pl_damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003D14C
// line start: 2545
// line end:   2576
void pl_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8003D250
// line start: 2581
// line end:   2614
void pl_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8003D3A0
// line start: 2619
// line end:   2733
void pl_dm02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8003D65C
// line start: 2739
// line end:   2818
void pl_dm03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8003D88C
// line start: 2834
// line end:   2839
void Pl_die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003D8E4
// line start: 2847
// line end:   2875
void pl_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8003D9E4
// line start: 2898
// line end:   2907
void Pl_Em_damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003DA3C
// line start: 2921
// line end:   2930
void Pl_Em_die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8003DA94
// line start: 2945
// line end:   2977
void Pl_dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 17
	// size: 0x1C
	register struct _62fake *pKage;
	{
	}
}


// address: 0x8003DB34
// line start: 2993
// line end:   3030
unsigned long Pl_life_down(long Down_life, unsigned long Mode) {
	// register: 4
	// size: 0x244
	register struct _74fake *pPl;
}


// address: 0x8003DC14
// line start: 3040
// line end:   3050
unsigned long Pl_life_up(long Up_life) {
}


// address: 0x8003DC70
// line start: 115
// line end:   278
void Pl_weapon_ch(struct _74fake *pEm) {
	// register: 19
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD0
	// size: 0xAC
	auto struct _65fake *pO_ptr;
	// register: 16
	register unsigned long Mem;
	// register: 5
	register unsigned long Pac;
	// register: 17
	register unsigned long *Head;
	// address: 0xFFFFFFB8
	// size: 0x14
	auto struct _52fake Tim_image;
	// register: 16
	// size: 0x14
	register struct _52fake *pTim;
	// register: 17
	register unsigned long *pT_head;
	// register: 20
	register unsigned long Emd_top;
	// register: 23
	register unsigned long Wparts_num;
	// register: 30
	register unsigned long Parts_no;
	{
	}
}


// address: 0x8003DFB0
// line start: 285
// line end:   286
void Non_init(struct _74fake *pEm);

// address: 0x8003DFB8
// line start: 290
// line end:   313
void Plw02_init(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 6
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E00C
// line start: 317
// line end:   340
void Plw09_init(struct _74fake *pEm) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E068
// line start: 344
// line end:   447
void Plw0c_init(struct _74fake *pEm) {
	// register: 11
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 8
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E1CC
// line start: 451
// line end:   469
void Plw0f_init(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E20C
// line start: 473
// line end:   507
void Plw12_init(struct _74fake *pEm) {
	// register: 8
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 3
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x8003E2DC
// line start: 512
// line end:   520
void Weapon_cls(struct _74fake *pEm) {
	// register: 2
	register unsigned long M_num;
}


// address: 0x8003E304
// line start: 1173
// line end:   1177
void Init_W_Tool();

// address: 0x8003E30C
// line start: 1180
// line end:   1184
void W_Tool();

// address: 0x8003E314
// line start: 1195
// line end:   1207
void init_Weapon_at(struct _74fake *pEm, struct _109fake *At_tbl_top);

// address: 0x8003E348
// line start: 1235
// line end:   1739
unsigned long Weapon_at_ck(struct _74fake *pEm, unsigned long W_no, struct _109fake *At_tbl_top) {
	// register: 2
	register unsigned long Em_num;
	// register: 5
	register unsigned long Tbl_no;
	// register: 20
	register unsigned long At_flg;
	// address: 0xFFFFFFA0
	auto unsigned long Ba_at_flg;
	// register: 19
	// size: 0x1C
	register struct _107fake *pAtw3;
	// address: 0xFFFFFFA8
	// size: 0x244
	auto struct _74fake **ppEm;
	// register: 3
	register long Dir;
	// register: 2
	register long x;
	// register: 2
	register long z;
	// address: 0xFFFFFFB0
	// size: 0x14
	auto struct _111fake *pAwe;
	// address: 0xFFFFFFB8
	// size: 0x14
	auto struct _111fake *pMa;
	// address: 0xFFFFFFC0
	auto unsigned long L_max;
	// register: 3
	register unsigned long L;
	// register: 16
	register unsigned long Off;
	// register: 30
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	// register: 23
	register long Jtg_no;
	// address: 0xFFFFFFC8
	auto long L_Jtg_no;
	// register: 2
	register unsigned long MinMax_ck;
	// address: 0xFFFFFF8C
	auto long Min;
	// address: 0xFFFFFF88
	auto long Max;
	// register: 4
	register long MM_sa;
	// register: 18
	register unsigned long B0;
	// register: 17
	register unsigned long B1;
	// register: 22
	register unsigned long Jtg_flg;
	// register: 21
	register long Pos_y;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake *pV;
	// address: 0xFFFFFF68
	// size: 0x10
	auto struct _1fake V_pos;
	// address: 0xFFFFFF78
	// size: 0x10
	auto struct _1fake Tmp_v;
	{
		{
		}
	}
}


// address: 0x8003ED24
// line start: 1743
// line end:   1807
long Set_MinMax(struct _111fake *pAwe, unsigned char Ck_flg, long *pMax, long *pMin) {
	// register: 3
	register unsigned long Mode_no;
	// register: 9
	register long Sa;
}


// address: 0x8003EEE8
// line start: 1819
// line end:   1895
unsigned long Attack_r_ck0(struct _60fake *pOm, struct _60fake *pPm, struct _106fake *pAt) {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct _2fake Tsvm;
	// address: 0xFFFFFF78
	// size: 0x8
	auto struct _2fake Tsvck0;
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct _2fake Tsvck1;
	// address: 0xFFFFFF88
	// size: 0x8
	auto struct _2fake Tsvp0;
	// address: 0xFFFFFF90
	// size: 0x8
	auto struct _2fake Tsvp1;
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake Tsvp2;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake Tm1;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake Tm2;
}


// address: 0x8003F0FC
// line start: 1900
// line end:   1978
unsigned long Attack_r_ck1(struct _1fake *pH, short Cdir_y, struct _1fake *pT, struct _106fake *pAt) {
	// address: 0xFFFFFF40
	// size: 0x8
	auto struct _2fake Tsvm;
	// address: 0xFFFFFF48
	// size: 0x8
	auto struct _2fake Tsvck0;
	// address: 0xFFFFFF50
	// size: 0x8
	auto struct _2fake Tsvck1;
	// address: 0xFFFFFF58
	// size: 0x8
	auto struct _2fake Tsvp0;
	// address: 0xFFFFFF60
	// size: 0x8
	auto struct _2fake Tsvp1;
	// address: 0xFFFFFF68
	// size: 0x8
	auto struct _2fake Tsvp2;
	// address: 0xFFFFFF70
	// size: 0x20
	auto struct _0fake Tm1;
	// address: 0xFFFFFF90
	// size: 0x20
	auto struct _0fake Tm2;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x8003F348
// line start: 1989
// line end:   2083
unsigned long Em_ck(struct _74fake *pEm, unsigned long LL) {
	// register: 30
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	register unsigned long Em_num;
	// register: 18
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 20
	register unsigned long L_max;
	// register: 17
	register unsigned long L;
	// register: 23
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake V;
	// register: 21
	register unsigned long DL_max;
	// register: 22
	// size: 0x244
	register struct _74fake *pDLm;
	{
	}
}


// address: 0x8003F56C
// line start: 2119
// line end:   2182
void Hand_ck(struct _74fake *pEm, long Ck_pos_y, short Type) {
	// register: 4
	register long Base_pos_y;
}


// address: 0x8003F624
// line start: 2212
// line end:   2255
void Mag_set(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake Tm;
	// register: 3
	register unsigned long Type;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Ts;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Ts0;
}


// address: 0x8003F7BC
// line start: 2258
// line end:   2315
void Mag_down(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 3
	register unsigned long Type;
	{
	}
}


// address: 0x8003F9F0
// line start: 2336
// line end:   2344
void G_rot_st(struct _74fake *pEm) {
}


// address: 0x8003FA08
// line start: 2347
// line end:   2372
void G_rot(struct _74fake *pEm) {
}


// address: 0x8003FAA8
// line start: 2377
// line end:   2388
void Gat_lp_st(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8003FAD0
// line start: 2391
// line end:   2419
void Gat_rot(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8003FB9C
// line start: 2424
// line end:   2447
void Pl_water(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8003FCF0
// line start: 2508
// line end:   2509
void pl_mv05_pad(struct _74fake *pEm, unsigned long Key, unsigned long Key_trg);

// address: 0x8003FCF8
// line start: 2572
// line end:   2574
void pl_mv05_w0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key);

// address: 0x8003FD34
// line start: 2579
// line end:   2744
void pl_mv05_w0_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// address: 0xFFFFFFA8
	// size: 0xA
	auto short Gun_at_mot[5];
	// register: 16
	register unsigned long Ck;
	// register: 18
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Sv;
	// register: 7
	register unsigned long Flg;
	// register: 2
	// size: 0x244
	register struct _74fake *pAt;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _106fake Aw;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x800401B4
// line start: 2748
// line end:   2761
void pl_mv05_w0_t6(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
}


// address: 0x800401EC
// line start: 2783
// line end:   2785
void pl_mv05_w1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key);

// address: 0x80040228
// line start: 2790
// line end:   2914
void pl_mv05_w1_t0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// register: 2
	// size: 0x244
	register struct _74fake *pTa;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80040574
// line start: 2918
// line end:   3050
void pl_mv05_w1_t1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// register: 4
	register unsigned short Jtg_no;
	// address: 0xFFFFFFD8
	// size: 0xA
	auto short Gun_taiki_mot[5];
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80040834
// line start: 3054
// line end:   3153
void pl_mv05_w1_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// address: 0xFFFFFFD0
	// size: 0xA
	auto short Gun_at_mot[5];
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
			{
			}
		}
	}
}


// address: 0x80040BD8
// line start: 18
// line end:   41
void pl_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80040CAC
// line start: 47
// line end:   48
void pl_w01_t2_init(struct _74fake *pEm);

// address: 0x80040CB4
// line start: 51
// line end:   54
void pl_w02_t2_init(struct _74fake *pEm) {
}


// address: 0x80040CDC
// line start: 57
// line end:   59
void pl_w03_t2_init(struct _74fake *pEm) {
}


// address: 0x80040D04
// line start: 62
// line end:   66
void pl_w04_t2_init(struct _74fake *pEm);

// address: 0x80040D0C
// line start: 69
// line end:   71
void pl_w05_t2_init(struct _74fake *pEm) {
}


// address: 0x80040D34
// line start: 74
// line end:   76
void pl_w06_t2_init(struct _74fake *pEm) {
}


// address: 0x80040D5C
// line start: 79
// line end:   81
void pl_w07_t2_init(struct _74fake *pEm) {
}


// address: 0x80040D84
// line start: 84
// line end:   86
void pl_w08_t2_init(struct _74fake *pEm) {
}


// address: 0x80040DAC
// line start: 89
// line end:   91
void pl_w09_t2_init(struct _74fake *pEm) {
}


// address: 0x80040DD4
// line start: 94
// line end:   96
void pl_w0a_t2_init(struct _74fake *pEm) {
}


// address: 0x80040DFC
// line start: 99
// line end:   101
void pl_w0b_t2_init(struct _74fake *pEm) {
}


// address: 0x80040E24
// line start: 104
// line end:   114
void pl_w0c_t2_init(struct _74fake *pEm) {
}


// address: 0x80040EAC
// line start: 117
// line end:   119
void pl_w0d_t2_init(struct _74fake *pEm) {
}


// address: 0x80040ED4
// line start: 122
// line end:   124
void pl_w0e_t2_init(struct _74fake *pEm);

// address: 0x80040EDC
// line start: 127
// line end:   129
void pl_w0f_t2_init(struct _74fake *pEm);

// address: 0x80040EE4
// line start: 132
// line end:   134
void pl_w10_t2_init(struct _74fake *pEm);

// address: 0x80040EEC
// line start: 137
// line end:   139
void pl_w11_t2_init(struct _74fake *pEm) {
}


// address: 0x80040F14
// line start: 142
// line end:   144
void pl_w12_t2_init(struct _74fake *pEm);

// address: 0x80040F1C
// line start: 148
// line end:   154
void pl_w01_t2_move(struct _74fake *pEm) {
	{
	}
}


// address: 0x80040F6C
// line start: 157
// line end:   177
void pl_w02_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
		}
	}
}


// address: 0x80041074
// line start: 180
// line end:   200
void pl_w03_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
		}
	}
}


// address: 0x8004117C
// line start: 203
// line end:   223
void pl_w04_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
		}
	}
}


// address: 0x800412A8
// line start: 226
// line end:   246
void pl_w05_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
		}
	}
}


// address: 0x800413AC
// line start: 249
// line end:   272
void pl_w06_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
		}
	}
}


// address: 0x800414E8
// line start: 275
// line end:   315
void pl_w07_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x800416B8
// line start: 319
// line end:   364
void pl_w08_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
			{
			}
		}
	}
}


// address: 0x800418EC
// line start: 367
// line end:   398
void pl_w09_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
			{
			}
		}
	}
}


// address: 0x80041A08
// line start: 401
// line end:   432
void pl_w0a_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
			{
			}
		}
	}
}


// address: 0x80041B24
// line start: 435
// line end:   466
void pl_w0b_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
		{
			{
			}
		}
	}
}


// address: 0x80041C40
// line start: 469
// line end:   475
void pl_w0c_t2_move(struct _74fake *pEm) {
	{
	}
}


// address: 0x80041C90
// line start: 478
// line end:   485
void pl_w0d_t2_move(struct _74fake *pEm);

// address: 0x80041C98
// line start: 488
// line end:   490
void pl_w0e_t2_move(struct _74fake *pEm);

// address: 0x80041CA0
// line start: 493
// line end:   518
void pl_w0f_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	// register: 3
	// size: 0xAC
	register struct _65fake *pParts;
	{
		{
		}
	}
}


// address: 0x80041DDC
// line start: 522
// line end:   540
void pl_w10_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake svec;
	{
	}
}


// address: 0x80041E80
// line start: 543
// line end:   559
void pl_w11_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake svec;
	{
	}
}


// address: 0x80041F40
// line start: 562
// line end:   596
void pl_w12_t2_move(struct _74fake *pEm) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake svec;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake sdir;
	{
		{
			{
			}
		}
	}
}


// address: 0x80042134
// line start: 600
// line end:   660
void pl_mv05_w1_t3(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	{
		{
		}
	}
}


// address: 0x800422C8
// line start: 664
// line end:   692
void pl_mv05_w1_t4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	{
		{
		}
	}
}


// address: 0x800423A0
// line start: 696
// line end:   731
void pl_mv05_w1_t5(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// register: 16
	// size: 0x244
	register struct _74fake *pTa;
	{
		{
		}
	}
}


// address: 0x80042478
// line start: 735
// line end:   817
void pl_mv05_sub(struct _74fake *pEm) {
	// register: 16
	register unsigned long i;
	// register: 4
	register unsigned long Max;
	// register: 17
	register unsigned long No;
	// register: 3
	register unsigned long Num;
	// register: 20
	register unsigned long Ok;
	// register: 21
	register unsigned long Mok;
	// register: 23
	register unsigned long W_num;
	// register: 6
	// size: 0x244
	register struct _74fake *pE;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct _1fake V;
	{
	}
}


// address: 0x800426C4
// line start: 823
// line end:   891
unsigned char pl_bow_init(struct _74fake *pEm, unsigned long No) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	// size: 0xAC
	register struct _65fake *pO;
	// register: 21
	// size: 0xAC
	register struct _65fake *pW;
	// register: 4
	register unsigned long i;
	// register: 20
	register unsigned long j;
	{
	}
}


// address: 0x800428DC
// line start: 896
// line end:   925
unsigned char pl_bow_clr(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 3
	// size: 0xAC
	register struct _65fake *pO;
	// register: 18
	register unsigned long i;
	{
	}
}


// address: 0x80042988
// size: 0x244
// line start: 930
// line end:   999
struct _74fake *Bow_Lim_dir_ck(struct _1fake *pV, short Cdir_y, unsigned long Lim, short Dir) {
	// register: 22
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	register unsigned long Em_num;
	// register: 17
	// size: 0x244
	register struct _74fake **ppEm;
	// address: 0xFFFFFFD0
	auto long x;
	// register: 2
	register long z;
	// register: 2
	register long CkDir;
	// register: 20
	register unsigned long L_max;
	// register: 18
	register unsigned long L;
	// register: 21
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	{
	}
}


// address: 0x80042B00
// line start: 1023
// line end:   1473
void pl_bow(struct _74fake *pEm) {
	// register: 20
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 5
	// size: 0xAC
	register struct _65fake *pP;
	// register: 18
	// size: 0xAC
	register struct _65fake *pO;
	// register: 30
	register unsigned long i;
	// address: 0xFFFFFF60
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFF68
	// size: 0x8
	auto struct _2fake Spd;
	// address: 0xFFFFFF70
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFC8
	auto unsigned char Ck;
	// address: 0xFFFFFF90
	// size: 0x8
	auto struct _2fake Ts;
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake Ps;
	// address: 0xFFFFFFA0
	// size: 0x8
	auto struct _2fake Rot;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct _2fake Rot0;
	// address: 0xFFFFFFB8
	auto short Dy;
	// register: 22
	register short Water;
	// register: 18
	register unsigned long P_no;
	// register: 16
	// size: 0x244
	register struct _74fake *pTa;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct _106fake Aw;
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


// address: 0x800436F4
// line start: 1523
// line end:   1541
long Goto_pro(short Tdir, short Pdir, short Add_dir, short *pDir) {
}


// address: 0x80043748
// line start: 1550
// line end:   1566
void Bow_3D(struct _2fake *pTs, struct _2fake *pRot) {
	// register: 18
	register short Dir0;
	// register: 2
	register short Dir1;
}


// address: 0x800437E0
// line start: 1570
// line end:   1578
short Rot_3D(long Vx, long Vz) {
	// register: 3
	register long Kakudo;
}


// address: 0x80043870
// line start: 1598
// line end:   1819
unsigned long Pos_em_at_ck(struct _1fake *pP, short Cdir_y, struct _106fake *pAtw, unsigned long W_no) {
	// register: 23
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	register unsigned long Em_num;
	// register: 18
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 4
	register long Dir;
	// register: 22
	register unsigned long Off;
	// register: 17
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	// register: 2
	register unsigned long Ck;
	// register: 5
	// size: 0x14
	register struct _111fake *pAwe;
	{
		{
		}
	}
}


// address: 0x80043DF8
// line start: 1829
// line end:   1909
unsigned long Pos_pl_at_ck(struct _1fake *pP, unsigned long Len, long Down_life) {
	// register: 17
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 19
	register long Pl_num;
	// register: 20
	register long i;
	// register: 18
	// size: 0x244
	register struct _74fake *pLm;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	// register: 2
	register unsigned long Ck;
	{
	}
}


// address: 0x80043FC8
// line start: 1913
// line end:   1952
unsigned long Bow_goto_parts_no(struct _74fake *pTa, struct _0fake *pM, struct _116fake *pBow_t) {
	// register: 16
	register unsigned long LL;
	// register: 19
	register unsigned long i;
	// register: 18
	register unsigned long j;
	// register: 17
	register unsigned char *pBhp;
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 23
	register unsigned long S_parts_no;
	// register: 21
	register unsigned long S_ll;
}


// address: 0x8004410C
// line start: 1974
// line end:   1977
void pl_mv05_w2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key);

// address: 0x80044148
// line start: 1983
// line end:   2118
void pl_mv05_w2_t1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// register: 4
	register unsigned short Jtg_no;
	// address: 0xFFFFFFD8
	// size: 0xA
	auto short Gun_taiki_mot[5];
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


// address: 0x800443E4
// line start: 2122
// line end:   2306
void pl_mv05_w2_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// address: 0xFFFFFFC8
	// size: 0xA
	auto short Gun_at_mot[5];
	// address: 0xFFFFFFD8
	// size: 0xA
	auto short Gun_atend_mot[5];
	// register: 18
	register unsigned char Jtg_no;
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


// address: 0x800448AC
// line start: 2310
// line end:   2338
void pl_mv05_w2_t4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	{
		{
		}
	}
}


// address: 0x80044984
// line start: 2359
// line end:   2361
void pl_mv05_w3(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key);

// address: 0x800449C0
// line start: 2367
// line end:   2513
void pl_mv05_w3_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake svec;
	// register: 19
	register unsigned char i;
	// register: 16
	// size: 0x8
	register struct _109fake *pAwt;
	// address: 0xFFFFFFD8
	// size: 0x3
	auto unsigned char Han[3];
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80044DF8
// line start: 2534
// line end:   2536
void pl_mv05_w4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key);

// address: 0x80044E34
// line start: 2545
// line end:   2681
void pl_mv05_w4_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// address: 0xFFFFFFD8
	// size: 0xA
	auto short Gun_at_mot[5];
	// register: 17
	register unsigned char Jtg_no;
	{
		{
			{
			}
		}
	}
}


// address: 0x80045194
// line start: 2702
// line end:   2704
void pl_mv05_w5(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key);

// address: 0x800451D0
// line start: 2710
// line end:   2854
void pl_mv05_w5_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq, unsigned long Key) {
	// register: 16
	register unsigned char Jtg_no;
	{
		{
			{
			}
		}
	}
}


// address: 0x800455BC
// line start: 36
// line end:   73
void Poly_eff2_init() {
	// register: 21
	register unsigned long i;
	// register: 18
	// size: 0x128
	register struct _102fake *pPe;
	// register: 20
	// size: 0xC
	register struct _103fake *pPew;
}


// address: 0x80045694
// line start: 77
// line end:   199
void Move_poly_eff2() {
	// register: 22
	// size: 0xC
	register struct _103fake *pPew;
	// register: 19
	// size: 0x128
	register struct _102fake *pPe;
	// register: 4
	// size: 0x34
	register struct _30fake *pGt41;
	// register: 18
	register unsigned long xx;
	// register: 20
	register unsigned long i;
	// address: 0xFFFFFF88
	// size: 0x8
	auto struct _2fake Psv0;
	// address: 0xFFFFFF90
	// size: 0x8
	auto struct _2fake Psv1;
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake Tsv;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake M;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake M1;
	{
	}
}


// address: 0x80045A38
// line start: 202
// line end:   271
void Sort_poly_eff2() {
	// register: 5
	// size: 0x34
	register struct _30fake *pGt40;
	// register: 6
	// size: 0x34
	register struct _30fake *pGt41;
	// register: 7
	// size: 0x128
	register struct _102fake *pPe;
	// address: 0xFFFFFFF8
	auto unsigned long otz;
	// register: 15
	register unsigned long *ot;
	// register: 11
	register unsigned long i;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake Tm;
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct _0fake Tm1;
}


// address: 0x80045CDC
// line start: 278
// line end:   296
void Poly_eff_init() {
	// register: 17
	register unsigned long i;
	// register: 16
	// size: 0x80
	register struct _101fake *pPe;
}


// address: 0x80045D50
// line start: 306
// line end:   357
void Set_poly_eff() {
	// register: 16
	// size: 0x34
	register struct _30fake *pGt4;
}


// address: 0x80045F8C
// line start: 361
// line end:   413
void Sort_poly_eff() {
	// register: 18
	// size: 0x34
	register struct _30fake *pGt4;
	// register: 17
	// size: 0x80
	register struct _101fake *pPe;
	// address: 0xFFFFFFE0
	auto unsigned long otz;
	// register: 19
	register unsigned long *ot;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct _0fake Tm;
	// address: 0xFFFFFFC0
	// size: 0x20
	auto struct _0fake Tm1;
}


// address: 0x80046134
// line start: 40
// line end:   45
void Psp_init0();

// address: 0x80046168
// line start: 59
// line end:   62
void Psp_init1();

// address: 0x800461B4
// line start: 76
// line end:   159
void Psp_set() {
	// register: 9
	// size: 0x4
	register struct _PSP *pSprite;
	// register: 8
	register unsigned char *pSpg;
	// register: 14
	register unsigned char *pSeq;
	// register: 7
	register unsigned long cnt;
	// register: 4
	register unsigned long xy;
	// register: 11
	register unsigned long uvc;
	// register: 5
	register unsigned long wh;
	// register: 15
	register unsigned long max;
	// register: 13
	register unsigned long nspgp;
}


// address: 0x80046340
// line start: 172
// line end:   226
void Psp_trans() {
	// register: 19
	register unsigned long nsp;
	// register: 16
	// size: 0xC
	register struct _44fake *mode;
	// register: 17
	// size: 0x14
	register struct _37fake *sprt;
	// register: 20
	// size: 0x4
	register struct _PSP *pSprite;
	// register: 22
	register unsigned long *Flg;
	{
	}
}


// address: 0x80046488
// line start: 240
// line end:   256
void Psp_ctr(unsigned char psp_id, unsigned char st) {
	// register: 6
	register unsigned long sp_out;
	// register: 7
	register unsigned long nsp;
	// register: 3
	// size: 0x4
	register struct _PSP *pSprite;
}


// address: 0x800464E0
// line start: 201
// line end:   797
void Set_room() {
	// register: 6
	register unsigned long i;
	// register: 7
	register unsigned long Size;
	// register: 3
	register unsigned long *pOffset;
	// register: 17
	// size: 0x244
	register struct _74fake *pEm;
	{
		// register: 3
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
}


// address: 0x80046A08
// line start: 808
// line end:   816
void Set_stage() {
}


// address: 0x80046A5C
// line start: 828
// line end:   920
void Replace_rdt() {
	// register: 16
	register unsigned long Ofs_tbl;
	// register: 2
	register unsigned long Next_ofs_tbl;
	// register: 19
	register unsigned long nRbj;
	// register: 21
	register unsigned long nRbj_old;
	// register: 18
	register unsigned long Now_head;
	{
		// register: 6
		register unsigned long Move_ofs;
		// register: 6
		register unsigned long Move_size;
		{
			// register: 16
			register unsigned long Ofs;
		}
	}
}


// address: 0x80046D20
// line start: 933
// line end:   966
void Em_init_move() {
	// register: 16
	// size: 0x244
	register struct _74fake *pEm;
	// register: 18
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 19
	register unsigned long D0;
	// register: 17
	register unsigned long D1;
	// register: 21
	register unsigned long D2;
}


// address: 0x80046E94
// line start: 41
// line end:   130
unsigned char Root_ck(struct _74fake *pEm, struct _1fake *Dest, unsigned char Dest_area, unsigned char Mode) {
	// register: 19
	register unsigned long P_area_no;
	// register: 5
	register unsigned long T_area_no;
	// register: 17
	register long T_x;
	// register: 18
	register long T_z;
	{
	}
}


// address: 0x800470DC
// line start: 141
// line end:   154
unsigned char Rnd_area() {
	// register: 16
	register unsigned long atari_ctr;
}


// address: 0x80047144
// line start: 165
// line end:   190
unsigned char Guide_check(short target_x, short target_z) {
	// register: 7
	register unsigned short atari_ctr;
	// register: 2
	register unsigned short atari_size;
	// register: 8
	register unsigned short *atari_ptr;
}


// address: 0x800471EC
// line start: 204
// line end:   536
void kara_rootck2(unsigned char hontai_area, unsigned char target_area, short target_x, short target_z) {
	// address: 0xFFFFFDC8
	// size: 0x20
	auto unsigned short tnari_st[16];
	// register: 21
	register unsigned short *tnari_pt;
	// address: 0xFFFFFDE8
	// size: 0x20
	auto unsigned short tuuka_st[16];
	// register: 13
	register unsigned short *tuuka_pt;
	// address: 0xFFFFFF58
	auto unsigned short target_bit;
	// address: 0xFFFFFE08
	// size: 0x20
	auto unsigned short ll_st[16];
	// register: 23
	register unsigned short *ll_pt;
	// address: 0xFFFFFE28
	// size: 0x44
	auto short poxz_st[34];
	// register: 12
	register short *poxz_pt;
	// register: 18
	register unsigned char area_no;
	// address: 0xFFFFFF60
	auto long D6;
	// register: 6
	register long D7;
	// register: 17
	register short D0;
	// register: 16
	register short D1;
	// address: 0xFFFFFE70
	// size: 0x10
	auto unsigned char root[16];
	// register: 22
	register unsigned char deep;
	// register: 14
	register short *pBlock;
	// address: 0xFFFFFE80
	// size: 0x10
	auto struct _1fake Tv;
	// address: 0xFFFFFE90
	// size: 0x10
	auto struct _1fake Tv0;
	// address: 0xFFFFFEA0
	// size: 0x10
	auto struct _1fake Tv1;
	// register: 7
	register long Min_x;
	// register: 6
	register long Min_z;
	// register: 4
	register long Max_x;
	// register: 5
	register long Max_z;
	// address: 0xFFFFFEB0
	// size: 0x10
	auto unsigned char Sflg[16];
	// register: 2
	register unsigned char flg;
	// register: 30
	register unsigned char *pSf;
	// address: 0xFFFFFF68
	auto unsigned char CkSf;
	// address: 0xFFFFFEC0
	// size: 0x80
	auto short MinMax[64];
	// register: 15
	register short *pMM;
	// address: 0xFFFFFF70
	auto long dest_x;
	// address: 0xFFFFFF78
	auto long dest_z;
	// address: 0xFFFFFF80
	auto long next_x;
	// address: 0xFFFFFF88
	auto long next_z;
	// address: 0xFFFFFF90
	// size: 0x244
	auto struct _74fake *pEm;
	// register: 3
	register long Ck;
	// register: 7
	register long Em_r_x;
	// register: 8
	register long Em_r_z;
}


// address: 0x80047A44
// line start: 33
// line end:   69
void Sa_dat_set(struct _74fake *pEm, unsigned long *pSa) {
	// register: 6
	register unsigned long i;
	// register: 7
	register unsigned long j;
	// register: 2
	register unsigned long k;
	// register: 8
	register unsigned long *pBit;
	// register: 5
	register unsigned long *pTmp;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80047AC0
// line start: 80
// line end:   187
void Sa_parts_mod(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// register: 8
	register unsigned long i;
	// register: 15
	register long P0;
	// register: 11
	register long P1;
	// register: 2
	register long Data_byte;
	// register: 5
	// size: 0xAC
	register struct _65fake *pO;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake SA_sv0;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake SA_sv1;
	// address: 0xFFFFFFF8
	// size: 0x8
	auto struct _2fake Tmp_sv;
	// register: 5
	// size: 0x8
	register struct _2fake *pOrg_sv;
	// register: 5
	register unsigned long *pT_head;
	// register: 6
	register short *S_dat0;
	// register: 7
	register short *S_dat1;
	// register: 4
	register unsigned long *ko_link_ptr;
	// register: 2
	register unsigned long *link_ptr;
	// register: 4
	register unsigned char *kodata;
}


// address: 0x80047DC0
// line start: 192
// line end:   330
void Sa_parts_allmv2(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// register: 8
	register unsigned long i;
	// register: 19
	register unsigned long Oi;
	// register: 25
	register unsigned long j;
	// register: 24
	register long P0;
	// register: 15
	register long P1;
	// register: 2
	register long Data_byte;
	// register: 20
	register long Data_byte1;
	// register: 16
	// size: 0xAC
	register struct _65fake *pO;
	// register: 7
	// size: 0xAC
	register struct _65fake *pP;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake SA_sv0;
	// register: 4
	// size: 0x8
	register struct _2fake *pOrg_sv;
	// register: 18
	// size: 0x8
	register struct _2fake *pOrg;
	// register: 2
	register unsigned long *pT_head;
	// register: 6
	register short *S_dat0;
	// register: 10
	register short *S_dat1;
	// register: 16
	register short *S_dat_or;
	// register: 18
	register unsigned long *ko_link_ptr;
	// register: 19
	register unsigned long *link_ptr;
	// register: 9
	register unsigned char *kodata;
	// register: 9
	register unsigned long Sabun_num;
	// register: 11
	register unsigned long Sabun_no;
	// register: 2
	register unsigned long h_no;
}


// address: 0x8004817C
// line start: 378
// line end:   549
void Sa_parts_allmv(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// register: 6
	register long i;
	// register: 30
	register long Oi;
	// register: 5
	register long k;
	// register: 18
	register long j;
	// register: 11
	register long P0;
	// register: 10
	register long P1;
	// register: 24
	register long Data_byte;
	// register: 20
	register long Data_byte1;
	// register: 16
	// size: 0xAC
	register struct _65fake *pO;
	// register: 5
	// size: 0xAC
	register struct _65fake *pP;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake SA_sv0;
	// register: 4
	// size: 0x8
	register struct _2fake *pOrg_sv;
	// register: 23
	// size: 0x8
	register struct _2fake *pOrg;
	// register: 2
	register unsigned long *pT_head;
	// register: 3
	register short *S_dat0;
	// register: 22
	register short *S_dat_or;
	// register: 17
	register short *S_dat2;
	// register: 15
	register short *S_dat3;
	// register: 3
	register unsigned long *ko_link_ptr;
	// register: 2
	register unsigned long *link_ptr;
	// register: 13
	register unsigned long Max_parts;
	// register: 8
	register unsigned char *kodata;
	// register: 21
	register unsigned char *pKo;
	// register: 7
	register unsigned char P_no;
	// register: 25
	register unsigned long Sabun_num;
	// register: 14
	register unsigned long Sabun_no;
	// register: 2
	register unsigned long h_no;
	// register: 12
	register unsigned long *pSa_dat_head;
	// register: 11
	register unsigned long *pSa_dat;
}


// address: 0x800484B8
// line start: 554
// line end:   642
void Sa_parts_offset_allmv(struct _74fake *pEm, struct _65fake *pP_ptr) {
	// register: 6
	register long i;
	// register: 7
	register long P0;
	// register: 3
	register long P1;
	// register: 24
	register long Data_byte1;
	// register: 11
	// size: 0xAC
	register struct _65fake *pO;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake SA_sv0;
	// register: 15
	register short *S_dat2;
	// register: 4
	register short *S_dat3;
	// register: 10
	register unsigned long Max_parts;
	// register: 8
	register unsigned long Sabun_num;
	// register: 9
	register unsigned long Sabun_no;
	// register: 2
	register unsigned long h_no;
	// register: 8
	register unsigned long *pSa_dat_head;
	// register: 7
	register unsigned long *pSa_dat;
}


// address: 0x80048620
// line start: 73
// line end:   80
unsigned long Sca_get_area(long X, long Z, long Sx, long Sz) {
	// register: 2
	register unsigned long Fbit;
}


// address: 0x80048644
// line start: 100
// line end:   265
unsigned long Sca_ck_hit(struct _1fake *pPos, long R, unsigned long Floor, unsigned long Flg) {
	// address: 0x800B6758
	static short Hit_flg;
	// address: 0x800B675C
	// size: 0x10
	static struct _57fake **pSca_data;
	// address: 0x800B6760
	static long Old_x;
	// address: 0x800B6764
	static long Old_z;
	// register: 16
	// size: 0x10
	register struct _57fake *pT_xz;
	// register: 23
	// size: 0x10
	register struct _57fake *pT_xz_end;
	// register: 19
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0xFFFFFFD0
	auto unsigned long Att;
	// register: 30
	register unsigned long Area;
	// register: 20
	register long Pos_x;
	// register: 18
	register long Pos_z;
	// address: 0x800486F8
	bool loop2;
	{
		// register: 2
		// size: 0x8728
		register struct _97fake *pG;
		{
			// register: 4
			register short sc_dirY;
			{
				// register: 6
				register long Dif;
			}
		}
	}
}


// address: 0x80048AE0
// line start: 280
// line end:   362
unsigned long Sca_ck_hit_om(struct _71fake *pOm, unsigned long Att, unsigned long Flg) {
	// address: 0x800B6768
	static short Hit_flg;
	// register: 17
	// size: 0x10
	register struct _57fake *pT_xz;
	// register: 22
	// size: 0x10
	register struct _57fake *pT_xz_end;
	// register: 20
	register long Rx;
	// register: 19
	register long Rz;
	// register: 23
	register unsigned long Floor;
	// address: 0xFFFFFFD0
	auto unsigned short Area;
	// register: 21
	register long Pos_x;
	// register: 16
	register long Pos_z;
	// address: 0x80048BA4
	bool loop2;
	{
	}
}


// address: 0x80048CE0
// line start: 376
// line end:   392
unsigned long Sca_hit_box2(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 9
	register long Tmp_x;
	// register: 7
	register long Tmp_z;
	// register: 3
	register long Tmp;
}


// address: 0x80048D88
// line start: 407
// line end:   447
unsigned long Sca_hit_box(struct _74fake *pEm, long R, struct _57fake *pScd) {
	// register: 4
	register long Dx;
	// register: 5
	register long Dz;
	// register: 10
	register long Wx;
	// register: 9
	register long Wz;
	// register: 2
	register long Cx;
	// register: 2
	register long Cz;
	// register: 8
	register unsigned long Old_flg;
	// register: 5
	register long Dold;
}


// address: 0x80048EF0
// line start: 448
// line end:   491
unsigned long Sca_hosei_box(struct _74fake *pEm, struct _2fake *pOld, long X, long Z) {
	// register: 4
	register unsigned long Pm;
	// address: 0x80048F9C
	bool sai;
	// address: 0x80049038
	bool old;
}


// address: 0x80049058
// line start: 506
// line end:   577
unsigned long Sca_hit_naname_a(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 6
	register long ZZ;
	// register: 4
	register long X1;
	// register: 5
	register long X0;
	// register: 3
	register long Y1;
	// register: 10
	register long Y0;
	// register: 2
	register long Tmp;
	// register: 16
	register long Pos_x;
	// register: 18
	register long Pos_z;
	// address: 0x80049400
	bool old2;
}


// address: 0x80049450
// line start: 592
// line end:   599
unsigned long Sca_ck_naname_a(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
}


// address: 0x800494D0
// line start: 614
// line end:   686
unsigned long Sca_hit_naname_b(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 5
	register long ZZ;
	// register: 3
	register long X1;
	// register: 6
	register long X0;
	// register: 4
	register long Y1;
	// register: 12
	register long Y0;
	// register: 2
	register long Tmp;
	// register: 15
	register long Pos_x;
	// register: 24
	register long Pos_z;
	// address: 0x800498A8
	bool old2;
}


// address: 0x800498F8
// line start: 701
// line end:   708
unsigned long Sca_ck_naname_b(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
}


// address: 0x8004997C
// line start: 723
// line end:   799
unsigned long Sca_hit_naname_c(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 5
	register long ZZ;
	// register: 2
	register long Tmp;
	// register: 3
	register long X1;
	// register: 6
	register long X0;
	// register: 4
	register long Y1;
	// register: 11
	register long Y0;
	// register: 15
	register long Pos_x;
	// register: 25
	register long Pos_z;
	// address: 0x80049D54
	bool old2;
}


// address: 0x80049DA4
// line start: 814
// line end:   821
unsigned long Sca_ck_naname_c(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
}


// address: 0x80049E18
// line start: 836
// line end:   909
unsigned long Sca_hit_naname_d(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 5
	register long ZZ;
	// register: 3
	register long X1;
	// register: 6
	register long X0;
	// register: 4
	register long Y1;
	// register: 12
	register long Y0;
	// register: 2
	register long Tmp;
	// register: 24
	register long Pos_x;
	// register: 25
	register long Pos_z;
	// address: 0x8004A1F0
	bool old2;
}


// address: 0x8004A240
// line start: 924
// line end:   931
unsigned long Sca_ck_naname_d(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
}


// address: 0x8004A2BC
// line start: 945
// line end:   1099
unsigned long Sca_hit_hishi(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 7
	register long ZZ;
	// register: 3
	register long XX;
	// register: 2
	register long Tmp;
	// register: 5
	register long Tmp_x;
	// register: 9
	register long Tmp_z;
	// register: 3
	register long X1;
	// register: 8
	register long X0;
	// register: 3
	register long Y1;
	// register: 9
	register long Y0;
	// address: 0x8004AE38
	bool old;
}


// address: 0x8004AE6C
// line start: 1113
// line end:   1155
unsigned long Sca_ck_hishi(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
	// register: 4
	register long ZZ;
}


// address: 0x8004B0A8
// line start: 1169
// line end:   1201
unsigned long Sca_hit_circle(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 18
	register long x;
	// register: 17
	register long z;
	// register: 16
	register long r;
	// register: 3
	register long r1;
	// register: 3
	register long r2;
}


// address: 0x8004B1DC
// line start: 1215
// line end:   1230
unsigned long Sca_ck_circle(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 16
	register long r;
	// register: 16
	register long r1;
}


// address: 0x8004B248
// line start: 1245
// line end:   1281
unsigned long Sca_hit_koban_x(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 6
	register unsigned long Id;
}


// address: 0x8004B364
// line start: 1294
// line end:   1327
unsigned long Sca_ck_koban_x(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
	// register: 6
	register unsigned long Id;
}


// address: 0x8004B49C
// line start: 1340
// line end:   1379
unsigned long Sca_hit_koban_z(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 7
	register unsigned long Id;
}


// address: 0x8004B5D4
// line start: 1392
// line end:   1428
unsigned long Sca_ck_koban_z(struct _1fake *pPos, long R, struct _57fake *pT_xz) {
	// register: 7
	register unsigned long Id;
}


// address: 0x8004B704
// line start: 1447
// line end:   1511
unsigned long Sca_hit_slope(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
}


// address: 0x8004B8FC
// line start: 1531
// line end:   1601
unsigned long Sca_hit_stairs(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 16
	register unsigned long Diff_floor;
	// register: 19
	register unsigned long Stairs;
}


// address: 0x8004BB58
// line start: 1614
// line end:   1640
unsigned long Sca_hit_curve(struct _74fake *pEm, long R, struct _57fake *pT_xz) {
	// register: 19
	register long z;
	// register: 18
	register long y;
	// register: 16
	register long r;
	// register: 3
	register long r2;
	// register: 3
	register long Z;
}


// address: 0x8004BD18
// line start: 1653
// line end:   1673
long Sca_get_slope_high(long Pos_x, long Pos_z, long R, struct _57fake *pT_xz) {
	// register: 6
	register long Pos_y;
}


// address: 0x8004BE88
// line start: 1686
// line end:   1706
long Sca_get_stairs_high(struct _1fake *pPos, long Low_y, long High_y, struct _57fake *pT_xz) {
	// register: 8
	register long Pos_y;
}


// address: 0x8004BF98
// line start: 1718
// line end:   1727
long Sca_get_curve_high(struct _1fake *pPos, long Low_y, long High_y, struct _57fake *pT_xz) {
	// register: 2
	register long Z;
	// register: 16
	register long R;
}


// address: 0x8004C000
// line start: 1749
// line end:   1914
long Sca_get_ground(struct _1fake *pPos, long R, unsigned long Att, unsigned long Flg) {
	// address: 0x800B676C
	static short Gnd_y;
	// register: 18
	// size: 0x10
	register struct _57fake *pT_xz;
	// register: 23
	// size: 0x10
	register struct _57fake *pT_xz_end;
	// register: 30
	register unsigned long Area;
	// register: 22
	register long Pos_x;
	// register: 21
	register long Pos_z;
	// register: 16
	register long High_y;
	// register: 17
	register long Low_y;
	// register: 4
	register long Tmp_floor;
	// address: 0x8004C1D4
	bool loop2;
	// address: 0x8004C410
	bool normal;
	// address: 0x8004C434
	bool ground;
	// address: 0x8004C4BC
	bool ceiling;
	{
		// register: 16
		// size: 0x1F8
		register struct _71fake *pOm;
		{
		}
	}
}


// address: 0x8004C570
// line start: 1939
// line end:   1952
unsigned short Sca_get_dir(struct _1fake *pPos, struct _57fake *pT_xz) {
	// register: 6
	register unsigned long Flg;
}


// address: 0x8004C61C
// line start: 1954
// line end:   1992
long Sca_get_dir_super(struct _1fake *pPos, struct _57fake *pSca_dat, struct _0fake *pSuper, unsigned long Flg) {
	// register: 23
	register long X;
	// register: 19
	register long Y;
	// register: 22
	register long Z;
	// register: 21
	register long W;
	// register: 20
	register long H;
	// register: 16
	register long D;
}


// address: 0x8004C81C
// line start: 1994
// line end:   2005
unsigned short Sca_get_dir_super_tmp(long X, long Z, long Sx, long Sz, long Sw, long Sd) {
	// register: 4
	register long Dir;
}


// address: 0x8004C8B4
// line start: 2018
// line end:   2026
unsigned long Get_axis(struct _0fake *pM) {
	// register: 2
	register unsigned long Axis;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x8004C93C
// line start: 2028
// line end:   2039
unsigned long Get_axis2(struct _0fake *pM) {
	// register: 3
	register unsigned long Axis;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv;
}


// address: 0x8004C9DC
// line start: 2061
// line end:   2072
long Sca_get_pos(long Dir, struct _57fake *pSca_dat);

// address: 0x8004CA5C
// line start: 2074
// line end:   2102
void Sca_get_pos_super(struct _1fake *pPos, struct _57fake *pSca_dat, struct _0fake *pSuper, struct _1fake *pVec) {
	// register: 22
	register long X;
	// register: 19
	register long Y;
	// register: 23
	register long Z;
	// register: 21
	register long W;
	// register: 17
	register long H;
	// register: 16
	register long D;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// register: 3
	register unsigned long Axis;
}


// address: 0x8004CBBC
// line start: 2104
// line end:   2125
unsigned short Sca_get_pos_super_tmp(long X, long Z, long Sx, long Sz, long Sw, long Sd, long *pX, long *pZ) {
	// register: 4
	register long Dir;
}


// address: 0x8004CCB8
// line start: 2142
// line end:   2350
unsigned long Sca_ck_line(struct _1fake *pV1, struct _1fake *pV2, unsigned long Att, unsigned long Flg) {
	// address: 0x800B6770
	static unsigned long In_flg;
	// register: 9
	// size: 0x10
	register struct _57fake *pSca_dat;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct _57fake *pSca_dat_end;
	// register: 2
	register long X;
	// register: 2
	register long Z;
	// register: 3
	register long X2;
	// register: 3
	register long Z2;
	// register: 4
	register long Ck_work;
	// address: 0x8004CD0C
	bool loop;
	// address: 0x8004CF60
	bool zy_ck;
	// address: 0x8004D3AC
	bool hit;
	// address: 0x8004D3B0
	bool loop_end;
	{
		// register: 13
		register long Low_y;
		// register: 12
		register long High_y;
		// register: 3
		register long Tmp_floor;
		// address: 0x8004D1C4
		bool xy_ck;
	}
}


// address: 0x8004D3E0
// line start: 2360
// line end:   2361
long Sca_get_high(struct _57fake *pSca_dat);

// address: 0x8004D428
// line start: 2372
// line end:   2380
long Sca_get_low(struct _57fake *pSca_dat) {
	// register: 4
	register long Low;
	// register: 3
	register long Floor;
}


// address: 0x8004D454
// line start: 2395
// line end:   2430
void Sca_search(unsigned long Area, long Att, unsigned long Floor) {
	// register: 3
	// size: 0x10
	register struct _57fake **pSca_data;
	// register: 7
	// size: 0x10
	register struct _57fake *pT_xz;
	// register: 9
	// size: 0x10
	register struct _57fake *pT_xz_end;
	// register: 8
	register unsigned long Hit_num;
	// address: 0x8004D484
	bool loop2;
	// address: 0x8004D4E0
	bool loop_end;
	{
		// register: 3
		// size: 0x8728
		register struct _97fake *pG;
	}
}


// address: 0x8004D4E8
// line start: 69
// line end:   201
unsigned long Sce_at_check(struct _74fake *pEm, unsigned long attribute, unsigned long auto_flg) {
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFA0
	// size: 0x10
	auto struct _1fake Vec;
	// register: 2
	register unsigned long Hit_flg;
	// register: 19
	register unsigned long i;
	// register: 23
	register unsigned long D0;
	// address: 0xFFFFFFB0
	// size: 0x14
	auto short Work[10];
	// register: 16
	// size: 0xC
	register struct _82fake *pAot;
	// address: 0x8004D830
	bool hit;
}


// address: 0x8004D94C
// line start: 207
// line end:   209
unsigned long Nothing(void *pAot);

// address: 0x8004D974
// line start: 217
// line end:   270
unsigned long Sce_Door(void *pAot) {
	// register: 18
	// size: 0x12
	register struct _85fake *pDoor;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 16
	register unsigned long Key_type;
	// register: 17
	register long Key_work;
	// address: 0x8004DAC8
	bool door_in;
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


// address: 0x8004DB18
// line start: 275
// line end:   309
void Key_lost() {
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0x800B6788
	static long Key_work;
	{
	}
}


// address: 0x8004DC84
// line start: 315
// line end:   333
unsigned long Sce_Item(void *pAot) {
}


// address: 0x8004DD0C
// line start: 339
// line end:   340
unsigned long Sce_Normal(void *pAot);

// address: 0x8004DD14
// line start: 347
// line end:   351
unsigned long Sce_Message(void *pAot) {
}


// address: 0x8004DD4C
// line start: 357
// line end:   360
unsigned long Sce_Event(void *pAot) {
}


// address: 0x8004DD78
// line start: 368
// line end:   385
unsigned long Sce_Flg_chg(void *pAot) {
	// register: 6
	register unsigned long *pFlg;
}


// address: 0x8004DDE4
// line start: 391
// line end:   394
unsigned long Sce_Water(void *pAot);

// address: 0x8004DE00
// line start: 401
// line end:   413
unsigned long Sce_Move(void *pAot) {
}


// address: 0x8004DE68
// line start: 419
// line end:   430
unsigned long Sce_Save(void *pAot) {
	// register: 3
	// size: 0xC
	register struct _82fake *pAot2;
}


// address: 0x8004DEB4
// line start: 435
// line end:   466
void Save_entrance() {
	// register: 4
	// size: 0x8728
	register struct _97fake *pG;
	{
		{
		}
	}
}


// address: 0x8004DFEC
// line start: 471
// line end:   481
unsigned long Sce_Itembox(void *pAot) {
	// register: 3
	// size: 0xC
	register struct _82fake *pAot2;
}


// address: 0x8004E030
// line start: 486
// line end:   531
void Item_box_entrance() {
	// address: 0x800B678C
	static short Dir_spd;
	// address: 0x800B6790
	static short Spd_add;
	// address: 0x800B6794
	// size: 0x1F8
	static struct _71fake *pOwork;
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	{
	}
}


// address: 0x8004E240
// line start: 537
// line end:   562
unsigned long Sce_Damage(void *pAot) {
	{
	}
}


// address: 0x8004E3A0
// line start: 568
// line end:   573
unsigned long Sce_Status(void *pAot);

// address: 0x8004E3E0
// line start: 581
// line end:   645
unsigned long Sce_Hikidashi(void *pAot) {
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	// register: 17
	register unsigned short *pDat;
	// register: 4
	register unsigned long *Flg_addr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8004E64C
// line start: 650
// line end:   729
void Hikidashi_entrance() {
	// address: 0x800B6798
	static long Key_work;
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0x800B679C
	// size: 0x8
	static struct _88fake *pItem_dat;
	// register: 5
	register unsigned short *pDat;
	// address: 0x800B67A0
	// size: 0xC
	static struct _82fake *pAot;
	{
		{
		}
	}
}


// address: 0x8004E984
// line start: 734
// line end:   739
unsigned long Sce_Windows(void *pAot);

// address: 0x8004E9B0
// line start: 746
// line end:   785
void Sce_at() {
	// register: 17
	register unsigned long i;
	// register: 19
	register unsigned long D0;
	// register: 16
	// size: 0x244
	register struct _74fake *pEw;
	// register: 17
	// size: 0x244
	register struct _74fake *pEw2;
}


// address: 0x8004EB24
// line start: 792
// line end:   834
long Water_ck(long Pos_x, long Pos_z) {
	// address: 0xFFFFFFB8
	// size: 0x10
	auto struct _1fake Vec;
	// register: 17
	register unsigned long i;
	// register: 19
	register unsigned long D0;
	// register: 16
	// size: 0xC
	register struct _82fake *pAot;
	// address: 0xFFFFFFC8
	// size: 0x14
	auto short Work[10];
}


// address: 0x8004EC58
// line start: 1069
// line end:   1087
unsigned char Floor_check(long check_x, long check_z, unsigned long nfloor) {
	// register: 17
	register short *A0;
	// register: 18
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct _1fake Vec;
}


// address: 0x8004ED24
// line start: 191
// line end:   214
void Sce_test_init() {
	// register: 3
	register unsigned long i;
}


// address: 0x8004ED6C
// line start: 418
// line end:   427
unsigned long Em_kind_search(unsigned long Id) {
	// register: 3
	register unsigned char *p;
}


// address: 0x8004EDB0
// line start: 436
// line end:   491
void Sce_se_set() {
	// register: 6
	register unsigned char *A0;
	// register: 7
	register unsigned long i;
	// register: 9
	register unsigned long j;
	// register: 8
	register unsigned long D0;
	// register: 11
	register unsigned long Flg;
	// register: 4
	// size: 0x244
	register struct _74fake *pEm;
	// address: 0x8004EE78
	bool step1;
	// address: 0x8004EE7C
	bool step0;
}


// address: 0x8004EF30
// line start: 499
// line end:   510
void Sce_rnd_set() {
	// register: 2
	register unsigned long D0;
	// register: 4
	register unsigned long D1;
}


// address: 0x8004EF70
// line start: 519
// line end:   564
void Sce_model_init() {
	// register: 18
	register unsigned long i;
	// register: 4
	register unsigned long *pTim;
	// register: 3
	register unsigned long S0;
	// register: 2
	register unsigned long S1;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 17
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 20
	// size: 0x8
	register struct _78fake *pMi;
	{
	}
}


// address: 0x8004F07C
// line start: 573
// line end:   586
void Sce_work_clr() {
}


// address: 0x8004F0D8
// line start: 590
// line end:   615
void Sce_work_clr_at() {
	// register: 4
	register unsigned long i;
	// register: 6
	register unsigned long D0;
	// register: 3
	// size: 0x244
	register struct _74fake *pEw;
	// register: 4
	// size: 0x1F8
	register struct _71fake *pOm;
	// register: 3
	// size: 0x1F8
	register struct _71fake *pOm2;
}


// address: 0x8004F19C
// line start: 624
// line end:   688
void Sce_work_clr_set() {
	// register: 4
	register unsigned long i;
	// register: 16
	// size: 0x8728
	register struct _97fake *pG;
	// register: 5
	register long *A0;
}


// address: 0x8004F31C
// line start: 697
// line end:   708
void Sce_aot_init() {
	// register: 2
	register unsigned long i;
	// register: 3
	register unsigned long *pAot;
}


// address: 0x8004F348
// line start: 716
// line end:   730
void Event_init(struct _102fake *pSce, unsigned long Evt_no) {
	// register: 6
	register unsigned char *pScd;
	// register: 5
	register unsigned long D0;
}


// address: 0x8004F394
// line start: 739
// line end:   777
void Event_exec(unsigned long Task_level, unsigned long Evt_no) {
	// register: 4
	register unsigned long *pSpd;
	// register: 2
	register unsigned long i;
	// register: 7
	// size: 0x1474
	register struct _103fake *pSce;
	// register: 3
	// size: 0x174
	register struct _102fake *pTask;
}


// address: 0x8004F4A0
// line start: 783
// line end:   797
void Sce_col_chg_init() {
	// register: 18
	register unsigned long D0;
	// register: 17
	register unsigned long i;
}


// address: 0x8004F534
// line start: 808
// line end:   840
void Sce_mirror_init() {
	// register: 16
	// size: 0x244
	register struct _74fake *pEm;
	{
	}
}


// address: 0x8004F5F0
// line start: 846
// line end:   870
void Sce_kirakira_set() {
	// register: 18
	register unsigned long Cnt;
	// register: 16
	register unsigned long i;
	// register: 4
	register unsigned long D0;
	// register: 4
	register unsigned long D1;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// register: 6
	// size: 0x1F8
	register struct _71fake *pOm;
	{
	}
}


// address: 0x8004F6CC
// line start: 884
// line end:   941
void Sce_scheduler_set() {
	// register: 16
	register long i;
	// register: 17
	// size: 0x174
	register struct _102fake *pSce;
}


// address: 0x8004F894
// line start: 950
// line end:   969
void Sce_scheduler() {
}


// address: 0x8004F90C
// line start: 978
// line end:   1034
void Sce_scheduler_main() {
	// register: 3
	register unsigned long D0;
	// register: 18
	register unsigned long Level;
	// register: 16
	// size: 0x174
	register struct _102fake *pSce;
	// address: 0x8004F944
	bool loop;
}


// address: 0x8004FA14
// line start: 92
// line end:   97
unsigned long Break_point(struct _102fake *pSce);

// address: 0x8004FA2C
// line start: 105
// line end:   110
unsigned long Nop(struct _102fake *pSce);

// address: 0x8004FA44
// line start: 115
// line end:   136
unsigned long Evt_end(struct _102fake *pSce) {
	// register: 6
	register unsigned long Sub_ctr;
	// register: 5
	register unsigned char *D0;
	// register: 3
	register unsigned long *D1;
}


// address: 0x8004FAA8
// line start: 140
// line end:   146
unsigned long Evt_next(struct _102fake *pSce);

// address: 0x8004FAC0
// line start: 151
// line end:   157
unsigned long Evt_chain(struct _102fake *pSce);

// address: 0x8004FAEC
// line start: 162
// line end:   175
unsigned long Evt_exec(struct _102fake *pSce) {
	// register: 3
	register unsigned long Task_level;
	// register: 5
	register unsigned long Evt_no;
}


// address: 0x8004FB24
// line start: 179
// line end:   186
unsigned long Evt_kill(struct _102fake *pSce);

// address: 0x8004FB6C
// line start: 191
// line end:   208
unsigned long Ifel_ck(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
}


// address: 0x8004FBAC
// line start: 212
// line end:   220
unsigned long Else_ck(struct _102fake *pSce);

// address: 0x8004FBE8
// line start: 225
// line end:   233
unsigned long Endif(struct _102fake *pSce);

// address: 0x8004FC24
// line start: 238
// line end:   251
unsigned long Sleep(struct _102fake *pSce) {
	// register: 3
	register unsigned long Sub_ctr;
}


// address: 0x8004FC6C
// line start: 255
// line end:   271
unsigned long Sleeping(struct _102fake *pSce) {
	// register: 3
	register unsigned long Sub_ctr;
}


// address: 0x8004FCD4
// line start: 275
// line end:   282
unsigned long Wsleep(struct _102fake *pSce);

// address: 0x8004FD08
// line start: 287
// line end:   299
unsigned long Wsleeping(struct _102fake *pSce);

// address: 0x8004FD64
// line start: 304
// line end:   331
unsigned long For(struct _102fake *pSce) {
	// register: 10
	register unsigned long D0;
	// register: 11
	register unsigned long Sub_ctr;
	// register: 6
	register unsigned long Loop_ctr;
	// register: 8
	register unsigned char *pData;
}


// address: 0x8004FE1C
// line start: 335
// line end:   361
unsigned long For2(struct _102fake *pSce) {
	// register: 10
	register unsigned long D0;
	// register: 11
	register unsigned long Sub_ctr;
	// register: 6
	register unsigned long Loop_ctr;
	// register: 8
	register unsigned char *pData;
}


// address: 0x8004FF04
// line start: 366
// line end:   385
unsigned long Next(struct _102fake *pSce) {
	// register: 7
	register unsigned long D0;
	// register: 5
	register unsigned long Sub_ctr;
}


// address: 0x8004FF84
// line start: 389
// line end:   416
unsigned long While(struct _102fake *pSce) {
	// register: 7
	register unsigned long D0;
	// register: 6
	register unsigned long Loop_ctr;
	// register: 4
	register unsigned long Sub_ctr;
	// register: 5
	register unsigned char *pData;
}


// address: 0x80050054
// line start: 420
// line end:   432
unsigned long Ewhile(struct _102fake *pSce) {
	// register: 5
	register unsigned long Sub_ctr;
}


// address: 0x80050098
// line start: 436
// line end:   458
unsigned long Do(struct _102fake *pSce) {
	// register: 10
	register unsigned long D0;
	// register: 7
	register unsigned long Sub_ctr;
	// register: 8
	register unsigned long Loop_ctr;
	// register: 6
	register unsigned char *pData;
}


// address: 0x8005010C
// line start: 462
// line end:   483
unsigned long Edwhile(struct _102fake *pSce) {
	// register: 17
	register unsigned long Sub_ctr;
}


// address: 0x80050198
// line start: 488
// line end:   511
unsigned long While_main(struct _102fake *pSce, unsigned char *pData, unsigned char Ofs) {
	// register: 17
	register unsigned long D0;
	// register: 16
	register unsigned long D1;
	// register: 2
	register unsigned long D2;
	// register: 19
	register unsigned char *pCk_end;
}


// address: 0x80050268
// line start: 515
// line end:   571
unsigned long Switch(struct _102fake *pSce) {
	// register: 8
	register unsigned long D0;
	// register: 2
	register unsigned long D1;
	// register: 3
	register unsigned long D2;
	// register: 6
	register unsigned long Work_no;
	// register: 10
	register unsigned long Sub_ctr;
	// register: 4
	register unsigned long Loop_ctr;
	// register: 7
	register unsigned char *pData;
}


// address: 0x80050340
// line start: 575
// line end:   581
unsigned long Case(struct _102fake *pSce);

// address: 0x80050358
// line start: 586
// line end:   592
unsigned long Default(struct _102fake *pSce);

// address: 0x80050370
// line start: 597
// line end:   604
unsigned long Eswitch(struct _102fake *pSce);

// address: 0x800503A4
// line start: 609
// line end:   634
unsigned long Goto(struct _102fake *pSce) {
	// register: 3
	register long D0;
	// register: 7
	register long D1;
	// register: 8
	register long D2;
	// register: 2
	register unsigned long Sub_ctr;
	// register: 5
	register unsigned char *pData;
}


// address: 0x800503F0
// line start: 638
// line end:   665
unsigned long Gosub(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 5
	register unsigned long Sub_ctr;
	// register: 3
	register unsigned char *pData;
}


// address: 0x80050458
// line start: 669
// line end:   682
unsigned long Return(struct _102fake *pSce) {
	// register: 3
	register unsigned long Sub_ctr;
}


// address: 0x800504B0
// line start: 686
// line end:   701
unsigned long Break(struct _102fake *pSce) {
	// register: 2
	register unsigned long Sub_ctr;
	// register: 6
	register unsigned long Loop_ctr;
}


// address: 0x800504FC
// line start: 707
// line end:   730
unsigned long Work_copy(struct _102fake *pSce) {
	// register: 3
	register long D0;
	// register: 6
	register long D1;
	// register: 2
	register long D2;
	// register: 5
	register unsigned char *pData;
}


// address: 0x80050558
// line start: 734
// line end:   746
unsigned long Rbj_reset(struct _102fake *pSce) {
}


// address: 0x8005059C
// line start: 750
// line end:   772
unsigned long Ck(struct _102fake *pSce) {
	// register: 3
	register long D0;
	// register: 5
	register long D1;
	// register: 2
	register long D2;
	// register: 3
	register unsigned long *pFlg;
}


// address: 0x800505FC
// line start: 776
// line end:   810
unsigned long Set(struct _102fake *pSce) {
	// register: 3
	register long D0;
	// register: 5
	register long D1;
	// register: 6
	register long D2;
	// register: 5
	register long D3;
	// register: 7
	register unsigned long *pFlg;
	// register: 4
	register unsigned long Bit;
}


// address: 0x800506BC
// line start: 814
// line end:   853
unsigned long Cmp(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 5
	register long D1;
	// register: 4
	register long D2;
}


// address: 0x80050764
// line start: 856
// line end:   872
unsigned long Save(struct _102fake *pSce) {
	// register: 5
	register long D0;
}


// address: 0x80050794
// line start: 876
// line end:   893
unsigned long Copy(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
}


// address: 0x800507D4
// line start: 897
// line end:   914
unsigned long Calc(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 6
	register long D1;
}


// address: 0x80050820
// line start: 918
// line end:   936
unsigned long Calc2(struct _102fake *pSce) {
	// register: 7
	register long D0;
	// register: 5
	register long D1;
	// register: 6
	register long D2;
}


// address: 0x8005087C
// line start: 940
// line end:   955
void Calc_branch(unsigned long Exp, short *Ans, long Num);

// address: 0x800509A8
// line start: 962
// line end:   969
unsigned long Sce_rnd(struct _102fake *pSce);

// address: 0x800509D4
// line start: 977
// line end:   991
unsigned long Cut_chg(struct _102fake *pSce) {
	// register: 16
	register unsigned long D0;
}


// address: 0x80050A50
// line start: 998
// line end:   1007
unsigned long Cut_old(struct _102fake *pSce);

// address: 0x80050AB0
// line start: 1011
// line end:   1015
void Cut_chg_main(unsigned long Cut_no);

// address: 0x80050AF4
// line start: 1022
// line end:   1033
unsigned long Cut_auto(struct _102fake *pSce);

// address: 0x80050B5C
// line start: 1041
// line end:   1076
unsigned long Cut_replace(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 7
	register unsigned long D1;
	// register: 8
	// size: 0x14
	register struct _75fake *pCcut;
}


// address: 0x80050C40
// line start: 1083
// line end:   1101
unsigned long Cut_be_set(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 5
	// size: 0x14
	register struct _75fake *pCcut;
}


// address: 0x80050CB8
// line start: 1109
// line end:   1122
unsigned long Message_on(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
	// register: 7
	register unsigned long D2;
}


// address: 0x80050CFC
// line start: 1129
// line end:   1145
unsigned long Aot_set(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
}


// address: 0x80050D68
// line start: 1149
// line end:   1167
unsigned long Aot_set_4p(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
}


// address: 0x80050DEC
// line start: 1174
// line end:   1190
unsigned long Door_aot_set(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
}


// address: 0x80050E58
// line start: 1194
// line end:   1212
unsigned long Door_aot_set_4p(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
}


// address: 0x80050EDC
// line start: 1219
// line end:   1260
unsigned long Item_aot_set(struct _102fake *pSce) {
	// register: 17
	register unsigned long D0;
	// register: 5
	register unsigned long Flg_no;
	// register: 18
	register unsigned long Om_no;
	// register: 4
	register unsigned long *A0;
	// register: 16
	register unsigned char *pData;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80051008
// line start: 1264
// line end:   1304
unsigned long Item_aot_set_4p(struct _102fake *pSce) {
	// register: 17
	register unsigned long D0;
	// register: 5
	register unsigned long Flg_no;
	// register: 18
	register unsigned long Om_no;
	// register: 4
	register unsigned long *A0;
	// register: 16
	register unsigned char *pData;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80051140
// line start: 1311
// line end:   1344
unsigned long Aot_reset(struct _102fake *pSce) {
	// register: 7
	register unsigned long D0;
	// register: 2
	register unsigned long D1;
	// register: 3
	register unsigned long D2;
	// register: 5
	register short *A0;
	// register: 5
	// size: 0xC
	register struct _82fake *pAot;
	// register: 6
	register char *pData;
}


// address: 0x800511B4
// line start: 1355
// line end:   1377
unsigned long Aot_on(struct _102fake *pSce) {
	// register: 2
	register unsigned long D0;
	// register: 4
	register short *A0;
	// register: 3
	// size: 0xC
	register struct _82fake *pAot;
}


// address: 0x8005124C
// line start: 1384
// line end:   1510
unsigned long Obj_model_set(struct _102fake *pSce) {
	// register: 17
	// size: 0x1F8
	register struct _71fake *A0;
	// register: 19
	// size: 0x8728
	register struct _97fake *pG;
	// register: 9
	register unsigned long D0;
	// register: 8
	register unsigned long D1;
	// register: 5
	register unsigned long *pTmd;
	// register: 18
	register unsigned char *pData;
	// register: 5
	register long S0;
	// register: 6
	register long S1;
	// register: 7
	register long S2;
	// register: 2
	register long S3;
	// register: 2
	// size: 0x4C
	register struct _113fake *pCcp;
}


// address: 0x80051534
// line start: 1518
// line end:   1575
unsigned long Super_set(struct _102fake *pSce) {
	// register: 4
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 6
	// size: 0x244
	register struct _74fake *A0;
	// register: 4
	// size: 0x244
	register struct _74fake *A1;
	// register: 7
	register unsigned char *pData;
	// register: 8
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	register long S0;
	// register: 3
	register long S1;
	// register: 4
	register long S2;
}


// address: 0x800516A8
// line start: 1583
// line end:   1653
unsigned long Super_on(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 2
	register long S0;
	// register: 3
	register long S1;
	// register: 6
	register long S2;
	// register: 18
	// size: 0x244
	register struct _74fake *A0;
	// register: 19
	register unsigned char *pData;
	// register: 16
	// size: 0x20
	register struct _0fake *pMat;
	// address: 0xFFFFFF98
	// size: 0x20
	auto struct _0fake Workm;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto struct _0fake Workm2;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec2;
}


// address: 0x800518D8
// line start: 1659
// line end:   1686
unsigned long Super_reset(struct _102fake *pSce) {
	// register: 2
	// size: 0x244
	register struct _74fake *A0;
	// register: 5
	register char *pData;
	// register: 3
	register long S0;
	// register: 6
	register long S1;
	// register: 7
	register long S2;
}


// address: 0x8005192C
// line start: 1694
// line end:   1733
unsigned long Work_set(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 5
	register long D1;
}


// address: 0x800519F8
// line start: 1741
// line end:   1770
unsigned long Parts_set(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
	// register: 4
	register unsigned long D2;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP;
	// register: 4
	register char *pData;
}


// address: 0x80051AAC
// line start: 1778
// line end:   1792
unsigned long Speed_set(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
}


// address: 0x80051AD8
// line start: 1798
// line end:   1821
unsigned long Add_speed(struct _102fake *pSce) {
	// register: 3
	register unsigned long S0;
	// register: 6
	register unsigned long S1;
	// register: 7
	register unsigned long S2;
	// register: 5
	// size: 0x244
	register struct _74fake *A0;
}


// address: 0x80051B54
// line start: 1827
// line end:   1841
unsigned long Add_aspeed(struct _102fake *pSce);

// address: 0x80051BC8
// line start: 1850
// line end:   1869
unsigned long Pos_set(struct _102fake *pSce) {
	// register: 5
	register long S0;
	// register: 6
	register long S1;
	// register: 7
	register long S2;
	// register: 2
	register char *pData;
	// register: 3
	// size: 0x244
	register struct _74fake *pW;
}


// address: 0x80051BF8
// line start: 1877
// line end:   1896
unsigned long Dir_set(struct _102fake *pSce) {
	// register: 2
	register char *pData;
	// register: 3
	// size: 0x244
	register struct _74fake *pW;
	// register: 5
	register long S0;
	// register: 6
	register long S1;
	// register: 7
	register long S2;
}


// address: 0x80051C28
// line start: 1904
// line end:   1911
unsigned long Member_set(struct _102fake *pSce);

// address: 0x80051C78
// line start: 1920
// line end:   1927
unsigned long Member_set2(struct _102fake *pSce);

// address: 0x80051CD8
// line start: 1932
// line end:   1975
void Member_set_branch(struct _74fake *pW, unsigned long Member, long D0);

// address: 0x80051E48
// line start: 1984
// line end:   2000
unsigned long Member_copy(struct _102fake *pSce) {
	// register: 16
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
	// register: 2
	register char *pData;
}


// address: 0x80051E9C
// line start: 2009
// line end:   2048
unsigned long Member_cmp(struct _102fake *pSce) {
	// register: 16
	register long D0;
	// register: 17
	register long D1;
	// register: 3
	register long D2;
	// register: 2
	register char *pData;
}


// address: 0x80051F60
// line start: 2052
// line end:   2096
long Load_member_branch(struct _74fake *pW, unsigned long Member);

// address: 0x80052174
// line start: 2104
// line end:   2118
unsigned long Member_calc(struct _102fake *pSce) {
	// register: 17
	register long D0;
	// register: 18
	register long D1;
}


// address: 0x800521E0
// line start: 2126
// line end:   2142
unsigned long Member_calc2(struct _102fake *pSce) {
}


// address: 0x80052250
// line start: 2147
// line end:   2191
short *Load_member_addr_branch(struct _74fake *pW, unsigned long Member);

// address: 0x800523BC
// line start: 2198
// line end:   2210
unsigned long Dir_ck(struct _102fake *pSce) {
}


// address: 0x800523FC
// line start: 55
// line end:   104
unsigned long Se_on(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
	// register: 7
	register unsigned long D0;
	// register: 4
	register unsigned long D1;
	// register: 5
	register unsigned long D2;
	// register: 5
	register unsigned long Pos_x;
	// register: 6
	register unsigned long Pos_y;
	// register: 3
	register unsigned long Pos_z;
	// register: 3
	// size: 0x244
	register struct _74fake *pW;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Vec;
	// address: 0x800524C0
	bool step0;
}


// address: 0x80052530
// line start: 112
// line end:   130
unsigned long Sca_id_set(struct _102fake *pSce) {
	// register: 6
	register unsigned char *pData;
	// register: 2
	register unsigned long D0;
	// register: 2
	register unsigned long D1;
}


// address: 0x80052578
// line start: 138
// line end:   165
unsigned long Sce_espr_on(struct _102fake *pSce) {
	// register: 17
	register unsigned char *pData;
	// register: 16
	register unsigned long D0;
	// register: 5
	register long D1;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x80052614
// line start: 173
// line end:   200
unsigned long Sce_espr_on2(struct _102fake *pSce) {
	// register: 17
	register unsigned char *pData;
	// register: 16
	register unsigned long D0;
	// register: 5
	register unsigned long D2;
	// register: 5
	register long D1;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec;
}


// address: 0x800526BC
// line start: 209
// line end:   239
unsigned long Sce_espr3d_on(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
	// register: 17
	register unsigned long D0;
	// register: 5
	register unsigned long D2;
	// register: 5
	register long D1;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec2;
}


// address: 0x8005277C
// line start: 247
// line end:   277
unsigned long Sce_espr3d_on2(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
	// register: 17
	register unsigned long D0;
	// register: 5
	register unsigned long D2;
	// register: 5
	register long D1;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Svec;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct _2fake Svec2;
}


// address: 0x80052848
// line start: 285
// line end:   298
unsigned long Sce_espr_kill(struct _102fake *pSce) {
}


// address: 0x800528AC
// line start: 307
// line end:   318
unsigned long Sce_espr_kill2(struct _102fake *pSce) {
}


// address: 0x800528F4
// line start: 326
// line end:   340
unsigned long Sce_espr_control(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
}


// address: 0x80052958
// size: 0x20
// line start: 344
// line end:   365
struct _0fake *Get_matrix(long Work_kind, long Work_no) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pParts;
	// register: 6
	// size: 0x244
	register struct _74fake *pEm;
}


// address: 0x80052A8C
// line start: 373
// line end:   393
unsigned long Plc_motion(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 6
	register unsigned long D1;
	// register: 3
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x80052AD8
// line start: 401
// line end:   472
unsigned long Plc_dest(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEw;
	// register: 7
	register unsigned char *pData;
	// register: 6
	register unsigned long Type;
	// register: 3
	register unsigned long Id;
}


// address: 0x80052CC0
// line start: 480
// line end:   496
unsigned long Plc_gun(struct _102fake *pSce) {
	// register: 3
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x80052CF8
// line start: 503
// line end:   531
unsigned long Plc_gun_eff(struct _102fake *pSce) {
	// address: 0xFFFFFFF0
	// size: 0x10
	auto struct _1fake tvec;
}


// address: 0x80052D5C
// line start: 539
// line end:   610
unsigned long Plc_neck(struct _102fake *pSce) {
	// register: 6
	register unsigned long D0;
	// register: 10
	register unsigned long D1;
	// register: 7
	register long S0;
	// register: 8
	register long S1;
	// register: 9
	register long S2;
	// register: 5
	// size: 0x244
	register struct _74fake *pEw;
	// register: 11
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80052E9C
// line start: 617
// line end:   634
unsigned long Plc_ret(struct _102fake *pSce) {
	// register: 3
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x80052ED4
// line start: 641
// line end:   654
unsigned long Plc_stop(struct _102fake *pSce);

// address: 0x80052F1C
// line start: 663
// line end:   686
unsigned long Plc_flg(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 6
	register unsigned long D1;
}


// address: 0x80052FA0
// line start: 693
// line end:   708
unsigned long Plc_rot(struct _102fake *pSce);

// address: 0x80053004
// line start: 716
// line end:   723
unsigned long Plc_cnt(struct _102fake *pSce);

// address: 0x80053030
// line start: 735
// line end:   948
unsigned long Sce_em_set(struct _102fake *pSce) {
	// register: 20
	// size: 0x8728
	register struct _97fake *pG;
	// register: 6
	register long Em_no;
	// register: 19
	register unsigned long Mem_top;
	// register: 7
	register unsigned long Kind;
	// register: 16
	// size: 0x244
	register struct _74fake *pEm;
	// register: 17
	// size: 0x244
	register struct _74fake *pT;
	// register: 4
	register unsigned long *A0;
	// address: 0x80053600
	bool exit;
	{
		{
		}
	}
}


// address: 0x80053638
// line start: 955
// line end:   982
unsigned long Sce_key_ck(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
}


// address: 0x80053674
// line start: 989
// line end:   1016
unsigned long Sce_trg_ck(struct _102fake *pSce) {
	// register: 5
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
}


// address: 0x800536B0
// line start: 1023
// line end:   1034
unsigned long Sce_bgm_control(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
}


// address: 0x80053728
// line start: 1041
// line end:   1055
unsigned long Sce_bgmtbl_set(struct _102fake *pSce) {
	// register: 4
	register unsigned long D0;
	// register: 3
	register unsigned long D1;
	// register: 2
	register unsigned long D2;
}


// address: 0x80053780
// line start: 1063
// line end:   1089
unsigned long Sce_fade_set(struct _102fake *pSce) {
	// register: 17
	register unsigned char *pData;
	// register: 19
	register short Add;
	// register: 16
	register unsigned long No;
	// register: 3
	// size: 0x44
	register struct _98fake *pF;
}


// address: 0x80053844
// line start: 1096
// line end:   1108
unsigned long Sce_fade_adjust(struct _102fake *pSce) {
	// register: 16
	register unsigned char *pData;
}


// address: 0x80053894
// line start: 1115
// line end:   1129
unsigned long Xa_on(struct _102fake *pSce);

// address: 0x800538FC
// line start: 1137
// line end:   1148
unsigned long Xa_vol(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
}


// address: 0x80053938
// line start: 1157
// line end:   1171
unsigned long Se_vol(struct _102fake *pSce);

// address: 0x800539A8
// line start: 1179
// line end:   1202
unsigned long Weapon_chg(struct _102fake *pSce) {
	// register: 5
	register unsigned long Id;
	// register: 17
	// size: 0x244
	register struct _74fake *pEm;
}


// address: 0x80053A34
// line start: 1209
// line end:   1233
unsigned long Sce_shake_on(struct _102fake *pSce) {
	// register: 16
	register long i;
	// register: 20
	register long D0;
	// register: 19
	register long D1;
	// register: 18
	register long Ofs;
	{
	}
}


// address: 0x80053AE4
// line start: 1240
// line end:   1249
unsigned long Sce_line_start(struct _102fake *pSce) {
}


// address: 0x80053B30
// line start: 1257
// line end:   1275
unsigned long Sce_line_main(struct _102fake *pSce) {
}


// address: 0x80053B88
// line start: 1282
// line end:   1291
unsigned long Sce_line_end(struct _102fake *pSce) {
}


// address: 0x80053BC0
// line start: 1300
// line end:   1344
unsigned long Mizu_div_set(struct _102fake *pSce) {
	// register: 10
	register long i;
	// register: 9
	register long j;
	// register: 12
	register long Div_num;
	// register: 7
	// size: 0x34
	register struct _30fake *pPrim0;
}


// address: 0x80053DC0
// line start: 1351
// line end:   1364
unsigned long Keep_Item_ck(struct _102fake *pSce) {
	// register: 3
	register unsigned long D0;
}


// address: 0x80053DF8
// line start: 1371
// line end:   1390
unsigned long Sce_Item_lost(struct _102fake *pSce) {
	// register: 2
	register long D0;
}


// address: 0x80053E74
// line start: 1397
// line end:   1429
unsigned long Sce_Item_get(struct _102fake *pSce) {
	// register: 16
	register unsigned long Id;
}


// address: 0x80053F54
// line start: 1436
// line end:   1472
unsigned long Kage_set(struct _102fake *pSce) {
	// register: 16
	// size: 0x68
	register struct _61fake *pKage;
	// register: 6
	register unsigned long D0;
	// register: 5
	register unsigned long D1;
	// register: 2
	register unsigned long D2;
	{
		{
		}
	}
}


// address: 0x80054090
// line start: 1479
// line end:   1504
unsigned long Light_pos_set(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
	// register: 3
	register unsigned short *pPos_work;
}


// address: 0x80054148
// line start: 1511
// line end:   1525
unsigned long Light_kido_set(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
}


// address: 0x80054194
// line start: 1532
// line end:   1549
unsigned long Light_color_set(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
	// register: 3
	register unsigned char *pCol;
}


// address: 0x800541FC
// line start: 1556
// line end:   1581
unsigned long Light_pos_set2(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
	// register: 3
	register unsigned short *pPos_work;
}


// address: 0x800542B8
// line start: 1588
// line end:   1602
unsigned long Light_kido_set2(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
}


// address: 0x80054308
// line start: 1609
// line end:   1626
unsigned long Light_color_set2(struct _102fake *pSce) {
	// register: 5
	register unsigned char *pData;
	// register: 3
	register unsigned char *pCol;
}


// address: 0x80054374
// line start: 1635
// line end:   1643
unsigned long Sce_scr_move(struct _102fake *pSce);

// address: 0x800543A0
// line start: 1651
// line end:   1672
unsigned long Flr_set(struct _102fake *pSce) {
	// register: 5
	register unsigned short *A0;
	// register: 3
	register unsigned long D0;
}


// address: 0x80054420
// line start: 1679
// line end:   1688
unsigned long Movie_on(struct _102fake *pSce) {
}


// address: 0x80054468
// line start: 1694
// line end:   1727
unsigned long Splc_ret(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x800544D0
// line start: 1733
// line end:   1767
unsigned long Splc_sce(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEw;
}


// address: 0x80054538
// line start: 1774
// line end:   1788
unsigned long Mirror_set(struct _102fake *pSce);

// address: 0x800545B8
// line start: 1797
// line end:   1822
unsigned long Sce_parts_bomb(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEm;
	// register: 7
	register unsigned char *pData;
	// register: 5
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80054670
// line start: 1829
// line end:   1855
unsigned long Sce_parts_down(struct _102fake *pSce) {
	// register: 5
	// size: 0x244
	register struct _74fake *pEm;
	// register: 6
	register unsigned char *pData;
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80054720
// line start: 1863
// line end:   1894
unsigned long Col_chg_set(struct _102fake *pSce) {
	// register: 3
	// size: 0x4C
	register struct _126fake *pCcp;
	// register: 6
	register unsigned long D0;
	// register: 4
	register unsigned long i;
	// register: 4
	register unsigned char *pData;
	// address: 0x80054770
	bool step;
	// address: 0x800547AC
	bool end;
}


// address: 0x800547CC
// line start: 204
// line end:   239
void Snd_sys_init();

// address: 0x80054868
// line start: 253
// line end:   290
void Snd_sys_init2() {
}


// address: 0x80054988
// line start: 293
// line end:   295
void Snd_sys_Allvoff();

// address: 0x800549A8
// line start: 309
// line end:   347
void Snd_sys_init_sub() {
	// register: 6
	register unsigned long cnt0;
}


// address: 0x80054AAC
// line start: 358
// line end:   375
void Snd_sys_init_sub2() {
	// register: 5
	register unsigned long cnt0;
}


// address: 0x80054B10
// line start: 388
// line end:   402
void Snd_sys_start(unsigned char ck);

// address: 0x80054B90
// line start: 416
// line end:   438
void Snd_sys_stereo(unsigned char sorm) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct _111fake volume;
}


// address: 0x80054C04
// line start: 450
// line end:   604
void Snd_sys_core_set(unsigned char core_type_no, unsigned char sw) {
	// register: 16
	register unsigned long VbSize;
	// register: 17
	register unsigned char *pData;
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


// address: 0x80054ED4
// line start: 617
// line end:   704
void Snd_sys_arms_set(unsigned char arms_type_no) {
	// register: 16
	register unsigned long VbSize;
	// register: 17
	register unsigned char *pData;
	{
		{
		}
	}
}


// address: 0x80055048
// line start: 716
// line end:   793
void Snd_sys_room_set() {
	{
	}
}


// address: 0x800551F0
// line start: 809
// line end:   902
void Snd_sys_enem_set() {
	// register: 20
	register unsigned long snd_buf;
	// register: 21
	register unsigned long enem_type_no;
	// register: 17
	register unsigned char *pData;
	{
	}
}


// address: 0x8005541C
// line start: 909
// line end:   922
void Snd_sys_pset();

// address: 0x800554F8
// line start: 936
// line end:   944
void Snd_bgm_data(unsigned short *pTbl) {
	// register: 5
	register unsigned long cnt0;
}


// address: 0x80055528
// line start: 956
// line end:   1034
void Snd_bgm_set() {
	// register: 16
	register unsigned short bgm_Main;
	// register: 17
	register unsigned short bgm_Sub;
	// register: 2
	// size: 0x20
	register struct VabHdr *pVh;
	{
	}
}


// address: 0x80055764
// line start: 1045
// line end:   1059
void Snd_bgm_ck();

// address: 0x800557F0
// line start: 1071
// line end:   1104
void Snd_bgm_play_ck();

// address: 0x800558E0
// line start: 1116
// line end:   1269
char Snd_bgm_main() {
	// register: 7
	register unsigned char *pDatam;
	// register: 16
	register unsigned char *pDatam2;
	// register: 18
	register unsigned char *pVhm;
	// register: 17
	register unsigned char *pVbm;
	// register: 19
	register unsigned long *pSeqm;
	{
	}
}


// address: 0x80055CEC
// line start: 1280
// line end:   1427
char Snd_bgm_sub() {
	// register: 16
	register unsigned long snd_buf;
	// register: 7
	register unsigned char *pData;
	// register: 16
	register unsigned char *pData2;
	// register: 18
	register unsigned char *pVh;
	// register: 17
	register unsigned char *pVb;
	// register: 20
	register unsigned long *pSeq0;
	// register: 19
	register unsigned long *pSeq1;
	{
	}
}


// address: 0x800560D0
// line start: 1440
// line end:   1469
void Snd_bgm_fade_ON(unsigned char time, unsigned char mode) {
	// register: 2
	// size: 0x20
	register struct VabHdr *pVh;
}


// address: 0x800561C0
// line start: 1481
// line end:   1577
void Snd_bgm_fade() {
	// register: 18
	register unsigned long cnt0;
}


// address: 0x80056300
// line start: 1596
// line end:   1685
void Snd_bgm_ctr(unsigned long code) {
	// register: 16
	register unsigned char id;
	// register: 5
	register unsigned char play;
	// register: 20
	register unsigned char num;
	// register: 17
	register unsigned char vol;
	// register: 19
	register unsigned char pan;
	// register: 18
	// size: 0x20
	register struct VabHdr *pVh;
	// register: 3
	// size: 0x10
	register struct ProgAtr *pVh_prog;
}


// address: 0x800565F0
// line start: 1701
// line end:   1708
void Snd_bgm_tbl_set(unsigned long code) {
	// register: 3
	// size: 0x2
	register struct _117fake *pBgmtbl;
}


// address: 0x80056624
// line start: 1726
// line end:   1838
void Snd_se_stad(unsigned long bits, struct _1fake *pVec) {
	// register: 6
	register unsigned long EDTNo;
	// address: 0xFFFFFFB8
	auto unsigned long SENo;
	// address: 0xFFFFFFC0
	auto unsigned long flg;
	// address: 0xFFFFFFC8
	auto unsigned long Pno;
	// register: 19
	register unsigned long Tno;
	// register: 21
	register unsigned long Pol;
	// register: 18
	register unsigned long Sch;
	// address: 0xFFFFFFD0
	auto unsigned long Pri;
	// register: 20
	register long Vid;
	// address: 0xFFFFFF88
	// size: 0x20
	auto struct VagAtr Vag;
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct ProgAtr Prog;
	// register: 5
	// size: 0x4
	register struct _115fake *pSseff;
	// register: 3
	// size: 0x20
	register struct _119fake *pReq;
}


// address: 0x800569C0
// line start: 1851
// line end:   1940
void Snd_se_enem(unsigned char SENo, struct _85fake *pEm) {
	// address: 0xFFFFFFC8
	auto unsigned long Pno;
	// register: 19
	register unsigned long Tno;
	// register: 21
	register unsigned long Pol;
	// register: 18
	register unsigned long Sch;
	// address: 0xFFFFFFD0
	auto unsigned long Pri;
	// register: 30
	register long Vid;
	// address: 0xFFFFFF90
	// size: 0x20
	auto struct VagAtr Vag;
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct ProgAtr Prog;
	// register: 16
	// size: 0x4
	register struct _115fake *pSseff;
	// register: 4
	// size: 0x20
	register struct _119fake *pReq;
}


// address: 0x80056CD4
// line start: 1953
// line end:   2081
void Snd_se_walk(unsigned short no, unsigned short lr, struct _85fake *pEm) {
	// register: 20
	register unsigned short kutu;
	// register: 17
	register unsigned long Pno;
	// register: 18
	register unsigned long Tno;
	// register: 20
	register unsigned long Sch;
	// register: 23
	register unsigned long Pri;
	// register: 19
	register long Vid;
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct _2fake stsvec;
	// address: 0xFFFFFFA0
	// size: 0x20
	auto struct VagAtr Vag;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct ProgAtr Prog;
	// register: 18
	// size: 0x4
	register struct _115fake *pSseff;
	// register: 16
	// size: 0x20
	register struct _119fake *pReq;
	// register: 16
	// size: 0xAC
	register struct _76fake *pParts;
	{
		{
			{
			}
		}
	}
}


// address: 0x80056FE0
// line start: 2093
// line end:   2146
void Snd_se_call() {
	// register: 20
	register unsigned long cnt;
	// register: 19
	// size: 0x20
	register struct _119fake *pR;
}


// address: 0x8005724C
// line start: 2159
// line end:   2177
unsigned char Snd_se_pri_ck(unsigned char Sv_ch, unsigned char Sv_pri) {
}


// address: 0x80057304
// line start: 2242
// line end:   2323
void Snd_se_3D(struct _1fake *pVec) {
	// register: 4
	register long ck_flg0;
	// register: 5
	register long ck_flg1;
	// register: 16
	register long vol0;
	// register: 17
	register long vol1;
	// register: 18
	// size: 0x20
	register struct _87fake *pView;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct _1fake Pos;
}


// address: 0x80057744
// line start: 2338
// line end:   2349
short Snd_se_dir_ck(long B_x, long B_z, long T_x, long T_z) {
	// register: 3
	register long kakudo;
}


// address: 0x800577D0
// line start: 180
// line end:   234
void Spl(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Tv0;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv0;
	{
		{
		}
	}
}


// address: 0x800578C4
// line start: 239
// line end:   247
void Spl_mv40(struct _74fake *pEm) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x80057914
// line start: 249
// line end:   251
void Spl_mv42(struct _74fake *pEm);

// address: 0x80057934
// line start: 257
// line end:   290
void Spl_mv41(struct _74fake *pEm) {
	// register: 8
	register unsigned long *Tmp;
}


// address: 0x800579D8
// line start: 295
// line end:   304
void Spl_mv44(struct _74fake *pEm) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pO;
}


// address: 0x80057A40
// line start: 309
// line end:   315
void Spl_mv45(struct _74fake *pEm) {
	{
	}
}


// address: 0x80057A74
// line start: 320
// line end:   322
void Spl_mv47(struct _74fake *pEm);

// address: 0x80057A94
// line start: 325
// line end:   327
void Spl_mv49(struct _74fake *pEm);

// address: 0x80057AB4
// line start: 333
// line end:   335
void Spl_mv48(struct _74fake *pEm);

// address: 0x80057AD4
// line start: 341
// line end:   345
void Spl_mv4a(struct _74fake *pEm);

// address: 0x80057B04
// line start: 351
// line end:   352
void Spl_mv4b(struct _74fake *pEm);

// address: 0x80057B0C
// line start: 357
// line end:   358
void Spl_mv50(struct _74fake *pEm);

// address: 0x80057B14
// line start: 363
// line end:   365
void Spl_mv51(struct _74fake *pEm) {
}


// address: 0x80057B34
// line start: 371
// line end:   372
void Spl_mv00(struct _74fake *pEm);

// address: 0x80057B3C
// line start: 389
// line end:   523
void Spl_Init(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFF48
	// size: 0x38
	auto unsigned short Sub_waist_pos[28];
	// address: 0xFFFFFF80
	// size: 0x70
	auto unsigned short Sub_at_size[28][2];
}


// address: 0x80057F10
// line start: 528
// line end:   612
void Spl_in40(struct _74fake *pEm) {
	// register: 3
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x800580F0
// line start: 617
// line end:   636
void Spl_in42(struct _74fake *pEm) {
}


// address: 0x80058148
// line start: 641
// line end:   729
void Spl_in41(struct _74fake *pEm) {
	// register: 8
	register unsigned long *Tmp;
}


// address: 0x800582D4
// line start: 734
// line end:   790
void Spl_in44(struct _74fake *pEm) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x8005843C
// line start: 795
// line end:   846
void Spl_in45(struct _74fake *pEm) {
}


// address: 0x80058518
// line start: 851
// line end:   869
void Spl_in47(struct _74fake *pEm) {
}


// address: 0x80058570
// line start: 874
// line end:   875
void Spl_in48(struct _74fake *pEm);

// address: 0x80058578
// line start: 880
// line end:   968
void Spl_in4a(struct _74fake *pEm) {
	// register: 17
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 18
	// size: 0xAC
	register struct _65fake *pO_ptr;
	// register: 3
	register unsigned long *Tmp;
	// register: 6
	register unsigned long i;
	{
	}
}


// address: 0x80058800
// line start: 973
// line end:   988
void Spl_in4b(struct _74fake *pEm) {
	// register: 2
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x80058838
// line start: 993
// line end:   994
void Spl_in50(struct _74fake *pEm);

// address: 0x80058840
// line start: 999
// line end:   1036
void Spl_in51(struct _74fake *pEm) {
}


// address: 0x800588F8
// line start: 1041
// line end:   1042
void Spl_in00(struct _74fake *pEm);

// address: 0x80058900
// line start: 1060
// line end:   1061
void Spl_Damage(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005893C
// line start: 1078
// line end:   1079
void Spl_Die(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80058978
// line start: 1112
// line end:   1113
void Spl_Dead(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x800589B4
// line start: 1119
// line end:   1120
void Spl_dead00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x800589BC
// line start: 1127
// line end:   1160
void Spl_set() {
}


// address: 0x80058AAC
// line start: 1167
// line end:   1252
void Spl_chenge00(struct _74fake *pEm) {
	// register: 5
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// register: 4
	// size: 0xAC
	register struct _65fake *pO_ptr;
	// register: 3
	register unsigned long *Tmp;
	// register: 9
	register unsigned long i;
	// register: 3
	register unsigned long Tmp2;
}


// address: 0x80058C90
// line start: 1254
// line end:   1268
void Spl_chenge01(struct _74fake *pEm);

// address: 0x80058E90
// line start: 1275
// line end:   1333
void Spl_kizu00(struct _74fake *pEm) {
	// address: 0x800B67A8
	// size: 0x18
	static struct _48fake EM40_Prim;
	// register: 16
	// size: 0x18
	register struct _48fake *Prim;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _16fake Rect;
	// register: 6
	register unsigned long Tpage;
	// register: 7
	register unsigned long Off_v;
}


// address: 0x80058F64
// line start: 1339
// line end:   1379
void Spl_chenge02(struct _74fake *pEm) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
}


// address: 0x800590E0
// line start: 1382
// line end:   1463
void Spl_chenge04(struct _74fake *pEm) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF98
	// size: 0x21
	auto unsigned char Kuchi3[33];
	// address: 0xFFFFFFC0
	// size: 0xC
	auto unsigned char Kuchi4[12];
	// address: 0xFFFFFFD0
	// size: 0xC
	auto unsigned char Kubi3[12];
	// address: 0xFFFFFFE0
	// size: 0x5
	auto unsigned char Kubi4[5];
}


// address: 0x80059428
// line start: 1466
// line end:   1516
void Spl_chenge05(struct _74fake *pEm) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF80
	// size: 0x1A
	auto unsigned char Kuchi3[26];
	// address: 0xFFFFFFA0
	// size: 0x6
	auto unsigned char Kuchi4[6];
	// address: 0xFFFFFFA8
	// size: 0x4
	auto unsigned char Kubi3[4];
	// address: 0xFFFFFFB0
	// size: 0x5
	auto unsigned char Kubi4[5];
	// address: 0xFFFFFFB8
	// size: 0x9
	auto unsigned char Me3[9];
	// address: 0xFFFFFFC8
	// size: 0xE
	auto unsigned char Me4[14];
}


// address: 0x80059738
// line start: 1519
// line end:   1566
void Spl_chenge06(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF88
	// size: 0x20
	auto unsigned char Body3[32];
	// address: 0xFFFFFFA8
	// size: 0xE
	auto unsigned char Body4[14];
	// address: 0xFFFFFFB8
	// size: 0xC
	auto unsigned char Kao3[12];
	// address: 0xFFFFFFC8
	// size: 0x5
	auto unsigned char Kao4[5];
	// address: 0xFFFFFFD0
	// size: 0xA
	auto unsigned char Atama4[10];
}


// address: 0x80059A18
// line start: 1569
// line end:   1658
void Spl_chenge07(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF10
	// size: 0x43
	auto unsigned char Body3[67];
	// address: 0xFFFFFF58
	// size: 0x24
	auto unsigned char Body4[36];
	// address: 0xFFFFFF80
	// size: 0x20
	auto unsigned char Kao3[32];
	// address: 0xFFFFFFA0
	// size: 0x9
	auto unsigned char Kao4[9];
	// address: 0xFFFFFFB0
	// size: 0xC
	auto unsigned char Mune3[12];
	// address: 0xFFFFFFC0
	// size: 0x7
	auto unsigned char Mune4[7];
	// address: 0xFFFFFFC8
	// size: 0x6
	auto unsigned char Asi3[6];
	// address: 0xFFFFFFD0
	// size: 0x6
	auto unsigned char Asi4[6];
}


// address: 0x80059F98
// line start: 1661
// line end:   1709
void Spl_chenge08(struct _74fake *pEm) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFA0
	// size: 0x21
	auto unsigned char Kuchi3[33];
	// address: 0xFFFFFFC8
	// size: 0xC
	auto unsigned char Kuchi4[12];
	// address: 0xFFFFFFD8
	// size: 0xE
	auto unsigned char Kubi3[14];
	// address: 0xFFFFFFE8
	// size: 0x5
	auto unsigned char Kubi4[5];
}


// address: 0x8005A250
// line start: 1712
// line end:   1747
void Spl_chenge09(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF98
	// size: 0x13
	auto unsigned char Body3[19];
	// address: 0xFFFFFFB0
	// size: 0x7
	auto unsigned char Body4[7];
	// address: 0xFFFFFFB8
	// size: 0x19
	auto unsigned char Kao3[25];
	// address: 0xFFFFFFD8
	// size: 0xA
	auto unsigned char Kao4[10];
}


// address: 0x8005A49C
// line start: 1750
// line end:   1788
void Spl_chenge10(struct _74fake *pEm) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF78
	// size: 0x22
	auto unsigned char Body3[34];
	// address: 0xFFFFFFA0
	// size: 0x11
	auto unsigned char Body4[17];
	// address: 0xFFFFFFB8
	// size: 0x19
	auto unsigned char Kao3[25];
	// address: 0xFFFFFFD8
	// size: 0xA
	auto unsigned char Kao4[10];
}


// address: 0x8005A750
// line start: 1793
// line end:   1818
void Spl_chenge03(struct _74fake *pEm);

// address: 0x8005A758
// line start: 39
// line end:   100
void Spl_Root_ck_sys(struct _74fake *pEm) {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Tv0;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct _2fake Sv0;
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 4
	register unsigned long Type;
	{
		{
		}
	}
}


// address: 0x8005A968
// line start: 111
// line end:   122
void Spl_Auto(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005A9A8
// line start: 128
// line end:   132
void Aida(struct _74fake *pEm);

// address: 0x8005A9B0
// line start: 154
// line end:   185
void Aida_move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned char Type;
}


// address: 0x8005AAB0
// line start: 234
// line end:   239
void Aida_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005AB34
// line start: 253
// line end:   258
void Aida_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005ABB8
// line start: 272
// line end:   277
void Aida_Move_type02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005AC3C
// line start: 290
// line end:   295
void Aida_Move_type03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005ACC0
// line start: 309
// line end:   314
void Aida_Move_type04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005AD44
// line start: 328
// line end:   333
void Aida_Move_type05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005ADC8
// line start: 347
// line end:   352
void Aida_Move_type06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005AE4C
// line start: 366
// line end:   371
void Aida_Move_type07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005AED0
// line start: 385
// line end:   390
void Aida_Move_type08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005AF54
// line start: 404
// line end:   409
void Aida_Move_type09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005AFD8
// line start: 423
// line end:   428
void Aida_Move_type0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005B05C
// line start: 459
// line end:   488
void Aida_em10_at00_pl(struct _74fake *pEm, unsigned long Type) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTa;
}


// address: 0x8005B11C
// line start: 492
// line end:   524
void Aida_em10_at00_spl(struct _74fake *pEm, unsigned long Type) {
	// register: 5
	// size: 0x244
	register struct _74fake *pTa;
	// register: 3
	register unsigned long L;
}


// address: 0x8005B1BC
// line start: 529
// line end:   569
void Aida_em25_at00_pl(struct _74fake *pEm, unsigned long Type) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTa;
	// register: 17
	register unsigned long L;
}


// address: 0x8005B2C4
// line start: 573
// line end:   626
void Aida_em25_at00_spl(struct _74fake *pEm, unsigned long Type) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTa;
	// register: 7
	register unsigned long L;
}


// address: 0x8005B418
// line start: 631
// line end:   633
void Aida_em26_at00_pl(struct _74fake *pEm, unsigned long Type);

// address: 0x8005B420
// line start: 637
// line end:   640
void Aida_em26_at00_spl(struct _74fake *pEm, unsigned long Type);

// address: 0x8005B428
// line start: 648
// line end:   750
void Aida_mv00_br(struct _74fake *pEm) {
	// register: 3
	// size: 0x244
	register struct _74fake *pTa;
	// register: 4
	register unsigned long Flg;
	// register: 2
	register long Ck;
}


// address: 0x8005B684
// line start: 753
// line end:   790
void Aida_mv00_br_1(struct _74fake *pEm) {
	// register: 2
	// size: 0x244
	register struct _74fake *pTa;
	// register: 4
	register unsigned long Flg;
}


// address: 0x8005B738
// line start: 793
// line end:   808
void Aida_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto unsigned short Pl_taiki_mot[3];
	{
	}
}


// address: 0x8005B7D4
// line start: 821
// line end:   840
void Aida_em10_at01(struct _74fake *pEm, unsigned long Type) {
	// register: 5
	// size: 0x244
	register struct _74fake *pTa;
	// register: 3
	register unsigned long L;
}


// address: 0x8005B838
// line start: 843
// line end:   872
void Aida_em25_at01(struct _74fake *pEm, unsigned long Type) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTa;
	// register: 7
	register unsigned long L;
}


// address: 0x8005B8F0
// line start: 875
// line end:   877
void Aida_em26_at01(struct _74fake *pEm, unsigned long Type);

// address: 0x8005B8F8
// line start: 881
// line end:   949
void Aida_mv01_br(struct _74fake *pEm) {
	// register: 16
	// size: 0x244
	register struct _74fake *pTa;
	// register: 18
	register unsigned long L;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8005BBC8
// line start: 952
// line end:   1002
void Aida_mv01_br_1(struct _74fake *pEm) {
	{
		{
		}
	}
}


// address: 0x8005BD9C
// line start: 1005
// line end:   1059
void Aida_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto short Pl_walk_mot[3];
	{
		{
		}
	}
}


// address: 0x8005BF70
// line start: 1067
// line end:   1110
void Aida_mv02_br(struct _74fake *pEm) {
	// register: 16
	// size: 0x244
	register struct _74fake *pTa;
	// register: 18
	register unsigned long L;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8005C150
// line start: 1114
// line end:   1149
void Aida_mv02_br_1(struct _74fake *pEm) {
	{
		{
		}
	}
}


// address: 0x8005C2D0
// line start: 1152
// line end:   1184
void Aida_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto unsigned char Pl_run_mot[3];
	{
		{
		}
	}
}


// address: 0x8005C42C
// line start: 1192
// line end:   1212
void Aida_mv03_br(struct _74fake *pEm) {
	{
	}
}


// address: 0x8005C4D4
// line start: 1215
// line end:   1255
void Aida_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto unsigned char Pl_backwalk_mot[3];
	{
		{
		}
	}
}


// address: 0x8005C63C
// line start: 1263
// line end:   1272
void Aida_mv04_br(struct _74fake *pEm) {
}


// address: 0x8005C6A4
// line start: 1275
// line end:   1294
void Aida_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto short Pl_rot_mot[3];
	{
		{
		}
	}
}


// address: 0x8005C788
// line start: 1315
// line end:   1317
void Aida_mv05_br(struct _74fake *pEm);

// address: 0x8005C7C4
// line start: 1321
// line end:   1330
void Aida_mv05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8005C824
// line start: 1334
// line end:   1336
void Aida_mv05_w1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005C860
// line start: 1341
// line end:   1343
void Aida_mv05_w1_t0_br(struct _74fake *pEm);

// address: 0x8005C868
// line start: 1346
// line end:   1389
void Aida_mv05_w1_t0(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 2
	// size: 0x244
	register struct _74fake *pTa;
	{
		{
			{
			}
		}
	}
}


// address: 0x8005C988
// line start: 1399
// line end:   1423
void Aida_em10_at05(struct _74fake *pEm, unsigned long Type) {
	// register: 3
	// size: 0x244
	register struct _74fake *pTa;
}


// address: 0x8005C9F8
// line start: 1428
// line end:   1496
void Aida_mv05_w1_t1_br(struct _74fake *pEm) {
	// register: 2
	// size: 0x244
	register struct _74fake *pTa;
}


// address: 0x8005CA88
// line start: 1499
// line end:   1552
void Aida_mv05_w1_t1(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	register unsigned short Jtg_no;
	// address: 0xFFFFFFE8
	// size: 0xA
	auto short Gun_taiki_mot[5];
}


// address: 0x8005CB54
// line start: 1559
// line end:   1561
void Aida_mv05_w1_t2_br(struct _74fake *pEm);

// address: 0x8005CB5C
// line start: 1564
// line end:   1629
void Aida_mv05_w1_t2(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFD0
	// size: 0xA
	auto short Gun_at_mot[5];
	// register: 16
	register unsigned char Tmp_id;
	// register: 3
	register unsigned long Ck;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Sv;
	{
	}
}


// address: 0x8005CD78
// line start: 1633
// line end:   1635
void Aida_mv05_w1_t3_br(struct _74fake *pEm);

// address: 0x8005CD80
// line start: 1638
// line end:   1651
void Aida_mv05_w1_t3(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
}


// address: 0x8005CDEC
// line start: 1655
// line end:   1657
void Aida_mv05_w1_t4_br(struct _74fake *pEm);

// address: 0x8005CDF4
// line start: 1660
// line end:   1690
void Aida_mv05_w1_t4(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8005CE84
// line start: 1694
// line end:   1696
void Aida_mv05_w1_t5_br(struct _74fake *pEm);

// address: 0x8005CE8C
// line start: 1699
// line end:   1716
void Aida_mv05_w1_t5(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0x244
	register struct _74fake *pTa;
	{
	}
}


// address: 0x8005CF24
// line start: 1723
// line end:   1724
void Aida_mv06_br(struct _74fake *pEm);

// address: 0x8005CF2C
// line start: 1727
// line end:   1756
void Aida_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8005CFF0
// line start: 1761
// line end:   1762
void Aida_mv07_br(struct _74fake *pEm);

// address: 0x8005CFF8
// line start: 1765
// line end:   1852
void Aida_mv07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto unsigned char pl_mv07_mot[2];
	{
		{
			{
			}
		}
	}
}


// address: 0x8005D2C4
// line start: 1859
// line end:   1860
void Aida_mv08_br(struct _74fake *pEm);

// address: 0x8005D2CC
// line start: 1863
// line end:   1999
void Aida_mv08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8005D658
// line start: 2007
// line end:   2008
void Aida_mv09_br(struct _74fake *pEm);

// address: 0x8005D660
// line start: 2011
// line end:   2131
void Aida_mv09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8005D9E0
// line start: 2136
// line end:   2137
void Aida_mv0a_br(struct _74fake *pEm);

// address: 0x8005D9E8
// line start: 2140
// line end:   2142
void Aida_mv0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005D9F0
// line start: 2149
// line end:   2158
void Aida_mv0b_br(struct _74fake *pEm) {
}


// address: 0x8005DA50
// line start: 2162
// line end:   2171
void Aida_mv0b_br_1(struct _74fake *pEm) {
}


// address: 0x8005DAB8
// line start: 2174
// line end:   2175
void Aida_mv0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005DAC0
// line start: 2181
// line end:   2224
void Aida_mv0c_br(struct _74fake *pEm) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTa;
	// register: 5
	register unsigned long L;
	{
		{
		}
	}
}


// address: 0x8005DBDC
// line start: 2227
// line end:   2262
void Aida_mv0c_br_1(struct _74fake *pEm) {
}


// address: 0x8005DCB4
// line start: 2267
// line end:   2276
void Aida_mv0d_br(struct _74fake *pEm) {
}


// address: 0x8005DD0C
// line start: 2297
// line end:   2327
void Sherry_move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	register unsigned char Type;
}


// address: 0x8005DE0C
// line start: 2370
// line end:   2382
void Sherry_Move_type00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005DEAC
// line start: 2395
// line end:   2407
void Sherry_Move_type01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005DF4C
// line start: 2420
// line end:   2432
void Sherry_Move_type02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005DFEC
// line start: 2444
// line end:   2456
void Sherry_Move_type03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005E08C
// line start: 2469
// line end:   2481
void Sherry_Move_type04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005E12C
// line start: 2494
// line end:   2506
void Sherry_Move_type05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005E1CC
// line start: 2519
// line end:   2531
void Sherry_Move_type06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005E26C
// line start: 2544
// line end:   2556
void Sherry_Move_type07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005E30C
// line start: 2569
// line end:   2581
void Sherry_Move_type08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005E3AC
// line start: 2594
// line end:   2606
void Sherry_Move_type09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005E44C
// line start: 2619
// line end:   2631
void Sherry_Move_type0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005E4EC
// line start: 2637
// line end:   2705
void Sherry_mv00_br(struct _74fake *pEm) {
	// register: 18
	// size: 0x244
	register struct _74fake *pTa;
	// register: 17
	register unsigned long L;
	// register: 5
	register unsigned long Flg;
}


// address: 0x8005E650
// line start: 2708
// line end:   2782
void Sherry_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto unsigned short Pl_taiki_mot[3];
	{
	}
}


// address: 0x8005E88C
// line start: 2789
// line end:   2879
void Sherry_mv01_br(struct _74fake *pEm) {
	// register: 18
	// size: 0x244
	register struct _74fake *pTa;
	// register: 19
	register unsigned long L;
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


// address: 0x8005EB44
// line start: 2885
// line end:   2967
void Sherry_mv02_br(struct _74fake *pEm) {
	// register: 18
	// size: 0x244
	register struct _74fake *pTa;
	// register: 19
	register unsigned long L;
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


// address: 0x8005EE08
// line start: 2972
// line end:   2973
void Sherry_mv06_br(struct _74fake *pEm);

// address: 0x8005EE10
// line start: 2976
// line end:   3005
void Sherry_mv06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8005EED4
// line start: 3011
// line end:   3020
void Sherry_mv0b_br(struct _74fake *pEm) {
}


// address: 0x8005EF34
// line start: 3025
// line end:   3061
void Sherry_mv0c_br(struct _74fake *pEm) {
	// register: 6
	// size: 0x244
	register struct _74fake *pTa;
	// register: 5
	register unsigned long L;
	{
		{
		}
	}
}


// address: 0x8005F020
// line start: 3067
// line end:   3089
void Spl_dm00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x8005F110
// line start: 3094
// line end:   3120
void Spl_dm01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8005F248
// line start: 3125
// line end:   3151
void Spl_die00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x8005F33C
// line start: 3154
// line end:   3158
void Aida_before(struct _74fake *pEm) {
}


// address: 0x8005F35C
// line start: 3162
// line end:   3165
void Aida_after(struct _74fake *pEm);

// address: 0x8005F364
// line start: 3170
// line end:   3211
unsigned long Spl_soba_pos_set(short ll, short dir, short dir2, struct _2fake *pPos) {
	// address: 0xFFFFFFA8
	// size: 0x20
	auto struct _0fake Tm;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct _2fake Tsv0;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Tsv1;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct _2fake Tsv2;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct _2fake Tsv3;
	// register: 16
	register unsigned long L_max;
	// register: 4
	register unsigned long Tmp;
}


// address: 0x8005F558
// line start: 3225
// line end:   3353
void Spl_enemy_ck(struct _74fake *pEm) {
	// register: 23
	// size: 0x8728
	register struct _97fake *pG;
	// register: 2
	register unsigned long Em_num;
	// register: 17
	// size: 0x244
	register struct _74fake **ppEm;
	// register: 2
	register long x;
	// register: 2
	register long z;
	// register: 22
	register unsigned long L0max;
	// register: 19
	register unsigned long L1max;
	// register: 20
	register unsigned long L2max;
	// register: 18
	register unsigned long L;
	// register: 16
	// size: 0x244
	register struct _74fake *pAem;
	// address: 0xFFFFFFC8
	// size: 0xC
	auto struct _74fake *pNear_em[3];
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8005F8D0
// line start: 3360
// line end:   3424
unsigned long Spl_em_pos_ck(struct _74fake *pEm, unsigned long Lim) {
	// register: 18
	register unsigned long i;
	// register: 19
	register unsigned long Em_num;
	// register: 22
	register unsigned long Sem_num;
	// register: 17
	register unsigned long Pos_flg;
	// register: 16
	// size: 0x244
	register struct _74fake *pTa;
	{
		{
		}
	}
}


// address: 0x8005FA4C
// line start: 3430
// line end:   3470
unsigned long Spl_em_cdir_ck(struct _74fake *pEm) {
	// register: 19
	register unsigned long i;
	// register: 30
	register unsigned long L_a;
	// register: 22
	register unsigned long L_b;
	// register: 16
	// size: 0x244
	register struct _74fake *pTa;
	// register: 20
	// size: 0x244
	register struct _74fake *pLm;
	// register: 21
	// size: 0x244
	register struct _74fake *pLm_b;
	{
	}
}


// address: 0x8005FB58
// line start: 3476
// line end:   3515
unsigned long Spl_pllock_get(struct _74fake *pEm, struct _74fake *pYo) {
	// register: 6
	register unsigned long i;
	// register: 8
	register unsigned long Flg;
	// register: 3
	// size: 0x244
	register struct _74fake *pTa;
	// register: 7
	// size: 0x244
	register struct _74fake *pLm;
}


// address: 0x8005FBDC
// line start: 3526
// line end:   3560
unsigned long Spl_life_down(struct _74fake *pEm, long Down_life, unsigned long Mode) {
	// register: 16
	// size: 0x244
	register struct _74fake *pSpl;
}


// address: 0x8005FCA0
// line start: 91
// line end:   138
void Spl_Scenario(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct _1fake Tv0;
	{
		{
			{
			}
		}
	}
}


// address: 0x8005FDE8
// line start: 143
// line end:   144
void Spl_sce00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005FE10
// line start: 151
// line end:   152
void Spl_sce01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005FE30
// line start: 158
// line end:   159
void Spl_sce02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005FE58
// line start: 166
// line end:   167
void Spl_sce03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8005FE80
// line start: 174
// line end:   234
void Spl_sce04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto short Pl_walk_mot[3];
	{
		{
		}
	}
}


// address: 0x8005FFD0
// line start: 239
// line end:   309
void Spl_sce05(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFE8
	// size: 0x6
	auto short Pl_walk_mot[3];
	// address: 0xFFFFFFF0
	// size: 0x3
	auto unsigned char Pl_run_mot[3];
	{
		{
		}
	}
}


// address: 0x80060150
// line start: 314
// line end:   327
void Spl_sce06(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto unsigned short Pl_taiki_mot[3];
	{
	}
}


// address: 0x800601D8
// line start: 332
// line end:   363
void Spl_sce07(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x800602B4
// line start: 368
// line end:   399
void Spl_sce08(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80060394
// line start: 404
// line end:   430
void Spl_sce09(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto short Pl_walk_mot[3];
	{
	}
}


// address: 0x80060468
// line start: 435
// line end:   436
void Spl_sce0a(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80060490
// line start: 443
// line end:   444
void Spl_sce0b(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x800604B0
// line start: 450
// line end:   451
void Spl_sce0c(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x800604D8
// line start: 458
// line end:   459
void Spl_sce0d(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80060500
// line start: 465
// line end:   466
void Spl_sce0e(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80060508
// line start: 470
// line end:   471
void Spl_sce0f(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80060510
// line start: 475
// line end:   476
void Spl_sce10(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80060518
// line start: 480
// line end:   481
void Spl_sce11(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80060520
// line start: 488
// line end:   544
void Spl_sce12(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto short Pl_walk_mot[3];
	{
		{
		}
	}
}


// address: 0x80060694
// line start: 548
// line end:   549
void Spl_sce13(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x8006069C
// line start: 554
// line end:   556
void Spl_sce14(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x800606A4
// line start: 561
// line end:   587
void Spl_sce15(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto short Pl_walk_mot[3];
	{
	}
}


// address: 0x80060778
// line start: 591
// line end:   592
void Spl_sce16(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80060780
// line start: 596
// line end:   597
void Spl_sce17(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80060788
// line start: 601
// line end:   602
void Spl_sce18(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80060790
// line start: 608
// line end:   694
void Spl_sce20(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 4
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct _2fake Sv;
	// address: 0xFFFFFFD8
	// size: 0x2
	auto unsigned char Em10_pldie00_mot[2];
	{
		{
			{
			}
		}
	}
}


// address: 0x800609C8
// line start: 704
// line end:   751
void Spl_sce_mv00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80060B14
// line start: 761
// line end:   785
unsigned char Spl_sce_mv01(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80060BE4
// line start: 796
// line end:   836
unsigned char Spl_sce_mv02(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
		}
	}
}


// address: 0x80060D3C
// line start: 846
// line end:   866
unsigned char Spl_sce_mv03(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
	}
}


// address: 0x80060E04
// line start: 874
// line end:   940
void Spl_sce_mv04(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8006101C
// line start: 131
// line end:   132
void Spl_Sp_Move(struct _74fake *pEm, unsigned long Kan, unsigned long Seq);

// address: 0x80061064
// line start: 140
// line end:   374
void Spl_sp40_00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF90
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFF98
	// size: 0x21
	auto unsigned char Kuchi3[33];
	// address: 0xFFFFFFC0
	// size: 0xC
	auto unsigned char Kuchi4[12];
	// address: 0xFFFFFFD0
	// size: 0xE
	auto unsigned char Kubi3[14];
	// address: 0xFFFFFFE0
	// size: 0x5
	auto unsigned char Kubi4[5];
	{
		{
			{
			}
		}
	}
}


// address: 0x8006199C
// line start: 383
// line end:   609
void Spl_sp44_00(struct _74fake *pEm, unsigned long Kan, unsigned long Seq) {
	// register: 16
	// size: 0xAC
	register struct _65fake *pP_ptr;
	// address: 0xFFFFFF88
	// size: 0x8
	auto struct _2fake Sv0;
	// address: 0xFFFFFF90
	// size: 0x1A
	auto unsigned char Kuchi3[26];
	// address: 0xFFFFFFB0
	// size: 0x6
	auto unsigned char Kuchi4[6];
	// address: 0xFFFFFFB8
	// size: 0x4
	auto unsigned char Kubi3[4];
	// address: 0xFFFFFFC0
	// size: 0x5
	auto unsigned char Kubi4[5];
	// address: 0xFFFFFFC8
	// size: 0x9
	auto unsigned char Me3[9];
	// address: 0xFFFFFFD8
	// size: 0xE
	auto unsigned char Me4[14];
	{
		{
			{
			}
		}
	}
}


