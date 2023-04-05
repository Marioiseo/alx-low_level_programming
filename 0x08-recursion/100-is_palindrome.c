#include "main.h"
/**
 * is_palindrome - this what means to be advanced lol
 * @s: string to check
 * @len: the length
 * Return: int either 1 or 0
*/
int _strlen_recursion(char *s);
int is_pall(char *s, int len);

int is_palindrome(char *s)
{
	return (is_pall(s, 0));
}
/**
 * is_pall - my own function to invist
 * @len: the lenght of the string
 * Return: the 1 or 0 value
*/
int is_pall(char *s, int len)
{
	int i = 0;

	i = _strlen_recursion(s);
	if (i == len)
	{
	return (1);
	}
	else if (s[len] == s[i])
	{
		i--;
	return (is_pall(s, len + 1));
	}
	else
			return (0);
}
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
