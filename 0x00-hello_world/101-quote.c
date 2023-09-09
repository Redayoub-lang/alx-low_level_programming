#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This program writes a specific message to the standard error.
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	char *ptr = message;
	int len = 0;

	while (*ptr)
	{
		len++;
		ptr++;
	}

	write(STDERR_FILENO, message, len);
	return (1);
}

