#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function prints the characters of a string recursively
 *              in reverse order.
 * Return: Nothing (0)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

