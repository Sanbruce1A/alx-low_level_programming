#include "main.h"

/**
 * _strncat - concatenate two strings and minus from source
 * @dest: First string
 * @src: Second string
 * @n: byte to see from output
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, p = 0;

	while (dest[a] != '\0')
		a++;
	while (src[p] != '\0' && n > 1)
	{
		dest[a] = src[p];
		a++;
		p++;
	}
	if (n > 0)
	{
		dest[a] = '\n';
	}
	return (dest);
}
