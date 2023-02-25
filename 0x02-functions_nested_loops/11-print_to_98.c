#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * Description: it must be followed by a new line
 * Prototype: void print_to_98(int n);
 * @n: number to start to 98
 * numbers must be separated by a comma, followed by a space
 * numbers should be printed in order
 * the first printed number should be the number passed by your function
 * the last printed number should be 98
 * you are allowed to use the standard library
 *
 * Return: int(numbers from n to 98)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
	else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
				printf("%d", n);

			n--;
		}
		printf("\n");
	}
}
