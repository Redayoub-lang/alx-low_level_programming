#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number and
 *              prints whether it is positive, negative, or zero.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    int n;

    // Initialize the random number generator with the current time
    srand(time(0));

    // Generate a random number
    n = rand() - RAND_MAX / 2;

    // Check if the number is positive, negative, or zero
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);

    return (0);
}

