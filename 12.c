#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if an array is sorted
bool is_sorted(int *a, int n) {
    while (--n >= 1) {
        if (a[n] < a[n - 1])
            return false;
    }
    return true;
}

// Function to shuffle the elements of an array
void shuffle(int *a, int n) {
    int i, t, r;
    for (i = 0; i < n; i++) {
        t = a[i];
        r = rand() % n;
        a[i] = a[r];
        a[r] = t;
    }
}

// BogoSort function to sort an array
void bogosort(int *a, int n) {
    while (!is_sorted(a, n))
        shuffle(a, n);
}

// Main function
int main() {
    int x[] = {1, 10, 9, 7, 3, 0};
    int i;
    int len = sizeof(x) / sizeof(x[0]);

    // Display original array
    printf("Original Array:\n");
    for (i = 0; i < len; i++)
        printf("%d%s", x[i], i == len - 1 ? "\n" : " ");

    // Sort the array using BogoSort
    printf("\nSorted Array:\n");
    bogosort(x, len);
    for (i = 0; i < len; i++)
        printf("%d ", x[i]);

    printf("\n");
    return 0;
}