#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * Prototype: int factorial(int n);
 * @n: the number
 * if n is lower than 0, return -1 to indicate an error
 * factorial of 0 is 1
 *
 * Return: factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
