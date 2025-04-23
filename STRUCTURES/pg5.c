// struct using typedef
#include<stdio.h>
int main(){
    typedef struct book{
        char name[40];
        float price;
        int pages;
    } PW;  // can be used as PW book1, book2;

    PW book1, book2; // book1 and book2 are variables of type struct book.
    printf("Enter the name of the book: ");
    scanf("%s",book1.name); // %s is used to read a string (character array) from the user. The string is stored in book1.name.

    printf("Enter the price of the book: ");
    scanf("%f",&book1.price); // %f is used to read a float value from the user. The float value is stored in book1.price.

    printf("Enter the number of pages in the book: ");
    scanf("%d",&book1.pages); // %d is used to read an integer value from the user. The integer value is stored in book1.pages.

    printf("Enter the name of the book: ");
    scanf("%s",book2.name); // %s is used to read a string (character array) from the user. The string is stored in book2.name.

    printf("Enter the price of the book: ");
    scanf("%f",&book2.price); // %f is used to read a float value from the user. The float value is stored in book2.price.


    printf("Enter the number of pages in the book: ");
    scanf("%d",&book2.pages); // %d is used to read an integer value from the user. The integer value is stored in book2.pages.

    printf("The name of first book is: %s\n",book1.name); // %s is used to print a string (character array). The string is stored in book1.name.
    printf("The price of first book is: %.2f\n",book1.price); // %.2f is used to print a float value with 2 decimal places. The float value is stored in book1.price.
    printf("The number of pages in first book is: %d\n",book1.pages); // %d is used to print an integer value. The integer value is stored in book1.pages.

    printf("The name of second book is: %s\n",book2.name); // %s is used to print a string (character array). The string is stored in book2.name.
    printf("The price of second book is: %.2f\n",book2.price); // %.2f is used to print a float value with 2 decimal places. The float value is stored in book2.price.
    printf("The number of pages in second book is: %d\n",book2.pages); // %d is used to print an integer value. The integer value is stored in book2.pages.

    return 0;

}