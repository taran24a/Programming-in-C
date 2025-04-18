#include<stdio.h>
#include<string.h>
int main(){
    char ch[] = "Hello world"; // \0 is null character having value 0
    // int i =0;
    // while(ch[i]!='\0'){
    //     //printf("%c",ch[i]); // ASCII A=65 a=97 0=48
    //     printf("%c", *(i+ch));
    //     i++;
    // }
    // printf("%s",ch); // \0 is null character having value 0
    puts(ch); // automatically \n bhi de deta hai
    return 0;
}