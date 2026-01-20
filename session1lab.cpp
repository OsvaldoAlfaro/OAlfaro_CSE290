#include <iostream>

using namespace std;

//function to find the MAX value in the array - Task #3
int findMax(int arr[], int size) {
	int maxValue = arr[0];
	for (int i = 0; i < size; i++) {
		if (maxValue < arr[i]) {
			maxValue = arr[i];
		}
	}
	return maxValue;
}


int main() {

	//declaring variables
	const int size = 6;
	int maxValue;
	int array[size];	// declaring array and allocating memory - Task #1

	//loop to assign values to this array - Task #2
	for (int i = 0; i < size; i++) {
		cout << "Enter your element value for:" << i+1 << "-->";
		cin >> array[i];
	}

	//output the highest value 
	cout << "\nThe max value for this program is: " << (maxValue = findMax(array, size));
	
	return 0;
}
