#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase and in reverse
 * it should be followed by a new line
 * you can only use the putchar function
 * all your code should be in the main function
 * you can only use putchar twice
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
