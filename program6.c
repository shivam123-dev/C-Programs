// C program to reverse a number
#include <stdio.h>
int main() {
    int number,sum=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("The original number was: %d", number);
    while(number){
        int a = number % 10;
        sum = (sum * 10) + a;
        number /= 10;
    }
    printf("The reversed number is: %d", sum);
    return 0;
}