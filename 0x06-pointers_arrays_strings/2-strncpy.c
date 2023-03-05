#include "main.h"

/**
 * *_strncpy - function that copies a string
 *
 * Description:
 * Prototype: char *_strncpy(char *dest, char *src, int n);
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: number of bytes to be copies
 *
 * should work exactly like strncpy
 * Return: pointer to new dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
