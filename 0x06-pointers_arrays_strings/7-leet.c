#include "main.h"
/**
 * leet - lets see if we can handle this one
 * @s: enter your string please ^^
 * Return: chars are strings with *
*/
char *leet(char *s)
{
	char worc[] = {a ,e ,o ,t ,l};

	int numc[] = {4 ,3 ,0 ,7 ,1};

	int i;

	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
		if (s[i] == worc[j] && s[i] == worc[j] - 32)
			s[i] = numc[j];
		j++
		}
	}
	return (s);
}
