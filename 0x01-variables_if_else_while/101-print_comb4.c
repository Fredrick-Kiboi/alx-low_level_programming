#include <stdio.h>

/**
 * main - program that prints all different combinations of three digits
 *
 * numbers must be separated by , followed by a space
 * the three digits must be different
 * print only the smallest combination of three digits
 * you can only use the putchar function
 * you cna only use putchar six times maximum in your code
 * you are not allowed to use any variable of type char
 * all your code should be in the main function
 *
 * Return: always (0)
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i < '8'; i++)
	{
		for (j = i + 1; j < '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
