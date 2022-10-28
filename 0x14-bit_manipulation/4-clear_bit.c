#include "main.h"

/**
 * clear_bit - clear bit to 0 at a given index
 * @n: nmber
 * @index: index within binary nmber
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nm = 1;

	if (index > (sizeof(unsigned long int) * 8))

		return (-1);

	nm = ~(nm << index);/*bitwise Not operator is an unary operator*/
	/*which is why we use the () to nest our left shift operator*/

	*n = *n & nm;/*bitwise AND operator*/



	return (1);

}
