// plaindrome alphabetic pyramid
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n-i; j++){
            printf(" ");
        }
        for(int k =1; k<=i; k++){
            char ch = 'A'+k-1;
            printf("%c",ch);
           
        }
        for(int l =1; l<=i-1; l++){
            char ch = 'A'+l-1;
            printf("%c",ch);
           
        }
        
        
        printf("\n");
    }
    return 0;
}