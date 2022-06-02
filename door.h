#pragma once
#include "rect.h"
class door :
	public rect
{
public:
	door(int _x = 0, int _y = 0, int _h = 0);
	void draw(Graphics^ g)
	{
		Color^ c = gcnew Color();
		Brush^ b = gcnew SolidBrush(c->BlanchedAlmond);
		g->FillRectangle(b, x, y, w, hight);
	}
};