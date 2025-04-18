// Factorial 
#include <stdio.h>
int fact(int a){
    if(a==0 || a==1){
        return 1;
    }
    return a*fact(a-1);
}
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int result = fact(a);
    printf("Factorial of %d is: %d\n", a, result);
    return 0;
}