// plaindrome square pyramid 

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

int nsp = 1;
int nst = n-1;
for(int i =1; i<=n; i++){
    printf("%d",i);

}
for(int i =n-1; i>=1; i--){
    printf("%d",i);
}
printf("\n");

for(int i =1; i<=n; i++){
    for(int j =1; j<=nst; j++){
        printf("%d", j);
    }
for(int k =1; k<=nsp; k++){
    printf(" ");
}
for(int l = n-i; l>=1; l--){
    printf("%d", l);
}






    nsp = nsp +2;
    nst--;
    printf("\n");
}
return 0;
} 