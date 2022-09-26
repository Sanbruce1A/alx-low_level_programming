#include "main.h"

/**
 * _memset - a function that fills memory with a contant byte
 * @s: a char pointer given by main
 * @b: a constant byte
 * @n: how many byte of memory
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int spike = 0; /*spike is my variable was assigned 0*/

	while (n > 0) /*as long as n is less than zero*/
	{
		s[spike] = b; /*spike is assigned to our char*/
		spike++; /*post-increment, value first increment afterwards*/
		n--; /*post-decrement*/
	}
	return (s); /*returning pointer to the memory of s*/
}

