// Problem Description:
// Write a program that prints the numbers from 1 to 100. But for multiples of
// three print “Fizz” instead of the number and for the multiples of five print
// “Buzz”. For numbers which are multiples of both three and five print
// “FizzBuzz”.

#include <stdio.h>
#include <string.h>

int main() {
  for (int i = 0; i <= 100; i++) {
    int fb = 0;

    if (i % 3 == 0) {
      printf("Fizz");
      fb += 1;
    }

    if (i % 5 == 0) {
      printf("Buzz");
      fb += 1;
    }

    if (fb == 0) {
      printf("%d\n", i);
    } else {
      printf("\n");
    }
  }

  return 0;
}