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
	putchar(a + '0');
	putchar(b + '0');
	putchar(',');
	putchar(' ');
	if (b == 9)
	{
	a++;
	b = (a);
	}
	}
	putchar('\n');
	return (0);
	}
