#include "main.h"
/**
 * print_square - thats more easily than the previous one lol
 * @size: the i * j = size
 * Return: VOOID forever ^_^
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i == size)
		break;
}
}
