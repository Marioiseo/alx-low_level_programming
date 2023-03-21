#include "main.h"
/**
 * print_alphabet_x10 - make it nested
 * Return: void
*/
void print_alphabet_x10(void)
{
	char c;

	for (int i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
