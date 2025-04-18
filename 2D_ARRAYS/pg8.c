// WAP to print the row number having the maximum sum in a given matrix 
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int max_sum = 0, max_row = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Enter the element at index [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        int sum =0; 
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
    if(i==0 || sum>max_sum){
        max_sum = sum;
        max_row = i;
    }

    }
    printf("The row number with the maximum sum is: %d\n",max_row+1);
    printf("The maximum sum is: %d\n",max_sum);
    
}