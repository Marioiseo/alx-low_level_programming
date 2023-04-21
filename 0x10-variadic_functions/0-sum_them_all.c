#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - first use for variadics
 * @n: const num that holds the count
 * Return: the sum of them all
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int sum = 0;

	if (n <= 0)
		return (0);
	va_start(ptr, n);
	for (i = 0, i < n, i++)
	sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
