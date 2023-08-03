#include "main.h"

/**
 * find_sqrt - Helper function to find the square root using binary search.
 * @n: The number for which to find the square root.
 * @start: The starting index for binary search.
 * @end: The ending index for binary search.
 *
 * Return: The square root of n if found, -1 if not found.
 */
int find_sqrt(int n, int start, int end)
{
	int mid;
	long square;

	if (start > end)
		return (-1);

	mid = start + (end - start) / 2;
	square = (long) mid * mid;

	if (square == n)
		return (mid);
	if (square < n)
		return (find_sqrt(n, mid + 1, end));
	return (find_sqrt(n, start, mid - 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The square root of n if found, -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0, n));
}


