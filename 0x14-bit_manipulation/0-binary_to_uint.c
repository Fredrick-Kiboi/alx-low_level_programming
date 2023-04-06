#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - function that converts a binary number ot an unsigned int
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;
	int len = 0;

	while (b[i] != '\0')
	{
		i++;
		len += 1;
		return (len);
	}

	if (b[0] == '\0')
		return(0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '1' || b[i] != '0')
			return(0);
	}
	
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			num += (1<<(len -1));
		len--;
		i++;
	}
	return (num);
}

int main(void)
{
	unsigned int n;

	n = binary_to_uint("101");
	printf("%u\n", n);
	return(0);
}
