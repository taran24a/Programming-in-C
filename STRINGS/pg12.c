// Copy string using pointer 
#include <stdio.h>
#include <string.h>
int main(){
    char * str1 ="Hello World"; // original string
    char * str2;
    str2 = str1; // shallow copy
    // str2 = "Programming";
    printf("%s\n",str1); // prints "Hello World"
    printf("%s\n",str2); // prints "Hello World"
    return 0;
}