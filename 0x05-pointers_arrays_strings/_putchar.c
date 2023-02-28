#include <unistd.h>

/**
 * _putchar - write a character c to standard output
 *
 * Description:
 * @c - character to be written to standard output
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
