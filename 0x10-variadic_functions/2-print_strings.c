#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print lot of strings
 * @separator: as usual -__
 * @n: count of strings
 * Return: VOIDYYY
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s = "";

	va_start(ptr, n);
	if (n)
	{
	for (i = 0; i < n; i++)
	{
		if (s != va_arg(ptr, char *))
		{
			if (i < n - 1)
			{
			if (separator)
				printf("%s%s", va_arg(ptr, char *), separator);
			}
			else
				printf("%s", va_arg(ptr, char *));
		}
		else
			printf("(nil)");
	}
	}
	printf("\n");
}
