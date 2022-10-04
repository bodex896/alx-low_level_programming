#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **bodex;
	int i, a;

	if (width <= 0 || height <= 0)
		return (NULL);
	bodex = malloc(height * sizeof(int *));
	/* if bodex is equal to Null return Null*/
	if (bodex == NULL)
		return (NULL);
	/*for every i thats 0 and less than height increase i*/
	for (i = 0; i < height; i++)
	{
		/*size of bodex[i] using malloc*/
		bodex[i] = malloc(width * sizeof(int));
		/*check if bodex[i] is equal to Null*/
		if (bodex[i] == NULL)
		{
			while (i >= 0)
				/*free bodex[i]*/
				free(bodex[i--]);
			/* Free bodex*/
			free(bodex);
			return (NULL);
		}
			/*for every a that is less than width increase a*/
			for (a = 0; a < width; a++)
				bodex[i][a] = 0;
	}
	return (bodex);
}
