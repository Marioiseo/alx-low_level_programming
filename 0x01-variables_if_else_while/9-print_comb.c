#include <stdio.h>
/**
 * main - combinationing
 * Return: 0 Successful
*/
int main(void)
	{
	int b;

	for (b = 0; b <= 9; b++)
	{
	putchar(b + '0');
	if (b = 9)
	break;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
	}
