#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * it should be followed by a new line
 * you can only use the putchar function
 * all your code should be in the main function
 * you can only use putchar three times in your code
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
