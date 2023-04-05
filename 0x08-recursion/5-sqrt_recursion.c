#include "main.h"
/**
 * _sqrt_recursion - i guess this one isnt possible
 * @n: the square num
 * Return: int or -1 for errors
*/
int _sqrt_recursion(int n)
{
	int k = 1;

	if (k * k == n)
	{
		return (1);
	}
	else 
	{
	return (_sqrt_recursion(n - 1));
	}
}
