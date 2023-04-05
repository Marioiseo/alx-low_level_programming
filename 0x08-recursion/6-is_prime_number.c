#include "main.h"
/**
 * is_prime_number - i guess this is easy ^^
 * @n: lovely n ^^
 * @x: my own param to get n modules
 * Return: either 1 or 0
*/
int is_pri(int n, int x);

int is_prime_number(int n)
{
	return (is_pri(n, 2));
}
/**
 * is_pri - its my own function with 2 params to get prime
 * @n: its the original num
 * @x: its the factorial num
 * Return: the process to find if n == x without moduling its prime
*/
int is_pri(int n, int x)
{
	if (n == 0 && n == 1)
	{
		return (0);
	}
	else if (n == x)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
	return (is_pri(n, x + 1));
}
