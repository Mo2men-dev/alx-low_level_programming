#include <stdio.h>
#include "main.h"

/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 * Return: returns 0 (Success)
*/

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");

	return (0);
}
