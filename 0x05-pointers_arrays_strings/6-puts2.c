#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the 1st character, followed by a new line
 *
 * Description:
 * Prototype: void puts2(char *str);
 * @str - the string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
