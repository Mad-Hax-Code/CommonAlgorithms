public class ReverseArray {

    public static void reverseArray(int inputArray[])
    {
        // create variables for algorithm
        int leftValue;
        int leftIndex = 0;

        // because the algorithm works form both ends of the array inward,
        // the maximum number of iterations is half of the array length
        // Note: this could also be achieved with a for loop
        while (leftIndex < inputArray.length / 2) {
            // store left value for later swap
            leftValue = inputArray[leftIndex];
            // assign the leftIndex the value of the corresponding right index
            inputArray[leftIndex] = inputArray[inputArray.length - leftIndex - 1];
            // assign the right index the stored value of the corresponding
            // right index (the one stored in the leftValue variable)
            inputArray[inputArray.length - leftIndex - 1] = leftValue;
            // increment the counter
            leftIndex++;
        }
    }

    public static void displayArray(int inputArray[]) {
        for (int value : inputArray) {
            System.out.print(value + " ");
        }
    }

    public static void main(String[] args) {

        int exampleArray[] = {1,2,3,4,5,6,7,8,9,10};

        // display original order of the array
        System.out.println("Original order:");
        displayArray(exampleArray);

        // reverse array using method
        reverseArray(exampleArray);

        // display the reversed array
        System.out.println("\nReversed array order:");
        displayArray(exampleArray);
    }
}
