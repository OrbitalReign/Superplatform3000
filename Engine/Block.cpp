#include "Block.h"

void Block::Move()
{
	x_Start += Move_Rnd;
	x_Finish = x_Start + 100;
	y_Finish = y_Start + 5;
	if ( x_Finish > Graphics::ScreenWidth)
	{
		x_Start = (Graphics::ScreenWidth - 100);
		x_Finish = x_Start + 100;
		Move_Rnd = -Move_Rnd;
	}
	else if (x_Start <= 0)
	{
		x_Start = 0;
		Move_Rnd = -Move_Rnd;
	}
}

void Block::Init(int In_x, int In_y , int Move_x)
{
	Move_Rnd = Move_x;
	x_Start = In_x;
	y_Start = In_y;
	
}

void Block::Collision(int& x, int& y, int temp_y, bool& Hit)
{
	if (x + 6 > x_Start &&
		x  < x_Finish &&
		temp_y + 6 <= y_Start &&   
		y + 6 >= y_Start)
	{
		y = y_Start - 6;
		x = x + Move_Rnd;
		Hit = true;
	}
	else
	{
		Hit= false;
	}
}

void Block::Draw_Block(Graphics& gfx)
{
	Move();
		for (int b = x_Start; b < x_Finish; b++)
		{
			gfx.PutPixel(b ,y_Start ,80, 80 ,80);
			gfx.PutPixel(b,1 + y_Start, 70, 70, 70);
			gfx.PutPixel(b, 2 + y_Start, 60, 60 ,60);
			gfx.PutPixel(b,3 + y_Start, 50 , 50 ,50);
			gfx.PutPixel(b,4 + y_Start, 40 ,40 ,40);
		}
}
