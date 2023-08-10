#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * isInteger - Check if a string is a valid integer.
 * @str: The input string to check.
 *
 * Return: true if the string is a valid integer, false otherwise.
 */
bool isInteger(const char *str)
{
	if (*str == '\0')
	{
		return (false);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (false);
		}
		str++;
	}
	return (true);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings containing the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		if (!isInteger(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

