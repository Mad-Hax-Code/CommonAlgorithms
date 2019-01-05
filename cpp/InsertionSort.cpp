#include <array>
#include <iostream>
using namespace std;

template <typename T, size_t size>
void insertionSort(array<T, size>& exampleArray) {

	// Create local variables for reuse in algorithm
	T valueToMove;
	size_t targetIndex;

	// loop through each element, skpping the first [0]
	for (size_t nextIndex{ 1 }; nextIndex < exampleArray.size(); nextIndex++) {
		// Initialize the value of the valueToMove variable to the value of the next element 
		// in the array (initially this is the second index). This value will change for each 
		// iteration of the for loop via the nextIndex increment
		valueToMove = exampleArray[nextIndex];
		// Initialize the targetIndex (the index to move the valueToMove value to) to the next 
		// index of the array (initially this is the second index). This value will increment 
		// for each iteration of the for loop
		targetIndex = nextIndex;

		// While targetIndex is greater than 0 and the value of the element to the left of 
		// targetIndex is greater than the valueToMove value, execute the while loop body
		while ((targetIndex > 0) && (exampleArray[targetIndex - 1] > valueToMove)) {
			// because the valueToMove value is greater than the previous element
			// move the value at the targetIndex to the right
			exampleArray[targetIndex] = exampleArray[targetIndex - 1];
			// decrement the targetIndex to ensure the valueToMove value is checked against 
			// the previous elements and move them to the right if previous element is 
			// greater than the valueToMove value
			targetIndex--;
		}
		// insert the valueToMove value at the appropriate index of the array
		exampleArray[targetIndex] = valueToMove;
	}
}

int main() {

	// define an array to test
	array<int, 10> exampleArray{ 99, 37, 88, 4, 57, 63, 45, 30, 9, 8 };

	cout << "Unsorted array:\n";
	// print the array before it has been sorted
	for (size_t i{ 0 }; i < exampleArray.size(); i++) {
		cout << exampleArray[i] << " ";
	}

	insertionSort(exampleArray); // sort the array

	cout << "\nSorted array:\n";
	// print the array after it has been sorted
	for (size_t i{ 0 }; i < exampleArray.size(); i++) {
		cout << exampleArray[i] << " ";
	}

	cout << endl;
}