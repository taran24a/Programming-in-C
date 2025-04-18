//
#include <stdio.h>
int main(){
    int n ;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i =1; i<=3; i++){ // no of lines
        for(int j = 0; j<n; j++){   // no of stars
            printf("*");
        }
printf("\n");
    }
    return 0;


}