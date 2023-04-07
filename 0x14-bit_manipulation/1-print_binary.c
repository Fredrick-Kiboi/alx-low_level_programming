#include "main.h"

/**
 * isEven - checks if a number is even
 * 
 * Prototype: int isEven(int num);
 * @num: the number to check if it's even
 *
 * Return: 0 if even, 1 if odd
 */

int isEven(int num)
{
	if ((num & 1) == 0)
	{
		return (0); /* Even Number */
	}
	else
	{
		return (1); /* Odd Number */
	}
}

/**
 * printer - a function that prints
 *
 * @num: the number to print
 * Return: an integer
 */

int printer(long int num)
{
    char buf[20];
    int len = snprintf(buf, 20, "%ld", num);
    write(1, buf, len);
    return (0);
}

/**
 * print_binary - function that prints the binary representation of a number
 *
 * Prototype: void print_binary(unsigned long int n);
 * @n: print number to binary
 *
 * Return: nothing
 */

int for_print_binary(unsigned long int n)
{
	long int i = 0, j = 0, final = 0, other_digits, exp, rightmost, digit;
	exp = 1;

	rightmost = isEven(n);
	:
