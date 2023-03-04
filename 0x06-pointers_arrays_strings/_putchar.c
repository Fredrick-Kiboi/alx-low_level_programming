#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * Description:
 * @c - the character to print
 *
 * Return: 1 on success
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
