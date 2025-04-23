// Structire variable passed to a function 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct pokemon{
    int hp; 
    int speed;
    int attack;
    char tier;
    char name[10];
}pokemon;

void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
int main(){
    
    pokemon p;
    p.hp = 100;
    p.speed = 200;
    p.attack = 300;
    p.tier = 'A';
    strcpy(p.name,"Pikachu");

    printf("%d\n",p.hp);
    fun(p); 
    return 0;


}