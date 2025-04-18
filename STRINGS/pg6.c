// Reverse a string 
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    gets(str);
    int l= strlen(str);
    int k =0;
    while(str[k]!='\0'){
        k++;
    }
    for(int i =0,j=l-1; i<=j; i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        
}
    
    printf("%s",str);
}