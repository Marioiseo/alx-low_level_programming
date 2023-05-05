#include "main.h"
/**
 * get_endianness - i dont even knwo what this is !
 * Return: 1 nor 0
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
