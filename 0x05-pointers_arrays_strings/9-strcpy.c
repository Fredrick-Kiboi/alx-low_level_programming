#include "main.h"

/**
 * _strcpy - function that copies a string to dest
 *
 * Description:
 * Prototype: char *_strcpy(char *dest, char *src);
 * @dest: the buffer to copy the string to
 * @src: the source to copy the string from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
