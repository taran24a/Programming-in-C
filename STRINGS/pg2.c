// ASCII A=65 a=97 0=48
#include<stdio.h>
int main(){
    char ch = 'A';
    // printf("%d",ch);
    int x =  (int)ch;  // \0 is null character having value 0
    printf("%d",x);
    return 0;
}