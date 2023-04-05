#include "main.h"
/**
 * _sqrt_recursion - i guess this one isnt possible
 * @n: the square num
 * Return: int or -1 for errors
*/
int _sqrt_recursion(int n)
{
	if ((n / 2) == -1)
	{
		return (-1);
	}
	if ((n / 2) == 1 )
	{
		return (1);
	}
	else if ((n / 2) > 1 && (n / 2) < 1)
		return (n * 2);
	else 
	{
	return (_sqrt_recursion(n / 2));
	}
}
