#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * Description
 * it should be followed by a new line
 * Prototype: void puts_half(char *str);
 * @str: the string to print half of it
 * it should print the second half of the string
 * if n is odd, the function should print n characters of the string
 * where n = (length_of_the_string - 1) / 2
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
