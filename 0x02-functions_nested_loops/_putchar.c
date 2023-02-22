#include <unistd.h>

/**
 * _putchar - a program that writes a character c to standard output
 * @c: character to print to standard output
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
