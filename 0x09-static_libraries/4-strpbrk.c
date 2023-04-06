#include "main.h"
/**
 * _strpbrk - more implementations to learn ^^
 * @s: the string please ^^
 * @accept: let me guess <-<
 * Return: pointer to a char -_-
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
	for (i = 0; accept[i] != '\0'; i++)
		{
		if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return (NULL);
}
