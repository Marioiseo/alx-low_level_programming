#include "main.h"
/**
 * main - first argument to take is the name of file as default
 * @argc: the counter of argv
 * @argv: a pointer to array or a array of strings ^^
 * Return: i guess its int 0
*/
int main(int argc, char *argv[])
{
	(void)argc;
	_putchar(**argv);
	return (0);
}
