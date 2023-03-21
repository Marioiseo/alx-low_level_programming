#include "main.h"
/**
 * _abs - absloute value
 * @c: checker
 * Return: 0 or 1 
*/
int _abs(int c)
{
	int a;

	if (c < 0)
	{
	a = (c * -1);
	return (a);
	}
	return (c);
}
