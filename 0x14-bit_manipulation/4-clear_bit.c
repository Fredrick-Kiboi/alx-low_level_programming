#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int place;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	place = ~(1 << index);
	*n = *n & place;
	return (1);
}
