// Find the unique element in the array where all other elemets are repeated twice
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {1,1,2,2,4,5,5};
    for(int i =0; i<7; i++){
        bool flag = false;
        for(int j = 0; j<7; j++){
            if(i!=j && arr[i]==arr[j]){
                flag = true;
                break;
            }
            
        }
        if(flag == false){
            printf("%d", arr[i]);
            break;
        }
    }
    return 0;
}