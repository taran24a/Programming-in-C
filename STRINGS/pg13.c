// Built-in functions of Strings
#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "Hello World"; // original string
    int size = strlen(s1); // length of the string
    printf("%d\n",size);

    char s2[size]; // Different string
    strcpy(s2,s1); // copy s1 to s2
    printf("%s\n",s2); // prints "Hello World"

    char s3[] ="Hey "; // Different string
    strcat(s3,s1); // copy s1 to s3
    printf("%s\n",s3); // prints "HeyHello World"
    return 0;
}