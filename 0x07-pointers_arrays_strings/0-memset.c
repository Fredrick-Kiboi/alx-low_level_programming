#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * Prototype: char *_memset(char *s, char b, unsigned int n);
 * @*s: pointer to the memory area
 * @b: the constant byte
 * @n: the bytes of memory to be copied
 *
 * Description:
 * the _memset() function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (i < n)
		{
			s[i] = b;
			i++;
		}
	}
	return (s);
}
