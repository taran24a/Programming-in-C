// Given an n X m matrix 'a' print all elements of the matrix in spiral order.
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
    // Spiral order of matrix
    int minr =0;
    int maxr = n-1;
    int minc =0;
    int maxc = m-1;
    int tne = n*m;
    int count = 0;
    while(count<tne){
        // top row
        for(int i=minc; i<=maxc && count<tne; i++){
            printf("%d ",arr[minr][i]);
            count++;
        }
        minr++;
        // right column
        for(int i=minr; i<=maxr && count<tne; i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        // bottom row
        for(int i=maxc; i>=minc && count<tne; i--){
            printf("%d ",arr[maxr][i]);
            count++;
        }
        maxr--;
        // left column
        for(int i=maxr; i>=minr && count<tne; i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    
    return 0;




}