// C program to convert Decimal Number to Binary Number
#include <stdio.h>
int main()
{
    int rev = 0, dec_num, bin_num, sum = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &dec_num);
    int count = 1;
    while (dec_num)
    {
        int a = dec_num % 2;
        sum = (sum * 10) + a;
        dec_num /= 2;
        count++;
    }
    printf("%d\n",sum);
    while (count)
    {
        int a = sum % 10;
        rev = (rev * 10) + a;
        sum /= 10;
        count--;
    }
    printf("%d",rev);
    // printf("The required binary number is: %d", rev);
    return 0;
}