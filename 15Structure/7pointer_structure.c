// pointer in structure

#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    char name[40];
    int hp;
    int attack;
    int speed;
    int tier;

} pokemon;

void change(pokemon *p)
{
    // (*p).hp = 40;
    p->hp = 40;
    (*p).attack = 140;
    (*p).speed = 240;
    (*p).tier = 400;
}

int main()
{
    pokemon pikachu = {"pikachu",40,70};
    // pikachu.hp = 100;
    // pikachu.attack = 400;
    // strcpy(pikachu.name, "pikachu");
    pikachu.tier = 45;
    pokemon *x = &pikachu; // address of
    printf("%p\n", &pikachu.hp);
    printf("%p\n", &pikachu.attack);
    printf("%p\n", &pikachu.speed);
    printf("%p\n", &pikachu.tier);

    printf("%p\n", x);

    (*x).hp = 70; // using address print actual value
    printf("%d\n", pikachu.hp);

    change(&pikachu);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%d", pikachu.tier);
    return 0;
}