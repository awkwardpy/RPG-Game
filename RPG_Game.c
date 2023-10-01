#include <stdio.h>
#include <stdlib.h>

struct Character {
    char name[50];
    int health;
    int attack;
    int defense;
};

int main() {
    struct Character player;

    printf("Welcome to the Text-Based RPG!\n");

    printf("Enter your character's name: ");
    scanf("%s", player.name);

    player.health = 100;
    player.attack = 10;
    player.defense = 5;

    printf("Character created!\n");
    printf("Name: %s\n", player.name);
    printf("Health: %d\n", player.health);
    printf("Attack: %d\n", player.attack);
    printf("Defense: %d\n", player.defense);

    return 0;
}
