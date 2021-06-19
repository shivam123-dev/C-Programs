// C program to check for the prime number
#include <stdio.h>
int main()
{
    int number, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 2; i <= number; i++)
    {
        if (number % 2 == 0 && number != 2)
        {
            temp++;
            break;
        }
    }
    if(temp){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }

    return 0;
}