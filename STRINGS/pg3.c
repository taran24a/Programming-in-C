#include<stdio.h>
int main(){
    char ch[] = "Hello";
    int i =0;
    while(i<5){
        printf("%c",ch[i]); // ASCII A=65 a=97 0=48
        i++;
    }
    return 0;
}