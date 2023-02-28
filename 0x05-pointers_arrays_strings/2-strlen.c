#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * Description:
 * Prototype: int _strlen(char *s);
 * @s: the pointer of the string in which to find the length
 *
 * Return: an integer - the length of a string
 */

int _strlen(char *s)
{
	int i, sum = 0;

	for (i = 0; *s != '\0'; i++)
	{
		sum += 1;
	}

	return (sum);
}
