// D:\Bio2\prog\GAME.C

#include "types.h"

// address: 0x80025290
// line start: 114
// line end:   793
void Game_loop() {
	// register: 21
	// size: 0x8728
	register struct _97fake *pG;
	// address: 0x800B66C0
	static int Stop_bak;
	// register: 22
	register unsigned short Time_cnt;
	{
		// address: 0x80025DE8
		bool trans;
		// address: 0x80026064
		bool loop_end;
		{
			{
				// address: 0x8002540C
				bool normal;
				// address: 0x800255D0
				bool first;
				{
					{
						{
							// address: 0x80025BC8
							bool move;
							{
								// register: 6
								register unsigned long Col;
								{
									{
										{
											{
												// register: 16
												// size: 0x244
												register struct _74fake *pEm;
												// register: 17
												// size: 0x244
												register struct _74fake **ppEm;
												// register: 2
												register long x;
												// register: 2
												register long z;
												// register: 18
												// size: 0x244
												register struct _74fake *pPl;
												// address: 0x80025CA4
												bool pl_move;
												{
													// address: 0x800B66C4
													// size: 0x10
													static struct _1fake V;
													{
														{
															{
																// register: 16
																// size: 0x244
																register struct _74fake *pEm;
																// register: 18
																// size: 0x244
																register struct _74fake **ppEm;
																{
																	// register: 17
																	// size: 0x68
																	register struct _61fake *pKage;
																	{
																		// address: 0x800B66D4
																		// size: 0x10
																		static struct _1fake Kpos;
																		// address: 0x800B66E4
																		// size: 0x8
																		static struct _2fake Kofs;
																		{
																			{
																				{
																					// register: 2
																					register unsigned long Flg;
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


// address: 0x80026120
// line start: 804
// line end:   962
void Set_door() {
}


// address: 0x800264B8
// line start: 965
// line end:   1006
void Gun_light_set() {
	// register: 17
	// size: 0x28
	register struct _77fake *pLight;
}


// address: 0x800266CC
// line start: 1008
// line end:   1014
void Gun_light_reset() {
}


