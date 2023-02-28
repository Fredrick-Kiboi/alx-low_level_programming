#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * Description:
 * Prototype: void swap_int(int *a, int *b);
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
