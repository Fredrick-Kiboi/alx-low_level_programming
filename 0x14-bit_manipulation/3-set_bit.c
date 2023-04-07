#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 * @n: the number
 * @index: the index position
 *
 * Return: 1 if it worked, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
