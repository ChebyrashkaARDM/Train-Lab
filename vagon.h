#pragma once
#include "rect.h"
#include "truba.h"
#include "wind.h"
#include "door.h"
#include "body.h"
#include "wheel.h"
#include "line.h"
class vagon
{
private:
	body bd;
	door dr;
	wind lw, rw;
	wheel lwh, rwh;
	line stl;
public:
	vagon(int x = 0, int y = 0, int h = 0);
	void draw(Graphics^ g)
	{
		bd.draw(g);
		dr.draw(g);
		lw.draw(g);
		rw.draw(g);
		lwh.draw(g);
		rwh.draw(g);
		stl.draw(g);
	}

	void move(int dx)
	{
		bd.move(dx);
		dr.move(dx);
		lw.move(dx);
		rw.move(dx);
		lwh.move(dx);
		rwh.move(dx);
		stl.move(dx, 0, dx, 0);
	}
};