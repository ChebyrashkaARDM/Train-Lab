#pragma once
#include "vagon.h"
#include "truba.h"
#include "engine.h"
#include "nose.h"
class steamTrain
{
private:
	vagon vg;
	truba tr;
	engine en;
	nose ns;
public:
	steamTrain(int x = 0, int y = 0, int h = 0);

	void draw(Graphics^ g)
	{
		vg.draw(g);
		tr.draw(g);
		en.draw(g);
		ns.draw(g);
		ns.draw(g);
		ns.draw(g);
		ns.draw(g);
		ns.draw(g);
		ns.draw(g);
		ns.draw(g);
	}

	void move(int dx)
	{
		vg.move(dx);
		tr.move(dx);
		en.move(dx);
		ns.move(dx);
	}
};