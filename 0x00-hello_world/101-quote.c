#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This program writes a specific message to the standard error.
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
	write(STDERR_FILENO,"and that piece of art is useful\"-Dora Korpar,2015-10-19\n",59);
	return (1);
}
