// Create a structure 'date' that contains three members namely date,month and year. Creates 2 structure variables with different dates and now compare the two. If the dates are equal then display message as "equal" otherwise "unequal".
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct date{
        int date;
        int month;
        int year;

    } date;
    date d1, d2;

    printf("Enter the date: ");
    scanf("%d",&d1.date);
    printf("Enter the month: ");
    scanf("%d",&d1.month);
    printf("Enter the year: ");
    scanf("%d",&d1.year);

    printf("Enter the date: ");
    scanf("%d",&d2.date);
    printf("Enter the month: ");
    scanf("%d",&d2.month);
    printf("Enter the year: ");
    scanf("%d",&d2.year);

    // if(d1.date == d2.date && d1.month ==d2.month && d1.year == d2.year ){   // we cant compare d1==d2 we have to do it individually
    //     printf("Equal\n");
    // }
    // else{
    //     printf("Unequal\n");
    // }

    bool flag = true;
    if(d1.date != d2.date){
        flag = false;
    }
    if(d1.month != d2.month){
        flag = false;
    }
    if(d1.year != d2.year){
        flag = false;
    }
    if(flag == true){
        printf("Equal\n");
    }
    else{
        printf("Unequal\n");
    }
    return 0;
}