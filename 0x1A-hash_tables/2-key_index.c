#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 *
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: Index at which the key/value pair should be stored
 * in the array of the hash table
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_code = hash_djb2(key);
    unsigned long int key_index = hash_code % size;
    return key_index;
}
