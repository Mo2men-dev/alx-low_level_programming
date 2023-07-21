#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of the square
 * Return: returns nothing
*/

void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar(10);
		i++;
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
