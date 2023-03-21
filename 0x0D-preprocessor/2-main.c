#include <stdio.h>
/**
 * main - program that prints the name of the file it was compiled from
 * it should be followed by a new line
 *
 * Return: 0 if successful, otherwise 1
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
