#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
   // scanf("%s",str); // only one word is allowed in scanf
    // scanf("%[^\n]s",str); // only one word is allowed in scanf
   gets(str); // it will take multiple words as input
    printf("%s",str);
    return 0;
}