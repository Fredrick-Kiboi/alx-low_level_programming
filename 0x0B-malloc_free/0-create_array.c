#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * it initilizes it with a specific char
 *
 * Prototype: char *create_array(unsigned int size, char c);
 * @size: size of array
 * @c: char to initialize
 * Returns NULL is size = 0
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);

	while (size--)
		arr[size] = c;

	return (arr);
}
