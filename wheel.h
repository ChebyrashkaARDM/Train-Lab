#pragma once
#include "rect.h"
class wheel :
	public rect
{
public:
	wheel(int _x = 0, int _y = 0, int _h = 0);
	void draw(Graphics^ g)
	{
		Color^ c = gcnew Color();
		Brush^ b = gcnew SolidBrush(c->DarkGoldenrod);
		g->FillEllipse(b, x, y, w, hight);
	}
};