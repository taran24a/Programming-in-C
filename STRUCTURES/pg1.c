// Basics of structures
#include <stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char teir; // S A B C D 
};
 struct pokemon pikachu;
//  pikachu.hp = 56;
printf("Enter Pikachu's HP: ");
scanf("%d", &pikachu.hp);
 pikachu.speed = 90;
 pikachu.attack = 40;
 pikachu.teir = 'A';
    printf("Pikachu's Teir: %c\n", pikachu.teir);
    printf("Pikachu's HP: %d\n", pikachu.hp);
    printf("Pikachu's Speed: %d\n", pikachu.speed);
    printf("Pikachu's Attack: %d\n", pikachu.attack);
    

struct pokemon charizard;
charizard.hp = 78;
charizard.speed = 100;
charizard.attack = 84;
charizard.teir = 'S';
printf("Charizard's Teir: %c\n", charizard.teir);
printf("Charizard's HP: %d\n", charizard.hp);
printf("Charizard's Speed: %d\n", charizard.speed);
printf("Charizard's Attack: %d\n", charizard.attack);

    return 0;
}