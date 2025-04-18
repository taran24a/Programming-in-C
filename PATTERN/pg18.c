// alphabetic left right angle triangle
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(char k ='A'; k<='A'+i-1; k++){
            printf("%c", k);
        }
        printf("\n");
    }
    return 0;
}