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

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
	a = s[c];
	s[0] = a;
	s++;
	}
}
