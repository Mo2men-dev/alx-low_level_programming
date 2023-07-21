#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n:  number of times the character \ should be printed
 * Return: returns nothing
*/

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(32);
			j++;
		}
		_putchar(92);
		_putchar(10);
		i++;
	}

	_putchar(10);
}
