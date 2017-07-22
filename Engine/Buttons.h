#pragma once
#include "Graphics.h"

 
class Buttons
{
public:
	void Button_0(bool Press);
	void Button_1(bool Press);
	void Button_2(bool Press);
	static void Button_0_Draw(Graphics& gfx , int x ,int y);
	static void Button_1_Draw(Graphics& gfx , int x ,int y);
	static void Button_2_Draw(Graphics& gfx , int x ,int y);
	static void Lives_Draw(Graphics& gfx , int L);
private:
	
};