#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 * starting from 00:00 to 23:59
 *
 * Prototype: void jack_bauer(void);
 *
 * Return: every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
