// odd numbers and even alphabets
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%2!=0){
                printf("%d",j);
            }
            
        }
        
        for(char ch='A'; ch<='A'+i-1; ch++){
            if(i%2==0){
            printf("%c",ch);
        }
    }
        printf("\n");

    }
   
    return 0;
}