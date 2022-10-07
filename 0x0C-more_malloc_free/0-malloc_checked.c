#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: number of memory to be allocated
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *bodex;/*void pointer*/

	bodex = malloc(b);/*allocates memory of b*/

	if (bodex == NULL)/* if bodex is null terminates with exit*/
	{
		exit(98);/* exit function terminates the call immediately*/
	}
	return (bodex);/* return pointer if malloc is sucessful*/
}
