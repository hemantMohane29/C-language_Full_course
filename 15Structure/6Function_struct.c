// function include structure

#include <stdio.h>
#include <string.h>

// void fun(pokemon p){
//      p.hp=50;
//     printf("%d",p.hp);
//     return;
// }
typedef struct pokemon
{
  char name[50];
  int hp;
  int speed;
  int attact;
  char tier;

} pokemon;
void change(pokemon p)
{
  p.hp = 40;
  return;
}
int main()
{
  pokemon pikachu;
  pikachu.hp = 60;
  change(pikachu);
  printf("%d", pikachu.hp);
  // structure are pass by value
  return 0;
}