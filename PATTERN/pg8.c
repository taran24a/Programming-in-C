// A B C D
// A B C D
// A B C D
// A B C D
#include <stdio.h>
int main(){
    int n; 
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        for(char j = 'A'; j<= 'A'+n-1; j++){
            printf("%c ", j);
        }
        printf("\n");

    }
    return 0;
}