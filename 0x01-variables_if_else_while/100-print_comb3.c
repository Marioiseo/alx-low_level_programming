#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - doulbe no. combination
 * Return: 0 success
*/
int main(void)
	{
	int a = 0;

	int b;

	for (b = 0; b <= 9; b++)
	{
	if (a == b)
	{
	continue;
	}
	if (b == 9)
	{
	a++;
	b = 0;
	}
	putchar(a);
	putchar(b);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
	}
