#pragma once
#include "rect.h"
class nose :
	public rect
{
public:
	nose(int _x = 0, int _y = 0, int _h = 0);
	void draw(Graphics^ g)
	{
		Color^ c = gcnew Color();
		Brush^ b = gcnew SolidBrush(c->Black);
		g->FillRectangle(b, x, y, w, hight);
	}
};