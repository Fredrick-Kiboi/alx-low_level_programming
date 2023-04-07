#include "main.h"

/**
 * isEven - check for even numbers
 * Description:
 * @num: the number
 * Return: 0 if even and 1 if not
 */

int isEven(int num)
{
	if ((num & 1) == 0)
		return (0);
	else
		return (1);
}

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: the number
 * @index: the index
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	long int b, i = 0;
	
	if (!(n))
	{
		return (-1);
	}
	else
	{
		while (i < index)
		{
			n >>= 1;
			i++;
		}
		b = isEven(n);
	}
	return (b);
}
