#include "main.h"

/**
 * _memset - fills the first n bytes of memory pointed to by s with the byte b
 * @n: number of bytes to fill
 * @s: pointer to area of memory
 * @b: char to used to fill
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}

	return (s);
}

