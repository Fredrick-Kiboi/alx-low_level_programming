#include <stdio.h>
#include <unistd.h>

/**
 * main - program that prints a statement to standard error
 *
 * Return: always (1) if successful, otherwise appropriate errno
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str, sizeof(str)-1);
	return (1);
}
