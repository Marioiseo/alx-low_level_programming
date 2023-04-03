#include "main.h"
/**
 * print_chessboard - first multi dimensional array task
 * @a: i guess its fixed chars but who knows
 * Return: VOID LOVELY VOID
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
	_putchar(a[i][j]);
	}
	_putchar('\n');
	}
}
