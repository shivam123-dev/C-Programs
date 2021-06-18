// C program to generate multiplication table of a given number
#include<stdio.h>
int main(void){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
