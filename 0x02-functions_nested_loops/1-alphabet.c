#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 * it should be followed by a new line
 *
 * Prototype: void print_alphabet(void)
 * you can only use _putchar twice in your code
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
