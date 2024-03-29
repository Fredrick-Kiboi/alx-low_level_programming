#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character
 *
 * Return: 1 if successful
 * On error, -1 and the errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
