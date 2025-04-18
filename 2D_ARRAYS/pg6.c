  // Find the sum of given matrix of n X m 
  #include<stdio.h>
  int main(){
    int n,m;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int sum =0; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Enter the element at index [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
            sum += arr[i][j];

        }
    }
    printf("The sum of the matrix is: %d\n",sum);
    return 0;
  }