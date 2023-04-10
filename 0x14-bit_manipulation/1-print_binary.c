#include "main.h"

/**
 * isEven - checks if a number is even
 * Prototype: int isEven(int num);
 * @num: the number to check if it's even
 *
 * Return: 0 if even, 1 if odd
 */

int isEven(int num)
{
	if ((num & 1) == 0)
	{
		return (0); /* Even Number */
	}
	else
	{
		return (1); /* Odd Number */
	}
}

/**
 * print_binary - function that prints the binary representation of a number
 *
 * Prototype: void print_binary(unsigned long int n);
 * @n: print number to binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n == 1)
		{
			_putchar('1');
		}
		else
		{
			int b = isEven(n);

			print_binary(n >> 1);
			_putchar(b + '0');
		}
	}
}
