// Print 1 to n using recursion
#include <stdio.h>
int print(int x,int n){
    if(x>n){
        return 0;
    }
    printf("%d ", x);
    return print(x+1,n);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    print(1,n);
    return 0;
}