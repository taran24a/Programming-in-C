// using pointers
#include <stdio.h>
#include <string.h>
int main(){
    char* ptr = "Hello world"; // pointer to the first character of the string
    ptr = "Programming";
    printf("%s",ptr);
    return 0;
}