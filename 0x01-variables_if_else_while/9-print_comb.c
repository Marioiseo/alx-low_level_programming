#include <stdio.h>
/**
 * main - combinationing
 * Return: 0 Successful
*/
int main(void)
	{
	int a = 1;

	int b;

	for (b = 0; b <= 9; b++)
	{
	putchar(b + '0');
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
	}
