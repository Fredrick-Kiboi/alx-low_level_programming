#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: the character to print
 *
 * Return: if successful 1
 * On error -1, the errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
