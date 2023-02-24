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
	int num1;
	int num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			if (num1 < num2)
			{
				if (num1 >= 0 && num2 > 1)
				{
					putchar(',');
					putchar(' ');
				}

				putchar((num1 / 10) + 0x30);
				putchar((num1 % 10) + 0x30);
				putchar(' ');
				putchar((num2 / 10) + 0x30);
				putchar((num2 % 10) + 0x30);
			}
		}
	}
	putchar('\n');
	return (0);
}
