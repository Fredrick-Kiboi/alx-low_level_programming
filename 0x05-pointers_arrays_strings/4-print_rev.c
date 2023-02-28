#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by new line
 *
 * Description:
 * Prototype: void print_rev(char *s);
 * @s: the string to print in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len += 1;
	}
	i = len - 1;
	do {
		_putchar(s[i]);
	} while (i--);

	_putchar('\n');
}
