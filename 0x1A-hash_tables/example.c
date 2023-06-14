#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}


int main(void)
{
    char value[100];
    printf("Enter the string you want hashed: ");
    scanf("%s", value);

    unsigned long int key = hash_djb2(value);
    printf("%u", key);
    return (0);
}
