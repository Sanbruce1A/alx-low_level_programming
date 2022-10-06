#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @a: number of memory to be allocated
 * Return: Void
 */

void *malloc_checked(unsigned int a)
{
void *spike;
spike = malloc(a);
if (spike == NULL)
{
	exit(98);
}
return (spike);
}
