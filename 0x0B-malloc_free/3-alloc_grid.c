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

	int **spike;
	int i, a;

	if (width <= 0 || height <= 0)
		return (NULL);

	spike = malloc(height * sizeof(int *));

	/* if night is equal to Null return Null*/

	if (spike == NULL)
		return (NULL);
	/*for every i thats 0 and less than height increase i*/

	for (i = 0; i < height; i++)
	{
		/*size of spike[i] using malloc*/

		spike[i] = malloc(width * sizeof(int));
		/*check if night[i] is equal to Null*/

		if (night[i] == NULL)
		{
			while (i >= 0)
				/*free spike[i]*/
				free(spike[i--]);
			/* Free spike*/

			free(spike);
			return (NULL);
}
			/*for every a that is less than width increase a*/
			for (a = 0; a < width; a++)
				spike[i][a] = 0;
	}
	return (spike);
}
