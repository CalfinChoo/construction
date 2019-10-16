#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct p {char *name; int level;} p1;

void example(struct p* p1);
void print(struct p* p1);
void changeName(struct p* p1, char *n);
void changeLevel(struct p* p1, int i);

int main() {
  srand(time(NULL));
  char *mons[3] = {"Venusaur", "Charizard", "Blastoise"};
  char *back[3] = {"Pikachu", "Pidgeot", "Butterfree"};
  p1.name = mons[rand() % 3];
  p1.level = rand() % 100;
  print(&p1);
  example(&p1);
  changeName(&p1, back[rand() % 3]);
  changeLevel(&p1, rand() % 100);
  print(&p1);
}

void example(struct p * p1) {
  printf("Example: Level %d %s used Final Judgement. Opposing Rattata fainted. \n\n", p1->level, p1->name);
}
void print(struct p * p1) {
  printf("PRINT: \nPokemon: %s, Level: %d \n\n", p1->name, p1->level);
}
void changeName(struct p * p1, char *n) {
  printf("Changing pokemon name to %s. \n\n", n);
  (*p1).name = n;
}
void changeLevel(struct p * p1, int i) {
  printf("Changing pokemon level to %d. \n\n", i);
  (*p1).level = i;
}
