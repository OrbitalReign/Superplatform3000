#pragma once
#include "Graphics.h"

class Block
{
public:
	
	void Init(int In_x, int In_y , int Move_x);
	void Collision(int& x, int& y, int temp_y , bool& Hit );
	void Draw_Block( Graphics& gfx);
private:
	 void Move();
	 int x_Start;
	 int y_Start;
	 int x_Finish;
	 int y_Finish;
	 int Move_Rnd;

};