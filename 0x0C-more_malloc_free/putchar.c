#include <unistd.h>
/**
 * _putchar - write the char 
 * Return: On Success 1.
*/
int _putchar(char c)
	{
	return (write(1, &c , 1));
	}
