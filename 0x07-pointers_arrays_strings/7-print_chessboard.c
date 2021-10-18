#include "main.h"
/**
 * print_chessboard -  prints the chessboard
 *
 * Description:  prints the chessboard
 *
 * @a: string
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y;

	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar (a[x][y]);
			y++;
		}
		_putchar (10);
		x++;
	}
}
