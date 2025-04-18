//second largest element
#include<stdio.h>
int main(){
    int arr[5] = {10,20,30,44,77};
    int max = arr[0];
    int smax = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=0; i<5; i++){
        if(arr[i]<max&&arr[i]>smax){
            smax = arr[i];
        }
    } 
    printf("%d", smax);
    return 0;
}