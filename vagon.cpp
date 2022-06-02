#include "vagon.h"

vagon::vagon(int x, int y, int h)
{
	bd = body(x, y, h);
	dr = door(x, y + 2 * h, h);
	lw = wind(x + 8 * h, y + 2 * h, h);
	rw = wind(x + 14 * h, y + 2 * h, h);
	lwh = wheel(x + 2 * h, y + 8 * h, h);
	rwh = wheel(x + 14 * h, y + 8 * h, h);
	stl = line(x + 22 * h, y + 8 * h, x + 20 * h, y + 8 * h);
}