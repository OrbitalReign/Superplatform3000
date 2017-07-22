#include "Goal.h"

void Goal::Draw(Graphics & gfx)
{
	int r, g, b;
	int i = 0;
	r = 0;
	g = 255;
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
