#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * numbers must be separated by , followed by a space
 * numbers should be printed in ascending order
 * you can only use the putchar function
 * all your code should be in the main function
 * you can only use putchar four times max
 * you are not allowed to use any variable of type char
 *
 * Return: always (1);
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
