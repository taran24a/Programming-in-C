// Pascal triangle
#include <stdio.h>

    
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
    for(int i =0; i<=n; i++){
        for(int k =0; k <=n-i-1; k++){
            printf(" ");
        }
        for(int j =0; j<=i; j++){
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }

}