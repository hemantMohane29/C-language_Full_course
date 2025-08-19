#include <stdio.h>
#include <string.h>
int main()
{
  typedef struct pokemon
  {
    char name[50];
    int hp;
    int speed;
    int attact;
    char tier;

  } pokemon;
  typedef struct legendaarypokemon
  {
    pokemon normal;
    char ability[100];

  } legendaarypokemon;

  typedef struct Godpokemon
  {
    legendaarypokemon hemant;
    int special_attact;
  } Godpokemon;

  Godpokemon arceus;
  strcpy(arceus.hemant.ability, "Trun ANyone to stone");
  arceus.hemant.normal.attact = 500;
  arceus.hemant.normal.hp = 100;

  printf("%s\n", arceus.hemant.ability);
  printf("%d\n", arceus.hemant.normal.attact);
  printf("%d", arceus.hemant.normal.hp);

  return 0;
}