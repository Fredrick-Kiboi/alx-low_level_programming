#include <stdio.h>

/**
 * main - program that prints all single digits followed by a new line
 *
 * all you code should be in the main function
 *
 * Return: always (1)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
