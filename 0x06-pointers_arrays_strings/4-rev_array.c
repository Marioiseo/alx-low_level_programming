#include "main.h"
/**
 * reverse_array - name is pointing what it is ^_^
 * @a: pointer or array or both
 * @n: num of int upon it
 * Return: void it is
*/
void reverse_array(int *a, int n)
{
	int c[1024];

	int i;

	int b = 0;

	for (i = n; i > 0; i--)
	{
	if (b != n)
	{
	c[b] = a[i];
	b++;
	}
	}
}
