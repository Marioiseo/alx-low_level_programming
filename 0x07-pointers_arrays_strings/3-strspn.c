#include "main.h"
/**
 * _strspn - count the matchers
 * @s: the string
 * @accept: the chars to look for
 * Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int count = 0;

	int a = 0, b = 0;

	while (s[a] != '\0')
	a++;
	while (accept[b] != '\0')
	b++;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
		if (accept[j] == s[i])
		{
			count++;
			break;
		}
		}
		return (count);
	}
	return (0);
}
