#pragma once
#include "line.h"
#include "cmath"
class engine
{
private:
	int h;
	line left;
	line midle;
	line right;
	float time = 1;
public:
	engine(int x = 0, int y = 0, int h = 0);

	void move(int dx)
	{
		time += dx * 0.1;
		left.move(dx, 0, dx + (cos(time) + 0.04) * h / 3, sin(time) * h / 3);
		right.move(dx, 0, dx + (cos(time) + 0.04) * h / 3, sin(time) * h / 3);
		midle.move(dx + (cos(time) + 0.04) * h / 3, sin(time) * h / 3, dx + (cos(time) + 0.04) * h / 3, sin(time) * h / 3);
	}

	void draw(Graphics^ g)
	{
		left.draw(g);
		right.draw(g);
		midle.draw(g);
	}
};