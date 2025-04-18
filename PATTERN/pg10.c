// Star plus
// use (n/2)+1 for odd number of lines
#include <stdio.h>
int main (){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for( int j =1; j<=n; j++){
            if(i==(n/2)+1 || j==(n/2)+1){
                
                    printf("*");
                
                
            }
            if(i!=(n/2)+1 && j!=(n/2)+1){
                printf(" ");
            }
            }
            printf("\n");
        }
    return 0;
    }
