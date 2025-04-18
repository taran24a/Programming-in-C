// wave print of a matrix
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter the [%d][%d] element: ",i,j);
            scanf("%d",&arr[i][j]);
        } 
    }
    for(int i=0; i<r; i++){
      
            if(i%2==0){
                for(int j=0; j<c; j++){
                    printf("%d ",arr[i][j]);
                }
                
            }
            // else{
            //     printf("%d ",arr[i][c-j-1]);
            // }
            else{
                for(int j=c-1; j>=0; j--){
                    printf("%d ",arr[i][j]);
                }
            }
        
        printf("\n");
    }
    return 0;

}