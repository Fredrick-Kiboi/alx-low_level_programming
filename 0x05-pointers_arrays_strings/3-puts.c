#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 * Description:
 * Prototype: void _puts(char *str);
 * it similar to the funtion puts
 * @str: the pointer to the string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
