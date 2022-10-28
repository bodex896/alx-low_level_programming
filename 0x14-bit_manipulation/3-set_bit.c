#include "main.h"

/**
 * set_bit - set bit to 1 at index
 * @n: nmber
 * @index: index within binary nmber
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nm = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	nm <<= index;/*shift the value in set left by 1 bit.*/
	/*nm <<= index is the same as nm = nm << index*/

	*n = *n | nm;/*bitwise OR operator*/
	return (1);
}
