#include "main.h"
/**
 * factorial - n * n-1 called math
 * @n: the num to get fac for
 * Return: -1 for errors or int
*/
int factorial(int n)
{
	if (n <= -1)
		return (-1);
	if (n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}

}
