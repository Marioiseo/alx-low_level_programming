#include "main.h"
/**
 * leet - lets see if we can handle this one
 * @s: enter your string please ^^
 * Return: chars are strings with *
*/
char *leet(char *s)
{
	char worc[] = "a, e, o, t, l";

	char uwor[] = "A, E, O, T, L";

	char numc[] = {52, 51, 48, 55, 49};

	int i = 0;

	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 4; j++)
	{
		if (s[i] == worc[j] && s[i] == uwor[j])
		s[i] = numc[j];
	}
		i++;
	}
	return (s);
}
