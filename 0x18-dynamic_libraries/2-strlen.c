#include "main.h"
/**
 * _strlen - length of a string
 * @s: a pointer given by the main function
 * Return:lenght
 */

int _strlen(char *s)

{

	int length = 0;

	while (s[length] != '\0')

	{

		length++;

	}
	return (length);
}
