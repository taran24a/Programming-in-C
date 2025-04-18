// WAP to print the multiplication of  two matrix 
#include<stdio.h>
int main(){
    int r,c;
    int n,m;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d",&n,&m);
    int arr[r][c];
    int brr[n][m];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter the [%d][%d] element of first matrix: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Enter the [%d][%d] element of second matrix: ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    if(c!=n){
        printf("Multiplication not possible\n");
        return 0;
    }
    int ans[r][m];  // row of firt matrix and column of second matrix
    // multiplication of two matrix
for(int i=0; i<r; i++){
    for(int j=0; j<m; j++){
        ans[i][j] =0;
        for(int k=0; k<m; k++){
            ans[i][j] += arr[i][k]*brr[k][j];
        }
    }

}
    printf("The multiplication of two matrix is:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<m; j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}