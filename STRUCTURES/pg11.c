// Nesting one structure within another structure
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct pokemon{
        int hp; 
        int speed;
        int attack;
        char tier;
        char name[10];
    }pokemon;
    typedef struct legendary{
        pokemon p; // this is a structure within a structure. The structure legendary contains a structure pokemon as its member.
        char ability[20];


    } legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure"); // this will copy the string "Pressure" to the ability member of the structure mewtwo.
    mewtwo.p.hp = 200;
    mewtwo.p.speed = 300;
    mewtwo.p.attack = 400;
    mewtwo.p.tier = 'A';
    strcpy(mewtwo.p.name,"Mewtwo"); // this will copy the string "Mewtwo" to the name member of the structure mewtwo.

    printf("The name of the pokemon is: %s\n",mewtwo.p.name); // this will print the name of the pokemon.
    printf("The hp of the pokemon is: %d\n",mewtwo.p.hp); // this will print the hp of the pokemon.
    printf("The speed of the pokemon is: %d\n",mewtwo.p.speed); // this will print the speed of the pokemon.
    printf("The attack of the pokemon is: %d\n",mewtwo.p.attack); // this will print the attack of the pokemon.
    printf("The tier of the pokemon is: %c\n",mewtwo.p.tier); // this will print the tier of the pokemon.

    return 0;



}