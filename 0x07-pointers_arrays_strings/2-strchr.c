#include "main.h"
/**
 * _strchr - my own func of strchr or as i call it implementation ^^
 * @s: where to look 0.0
 * @c: what to look for >.<
 * Return: whatever after c char or NULL if its not here
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
		return (s);
	s++;
	}
}
