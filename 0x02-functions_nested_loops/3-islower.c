#include "main.h"

/**
 * _islower - function that checks for lowercase characters
 * @c: character to check if its lowercase
 *
 * Prototype: int_islower(int c);
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
