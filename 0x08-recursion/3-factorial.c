#include "main.h"
/**
 * factorial - n * n-1 called math
 * @n: the num to get fac for
 * Return: -1 for errors or int
*/
int factorial(int n)
{
	int i = 0;

	if (n <= -1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
	i = factorial(n * n - 1);
	}
	return (i);
}
