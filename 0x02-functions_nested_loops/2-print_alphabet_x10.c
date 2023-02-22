#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet in lowercase
 *
 * it should be followed by a new line
 * Prototype: void print_alphabet_x10(void);
 * you can only use _putchar twice in your code
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
