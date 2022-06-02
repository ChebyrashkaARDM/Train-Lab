#pragma once
using namespace System::Drawing;

class rect
{
protected:
	int x, y, w, hight;
public:
	rect(int _x = 0, int _y = 0, int _w = 0, int _h = 0);
	~rect();
	void draw(Graphics^ g);
	void move(int dx);
};
