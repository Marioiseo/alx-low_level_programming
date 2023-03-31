#include "main.h"
/**
 * reverse_array - name is pointing what it is ^_^
 * @a: pointer or array or both
 * @n: num of int upon it
 * Return: void it is
*/
void reverse_array(int *a, int n)
{
	int c;

	int i;

	int k = 0;

	for (i = n - 1; i >= 0; i--)
	{
	c = a[k];
	a[k] = a[i];
	a[i] = c;
	k++;
	}
}
