// Array of structure
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

    // pokemon pikachu;
    // pokemon charizard;

    // if we want to create multiple pokemons then we can use array of structures
    pokemon arr[3]; // pokemons is an array of 10 structures of type pokemon.

    arr[0].hp = 100;
    arr[0].speed = 200;
    arr[0].attack = 300;
    arr[0].tier = 'A';
   strcpy( arr[0].name,"Pikachu");

    arr[1].hp = 150;
    arr[1].speed = 250;
    arr[1].attack = 350;
    arr[1].tier = 'B';
    strcpy(arr[1].name,"Charizard");


    arr[2].hp = 200;
    arr[2].speed = 300;
    arr[2].attack = 400;
    arr[2].tier = 'C';
    strcpy(arr[2].name,"Bulbasaur");


    // printing the values of the pokemons
    // printf("The hp of first pokemon is: %d\n",arr[0].hp);
    // printf("The speed of first pokemon is: %d\n",arr[0].speed);
    // printf("The attack of first pokemon is: %d\n",arr[0].attack);
    // printf("The tier of first pokemon is: %c\n",arr[0].tier);

    // printf("The hp of second pokemon is: %d\n",arr[1].hp);
    // printf("The speed of second pokemon is: %d\n",arr[1].speed);
    // printf("The attack of second pokemon is: %d\n",arr[1].attack);
    // printf("The tier of second pokemon is: %c\n",arr[1].tier);

    // printf("The hp of third pokemon is: %d\n",arr[2].hp);
    // printf("The speed of third pokemon is: %d\n",arr[2].speed);
    // printf("The attack of third pokemon is: %d\n",arr[2].attack);
    // printf("The tier of third pokemon is: %c\n",arr[2].tier);


    for(int i=0; i<3; i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%d\n",arr[i].attack);
        printf("%c\n",arr[i].tier);
        printf("\n");

    }

    // printing the size of the structure

    printf("The size of the structure is: %d\n",sizeof(arr));

    printf("The size of the structure is: %d\n",sizeof(arr[0]));

     return 0;
    







}