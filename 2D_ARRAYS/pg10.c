// Transpose of a matrix
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int brr[c][r];
    for(int i=0; i<r; i++)
{
    for(int j=0; j<c; j++){
        scanf("%d",&arr[i][j]);

    }
}    
printf("The transpose of the matrix is:\n");
for(int i=0; i<c; i++){
    for(int j=0; j<r; j++){
      //  printf("%d ",arr[j][i]);
        brr[i][j] = arr[j][i];
    }
        printf("\n");

}
for(int i=0; i<c; i++){
    for(int j=0; j<r; j++){
        printf("%d ",brr[i][j]);
    }
    printf("\n");
}
return 0;
}