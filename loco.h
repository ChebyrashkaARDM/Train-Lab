#pragma once
#include "vagon.h"
#include "steamTrain.h"
class loco
{
private:
	steamTrain st;
	vagon vg1;
	vagon vg2;
	vagon vg3;
	vagon vg4;
	vagon vg5;

public:
	loco(int x = 0, int y = 0, int h = 0);

	void draw(Graphics^ g)
	{
		vg1.draw(g);
		vg2.draw(g);
		vg3.draw(g);
		vg4.draw(g);
		vg5.draw(g);
		st.draw(g);
	}

	void move(int dx)
	{
		vg1.move(dx);
		vg2.move(dx);
		vg3.move(dx);
		vg4.move(dx);
		vg5.move(dx);
		st.move(dx);
	}
};