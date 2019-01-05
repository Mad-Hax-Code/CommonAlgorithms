#include <array>
#include <iostream>
using namespace std;

template <typename T, size_t size>
void selectionSort(array<T, size>& exampleArray) {

	// local variables for reuse during the algorithm
	size_t smallestElementIndex;
	T swapValue;

	// loop through each element
	for (size_t curentIndex{ 0 }; curentIndex < exampleArray.size() - 1; curentIndex++) {
		// hold index of smallest element, initially assign the first index 0
		smallestElementIndex = curentIndex;

		// loop through each element to the right of currentIndex
		for (size_t nextIndex{ curentIndex + 1 }; nextIndex < exampleArray.size(); nextIndex++) {
			// if the value of the element to the right (nextIndex) is less than the 
			// value of the element at the smallestElementIndex, reassign the  value 
			// of smallestElementIndex to the nextIndex
			if (exampleArray[nextIndex] < exampleArray[smallestElementIndex]) {
				smallestElementIndex = nextIndex;
			}
		} // end of inner for

		// hold the value at the currentIndex
		swapValue = exampleArray[curentIndex];
		// swap the currentIndex and smallestElementIndex values
		exampleArray[curentIndex] = exampleArray[smallestElementIndex];
		exampleArray[smallestElementIndex] = swapValue;

	} // end outer for
} // end selectionSort()

int main() {

	// create test array
	array<int, 10> exampleArray{ 99, 37, 88, 4, 57, 63, 45, 30, 9, 8 };

	cout << "Unsorted array:\n";
	// print out the array before it has been sorted
	for (size_t i{ 0 }; i < exampleArray.size(); i++) {
		cout << exampleArray[i] << " ";
	}

	// sort the array
	selectionSort(exampleArray);

	cout << "\nSorted array:\n";
	// print out the sorted array
	for (size_t i{ 0 }; i < exampleArray.size(); i++) {
		cout << exampleArray[i] << " ";
	}

	cout << endl;

} // end main()