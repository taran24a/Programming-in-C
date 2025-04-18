// Copy string 
#include <stdio.h>
#include <string.h>
int main(){
    char str1[] = "Hello World";
    char * str2 = str1;
    str1[0] = 'p';
    printf("%s",str2); // prints "pello World" str2 is a shallow copy of str1
    // str2[0] = 'P'; // this will cause a segmentation fault because str2 points to a string literal
    return 0;
}