#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print number uppercase
 * @name: name print
 * @f: first pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
