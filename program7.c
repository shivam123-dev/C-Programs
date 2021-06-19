// C program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int number, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is: %d", number, factorial);
    return 0;
}