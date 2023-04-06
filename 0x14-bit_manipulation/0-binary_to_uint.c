#include "main.h"

/**
 * binary_to_uint - function that converts a binary number ot an unsigned int
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int a, current, pow, len, result = 0, i, n;

	for (len = 0; b[len] != '\0'; len++)
	{
		;
	}

	if (b == NULL)
	{
		return (0);
	}

	for (a = 0; b[a] != '\0'; a++)
	{
		pow = 1;
		current = len - a - 1;
		if (b[a] != '1' && b[a] != '0')
		{
			return (0);
		}
		for (i = 0; i < current; i++)
		{
			pow *= 2;
		}
		n = (((b[a]) - 48) * pow);
		result += n;
	}
	return (result);
}
