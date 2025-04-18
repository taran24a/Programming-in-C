// using pointers
#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "hello world";
    char *ptr = str; // pointer to the first character of the string
    
    // ptr = "Programming";
    
    *ptr ='P';
    printf("%s",str);
    return 0;
}