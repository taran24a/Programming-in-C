// WAP to rotate a matrix 90 degree
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter th enumber of rows and columns: ");
    scanf("%d%d",&r,&c);
    
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
        printf("Enter the [%d][%d] element: ",i,j);
        scanf("%d",&arr[i][j]);
        } 
       }
       for(int i=0; i<r; i++){
        for(int j=i; j<c; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        
        }
       }
         for(int i=0; i<r; i++){
          for(int j=0; j<c/2; j++){
                int temp = arr[i][j];
                arr[i][j] = arr[i][c-j-1];
                arr[i][c-j-1] = temp;
          }
         }
       printf("The rotated matrix:\n");
       for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
       }
       return 0;
}