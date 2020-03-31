// global_4b.cpp

#include "types.h"

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

