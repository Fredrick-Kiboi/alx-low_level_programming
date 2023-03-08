#include "main.h"

/**
 * is_prime_number - function that returns 1 if prime, else 0
 *
 * Prototype: int is_prime_number(int n);
 * @n: the number to check
 *
 * Return: 1 if prime number, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else 
	{
		if (n / n == 1 && n / 1 == n)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

