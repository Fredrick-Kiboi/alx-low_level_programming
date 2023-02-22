#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: the integer to compute
 *
 * Prototype: int _abs(int);
 * Return: the absolute value of int
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
