#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This program writes the specified message to the standard error.
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, 59);  /* Write the message to the standard error */

    return (1);  /* Return 1 to indicate an error */
}

