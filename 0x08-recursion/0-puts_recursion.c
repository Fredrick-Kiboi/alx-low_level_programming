#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 *
 * Prototype: void _puts_recursion(char *s);
 * @s: the pointer to the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	/* Base Case */
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
