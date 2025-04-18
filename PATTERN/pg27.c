// alphabetic 
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int nsp = 1;
    int nst = n;
   
    char ch1 = 'A';
    for(int i =1; i<=2*n-1; i++){
        printf("%c", ch1);
        ch1++;
        
    }
    printf("\n");


    for(int i =1; i<=n; i++){
        for(char ch= 'A'; ch< 'A'+nst-1; ch++){
            printf("%c", ch);
            
        }
        for(int k =1; k<=nsp; k++){
            printf(" ");
            
        }
        for(char ch= 'G'-(n-i-1); ch<= 'G'; ch++){
            printf("%c", ch);
            
        }
        nst--;  
        nsp = nsp +2;
        printf("\n");
    }
return 0;
}