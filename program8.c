// C Program to print the following star pattern: -
/*
    *
    * *
    * * *
    * * * *
*/
#include <stdio.h>
int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int rows = 0; rows < number; rows++)
    {
        for (int col = 0; col < rows; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}