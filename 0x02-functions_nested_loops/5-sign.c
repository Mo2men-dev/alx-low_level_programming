#include "main.h"
/**
* print_sign - checks if a num is positive , negative or a 0
* @n: num to be checked
* Return:  1 if n is positive , -1 if n is negative or 0 if n is 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	if (n < 0)
	{
		_putchar("-");
		return (-1);
	}
	_putchar(48);
	return (0);
}
