#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * Prototype: int print_last_digit(int);
 * @n: the number in which we'll find the last digit
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = -1 * (n % 10);
	}
	else
	{
		last = n % 10;
	}

	_putchar(last + '0');
	return (0);
}
