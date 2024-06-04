#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Function to calculate the sum of divisors of a number
int getSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) // Loop through numbers from 1 to the square root of 'n'
    {
        if (n % i == 0) // Check if 'i' is a divisor of 'n'
        {
            if (n / i == i)
                sum = sum + i; // If 'i' is a divisor and is equal to the square root of 'n', add it to 'sum'
            else
            {
                sum = sum + i; // Add 'i' to 'sum'
                sum = sum + (n / i); // Add 'n / i' to 'sum'
            }
        }
    }
    sum = sum - n; // Subtract the number 'n' from the sum of its divisors
    return sum; // Return the sum of divisors
}

// Function to check if a number is an abundant number
bool checkAbundant(int n)
{
    return (getSum(n) > n); // Return true if the sum of divisors is greater than 'n', otherwise return false
}

// Main function
int main()
{
    int n;
    printf("\n\n The Abundant number between 1 to 1000 are: \n");
    printf(" -----------------------------------------------\n");

    for (int j = 1; j <= 200; j++) // Loop through numbers from 1 to 1000
    {
        n = j; // Assign the current value of 'j' to 'n'
        if (checkAbundant(n) == true) // Check if 'n' is an abundant number
            printf("%d ", n); // Print the abundant number

    }
    printf("\n");

    return 0;
}
