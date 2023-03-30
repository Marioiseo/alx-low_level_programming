#include "main.h"
/**
 * reverse_array - name is pointing what it is ^_^
 * @a: pointer or array or both
 * @n: num of int upon it
 * Return: void it is
*/
void reverse_array(int *a, int n)
{
	int *b;

	int c = 0;

	int i;

	int j = 0;

	while (a[j] != 0)
	{
		j++;
	}
	for (i = j; i >= 0; i--)
	{
	b[c] = a[i];
	c++;
	}
}
