// WAP to store 10 at every index of a 2D matrix of size 5 X 5
#include<stdio.h>
int main(){
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j =0; j<5; j++){
            arr[i][j] = 10;
        }
    }
    for(int i=0; i<5; i++){
        for(int j =0; j<5; j++){
            printf("%d",arr[i][j]);
            printf(" ");
            
        }
        printf("\n");
    }
    return 0;

}