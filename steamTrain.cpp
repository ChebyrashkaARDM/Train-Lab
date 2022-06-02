#include "steamTrain.h"
steamTrain::steamTrain(int x, int y, int h)
{
	vg = vagon(x, y, h);
	en = engine(x + 4 * h, y + 10 * h, h);
	tr = truba(x + 14 * h, y - 6 * h, h);
	ns = nose(x + 20 * h, y + 6.5 * h, h);
}