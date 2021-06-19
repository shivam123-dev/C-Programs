// C program to find largest element in an array
#include<stdio.h>
int main(void){
    int arr[100], num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp = arr[0];
    for (int i = 0; i < num; i++)
    {
        
        if (arr[i]<arr[i+1])
        {
            temp = arr[i+1];
        }
        
    }
    printf("The largest element is: %d", temp);
}