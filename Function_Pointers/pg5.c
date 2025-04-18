// GCD or HCF
#include<stdio.h>

// int gcd(int a, int b){
//     if(b==0){
//         return a;
//     }
//     return gcd(a, a%b);
// }
int min(int a, int b){
    if(a<b)
    return a;
    else
    return b;
}
int gcd(int a, int b){
    int min1 = min(a, b);
    for(int i = min1; i>=1; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;
}
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int result = gcd(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, result);
    return 0;

}