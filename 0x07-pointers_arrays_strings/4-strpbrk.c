#include "main.h"
/**
 * _strpbrk - more implementations to learn ^^
 * @s: the string please ^^
 * @accept: let me guess <-<
 * Return: pointer to a char -_-
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
		if (*s == *accept)
			return (s);
		accept++;
		}
		s++;
	}
	return (NULL);
}
