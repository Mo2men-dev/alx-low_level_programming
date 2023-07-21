#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9 Does not print 2 and 4
 * Return: returns nothing
*/

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar(i);
		i++;
	}
	putchar(10);
}
