#include <stdio.h>
#include<string.h>
#include "string.h"

struct player{
  char name[20];
  char lastName[20];
  int age;
};

int main (){
  struct player player1;
  struct player player2;

  strcpy(player1.name, "ahmed");
  strcpy(player2.name, "younes");

  strcpy(player1.lastName, "hiab");
  strcpy(player2.lastName, "rajix");

  player1.age = 20;
  player2.age = 21;

  
  printf("name: %s\n", player1.name);
  printf ("name: %s\n", player2.name);
  printf("name: %s\n", player1.lastName);
  printf ("name: %s\n", player2.lastName);
  printf("age: %d\n", player1.age);
  printf("age: %d\n", player2.age);


  return 0;
}
