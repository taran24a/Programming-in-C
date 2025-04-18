// Count the number of elements in an array greater than the given value
#include<stdio.h>
int main(){
    int arr[5] = {10,22,34,56,77};
    int count = 0;
    int value = 20;
    for(int i=0; i<5; i++){
        if(arr[i]>value){
            count++;
        }
    }
    printf("The number of elements greater than %d is %d\n", value, count);
    return 0;
}