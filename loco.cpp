#include "loco.h"
loco::loco(int x, int y, int h)
{
	st = steamTrain(x, y, h);
	vg1 = vagon(x - 1 * 22 * h, y, h);
	vg2 = vagon(x - 2 * 22 * h, y, h);
	vg3 = vagon(x - 3 * 22 * h, y, h);
	vg4 = vagon(x - 4 * 22 * h, y, h);
	vg5 = vagon(x - 5 * 22 * h, y, h);
}