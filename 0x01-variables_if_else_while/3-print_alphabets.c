#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int s_n = 97;
	int c_n = 65;

	while (s_n < 123)
	{
		putchar(s_n);
		s_n++;
	}

	while (c_n < 91)
	{
		putchar(c_n);
		c_n++;
	}

	putchar('\n');
	return (0);
}
