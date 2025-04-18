// Find the max eleement
#include<stdio.h>
int main(){
    int arr[5] = {10,22,34,56,77};
    int max = -1;
    for(int i =0; i<5; i++){
        if(arr[i]>max){
           
            max = arr[i];
        }
    }
    printf("The max element is %d\n", max);
    return 0;

}