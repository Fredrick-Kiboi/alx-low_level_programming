#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * Description:
 * Prototype: void rev_string(char *s)
 * @s: the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
