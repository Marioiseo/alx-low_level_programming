#include "main.h"
/**
 * print_line - this is the function for just lines
 * @n: nums of ____>><<
 * Return: VOOID
*/
void print_line(int n)
{
	int i;

	while (n > 0)
	{
		for (i = 0; i < n; i++)
	{
		_putchar('_');
		if (i == n)
			break;
	}
	}
	if (n <= 0)
	_putchar('\n');
	else
		_putchar('\n');
}
