//#########################
//Pekka Kana 2
//by Janne Kivilahti from Piste Gamez (2003)
//#########################
#pragma once

#include "gfx/particle.hpp"
#include "game/map.hpp"

void Particles_Update();

void Particles_New(int type, double x, double y, double a, double b, int time, double weight, int color);

void Particles_DrawFront();

void Particles_DrawBG();

void Particles_LoadBG(PK2Kartta* map);

void Particles_Clear();
