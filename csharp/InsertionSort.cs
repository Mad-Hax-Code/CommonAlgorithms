using System;

class InsertionSort
{

    public static void InsertSort(int[] inputArray)
    {
        // create local variables for reuse during algorithm
        int valueToMove;
        int targetIndex;

        // loop through each element, skpping the first [0]
        for (int nextIndex = 1; nextIndex < inputArray.Length; nextIndex++)
        {
            // Initialize the value of the valueToMove variable to the value of the next element 
            // in the array (initially this is the second index). This value will change for each 
            // iteration of the for loop via the nextIndex increment
            valueToMove = inputArray[nextIndex];
            // Initialize the targetIndex (the index to move the valueToMove value to) to the next 
            // index of the array (initially this is the second index). This value will increment 
            // for each iteration of the for loop
            targetIndex = nextIndex;

            // While targetIndex is greater than 0 and the value of the element to the left of 
            // targetIndex is greater than the valueToMove value, execute the while loop body
            while ( (targetIndex> 0) && (inputArray[targetIndex - 1] > valueToMove) )
            {
                // because the valueToMove value is greater than the previous element
                // move the value at the targetIndex to the right
                inputArray[targetIndex] = inputArray[targetIndex - 1];
                // decrement the targetIndex to ensure the valueToMove value is checked against 
                // the previous elements and move them to the right if previous element is 
                // greater than the valueToMove value
                targetIndex--;
            }
            // insert the valueToMove value at the appropriate index of the array
            inputArray[targetIndex] = valueToMove;
        }
    }

    public static void printArray(int[] inputArray)
    {
        foreach (int value in inputArray)
        {
            Console.Write($"{value} ");
        }
    }

    public static void Main()
    {
        // create array for test
        int[] exampleArray = { 34, 88, 98, 4, 23, 37, 7, 56, 9, 20 };

        Console.WriteLine("Unsorted array:");
        printArray(exampleArray);

        InsertSort(exampleArray); // sort the array

        Console.WriteLine("\nSorted array:");
        printArray(exampleArray);
    }
}