#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer to first element of the array
 * @n: size of the array
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n--;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
