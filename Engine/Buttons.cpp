#include "Buttons.h"



void Buttons::Button_0(bool Press)
{
	if (Press)
	{
		//do this
}
}

void Buttons::Button_1(bool Press)
{
	if (Press)
	{
		// do this
	}
}

void Buttons::Button_2(bool Press)
{
	if (Press)
	{
		//do this
	}
}

void Buttons::Button_0_Draw(Graphics& gfx, int x,int y)
{
	x = 10;
	y = 10;
	int r, g, b;
	int i = 0;
	r = 150;
	g = 150;
	b = 0;
	for (int a = 0; a < 100; a++)
	{

			

		gfx.PutPixel(a + x, y,      r, g, b);
		gfx.PutPixel(a + x,1 + y,   r, g, b);     // top line
		gfx.PutPixel(a + x,2 + y,   r, g, b);
		gfx.PutPixel(a + x,3 + y,   r, g, b);

		gfx.PutPixel(a + x ,47 + y, r, g, b);
		gfx.PutPixel(a + x, 48 + y, r, g, b); // bottom line
		gfx.PutPixel(a + x, 49 + y, r, g, b);
		gfx.PutPixel(a + x, 50 + y, r, g, b);
		i++;
	}
	for (int a = 0; a < 50; a++)
	{

		gfx.PutPixel(    x, a + y, r, g, b);
		gfx.PutPixel(1 + x, a + y, r, g, b);   // left line
		gfx.PutPixel(2 + x, a + y, r, g, b);
		gfx.PutPixel(3 + x, a + y, r, g, b);

		gfx.PutPixel(97 + x, a + y, r, g, b);
		gfx.PutPixel(98 + x, a + y, r, g, b);
		gfx.PutPixel(99 + x, a + y, r, g, b);   // right line
		gfx.PutPixel(100 + x, a + y, r, g, b);
		i++;
	}
}

void Buttons::Button_1_Draw(Graphics& gfx ,int x ,int y)
{
	x = 120;
	y = 10;
	int r, g, b;
	int i = 0;
	r = 250;
	g = 250;
	b = 0;
	for (int a = 0; a < 100; a++)
	{
		
		gfx.PutPixel(a + x, y, r, g, b);
		gfx.PutPixel(a + x, 1 + y, r, g, b);     // top line
		gfx.PutPixel(a + x, 2 + y, r, g, b);
		gfx.PutPixel(a + x, 3 + y, r, g, b);

		gfx.PutPixel(a + x, 47 + y, r, g, b);
		gfx.PutPixel(a + x, 48 + y, r, g, b); // bottom line
		gfx.PutPixel(a + x, 49 + y, r, g, b);
		gfx.PutPixel(a + x, 50 + y, r, g, b);
		i++;
	}
	for (int a = 0; a < 50; a++)
	{
		
		gfx.PutPixel(x, a + y, r, g, b);
		gfx.PutPixel(1 + x, a + y, r, g, b);   // left line
		gfx.PutPixel(2 + x, a + y, r, g, b);
		gfx.PutPixel(3 + x, a + y, r, g, b);

		gfx.PutPixel(97 + x, a + y, r, g, b);
		gfx.PutPixel(98 + x, a + y, r, g, b);
		gfx.PutPixel(99 + x, a + y, r, g, b);   // right line
		gfx.PutPixel(100 + x, a + y, r, g, b);
		i++;
	}
}

void Buttons::Button_2_Draw(Graphics& gfx ,int x ,int y)
{
	x = 230;
	y = 10;
	int r, g, b;
	int i = 0;
	r = 250;
	g = 250;
	b = 0;
	for (int a = 0; a < 100; a++)
	{
	

		gfx.PutPixel(a + x, y, r, g, b);
		gfx.PutPixel(a + x, 1 + y, r, g, b);     // top line
		gfx.PutPixel(a + x, 2 + y, r, g, b);
		gfx.PutPixel(a + x, 3 + y, r, g, b);

		gfx.PutPixel(a + x, 47 + y, r, g, b);
		gfx.PutPixel(a + x, 48 + y, r, g, b); // bottom line
		gfx.PutPixel(a + x, 49 + y, r, g, b);
		gfx.PutPixel(a + x, 50 + y, r, g, b);
		i++;
	}
	for (int a = 0; a < 50; a++)
	{
		
		gfx.PutPixel(x, a + y, r, g, b);
		gfx.PutPixel(1 + x, a + y, r, g, b);   // left line
		gfx.PutPixel(2 + x, a + y, r, g, b);
		gfx.PutPixel(3 + x, a + y, r, g, b);

		gfx.PutPixel(97 + x, a + y, r, g, b);
		gfx.PutPixel(98 + x, a + y, r, g, b);
		gfx.PutPixel(99 + x, a + y, r, g, b);   // right line
		gfx.PutPixel(100 + x, a + y, r, g, b);
		i++;
	}
}

void Buttons::Lives_Draw(Graphics& gfx, int L)
{
	int x = 20;
	int y = 20;
	for (int b = 0; b < L; b++)    // make little squars
	{
		for (int a = 0; a < 5; a++)
		{
			gfx.PutPixel(a + x, y,     0, 255 ,0);
			gfx.PutPixel(a + x, 1 + y, 0, 255 ,0);
			gfx.PutPixel(a + x, 2 + y, 0, 255 ,0);
			gfx.PutPixel(a + x, 3 + y, 0, 255 ,0);
			gfx.PutPixel(a + x, 4 + y, 0, 255 ,0);

		}
		x += 10;
		if (x > 80)
		{
			y = 30;
			x = 20;
		}
	}
}
