# include <stdio.h>

// Define the maximum size of the array
#define max 20

// Main function
int main() {
    // Declare variables
    int arr[max], i, j, temp, len;

    // Input the number of elements
    printf("Input numbers you want to input: ");
    scanf("%d", &len);

    // Input array values
    printf("Input %d values to sort\n", len);
    for (i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    // Insertion sort algorithm
    for (i = 1; i < len; i++) {
        for (j = i; j > 0; j--) {
            // Swap if the current element is smaller than the previous one
            if (arr[j] < arr[j - 1]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    // Display the sorted array in ascending order
    printf("\nThe ascending order of the values:\n");
    for (i = 0; i < len; i++)
        printf("%d\n", arr[i]);

    return 0;
}