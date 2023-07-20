#include "main.h"
/**
* print_last_digit - returns the last digit of a num
* @n: num to be checked
* Return: a number
*/
int print_last_digit(int n)
{
	int last_n = n % 10;

	_putchar(last_n);

	return (last_n);
}
