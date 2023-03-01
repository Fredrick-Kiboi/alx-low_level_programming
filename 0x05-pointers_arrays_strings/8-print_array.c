#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 *
 * Description:
 * Prototype: void print_array(int *a, int n);
 * @a: the array
 * @n: the number of elements to be printed
 * it should be followed by a new line
 * n is the number of elements of the array to be printed
 * numbers must be separated by comma, followed by a space
 * numbers should be displayed in the same order as they are stored
 * you are allowed to use printf
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
