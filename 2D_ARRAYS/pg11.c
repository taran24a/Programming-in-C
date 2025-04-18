 // WAP to change the given nXm matrix to its transpose 
 #include<stdio.h>
 int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    
    // Input
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter the element at index [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    // Transpose of the matrix
    for(int i=0; i<r; i++){
        for(int j=i; j<c; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Output the transposed matrix
    printf("The transpose of the matrix is:\n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

 }