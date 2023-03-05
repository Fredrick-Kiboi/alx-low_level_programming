#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 *
 * Description:
 * Prototype: char *_strncat(char *dest, char *src, int n);
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: bytes to be copied from src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	/* end with a null terminating character */
	dest[len + i] = '\0';

	return (dest);
}
