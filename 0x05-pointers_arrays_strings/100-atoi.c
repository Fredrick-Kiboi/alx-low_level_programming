#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 *
 * Description:
 * Prototype: int _atoi(char *s);
 * @s: the string to convert to an integer
 *
 * number in the string can be preceded by an infinite n.o of x-ters
 * you need to account all the - and the + signs b4 the number
 * if there are no numbers in the string return 0
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
