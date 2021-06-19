// C program to find sum of first n natural numbers
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("The sum is: %d",sum);
    return 0;
}