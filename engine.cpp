#include "engine.h"
engine::engine(int x, int y, int _h)
{
	h = _h;
	left = line(x, y, x + h, y - h);
	right = line(x + 12 * h, y, x + 12 * h + h, y - h);
	midle = line(x + h, y - h, x + 12 * h + h, y - h);
}
