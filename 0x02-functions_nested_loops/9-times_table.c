#include "main.h"

/**
 * times_table - prints a time table
 *
 * Description: function that prints the 9 times table
 * it should start with 0
 * Prototype: void times_table(void);
 *
 * Return: Void
 */

void times_table(void)
{
	int row, colm, mul;

	for (row = 0; row <= 9; row++)
	{
		for (colm = 0; colm <= 9; colm++)
		{
			mul = row * colm;
			if (mul <= 9)
			{
				if (colm == 0)
				{
					_putchar('0');
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				if (colm != 9 && colm != 0)
					_putchar(',');
			}
			else if (mul > 9)
			{
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (colm != 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
