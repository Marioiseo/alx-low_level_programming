#include "main.h"
/**
 * print_chessboard - first multi dimensional array task
 * @a: i guess its fixed chars but who knows
 * Return: VOID LOVELY VOID
*/
void print_chessboard(char (*a)[8])
{
	int i, j;
	char chbo[8][8] = {{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
	{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
	{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
};
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
	_putchar(chbo[i][j]);
		}
	}
}
