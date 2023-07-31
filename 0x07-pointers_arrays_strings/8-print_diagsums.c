#include "main.h"
#include <stdio.h>

/**
 * power - Calculate the power of a number.
 *
 * @base: The base number.
 * @exp: The exponent to raise the base to.
 *
 * Description: This function calculates the power of a number by raising the
 * base to the exponent.
 *
 * Return: The result of the base raised to the exponent.
 */
int power(int base, int exp)
{
	int result = 1;

	while (exp)
	{
		result *= base;
		exp--;
	}

	return (result);
}

/**
 * print_diagsums - Print the sum of the diagonals of a square matrix.
 *
 * @a: A pointer to the first element of the square matrix.
 * @size: The size of the square matrix (number of rows or columns).
 *
 * Description: This function calculates the sum of the two diagonals of a
 * square matrix 'a' with 'size' number of rows or columns and prints the sums.
 *
 * Return: None (void).
 */
void print_diagsums(int *a, int size)
{
	int diag_1 = 0;
	int diag_2 = 0;
	int j = 0;
	int pow = power(size, 2);

	while (j < pow)
	{
		diag_1 += a[j];
		j += size + 1;
	}

	j = (pow - 1) - (size - 1);

	while (j > 0)
	{
		diag_2 += a[j];
		j -= size - 1;
	}

	printf("%d, %d\n", diag_1, diag_2);
}
