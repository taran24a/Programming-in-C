// Rotate the given array by k steps, where k is a non negative number
#include<stdio.h>
 void reverse(int arr[], int si, int ei){
    for(int i =si,j = ei; i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
       }
       return;
 }
int main(){
    int n = 7;

    int k = 3;
    k = k%n;
    int arr[7] = {1,2,3,4,5,6,7}; 
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i =0; i<7; i++){
        printf("%d ", arr[i]);
    }
    

     return 0;
}