// Find the total number of triplets in the array whose sum is equal to given value
#include<stdio.h>
int main()
{
    int count =0;
    int arr[5]= {1,2,3,4,5};
    int value = 6;
    for(int i =0; i<5; i++){
        for(int j=i+1; j<5; j++){
            for(int k=j+1; k<5; k++){

        if(arr[i]+arr[j]+arr[k]==value){
            count++;
        }
    }
}
    }
    printf("%d",count);
    return 0;
}
