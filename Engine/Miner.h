#pragma once
#include "Graphics.h"


class Miner
{

public:
	void Draw(Graphics& gfx , int x , int y );
	void Collision(int& x1 , int& y1);
	void Collision_Check(bool& Check);
	void Gravity( int& y2);
	void Miner_Health(bool& Dead_Check);
	void Miner_Corps(Graphics& gfx);
	const bool Jump_Check();
	void Death_Track(int& x, int& y);
	void Death_Set_x(int x);
private:
	static constexpr float Gravity_Constant = .5;
	float Accel_Over_Time = 0;
	bool Gravity_Check = false;
	bool Gravity_Check2 = false;
	bool Dead = false;
	int x_local =0;
	int y_local = 0;
	int r = 0;
	int g = 255;
	int b= 0;
	int Health = 255; 
	int Damage = 0;
	int Compile_Damage = 0;
	static constexpr int Width = 7;
	static constexpr int Height = 7;
};