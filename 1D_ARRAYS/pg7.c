// Find the total number of pairs in the array whose sum is equal to given value
#include<stdio.h>
int main()
{
    int count =0;
    int arr[5]= {1,2,3,4,5};
    int value = 5;
    for(int i =0; i<5; i++){
        for(int j=i+1; j<5; j++){
        if(arr[i]+arr[j]==value){
            count++;
        }
    }
}
    printf("%d",count);
    return 0;
}
