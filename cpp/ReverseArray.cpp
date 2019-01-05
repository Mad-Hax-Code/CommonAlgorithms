#include <iostream>
#include <array>
using namespace std;

template <typename T, size_t N>
void printArray(array<T, N> inputArray) {
	for (size_t i = 0; i < inputArray.size(); i++) {
		cout << inputArray[i] << " ";
	}
	cout << endl;
}

template <typename T, size_t N>
void reverseArray(array<T, N>& inputArray) {

	int tempValue; // create variable to store temporary value
	size_t rightIndex{ inputArray.size() - 1 }; // right index

	// because this algorithm works from both ends inward toward the center
	// the maximum number of iterations is half of the array length
	for (size_t leftIndex{ 0 }; leftIndex < inputArray.size() / 2; leftIndex++) {
		// store the value of the left index
		tempValue = inputArray[leftIndex];
		// switch value of left index to value of right index
		inputArray[leftIndex] = inputArray[rightIndex];
		// switch value of right index to stored value of left index
		inputArray[rightIndex] = tempValue;
		// decrement the right index
		rightIndex--;

		// for loop iteration increments leftIndex value
	}
}

int main()
{
	// create and initialize the array
	array<int, 25> intArray;
	for (size_t i{ 0 }; i < intArray.size(); i++) {
		intArray[i] = i + 1;
	}

	// display the length of the array
	cout << "\nArray length: " << intArray.size() << endl;
	// print original array order
	printArray(intArray);
	// reverse the array order
	reverseArray(intArray);
	// print reversed array
	cout << "\nReversed array: " << endl;
	printArray(intArray);

}