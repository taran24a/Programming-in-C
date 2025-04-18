// Create a structure type book with name, price and number if pages as its attributes
#include<stdio.h>
int main(){
    struct book{
        char name[40];
        float price;
        int pages;

    };
    struct book b1,b2,b3;
    printf("Enter the name of the book: ");
    scanf("%s",b1.name); 
    
    // strcpy(b1.name,"hello");
     
    printf("Enter the price of the book: ");
    scanf("%f",&b1.price);

    printf("Enter the number of pages of the book: ");
    scanf("%d",&b1.pages);

    printf("Enter the name of the book: ");
    scanf("%s",b2.name);

    printf("Enter the price of the book: ");
    scanf("%f",&b2.price);

    printf("Enter the number of pages of the book: ");
    scanf("%d",&b2.pages);

    printf("Enter the name of the book: ");
    scanf("%s",b3.name);

    printf("Enter the price of the book: ");
    scanf("%f",&b3.price);

    printf("Enter the number of pages of the book: ");
    scanf("%d",&b3.pages);

    printf("Book 1: %s %.2f %d\n",b1.name,b1.price,b1.pages);
    printf("Book 2: %s %.2f %d\n",b2.name,b2.price,b2.pages);
    printf("Book 3: %s %.2f %d\n",b3.name,b3.price,b3.pages);
   
    return 0;


}