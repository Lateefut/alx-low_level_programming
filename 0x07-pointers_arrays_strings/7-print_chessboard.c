#inlcude "main.h"

/**
 * print_chessboard - function that prints a board.
 * @a: pointer array to chess characters
 * Return: a game
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_puchar(a[i][j]);
		}
		_putchar('\n');
	}
}
