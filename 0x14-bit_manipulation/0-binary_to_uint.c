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
	int i, len, result = 0;

	for (len = 0; b[len] != '\0'; len++)
	{
		;
	}

	if (b[0] == '\0')
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}

		if (b[i] == '1')
		{
			result += (1 << (len - i - 1));
		}
	}
	return (result);
}
