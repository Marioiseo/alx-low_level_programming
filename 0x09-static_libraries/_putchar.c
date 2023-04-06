#include <unistd.h>
/**
 * _putchar - used to output 1 char
 * @c: the char
 * Return: int either 1 or 0
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
