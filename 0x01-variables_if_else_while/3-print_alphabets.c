#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase and then in uppercase
 *
 * it should be followed by a new line
 * you can only use putchar
 * all you code should be in the main function
 * you can only use putchar three times
 *
 * Return: always(0);
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
