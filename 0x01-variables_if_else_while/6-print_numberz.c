#include <stdio.h>

/**
 * main - program that prints all single digit numbers followed by a new line
 * you are not allowed to use any variable of type char
 * you can only use putchar
 * you can only use putchar twice in your code
 * All your code should be in the main function
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
