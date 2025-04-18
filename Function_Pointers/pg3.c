// Pascal triangle 
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i =0; i<=n; i++){
        int firt = 1;
        for(int k =0; k <=n-i-1; k++){
            printf(" ");
        }
        for(int j = 0; j<=i; j++){
            printf("%d ", firt);
            firt = firt*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}