#include "main.h"
/**
 * print_triangle - more shapes is easy ^_^
 * @size: i * j = size <.>
 * Return: VOID >><<
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
		for (i = 1; i <= size; i++)
		{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
		_putchar('#');
		}
		_putchar('\n');
		}
}
