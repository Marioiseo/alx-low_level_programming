#include "main.h"
/**
 * _strlen_recursion - i am still loving the recursion
 * @s: the string to count
 * Return: the lenght of str
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
	return (i);
	}
	else
	{
		i += i + 1;
		_strlen_recursion(s + 1);
	}
}
