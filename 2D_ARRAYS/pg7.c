// Find max and min in the matrix
#include<stdio.h>
int main(){
int r,c;
printf("Enter the number of rows and columns: ");
scanf("%d%d",&r,&c);
int arr[r][c];
int max,min;
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("Enter the element at index [%d][%d]: ",i,j);
        scanf("%d",&arr[i][j]);
        if(i==0 && j==0){
            max = arr[i][j];
            min = arr[i][j];
        }
        if(arr[i][j]>max){
            max = arr[i][j];
        }
        if(arr[i][j]<min){
            min = arr[i][j];
        }
    }
}
printf("The maximum element in the matrix is: %d\n",max);
printf("The minimum element in the matrix is: %d\n",min);
return 0;
}