#include<stdio.h>
#include<string.h>
int main(){
    char s[60];
    printf("Enter a string: ");
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        if(i%2==0){
            printf("%c",s[i]);
        }
    }
    return 0;
}