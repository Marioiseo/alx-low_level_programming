#include "main.h"
/**
 * _isupper - for this we gonna recognize the upper cases with ASCII
 * @c: the value to check ^_^
 * Return: either 0 or 1
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
