#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: the number
 * @index: the index
 * Return: value of a bit
 */

int isEven(int num)
{
	if ((num & 1) == 0)
		return (0);
	else
		return (1);
}

int get_bit(unsigned long int n, unsigned int index)
{
	long int b, i = 0;
  
        while (i < index)
        {
                n >>= 1;
                b = isEven(n);
                i++;
        }
	return(b);
}
