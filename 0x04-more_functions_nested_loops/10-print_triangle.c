#include "main.h"
/**
 * print_triangle - more shapes is easy ^_^
 * @size: i * j = size <.>
 * Return: VOID >><<
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	_putchar('\n');
	while (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
		}
		if (i == size)
		break;
	}
}
