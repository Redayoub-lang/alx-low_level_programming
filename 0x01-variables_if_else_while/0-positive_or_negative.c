#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (indicating success)
 */
int main() {
  int n;
  srand(time(NULL));
  n = rand() % RAND_MAX;

  if (n > 0) {
    printf("%d is positive\n", n);
  } else if (n == 0) {
    printf("%d is zero\n", n);
  } else {
    printf("%d is negative\n", n);
  }

  return 0;
}

