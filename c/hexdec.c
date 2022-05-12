#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flush() { fflush(stdout); }

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Wrong number of args\n");
    flush();
    return 1;
  }

  char *hex = argv[1];

  char *tokens[0];

  // Remove the initial 0x from the hex number
  char *token = strtok(hex, "x");
  // loop through the string to extract all other tokens
  while (token != NULL) {
    // printf(" %s\n", token); // printing each token
    token = strtok(NULL, "x");
    long end = sizeof(tokens) + 1;

    tokens[end] = token;
  }

  printf("Size %ld", sizeof(tokens));

  for (int i = 0; i < sizeof(tokens); i++) {
    printf("%s\n", tokens[i]);
  }
}