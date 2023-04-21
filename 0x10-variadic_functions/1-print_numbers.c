#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print them all
 * @separator: -_- Mr.obvoius
 * @n: the counter
 * Return: void void voidyyy
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(ptr, int), separator);
	va_end(ptr);
	printf("\n");
}
