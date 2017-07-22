#include "Miner.h"

void Miner::Draw(Graphics& gfx, int x, int y )
{

	gfx.PutPixel(0 + x, 0 + y, r, g, 0);
	gfx.PutPixel(0 + x, 1 + y, r, g, 0);
	gfx.PutPixel(0 + x, 2 + y, r, g, 0);
	gfx.PutPixel(0 + x, 4 + y, r, g, 0);
	gfx.PutPixel(0 + x, 5 + y, r, g, 0);
	gfx.PutPixel(0 + x, 6 + y, r, g, 0);
	gfx.PutPixel(6 + x, 0 + y, r, g, 0);
	gfx.PutPixel(6 + x, 1 + y, r, g, 0);
	gfx.PutPixel(6 + x, 2 + y, r, g, 0);
	gfx.PutPixel(6 + x, 4 + y, r, g, 0);
	gfx.PutPixel(6 + x, 5 + y, r, g, 0);
	gfx.PutPixel(6 + x, 6 + y, r, g, 0);
	gfx.PutPixel(1 + x, 0 + y, r, g, 0);
	gfx.PutPixel(2 + x, 0 + y, r, g, 0);
	gfx.PutPixel(4 + x, 0 + y, r, g, 0);
	gfx.PutPixel(5 + x, 0 + y, r, g, 0);
	gfx.PutPixel(1 + x, 6 + y, r, g, 0);
	gfx.PutPixel(2 + x, 6 + y, r, g, 0);
	gfx.PutPixel(4 + x, 6 + y, r, g, 0);
	gfx.PutPixel(5 + x, 6 + y, r, g, 0);
	gfx.PutPixel(1 + x, 1 + y, r, g, 0);
	gfx.PutPixel(1 + x, 2 + y, r, g, 0);
	gfx.PutPixel(2 + x, 1 + y, r, g, 0);
	gfx.PutPixel(4 + x, 1 + y, r, g, 0);
	gfx.PutPixel(5 + x, 1 + y, r, g, 0);
	gfx.PutPixel(5 + x, 2 + y, r, g, 0);
	gfx.PutPixel(1 + x, 4 + y, r, g, 0);
	gfx.PutPixel(1 + x, 5 + y, r, g, 0);
	gfx.PutPixel(2 + x, 5 + y, r, g, 0);
	gfx.PutPixel(4 + x, 5 + y, r, g, 0);
	gfx.PutPixel(5 + x, 5 + y, r, g, 0);
	gfx.PutPixel(5 + x, 4 + y, r, g, 0);
	x_local = x;
	y_local = y;
   

}

void Miner::Collision(int& x1, int& y1)
{
	if ( y1 + Height < Graphics::ScreenHeight && y1 > 0 )
	{
		Gravity_Check = false;
	}
	if (x1 + Width > Graphics::ScreenWidth)
	{
		x1 = (Graphics::ScreenWidth - Width);
	}
	else if (x1 <= 0)
	{
		x1 = 0;
	}
	if (y1 + Height > Graphics::ScreenHeight)
	{
		y1 = (Graphics::ScreenHeight - Height);
		Gravity_Check = true;

	}
	else if (y1 <= 0)
	{
		y1 = 0;
	}
	
}


void Miner::Collision_Check(bool& Check)
{
	Gravity_Check2 = Check; 

}

void Miner::Gravity(int & y2 )
{
	//accelerate objects down
	if (Gravity_Check || Gravity_Check2)
	{
		Accel_Over_Time = 0;
		Damage = Compile_Damage;
		Compile_Damage = 0;
	}
	else
	{
		Accel_Over_Time += Gravity_Constant; //increase Accel by Grav constant 
		y2 = y2 + static_cast<int> (Accel_Over_Time);  // accelerate x by Accel till it hits somthing
	}
	if (Accel_Over_Time > 10)
	{
		Compile_Damage = static_cast<int> (Accel_Over_Time);
	}

	
}

void Miner::Miner_Health( bool& Dead_Check)
{
	if (Damage > 0 )
	{
		Damage += 30;
		g -= Damage;
		r += Damage;
		Health = Health -  Damage;
		Damage = 0;
	}
	if ( Health <= 0)
	{
		Dead = true;
		Dead_Check = true;
		Damage = 0;
	}
	if (Health > 0)
	{
		Dead_Check = false;
	}
	if (g < 0)
	{
		g = 255;
	}
	if (r > 255)
	{
		r = 0;
	}


}

void Miner::Miner_Corps(Graphics & gfx )
{

	gfx.PutPixel(0 + x_local, 5 + y_local, 255, 0, 0);
	gfx.PutPixel(1 + x_local, 5 + y_local, 255, 0, 0);
	gfx.PutPixel(2 + x_local, 5 + y_local, 255, 0, 0);
	gfx.PutPixel(3 + x_local, 5 + y_local, 255, 0, 0);
	gfx.PutPixel(4 + x_local, 5 + y_local, 255, 0, 0);
	gfx.PutPixel(5 + x_local, 5 + y_local, 255, 0, 0);
	gfx.PutPixel(0 + x_local, 4 + y_local, 255, 0, 0);
	gfx.PutPixel(2 + x_local, 4 + y_local, 255, 0, 0);
	gfx.PutPixel(5 + x_local, 4 + y_local, 255, 0, 0);
	gfx.PutPixel(1 + x_local, 3 + y_local, 255, 0, 0);
	gfx.PutPixel(5 + x_local, 3 + y_local, 255, 0, 0);
	gfx.PutPixel(5 + x_local, 2 + y_local, 255, 0, 0);

}

const bool Miner::Jump_Check()
{
	if (Accel_Over_Time <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Miner::Death_Track(int & x, int & y)
{
	x = x_local;
	y = y_local;
}

void Miner::Death_Set_x(int x)
{
	x_local = x;
}
