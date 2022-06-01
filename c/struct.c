#include <stdio.h>

struct AStruct {
  int number;
  char letter;
};

int main() {
  struct AStruct as = {.number = 5, .letter = 'c'};

  char letter = as.letter;

  printf("%c\n", letter);

  return 0;
}