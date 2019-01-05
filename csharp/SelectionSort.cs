using System;

public class SelectionSort
{

    public static void SelectSort(int[] inputArray)
    {
        // local variables for reuse during the algorithm
        int swapValue;
        int smallestValueIndex;

        // loop through each element
        for (int currentIndex = 0; currentIndex < inputArray.Length; currentIndex++)
        {
            // hold index of smallest element, initially assign the first index 0
            smallestValueIndex = currentIndex;

            // loop through each element to the right of currentIndex
            for (int nextIndex = currentIndex + 1; nextIndex < inputArray.Length; nextIndex++)
            {
                // if the value of the element to the right (nextIndex) is less than the 
                // value of the element at the smallestElementIndex, reassign the  value 
                // of smallestElementIndex to the nextIndex
                if (inputArray[nextIndex] < inputArray[smallestValueIndex])
                {
                    smallestValueIndex = nextIndex;
                }
            }
            // hold the value at the currentIndex
            swapValue = inputArray[currentIndex];
            // swap the currentIndex and smallestElementIndex values
            inputArray[currentIndex] = inputArray[smallestValueIndex];
            inputArray[smallestValueIndex] = swapValue;
        }
    }

    public static void PrintArray(int[] inputArray)
    {
        foreach (int value in inputArray) {
            Console.Write($"{value} ");
        }
    }
    
    public static void Main()
    {
        // create array for test
        int[] exampleArray = { 34, 88, 98, 4, 23, 37, 7, 56, 9, 20 };

        Console.WriteLine("Unsorted array:");
        PrintArray(exampleArray);

        SelectSort(exampleArray); // sort the array

        Console.WriteLine("\nSorted array:");
        PrintArray(exampleArray);
    }
}