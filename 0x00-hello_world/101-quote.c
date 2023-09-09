#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    ssize_t len;
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    len = sizeof(message) - 1;  // Calculate the length of the message

    if (write(STDERR_FILENO, message, len) != len)
    {
        perror("Write error");
        exit(1);
    }

    return (1);
}

