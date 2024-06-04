#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    if ((n % 5 == 0) || (n % 3 == 0))
    {
        if (n % 15 != 0)
        {
            printf("The Number is Divisible by 5 or 3 but not divisible by 15");
        }
        else
        {
            printf("The Number is Divisible by 5 or 3 but also divisible by 15");
        }
    }
    else
    {
         printf("The Number is Not Divisible by 5 or 3");
    }
    

    return 0;
    
}       


