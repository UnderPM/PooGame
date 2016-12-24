#include "Poo.h"

void Poo::EatPoo(int x0, int y0, int width0, int height0)
{
	const int right0 = x0 + width0;
	const int bottom0 = y0 + height0;
	const int right1 = x + width;
	const int bottom1 = y + height;

	if (right0 >= x &&
		x0 <= right1 &&
		bottom0 >= y &&
		y0 <= bottom1) {
		isEaten = true;
	}
}
