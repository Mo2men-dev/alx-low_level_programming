#include <stdio.h>

/**
 * main - prints the number of args passed into main
 *@argc: number of arguments
 *@argv: array of passed arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
