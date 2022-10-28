#include "main.h"

/**
 * flip_bits - Counts the nmber of bits needed to be
 * flipped to get from one nmber to another.
 * @n: The nmber.
 * @m: The nmber to flip n to.
 * Return: The necessary nmber of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, bits = 0;

	diff = n ^ m;

	while (diff > 0)
	{
		bits += (diff & 1);
		diff >>= 1;
	}

	return (bits);
}
