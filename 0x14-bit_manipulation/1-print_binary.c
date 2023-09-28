#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int i = bits - 1;
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (i >= 0)
	{
		if ((n >> i) & 1 || flag)
		{
			putchar(((n >> i) & 1) ? '1' : '0');
			flag = 1;
		}
		i--;
	}
}
