#include "main.h"
/**
 * is_pallindrome - this what means to be advanced lol
 * @s: string to check
 * Return: int either 1 or 0
*/
int is_pallindrome(char *s)
{
	char *a;

	char *b;

	if (*s != '\0')
	{
	*a = *s;
	return (is_pallindrome(s + 1));
	*b = *s;
	}
	else if (*a == *b)
	{
	return (1);
	}
	else
	return (0);
}
