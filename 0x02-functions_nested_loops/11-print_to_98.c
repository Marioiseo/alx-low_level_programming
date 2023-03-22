#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - easy to manage hard to code thats why we use psuedocode
 * @n: pass me a numm please ! ^_^
 * Return: i guess its voooid
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
			printf("%i, ", a);
	}
	else
	{
	for (a = n; a > 98; a--)
	{
		printf("%i, ", a);
	}
	}
	printf("98\n");
}
