#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * Prototype: void reverse_array(int *a, int n);
 * @a: the pointer to the array
 * @n: the number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int array_len, i = 0;

        for (array_len = 0; a[array_len] != '\0'; i++)
		;
	do {
		a[i] = a[array_len];
		i++;
		array_len--;
	} while(i < n);
	a[i] = '\0';
}
