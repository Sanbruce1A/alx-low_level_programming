#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)

{
	int spike = 0, j;

	unsigned int number = 0, non_binary = 0;

	if (b == NULL)

		return (non_binary);

	while (b[spike] != '\0')

		spike++;

	spike -= 1;

	j = 0;

	while (b[j])

	{

		if ((b[j] != '0') && (b[j] != '1'))/*&& logical AND operator*/
			return (non_binary);

		if (b[j] == '1')
			number += (1 * (1 << spike));/*<< bitwise left shift operator*/
		j++;

		spike--;
	}
	return (number);
}
