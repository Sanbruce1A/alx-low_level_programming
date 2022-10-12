#include <stdio.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;
	if (array && action)
		for (n = 0; n < size; n++)
			action(array[n]);
}
