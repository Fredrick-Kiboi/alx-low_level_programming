#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * Description:
 * Prototype: int _strcmp(char *s1, char *s2);
 * @s1: first parameter string
 * @s2: second parameter string
 * your function should work exactly like strcmp
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
