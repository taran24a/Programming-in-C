// A record contains name of criccket player, his age, no of test matches that he has played and the average runs that he has scored in each test match.Create an array of structure to hold records of 20 such cricketers and the WAP to read these records

#include<stdio.h>

int main(){
    struct players{
        char name[50];
        int age;
        int matches;
        float average;
    } cricketers[20];

    for(int i=0; i<20; i++){
        printf("Enter the name of the player: ");
        scanf("%s",cricketers[i].name);
        printf("Enter the age of the player: ");
        scanf("%d",&cricketers[i].age);
        printf("Enter the number of matches played by the player: ");
        scanf("%d",&cricketers[i].matches);
        printf("Enter the average runs scored by the player: ");
        scanf("%f",&cricketers[i].average);
    }
    printf("The details of the players are:\n");
    for(int i=0; i<20; i++){
        printf("Name: %s\n",cricketers[i].name);
        printf("Age: %d\n",cricketers[i].age);
        printf("Matches: %d\n",cricketers[i].matches);
        printf("Average: %.2f\n",cricketers[i].average);
        printf("\n");
    }
    return 0;
    
}
