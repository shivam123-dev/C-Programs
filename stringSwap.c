#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    for(int k = 0; k<=strlen(s);k++){
        for(int i='a', j = 'z'; i<='z', j>='a'; i++, j--){
            if(s[k] == i){
                s[k] = j;
                printf("%c", s[k]);
                break;
            }
        }
    }
    return 0;
}