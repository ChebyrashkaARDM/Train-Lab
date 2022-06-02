#pragma once
using namespace System::Drawing;
class line
{
private:
	int xl, yl, xr, yr;
public:
	line(int _xl = 0, int _yl = 0, int _xr = 0, int _yr = 0);

	void move(int dxl = 0, int dyl = 0, int dxr = 0, int dyr = 0)
	{
		xl += dxl;
		yl += dyl;
		xr += dxr;
		yr += dyr;
	}
	void draw(Graphics^ g)
	{
		Color^ c = gcnew Color();
		Pen^ p = gcnew Pen(c->Black, 5);
		g->DrawLine(p, xl, yl, xr, yr);
	}
};