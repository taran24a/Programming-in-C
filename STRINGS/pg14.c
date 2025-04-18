// Inserting Character into String
#include <stdio.h>
#include <string.h>
int main(){
    char str[20] = "Hello World";
    printf("%s\n",str); // prints "Hello World"
    for(int i =strlen(str); i>=2; i--){
        str[i+1] = str[i]; // shift characters to the right

    }
    str[2] = 'k';
    printf("%s\n",str); // prints "Hekllo World"
    return 0;
}