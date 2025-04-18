// Find th eduplicat element
#include<stdio.h>
int main(){
    int arr[8] = {1,2,7,2,4,5,6,7};
    for(int i =0; i<8; i++){
        for(int j = i+1; j<8; j++){
            if(arr[i]==arr[j]){
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;

}