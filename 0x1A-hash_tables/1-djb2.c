#include "hash_tables.h"
/**
 * hash_djb2 - a very important algorithm
 * @str: takes a string and hashes it out
 * Return: really big integer
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
2-key_index.c
#include "hash_tables.h"
/**
 * key_index - returns index of hashtable value
 * @key: key to test
 * @size: size of hash table
 * Return: modulo of hashed key to size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}
