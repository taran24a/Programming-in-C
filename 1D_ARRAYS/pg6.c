// find the diff between the sum of even indices to sum of odd indices
#include<stdio.h>
int main(){
    int arr[7]= {1,2,3,4,5,6,7};
    int sum =0;
    int sum1 = 0;
    for(int i=0; i<=6; i++){
        if(i%2==0){
            sum +=arr[i];
            
        }
        if(i%2!=0){
            sum1 +=arr[i];
        }

    }
    int diff = sum-sum1;
    printf("%d", diff);
    return 0;
}