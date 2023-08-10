#include <stdio.h>
/**
 * main - prints all args passed to main
 * @argc: number of args
 * @argv: args passed to main
 * Return: Always 0 (Succsses)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
