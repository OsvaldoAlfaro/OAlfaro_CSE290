//importing libraries for select objects
#include <iostream>
#include <array>

//declaring namespace to avoid using std:: before every object
using namespace std;

int main() {

	//declaring an array of integers
	const int SIZE = 5;					//dymanic size declaration
	array<int, SIZE> values = { 0 };	//array declaration and initialization- Task #1

	//obtaining user input assigning values to array - Task #2
	cout << "---------Enter the " << SIZE << " values you would like to store in the array-------- " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter value " << (i + 1) << ": ";
		cin >> values[i];
	}

	//algorithm that finds either the highest or lowest value in the array - Task #3
	int choice;
	cout << "Enter 1 to find the highest value or 2 to find the lowest value" << endl;
	cin >> choice;

	if (choice == 1) {

	}
	else {
	
	}
	




	return 0;
}
