public class SelectionSort {

    public static void selectionSort(int inputArray[]) {

        // local variables for reuse during algorithm
        int lowestValueIndex;
        int swapValue;

        // loop through each element to the right of currentIndex
        for (int currentIndex = 0; currentIndex < inputArray.length; currentIndex++) {
            // hold index of smallest element, initially assign the first index 0
            lowestValueIndex = currentIndex;
            // loop through each element to the right of currentIndex
            for (int nextIndex = currentIndex + 1; nextIndex < inputArray.length; nextIndex++) {
                // if the value of the element to the right (nextIndex) is less than the
                // value of the element at the lowestValueIndex, reassign the  value
                // of lowestValueIndex to the nextIndex
                if (inputArray[nextIndex] < inputArray[lowestValueIndex]) {
                    lowestValueIndex = nextIndex;
                }
            }
            // hold the value at the currentIndex
            swapValue = inputArray[currentIndex];
            // swap the currentIndex and smallestElementIndex values
            inputArray[currentIndex] = inputArray[lowestValueIndex];
            inputArray[lowestValueIndex] = swapValue;
        }
    }

    public static void printArray(int inputArray[]) {
        for (int value : inputArray) {
            System.out.print(value + " ");
        }
    }

    public static void main(String[] args) {

        // define an array to test
        int exampleArray[] = {34, 88, 98, 4, 23, 37, 7, 56, 9, 20};

        System.out.println("Unsorted array:");
        printArray(exampleArray);

        selectionSort(exampleArray); // sort the array

        System.out.println("\nSorted array:");
        printArray(exampleArray);
    }
}
