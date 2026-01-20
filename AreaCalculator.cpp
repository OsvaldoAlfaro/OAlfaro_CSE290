#include "AreaCalculator.h"

void AreaCalculator::setlength(double len) {
	length = len;
}

void AreaCalculator::setWidth(double wid)
{
	width = wid;
}

double AreaCalculator::calcArea() {
	double r = length * width;
	return r;
}
