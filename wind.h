#pragma once
#include "rect.h"
class wind :
	public rect
{
public:
	wind(int _x = 0, int _y = 0, int _h = 0);
	void draw(Graphics^ g)
	{
		Color^ c = gcnew Color();
		Brush^ b = gcnew SolidBrush(c->AliceBlue);
		g->FillRectangle(b, x, y, w, hight);
	}
};