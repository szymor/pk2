//#########################
//Pekka Kana 2
//Copyright (c) 2003 Janne Kivilahti
//#########################
#pragma once

#include "engine/types.hpp"

const u8 BLOCK_MAX_MASKS = 150;

enum BLOCKS {

	BLOCK_BACKGROUND,
	BLOCK_WALL,
	BLOCK_MAKI_OIKEA_YLOS, //unused
	BLOCK_MAKI_VASEN_YLOS, //unused
	BLOCK_MAKI_OIKEA_ALAS, //unused
	BLOCK_MAKI_VASEN_ALAS, //unused
	BLOCK_MAKI_YLOS,       //unused
	BLOCK_MAKI_ALAS        //unused

};

struct PK2BLOCK {

	u8   koodi;
	bool tausta;
	u8   vasemmalle, oikealle, ylos, alas;
	int  vasen, oikea, yla, ala;
	bool water;
	bool border;

};

struct PK2BLOCKMASK {

	int ylos[32];
	int alas[32];
	int vasemmalle[32];
	int oikealle[32];

};

void Block_Set_Barriers(PK2BLOCK &palikka);

PK2BLOCK Block_Get(u32 x, u32 y);