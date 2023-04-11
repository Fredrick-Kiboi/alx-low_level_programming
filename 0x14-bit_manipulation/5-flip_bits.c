#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;
	unsigned int count, i;

	count = 0;
	b = 1;
	a = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (b == (a & b))
			count++;
		b <<= 1;
	}
	return (count);
}
