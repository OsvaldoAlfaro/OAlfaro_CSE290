#include <iostream>
#include "AreaCalculator.h"

using namespace std;


int main() {

		AreaCalculator square;
		square.setlength(5);
		square.setWidth(6);
		double result = 0;
		result = square.calcArea();

		cout << "The result for your calulation is: " << result << endl;

	return 0;
}
