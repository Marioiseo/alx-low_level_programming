#include "main.h"
/**
 * _strlen - doing it without standard stdio is rough
 * @s: lets hope its useful input
 * Return: int i guess the num of chars
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
	s++;
	i++;
	}
	return (i);
}
	
