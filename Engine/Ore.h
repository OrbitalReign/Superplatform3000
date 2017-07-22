#pragma once
#include "Graphics.h"

class Ore
{
public:
	void Draw( Graphics& gfx );
	void Ore_Pos(int x, int y , bool Pick_Up_local);
	void Droped(bool Droped);
	void Goal(int x, int y, int x2, int y2, bool& Goal );
private:
	int x_local = 350;
	int y_local = 595;
	bool Collected = false;
	bool Carry = false;
	bool Game_over = false;

};