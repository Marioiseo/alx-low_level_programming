#include "main.h"
/**
 * _strlen_recursion - i am still loving the recursion
 * @s: the string to count
 * Return: the lenght of str
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	return  (1 + _strlen_recursion(s + 1));
	}
}
