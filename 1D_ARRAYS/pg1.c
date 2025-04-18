// Print the index of the students who has marks less than 35 
#include<stdio.h>
int main(){
    int arr[10];
    for(int i =0; i<10; i++){
        printf("Enter the marks of student no %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<10; i++){
        if(arr[i]<35){
            printf("The roll no: %d has marks less than 35\n", i);
        }
        
    }
    return 0;
}