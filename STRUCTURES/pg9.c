// Assigning the value of one structure variable tp another of the same type
#include<stdio.h>
#include<string.h>

int main(){
    typedef struct pokemon{
        int hp; 
        int speed;
        int attack;
        char tier;
        char name[10];
    } pokemon;
    pokemon a,b,c;
    a.hp = 100;
    a.speed = 200;
    a.attack = 300;
    a.tier = 'A';
    strcpy(a.name,"Pikachu");

    // b.hp = a.hp;
    // b.speed = a.speed;
    // b.attack = a.attack;
    // b.tier = a.tier;
    // strcpy(b.name,a.name);
    // b = a; // this will also work. This will copy all the values of a to b.

    // instead of copying each value one by one, we can use the assignment operator to copy the entire structure at once.
    // This is possible because both a and b are of the same type (struct pokemon). The assignment operator will copy all the values of a to b in one go.

    b = a; // deep copy 
    printf("%s\n",b.name);

    b.attack = 200;
    printf("%d\n",a.attack); // this will print 300 because a and b are different variables. Changing b will not change a.
    printf("%d\n",b.attack); // this will print 200 because b is changed to 200.


}