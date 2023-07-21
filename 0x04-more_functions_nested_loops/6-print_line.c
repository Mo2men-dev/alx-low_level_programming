#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: length of the line
 * Return: returns nothing
*/

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
	}

	_putchar(10);
}
