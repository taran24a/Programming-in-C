//To check if the given array is plaindrom or not
int main(){ 
int arr[5] ={1,2,3,2,1};
     
     int ispalindorme = 0;
    for(int i =1 ; i<=5; i++){
         
     
     if(arr[i]==arr[4-i]){
        ispalindorme =1;
        break;
    
     }
    }
    if(ispalindorme)
    printf("Yes it is palindrome");
     else{
    printf("Not palindrome");
      } return 0;
}