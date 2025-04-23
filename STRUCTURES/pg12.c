// Structire variable passed to a function 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void fun(pokemon p){
    printf("%d",p.hp);
    
}
int main(){
    typedef struct pokemon{
        int hp; 
        int speed;
        int attack;
        char tier;
        char name[10];
    }pokemon;

    pokemon p;
    p.hp = 100;
    p.speed = 200;
    p.attack = 300;
    p.tier = 'A';
    strcpy(p.name,"Pikachu");

    printf("%d\n",p.hp);
    fun(p); // this is showing error because the scope of pokemon in local thats why the function cant idntify it.  We need to declare it globallyy to make it work
    return 0;
// check next program for the solution

}