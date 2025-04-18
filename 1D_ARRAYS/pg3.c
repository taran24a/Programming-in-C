// pass of values  //array is always passed by reference
#include <stdio.h>
void fun(int a[]){
    a[0] = 100;
     // This will change the original array in main
     return 0;
}
int main(){
    int arr[5]= {10,22,34,56,77};
    fun(arr);
    printf("The first element of the array is %d\n", arr[0]);
    // This will print 100
    return 0; 

}