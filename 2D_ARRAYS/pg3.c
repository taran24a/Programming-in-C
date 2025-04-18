// WAP to store roll no and marks of 4 students side by side
#include<stdio.h>
int main(){
    
    int arr[4][2];
    for(int i=0; i<4; i++){
        printf("Enter roll no and marks of student %d: ", i+1);
       
            
            scanf("%d%d",&arr[i][0],&arr[i][1]);
        
    
    }
    for(int i=0; i<4; i++){
              printf("Roll no: %d, Marks: %d\n", arr[i][0], arr[i][1]);
        
    }
    printf("\n");
    return 0;
}