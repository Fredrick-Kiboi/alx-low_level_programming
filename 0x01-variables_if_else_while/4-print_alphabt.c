#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 *
 * print all the letters except q and e
 * you can only use putchar
 * all you code should be in the main function
 * you can only use putchar twice
 *
 * Return: Always (1);
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
