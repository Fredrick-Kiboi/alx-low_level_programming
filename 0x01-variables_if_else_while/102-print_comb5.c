#include <stdio.h>

/**
 * main - program that prints all possible combo of two-two-digit numbers
 *
 * Description: The numbers should range from 0 to 99
 * the two numbers should be separated by a space
 * all numbers should be printed with two digits. 1 should be 01
 * the combinations of numbers must be separated by comma, followed by a space
 * the combinations of numbers should be printed in ascending order
 * you can only use the putchar function
 * you can only use putchar eight times maximum in your code
 * you are not allowed to use any variable of type char
 * all your code should be in the main function
 *
 * Return: always (0)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a < b)
			{
				if (a >= 0 && b > 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
