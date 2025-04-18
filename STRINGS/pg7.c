// Usingg pointers
#include <stdio.h>
#include <string.h>
int main(){
    char str[]= "Hello world"; 
    // char *ptr = &str[0]; // pointer to the first character of the string
    char *ptr = str; // pointer to the first character of the string
    printf("%p\n",ptr);
    printf("%p\n",&str[0]);
    printf("%p\n",str); // str aslo gives address of  first character of the string
    int i=0;
    while(*ptr != '\0'){
        printf("%c",*ptr); // ASCII A=65 a=97 0=48
        ptr++;
        i++;

    }
    char* ptr = "Hello world"; // pointer to the first character of the string
    // but using his we canot chant the string as it causes undefined behaviour
    ptr[0] = 'h'; // this will cause undefined behaviour
    // because string is stored in read only memory
    // so we cannot change the string using pointer
    // but we can change the string using array
    printf("%s",ptr); // \0 is null character having value 0
    return 0;

}
// using pointers we can modify entire string but not individual character
// Using arraya we can modify individual character but not entire string