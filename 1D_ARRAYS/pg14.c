// array is containing 1 to 100 except 1 element in this range is missing. Find the missing element
#include<stdio.h>
int main(){
int arr[99];
int sum = 0;
int sum2 = 100*(101)/2;
for(int i =0; i<99; i++){
    scanf("%d", &arr[i]);
    sum += arr[i];
}
int missing = sum2-sum;
printf("%d", missing);
return 0;
}