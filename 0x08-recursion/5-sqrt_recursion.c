#include "main.h"

/**
 * sqrt2 - makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriately
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * Prototype: int _sqrt_recursion(int n);
 * @n: the number
 *
 * Return: On success 1
 * on error, -1 is returned, and errno is set appropriately
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
