#include "main.h"
/**
 * swap_int - swapping 2 values ^_^
 * @a: pointer to the value num 1
 * @b: pointer to the value num 2
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
