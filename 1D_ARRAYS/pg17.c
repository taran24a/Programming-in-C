// temperature

#include<stdio.h>
int main(){
    int arr[14] = {2,5,3,1,-1,-3,-4,30,40,20,0,0,9,6,};
    int pos = 0;
    int neg = 0;
    int zero = 0;
    int max = arr[0];
    int min = arr[0];

    for(int i =0; i<14;i++){
        if(arr[i]>0){
            pos++;
        }
        if(arr[i]<0){
            neg++;
        }
        if(arr[i]==0){
            zero++;
        }
        
    }
    printf("%d\n",pos);
    printf("%d\n",neg);
    printf("%d\n",zero);
    for(int i=0; i<14; i++){
        if(arr[i]>max){
            max = arr[i];
           
        
        }
        
}
printf("%d\n",max);
        for(int i=0; i<14; i++){
        if(arr[i]<min){
            min = arr[i];
            
        }
        
       
    
        
    }
    printf("%d\n",min);
    
    
}