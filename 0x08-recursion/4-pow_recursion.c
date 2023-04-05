#include "main.h"
/**
 * _pow_recursion - x power y
 * @x: the orig num
 * @y: the power
 * Return: int or -1 for errors
*/
int _pow_recursion(int x, int y)
{
	if (y <= -1)
	{
		return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
