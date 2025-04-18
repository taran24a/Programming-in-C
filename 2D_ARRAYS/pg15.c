// wave from bottom to  up
#include <stdio.h>  
int main(){
    int n,m;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Enter the [%d][%d] element: ",i,j);
            scanf("%d",&arr[i][j]);
        } 
    }
    for(int j =0; j<m; j++){
        if(j%2==0){
            for(int i=n-1; i>=0; i--){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int i=0; i<n; i++){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
       
}