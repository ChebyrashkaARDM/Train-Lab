#include "rect.h"
using namespace std;
rect::rect(int _x, int _y, int _w, int _h)
{
	x = _x;
	y = _y;
	w = _w;
	hight = _h;
}



rect::~rect()
{

}


void rect::move(int dx)
{
	x += dx;
}