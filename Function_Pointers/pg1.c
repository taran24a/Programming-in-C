// combination 
#include <stdlib.h>
int factorial(int a){
    int fact = 1;
    for(int i = 2; i<=a; i++){
        fact = fact*i;
    }
    return fact;
}
int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int r;
    printf("Enter the number: ");
    scanf("%d", &r);
    int result = combination(n, r);
    printf("Combination of %d and %d is: %d\n", n, r, result);
    return 0;
     
}