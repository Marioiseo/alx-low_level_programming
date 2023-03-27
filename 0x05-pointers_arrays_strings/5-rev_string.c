#include "main.h"
/**
 * rev_string - same one without putchar
 * @s: same same
 * Return: void again
*/
void rev_string(char *s)
{
	int c = 0;

	char a;

	int i = 0;

	int b;

	int middle = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (b = 0; b <= c; b++)
	{
		if (b == c)
		middle = b / 2;
	}
	for (c -= 1; c >= middle; c--)
	{
	a = s[i];
	s[i] = s[c];
	s[c] = a;
	i++;
	}
}
