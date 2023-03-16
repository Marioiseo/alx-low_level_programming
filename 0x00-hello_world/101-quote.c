#include <stdio.h>
#include <unistd.h>
/**
 * main - calling the function prcout
 * Return: 0 " success "
*/
int main(void)
	{
	char stri[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, stri, 59);
	return (1);
	}
