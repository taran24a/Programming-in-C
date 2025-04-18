// A matrix having 0-1 only, find the row with the maximum numbers of 1's
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int maxcount =0, row =0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter the element at index [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        int count =0;
        for(int j=0; j<c; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if( count>maxcount){
            maxcount = count;
            row = i+1;
        }
    }
    printf("The row number with the maximum number of 1's is: %d\n",row);
    printf("The maximum number of 1's is: %d\n",maxcount);
    return 0;
}