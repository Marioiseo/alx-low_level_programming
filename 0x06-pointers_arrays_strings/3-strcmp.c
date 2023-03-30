#include "main.h"
/**
 * _strcmp - just like strcmp
 * @s1: the trunk
 * @s2: src of it
 * Return: int so its 0
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	int a1, a2;

	for (i = 0; ; i++)
	{
	if (s1[i] == '\0' && s2[i] == '\0')
	return (0);
	a1 = (int) s1[i];
	a2 = (int) s2[i];
	else if (a1 > a2)
	return (15);
	else if (a2 > a1)
	return (-15);
	}
}	
