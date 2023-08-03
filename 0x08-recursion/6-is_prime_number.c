#include "main.h"

/**
 * is_divisible - Checks if n is divisible by a given divisor.
 * @n: The number to be checked for divisibility.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is divisible by divisor, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (0);
	}

	if (n % divisor == 0)
	{
		return (1);
	}

	return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (!is_divisible(n, 2));
}


