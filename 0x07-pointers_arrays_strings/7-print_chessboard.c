#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 *
 * @a: A 2D array representing the chessboard.
 *
 * Description: This function prints the contents of a chessboard, which is
 * represented by a 2D array 'a' of size 8x8. Each cell of the array contains
 * a character representing the piece on the corresponding chessboard position.
 *
 * Return: None (void).
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}


