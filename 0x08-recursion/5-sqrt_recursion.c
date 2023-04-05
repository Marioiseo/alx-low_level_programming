#include "main.h"
/**
 * _sqrt_recursion - i guess this one isnt possible
 * @n: the square num
 * @x: x is my param to get into n
 * Return: int or -1 for errors
*/
int sqrt_rec(int n, int x);

int _sqrt_recursion(int n)
{
	return (sqrt_rec(n, 1));
}
/**
 * sqrt_rec - cant really calculate it without 2 params
 * @n: the num is n for sure
 * @x: x*x should get us into n eventually
 * Return: int or -1;
*/
int sqrt_rec(int n, int x)
	{
	if (x * x == n)
	{
	return (x);
	}
	else if (x * x < n)
	{
	return (sqrt_rec(n, x + 1));
	}
	else
	return (-1);
	}
