#include "main.h"
/**
 * more_numbers - more and more nested ^_^
 * Return: void without questioning
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
			if (j = i)
				continue;
			else
			_putchar(j + '0');
		}
	_putchar('\n');
	}
}
