#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * numbers must be separated by , followed by a space
 * the two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * print only the smallest combination of the two digits
 * numbers should be printed in ascending order
 * you can only use putchar function
 * you can only use putchar five times maximum in your code
 * you are not allowed to use any variable of type char
 * all you code should be in the main function
 *
 * Return: always (1)
 */

int main(void)
{
	int i, j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
