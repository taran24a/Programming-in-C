// 1
// 1 3
// 1 3 5
// 1 3 5 7
#include <stdio.h>
int main(){
    int n; 
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ",2*j-1); 
        }
        printf("\n");
    }
}