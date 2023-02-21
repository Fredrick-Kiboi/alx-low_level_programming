#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase followed by a new line
 *
 * you can only use putchar function
 * all you code should be in the main function
 * you can only use putchar twice in your code
 *
 * Return: Always (0) if successful
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
