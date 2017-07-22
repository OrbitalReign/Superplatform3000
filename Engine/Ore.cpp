#include "Ore.h"

void Ore::Draw(Graphics & gfx)
{
	
	
		gfx.PutPixel(1 + x_local, 1 + y_local , 0 , 0 ,255);
		gfx.PutPixel(2 + x_local, 1 + y_local , 255, 255 ,255);
		gfx.PutPixel(3 + x_local, 1 + y_local , 0 , 0 ,255);
		gfx.PutPixel(4 + x_local, 1 + y_local , 255, 255 ,255);
		gfx.PutPixel(1 + x_local, 2 + y_local , 0 , 0 ,255);
		gfx.PutPixel(2 + x_local, 2 + y_local , 0 , 0 ,255);
		gfx.PutPixel(3 + x_local, 2 + y_local , 0 , 0 ,255);
		gfx.PutPixel(4 + x_local, 2 + y_local , 255, 255 ,255);
		gfx.PutPixel(1 + x_local, 3 + y_local , 0 , 0 ,255);
		gfx.PutPixel(2 + x_local, 3 + y_local , 255, 255 ,255);
		gfx.PutPixel(3 + x_local, 3 + y_local , 0 , 0 ,255);
		gfx.PutPixel(4 + x_local, 3 + y_local , 0 , 0 ,255);
		gfx.PutPixel(1 + x_local, 4 + y_local , 255, 255 ,255);
		gfx.PutPixel(2 + x_local, 4 + y_local , 255, 255 ,255);
		gfx.PutPixel(3 + x_local, 4 + y_local , 0 , 0 ,255);
		gfx.PutPixel(4 + x_local, 4 + y_local , 0 , 0 ,255);

	
}

void Ore::Ore_Pos(int x, int y ,bool Pick_Up_local)
{
	x += 1; //recenter in miner
	y += 1; // resenter in miner
	Collected = Pick_Up_local;
	if (Carry)
	{
		x_local = x;
		y_local = y;
	}
	else if (x + 6 > x_local - 3 &&
		x - 6 < x_local + 3 &&
		y + 6 > y_local - 3 &&
		y - 6 < y_local + 3 &&
		Pick_Up_local == true)
	{
		x_local = x;
		y_local = y;
		Carry = true;
	}
	if ( !Pick_Up_local)
	{
		Carry = false;
	}

}

void Ore::Droped( bool Droped)
{
	if (Droped)
	{
		Carry = false;
	}
}

void Ore::Goal(int x, int y, int x2, int y2, bool& Goal)
{
	if (x_local > x &&
		y_local > y &&
		x_local < x2 &&
		y_local < y2&&
		!Carry)
	{
		Game_over = true;
		Goal = Game_over;
	}



}
